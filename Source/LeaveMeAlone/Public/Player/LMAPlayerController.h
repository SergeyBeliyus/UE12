#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "LMAPlayerController.generated.h"

UCLASS()
class LEAVEMEALONE_API ALMAPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ALMAPlayerController();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool OnPause = false;
	
protected:
	virtual void BeginPlay() override;

	virtual void BeginSpectatingState() override;
	
};
