// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "QuestManager.h"
#include "GameFramework/GameModeBase.h"
#include "HackCarpathiaGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class HACKCARPATHIA_API AHackCarpathiaGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:

	AHackCarpathiaGameModeBase();
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Classes")
	TSubclassOf<UQuestManager> QuestManagerClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Quest")
	class UQuestManager* QuestManagerInstance;

public:
	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;
};
