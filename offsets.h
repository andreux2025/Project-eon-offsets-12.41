namespace Offsets
{
	constexpr int32 GObjects          = 0x08067DF0;
	constexpr int32 AppendString      = 0x02C1DEA0;
	constexpr int32 GNames            = 0x0804F780;
	constexpr int32 GWorld            = 0x08155D80;
	constexpr int32 ProcessEvent      = 0x02E13BF0;
	constexpr int32 ProcessEventIdx   = 0x00000042;
}
class UStaticMeshComponent*                   CrateStaticMesh;                                   // 0x08D8
class UStaticMeshComponent*                   bonearray?;                                        // 0x0790 // BONEARRAY????
class ULevel*                                 PersistentLevel;                                   // 0x0030
class UGameInstance*                          OwningGameInstance;                                // 0x0188
class AGameStateBase*                         GameState;                                         // 0x0130
TArray<class ULocalPlayer*>                   LocalPlayers;                                      // 0x0038
class APlayerController*                      PlayerController;                                  // 0x0030
class APawn*                                  AcknowledgedPawn;                                  // 0x0298
class APlayerCameraManager*                   PlayerCameraManager;                               // 0x02B0
class USkeletalMeshComponent*                 Mesh;                                              // 0x0278
class APlayerState*                           PlayerState;                                       // 0x0220
class USceneComponent*                        RootComponent;                                     // 0x0130
uint8                                         bIsDying : 1;                                      // 0x0520
class AFortWeapon*                            CurrentWeapon;                                     // 0x0588
class UFortWeaponItemDefinition*              WeaponData;                                        // 0x0358
uint8                                         TeamIndex;                                         // 0x0E60
TArray<class APlayerState*>                   PlayerArray;                                       // 0x0230
class APawn*                                  PawnPrivate;                                       // 0x0278

StaticFindObject: 0x2e1c4b0
	StaticLoadObject: 0x2e1d7a0
