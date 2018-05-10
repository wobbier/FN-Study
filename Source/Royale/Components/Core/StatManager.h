// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include <map>

#include "StatManager.generated.h"

struct StatValue
{
	int Min = 0;
	int Max = 100;
	int Current = 0;
};

enum class StatType : int
{
	Null,
	Health,
	Shield
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ROYALE_API UStatManager : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStatManager();

	void SetStat(StatType type, int amount);
	int GetStat(StatType type);
	void AddStat(StatType type, int amount);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	std::map<StatType, StatValue> m_stats;
	
};
