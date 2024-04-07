// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "QuestBase.h"
#include "FetchQuest.h"
#include "QuestManager.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HACKCARPATHIA_API UQuestManager : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UQuestManager();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "Quests")
	TArray<UQuestBase*> ActiveQuests;

	UPROPERTY(VisibleAnywhere, Category = "Quests")
	TArray<UQuestBase*> CompletedQuests;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "Quests")
	UQuestBase* AddQuest();

	UFUNCTION(BlueprintCallable, Category = "Quests")
	void ActivateQuest(FName QuestID);

	UFUNCTION(BlueprintCallable, Category = "Quests")
	void CompletedQuest(FName QuestID);

	UFUNCTION(BlueprintCallable, Category = "Quests")
	bool CanReturnQuest(FName QuestID) const;

	UFUNCTION(BlueprintCallable, Category = "Quests")
	TArray<UQuestBase*> GetActiveQuests() const;

	UFUNCTION(BlueprintCallable, Category = "Quests")
	TArray<UQuestBase*> GetCompletedQuests() const;

	UFUNCTION(BlueprintCallable, Category = "Quest Management")
	UFetchQuest* ConstructFetchQuest(FName QuestID, FText QuestName, FText Description, int ExpReward, FName ItemID, int32 RequiredItemCount);

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Classes")
	TSubclassOf<UQuestBase> QuestClass;
};
