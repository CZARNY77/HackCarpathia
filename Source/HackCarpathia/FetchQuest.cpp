// Fill out your copyright notice in the Description page of Project Settings.


#include "FetchQuest.h"

UFetchQuest::UFetchQuest()
{
	RequiredItemCount = 0;
	CurrentItemCount = 0;
}

void UFetchQuest::CollectItem(FName CollectedItemID)
{
	CurrentItemCount++;
	if (CurrentItemCount >= RequiredItemCount)
	{
		CompleteQuest();
	}
}

void UFetchQuest::ActivateQuest()
{
	Super::ActivateQuest();
}

void UFetchQuest::CompleteQuest()
{
	Super::CompleteQuest();
}
