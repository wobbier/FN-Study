// Fill out your copyright notice in the Description page of Project Settings.

#include "MainHUD.h"

#include "Components/Core/StatManager.h"
#include "Components/ResourceBag.h"
//
//
//void UMainHUD::UpdateThing()
//{
//
//}
//

int UMainHUD::GetNumber_Implementation(StatType statType)
{
	UStatManager* statManager = GetPlayerContext().GetPawn()->FindComponentByClass<UStatManager>();
	return statManager->GetStat(statType);
}

void UMainHUD::UpdateThing_Implementation()
{

}


int UMainHUD::GetResourceAmount_Implementation(ResourceType resourceType)
{
	UResourceBag* resourceBag = GetPlayerContext().GetPawn()->FindComponentByClass<UResourceBag>();
	return resourceBag->GetResourceAmount(resourceType);
}

void UMainHUD::Construct()
{
	Super::Construct();
	UpdateThing();
}
