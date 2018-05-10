// Fill out your copyright notice in the Description page of Project Settings.

#include "MainHUD.h"



//
//
//void UMainHUD::UpdateThing()
//{
//
//}
//

int UMainHUD::GetNumber_Implementation()
{
	return 25;
}

void UMainHUD::UpdateThing_Implementation()
{

}

void UMainHUD::Construct()
{
	Super::Construct();
	UpdateThing();
}
