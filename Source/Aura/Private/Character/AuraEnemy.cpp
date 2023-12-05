// Copyright Stephen Montague


#include "Character/AuraEnemy.h"
#include "Components/CapsuleComponent.h"

AAuraEnemy::AAuraEnemy()
{
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
	GetMesh()->SetCustomDepthStencilValue(Custom_Depth_Red);
	Weapon->SetCustomDepthStencilValue(Custom_Depth_Red);
}

void AAuraEnemy::HighlightActor()
{
	GetMesh()->SetRenderCustomDepth(true);
	Weapon->SetRenderCustomDepth(true);
}

void AAuraEnemy::UnHighlightActor()
{
	GetMesh()->SetRenderCustomDepth(false);
	Weapon->SetRenderCustomDepth(false);
}
