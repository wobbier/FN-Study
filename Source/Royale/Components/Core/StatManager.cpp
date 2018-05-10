// Fill out your copyright notice in the Description page of Project Settings.

#include "StatManager.h"

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
}

void UStatManager::SetStat(StatType type, int amount)
{
	m_stats[type].Current = amount;
}

int UStatManager::GetStat(StatType type)
{
	return m_stats[type].Current;
}

void UStatManager::AddStat(StatType type, int amount)
{
	m_stats[type].Current += amount;
}

