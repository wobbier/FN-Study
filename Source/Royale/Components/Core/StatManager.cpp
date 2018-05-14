// Fill out your copyright notice in the Description page of Project Settings.

#include "StatManager.h"
#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
UStatManager::UStatManager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UStatManager::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void UStatManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (ObjectStats.Find(StatType::Health))
	{
		//ObjectStats[StatType::Health].Current = FMath::RoundToInt(100.f * (FMath::Sin(UGameplayStatics::GetRealTimeSeconds(GetWorld()) / 25.f)));
	}
	if (ObjectStats.Find(StatType::Shield))
	{
		//ObjectStats[StatType::Shield].Current = FMath::RoundToInt(100.f * (FMath::Sin(UGameplayStatics::GetRealTimeSeconds(GetWorld()) / 25.f)));
	}
}

void UStatManager::SetStat(StatType type, int amount)
{
	if (ObjectStats.Find(type))
	{
		FStatValue& statValue = ObjectStats[type];
		statValue.Current = FMath::Clamp(amount, statValue.Min, statValue.Max);
	}
}

int UStatManager::GetStat(StatType type)
{
	if (ObjectStats.Find(type))
	{
		return ObjectStats[type].Current;
	}
	return 0;
}

void UStatManager::AddStat(StatType type, int amount)
{
	if (ObjectStats.Find(type))
	{
		FStatValue& statValue = ObjectStats[type];
		statValue.Current = FMath::Clamp(statValue.Current + amount, statValue.Min, statValue.Max);
	}
}

