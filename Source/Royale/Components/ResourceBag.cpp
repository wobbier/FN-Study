// Fill out your copyright notice in the Description page of Project Settings.

#include "ResourceBag.h"


// Sets default values for this component's properties
UResourceBag::UResourceBag()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UResourceBag::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UResourceBag::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UResourceBag::SelectResource(ResourceType type)
{
	SelectedResourceType = type;
}

int UResourceBag::GetResourceAmount(ResourceType type)
{
	if (Resources.Find(type))
	{
		return Resources[type].Amount;
	}
	return 0;
}

