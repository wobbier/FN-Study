// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainHUD.generated.h"

/**
 * 
 */
UCLASS()
class ROYALE_API UMainHUD : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Events")
	void UpdateThing();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Variables Probably")
		int GetNumber(StatType statType);


	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Variables Probably")
		int GetResourceAmount(ResourceType resourceType);

	void Construct();
};
