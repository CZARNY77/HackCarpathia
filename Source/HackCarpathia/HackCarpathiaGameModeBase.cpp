// Fill out your copyright notice in the Description page of Project Settings.


#include "HackCarpathiaGameModeBase.h"

AHackCarpathiaGameModeBase::AHackCarpathiaGameModeBase()
{
	QuestManagerClass = UQuestManager::StaticClass();
}

void AHackCarpathiaGameModeBase::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);

	if (QuestManagerClass != nullptr) {
		QuestManagerInstance = NewObject<UQuestManager>(this, QuestManagerClass);
	}
}
