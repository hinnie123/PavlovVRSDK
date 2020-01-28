#pragma once

// PavlovVR (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class VRFramework.VRAvatarAnimInstance
// 0x0140 (0x04A0 - 0x0360)
class UVRAvatarAnimInstance : public UAnimInstance
{
public:
	float                                              SpeedY;                                                   // 0x0360(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bMoving;                                                  // 0x0364(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFlying;                                                  // 0x0365(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFalling;                                                 // 0x0366(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCrouched;                                                // 0x0367(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SmoothJointExp;                                           // 0x0368(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LeftHandLocation;                                         // 0x036C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LeftHandLocationOffset;                                   // 0x0378(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    LeftHandRotation;                                         // 0x0384(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    LeftHandRotationOffset;                                   // 0x0390(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LeftHandJoint;                                            // 0x039C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LeftHandJointSmooth;                                      // 0x03A8(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RightHandLocation;                                        // 0x03B4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RightHandLocationOffset;                                  // 0x03C0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RightHandRotation;                                        // 0x03CC(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RightHandRotationOffset;                                  // 0x03D8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RightHandJoint;                                           // 0x03E4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RightHandJointSmooth;                                     // 0x03F0(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HeadLocation;                                             // 0x03FC(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    HeadRotation;                                             // 0x0408(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    HeadRotationYawOnly;                                      // 0x0414(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LookAtLocation;                                           // 0x0420(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LookAtDistance;                                           // 0x042C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LookAtHeightOffset;                                       // 0x0430(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugLookAt;                                             // 0x0434(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0435(0x0003) MISSED OFFSET
	struct FVector                                     PelvisHeight;                                             // 0x0438(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PelvisHeightOffset;                                       // 0x0444(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinPelvisHeight;                                          // 0x0448(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EyeLookAtLocation;                                        // 0x044C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EyeLookAtAlpha;                                           // 0x0458(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x045C(0x0004) MISSED OFFSET
	class USceneComponent*                             EyeLookAtTarget;                                          // 0x0460(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ChangeTargetInterval;                                     // 0x0468(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EyeLidRatio;                                              // 0x046C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 EyeLidCurve;                                              // 0x0470(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              JawRatio;                                                 // 0x0478(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x047C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 JawOsilationCurve;                                        // 0x0480(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               EyeLidSequence;                                           // 0x0488(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0490(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRFramework.VRAvatarAnimInstance");
		return ptr;
	}

};


// Class VRFramework.VRAvatarComponent
// 0x0040 (0x0B70 - 0x0B30)
class UVRAvatarComponent : public USkeletalMeshComponent
{
public:
	struct FVector                                     LastLocation;                                             // 0x0B30(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    LastRotation;                                             // 0x0B3C(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              YawOffset;                                                // 0x0B48(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FrontalOffset;                                            // 0x0B4C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpSpeed;                                              // 0x0B50(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpRotationSpeed;                                      // 0x0B54(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0B58(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0B64(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRFramework.VRAvatarComponent");
		return ptr;
	}

};


// Class VRFramework.VRBulletDamageType
// 0x0000 (0x0040 - 0x0040)
class UVRBulletDamageType : public UDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRFramework.VRBulletDamageType");
		return ptr;
	}

};


// Class VRFramework.VRBullet
// 0x0180 (0x04A8 - 0x0328)
class AVRBullet : public AActor
{
public:
	struct FVRBulletImpactEffect                       DummyFX;                                                  // 0x0328(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x0338(0x0024) MISSED OFFSET
	TWeakObjectPtr<class UPrimitiveComponent>          ImpactPrimitive;                                          // 0x035C(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	struct FVector                                     SpawnLocation;                                            // 0x0368(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // 0x0374(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AController*                                 Shooter;                                                  // 0x0380(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      GunClass;                                                 // 0x0388(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Collision;                                                // 0x0390(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USphereComponent*                            BuzzingVolume;                                            // 0x0398(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UProjectileMovementComponent*                ProjectileMovement;                                       // 0x03A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bPenetrated;                                              // 0x03A8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSuppressed;                                              // 0x03A9(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x03AA(0x0002) MISSED OFFSET
	float                                              Damage;                                                   // 0x03AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlockDamagePercentage;                                    // 0x03B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPassiveDamage;                                           // 0x03B4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03B5(0x0003) MISSED OFFSET
	float                                              Penetration;                                              // 0x03B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	class UCurveFloat*                                 Falloff;                                                  // 0x03C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Drag;                                                     // 0x03C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPenetratesThinSurfaces;                                  // 0x03CC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldSlow;                                              // 0x03CD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x03CE(0x0002) MISSED OFFSET
	float                                              EffectScale;                                              // 0x03D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpactForce;                                              // 0x03D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxLifeSpan;                                              // 0x03D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDeferImpactForce;                                        // 0x03DC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x03DD(0x0003) MISSED OFFSET
	class USoundCue*                                   BuzzingSound;                                             // 0x03E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   BuzzingPenetrationSound;                                  // 0x03E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   PenetrationSound;                                         // 0x03F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVRBulletImpactEffect                       DefaultImpactFX;                                          // 0x03F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVRBulletImpactEffect                       HeadshotImpactFX;                                         // 0x0408(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVRBulletImpactEffect                       FleshImpactFX;                                            // 0x0418(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVRBulletImpactEffect                       GlassImpactFX;                                            // 0x0428(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVRBulletImpactEffect                       MetalImpactFX;                                            // 0x0438(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVRBulletImpactEffect                       WoodImpactFX;                                             // 0x0448(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVRBulletImpactEffect                       ConcreteImpactFX;                                         // 0x0458(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVRBulletImpactEffect                       CarpetImpactFX;                                           // 0x0468(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVRBulletImpactEffect                       FabricImpactFX;                                           // 0x0478(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVRBulletImpactEffect                       WaterImpactFX;                                            // 0x0488(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVRBulletImpactEffect                       DirtImpactFX;                                             // 0x0498(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRFramework.VRBullet");
		return ptr;
	}


	void OnProjectileStop(const struct FHitResult& ImpactResult);
	void OnImpact(const struct FHitResult& Hit);
	void OnBuzzingOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ApplyImpactForce();
};


// Class VRFramework.VRBulletManager
// 0x0000 (0x0328 - 0x0328)
class AVRBulletManager : public AInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRFramework.VRBulletManager");
		return ptr;
	}


	class AVRBulletManager* STATIC_Get(class UObject* WorldContextObject);
};


// Class VRFramework.VRBulletPenetrationInterface
// 0x0000 (0x0028 - 0x0028)
class UVRBulletPenetrationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRFramework.VRBulletPenetrationInterface");
		return ptr;
	}


	bool IsThinSurface(class UPrimitiveComponent* Component);
};


// Class VRFramework.VRCameraComponent
// 0x0000 (0x0790 - 0x0790)
class UVRCameraComponent : public UCameraComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRFramework.VRCameraComponent");
		return ptr;
	}

};


// Class VRFramework.VRController
// 0x01E8 (0x0510 - 0x0328)
class AVRController : public AActor
{
public:
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMotionControllerComponent*                  MotionController;                                         // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USphereComponent*                            GrabVolume;                                               // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UPhysicsConstraintComponent*                 GrabConstraint;                                           // 0x0340(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        TeleportMesh;                                             // 0x0348(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCustomMeshComponent*                        TeleportLineMesh;                                         // 0x0350(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UWidgetInteractionComponent*                 Stick;                                                    // 0x0358(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0360(0x0004) MISSED OFFSET
	struct FVector                                     SmoothVelocity;                                           // 0x0364(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0370(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LastLocation;                                             // 0x037C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     ThrowVelocity;                                            // 0x0388(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   TouchPosition;                                            // 0x0394(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x24];                                      // 0x039C(0x0024) MISSED OFFSET
	bool                                               bTeleportEnabled;                                         // 0x03C0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EVRControllerMode                                  Mode;                                                     // 0x03C1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCustomTriggerRatio;                                      // 0x03C2(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTeleportMode;                                            // 0x03C3(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TeleportLocation;                                         // 0x03C4(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    TeleportRotation;                                         // 0x03D0(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bValidTeleportLocation;                                   // 0x03DC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03DD(0x0003) MISSED OFFSET
	class AVRPlayArea*                                 PlayArea;                                                 // 0x03E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Grabbed;                                                  // 0x03E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bGripHoldMode;                                            // 0x03F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03F1(0x0003) MISSED OFFSET
	float                                              TriggerRatio;                                             // 0x03F4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GripRatio;                                                // 0x03F8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GripForceRatio;                                           // 0x03FC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bGripped;                                                 // 0x0400(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTriggered;                                               // 0x0401(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EControllerHand                                    HandType;                                                 // 0x0402(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x0403(0x0005) MISSED OFFSET
	class UVRHandleComponent*                          Handle;                                                   // 0x0408(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bPlayAreaTeleportOnly;                                    // 0x0410(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0411(0x0003) MISSED OFFSET
	struct FVector                                     ParabolaOriginOffset;                                     // 0x0414(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ParabolaAngle;                                            // 0x0420(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ParabolaIterations;                                       // 0x0424(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ParabolaSides;                                            // 0x0428(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ParabolaRadius;                                           // 0x042C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ParabolaDistance;                                         // 0x0430(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ParabolaLag;                                              // 0x0434(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ThrowOffset;                                              // 0x0438(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0444(0x0004) MISSED OFFSET
	class UForceFeedbackEffect*                        HapticLeft;                                               // 0x0448(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        HapticRight;                                              // 0x0450(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      MenuClass;                                                // 0x0458(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MenuSpawnDistance;                                        // 0x0460(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MenuSpawnHeight;                                          // 0x0464(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   HolsterSound;                                             // 0x0468(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   UnHolsterSound;                                           // 0x0470(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bGenerateQuadrantEvents;                                  // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0479(0x0007) MISSED OFFSET
	class UHapticFeedbackEffect_Base*                  Button1Haptic;                                            // 0x0480(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UHapticFeedbackEffect_Base*                  Button2Haptic;                                            // 0x0488(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UHapticFeedbackEffect_Base*                  InteractBeginHaptic;                                      // 0x0490(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UHapticFeedbackEffect_Base*                  InteractEndHaptic;                                        // 0x0498(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UHapticFeedbackEffect_Base*                  SlowPulseHaptic;                                          // 0x04A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UHapticFeedbackEffect_Base*                  GenericHapticEffect;                                      // 0x04A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AvatarHandOffset;                                         // 0x04B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    AvatarHandRotationOffset;                                 // 0x04BC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnGripChanged;                                            // 0x04C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTriggerChanged;                                         // 0x04D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnQuadrantPressed;                                        // 0x04E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnControllerModeChanged;                                  // 0x04F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bInputReady;                                              // 0x0508(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0509(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRFramework.VRController");
		return ptr;
	}


	void UnGrab();
	void TriggerChanged(bool bNewTrigger);
	void Teleport();
	void SetPlayArea(class AVRPlayArea* NewPlayArea, bool bTeleport);
	void SetHapticValues(float Amplitude, float Frequency);
	void PrepareTeleport();
	void PlayHapticEffect(class UHapticFeedbackEffect_Base* HapticEffect);
	void PlayHaptic(EVRHapticType Type);
	void OnRep_HandType();
	void OnModeChanged(EVRControllerMode From);
	void OnInvalidTeleportOverlap(class AActor* Actor);
	void OnImminentTeleport();
	void OnGrabVolumeEndOverlapOld(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnGrabVolumeEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnGrabVolumeBeginOverlapOld(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnGrabVolumeBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnGrabEndOverlap(class UPrimitiveComponent* Component);
	void OnGrabBeginOverlap(class UPrimitiveComponent* Component);
	void GripChanged(bool bNewGrip);
	void GrabManual(class UPrimitiveComponent* Component, bool bByGrip);
	void Grab(bool bByGrip);
	class APlayerController* GetPawnController();
	class AVRPawn* GetPawn();
	EControllerHand GetHandType();
	class UPrimitiveComponent* GetGrabVolume();
	void GenericHaptic();
	void EmulateTrigger(bool bPressed);
	void EmulateMenu(bool bPressed);
	void EmulateGrip(bool bPressed);
	bool CouldGrab();
	void ChangeMode(EVRControllerMode To);
};


// Class VRFramework.VRControllerAnimInstance
// 0x0070 (0x03D0 - 0x0360)
class UVRControllerAnimInstance : public UAnimInstance
{
public:
	class UAnimSequence*                               Sequence;                                                 // 0x0360(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               SequenceOverride;                                         // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SequenceRatio;                                            // 0x0370(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TriggerRatio;                                             // 0x0374(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GripRatio;                                                // 0x0378(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bGripped;                                                 // 0x037C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bRightHand;                                               // 0x037D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x037E(0x0002) MISSED OFFSET
	struct FVector                                     HeadLocation;                                             // 0x0380(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ShoulderLocation;                                         // 0x038C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     JointLocation;                                            // 0x0398(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x03A4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DefaultSequence;                                          // 0x03B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ShoulderOffset;                                           // 0x03B8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     JointOffset;                                              // 0x03C4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRFramework.VRControllerAnimInstance");
		return ptr;
	}

};


// Class VRFramework.VRDynamicHelperComponent
// 0x0060 (0x0150 - 0x00F0)
class UVRDynamicHelperComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x00F0(0x0030) MISSED OFFSET
	class UStaticMeshComponent*                        DynamicMesh;                                              // 0x0120(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         Component;                                                // 0x0128(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ComponentName;                                            // 0x0130(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bReplaceMesh;                                             // 0x0138(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseReplaceByLocation;                                    // 0x0139(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseReplaceByRotation;                                    // 0x013A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x013B(0x0001) MISSED OFFSET
	float                                              ReplaceLocationThreashold;                                // 0x013C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReplaceRotationThereashold;                               // 0x0140(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0144(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRFramework.VRDynamicHelperComponent");
		return ptr;
	}


	void OnWake(class UPrimitiveComponent* WakingComponent, const struct FName& BoneName);
	void OnSleep(class UPrimitiveComponent* SleepingComponent, const struct FName& BoneName);
};


// Class VRFramework.VRGameMode
// 0x0000 (0x0410 - 0x0410)
class AVRGameMode : public AGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRFramework.VRGameMode");
		return ptr;
	}

};


// Class VRFramework.VRGrabComponent
// 0x0008 (0x00F8 - 0x00F0)
class UVRGrabComponent : public UActorComponent
{
public:
	bool                                               bSoftConstraint;                                          // 0x00F0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRFramework.VRGrabComponent");
		return ptr;
	}

};


// Class VRFramework.VRGrabInterface
// 0x0000 (0x0028 - 0x0028)
class UVRGrabInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRFramework.VRGrabInterface");
		return ptr;
	}


	bool UseSoftGrabConstraint();
	void UnGrabbed(class AVRController* Controller);
	void Grabbed(class AVRController* Controller);
};


// Class VRFramework.VRItem
// 0x01A8 (0x04D0 - 0x0328)
class AVRItem : public AActor
{
public:
	class USceneComponent*                             PickComponent;                                            // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0330(0x0018) MISSED OFFSET
	class AVRItem*                                     LastReceviedParent;                                       // 0x0348(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      LastReceviedParentSlot;                                   // 0x0350(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	class AVRItemController*                           LastReceviedController;                                   // 0x0358(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0360(0x0050) MISSED OFFSET
	class AVRItemController*                           Controller;                                               // 0x03B0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class AVRItem*                                     Parent;                                                   // 0x03B8(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ParentSlot;                                               // 0x03C0(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x03C1(0x0007) MISSED OFFSET
	struct FVRItemState                                ItemState;                                                // 0x03C8(0x0018) (Net, ZeroConstructor, IsPlainOldData)
	class UVRSelectionComponent*                       SelectionComponent;                                       // 0x03E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bPhysicsAwake;                                            // 0x03E8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bInventoryDisabled;                                       // 0x03E9(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMutePickSound;                                           // 0x03EA(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPickDisabled;                                            // 0x03EB(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              BlockDuration;                                            // 0x03EC(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bCanBePocketed;                                           // 0x03F0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowGrabByGrip;                                         // 0x03F1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowPickByTrigger;                                      // 0x03F2(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowPickByGrip;                                         // 0x03F3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x03F4(0x0004) MISSED OFFSET
	class USoundCue*                                   PickSound;                                                // 0x03F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoPickOffset;                                          // 0x0400(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0401(0x0007) MISSED OFFSET
	struct FName                                       PickSpaceComponent;                                       // 0x0408(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DropImpulseMul;                                           // 0x0410(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFlipRollPick;                                            // 0x0414(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFlipYawPick;                                             // 0x0415(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFlipYAxisPick;                                           // 0x0416(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x0417(0x0001) MISSED OFFSET
	struct FVector                                     PickOffset;                                               // 0x0418(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    PickRotationOffset;                                       // 0x0424(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               Sequence;                                                 // 0x0430(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SelfDestroyDelay;                                         // 0x0438(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNerverDestroyForInactivity;                              // 0x043C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDestroyChildren;                                         // 0x043D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x043E(0x0002) MISSED OFFSET
	struct FVector                                     AvatarHandOffset;                                         // 0x0440(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    AvatarHandRotationOffset;                                 // 0x044C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkipSnapshot;                                            // 0x0458(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0459(0x0007) MISSED OFFSET
	struct FTransform                                  InventoryOffset;                                          // 0x0460(0x0030) (Edit, DisableEditOnInstance, IsPlainOldData)
	int                                                ForceSlot;                                                // 0x0490(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0494(0x0004) MISSED OFFSET
	TArray<struct FVRCustomInventoryOffset>            CustomInventoryOffsets;                                   // 0x0498(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData10[0x8];                                       // 0x04A8(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPicked;                                                 // 0x04B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDropped;                                                // 0x04C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRFramework.VRItem");
		return ptr;
	}


	void Used(bool bJustPicked);
	void Use();
	void SpawnPickSound(class AVRItemController* ByController);
	void ShouldSelfDestroy();
	void ShouldNotSelfDestroy();
	void SetController(class AVRItemController* NewController, bool bNetUpdate);
	void SetAttachParent(class AVRItem* Item, bool bNetUpdate, unsigned char Slot);
	void SelfDestroy();
	void Physicalize(bool bEnabled);
	void OnRep_Parent();
	void OnRep_ItemState();
	void OnRep_Controller();
	void OnPredictionTimeout();
	void OnPredictionCorrect();
	void OnPick(class AVRItemController* ByController);
	void OnPhysicsWake(class UPrimitiveComponent* SleepingComponent, const struct FName& BoneName);
	void OnPhysicsSleep(class UPrimitiveComponent* SleepingComponent, const struct FName& BoneName);
	void OnParentChanged(class AVRItem* ParentItem);
	void OnDrop();
	void MulticastUpdateState(class AVRItemController* RequestedController, class AVRItem* RequestedParent, unsigned char RequestedParentSlot);
	void MulticastStateSanityCheck();
	void MakeDormant();
	bool IsBlocked();
	struct FTransform GetSequenceTransform();
	void DestroyNow();
	void Cycle();
	bool CanGetPickedBy(class AVRItemController* ByController);
};


// Class VRFramework.VRGun
// 0x03A0 (0x0870 - 0x04D0)
class AVRGun : public AVRItem
{
public:
	bool                                               bInvertRollRecoil;                                        // 0x04D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04D1(0x0003) MISSED OFFSET
	float                                              RecoilRatio;                                              // 0x04D4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ReloadCooldown;                                           // 0x04D8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x34];                                      // 0x04DC(0x0034) MISSED OFFSET
	float                                              BasisBlendAlpha;                                          // 0x0510(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     DynamicRecoil;                                            // 0x0514(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     DynamicRecoilSaved;                                       // 0x0520(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CounterRecoilTimer;                                       // 0x052C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DynamicPivotRecoil;                                       // 0x0530(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DynamicPivotRecoilSaved;                                  // 0x0534(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CounterPivotRecoilTimer;                                  // 0x0538(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              BoltReleaseTimer;                                         // 0x053C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0540(0x0028) MISSED OFFSET
	int                                                BurstCount;                                               // 0x0568(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BurstDelayTimer;                                          // 0x056C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0570(0x0008) MISSED OFFSET
	struct FVRGunStateProxy                            StateProxy;                                               // 0x0578(0x0010) (Net)
	unsigned char                                      UnknownData04[0x38];                                      // 0x0588(0x0038) MISSED OFFSET
	class UParticleSystemComponent*                    MuzzleFlashComp;                                          // 0x05C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData05[0x10];                                      // 0x05C8(0x0010) MISSED OFFSET
	class UVRGunState*                                 State;                                                    // 0x05D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class APlayerController*                           PreviousOwner;                                            // 0x05E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UVRHandleComponent*                          ChargingHandle;                                           // 0x05E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FireRateTimer;                                            // 0x05F0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Recoil;                                                   // 0x05F4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SlideTimer;                                               // 0x05F8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bBoltLocked;                                              // 0x05FC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTriggered;                                               // 0x05FD(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTriggerSnapped;                                          // 0x05FE(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x05FF(0x0001) MISSED OFFSET
	float                                              SnapTrigger;                                              // 0x0600(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SnapTriggerSmooth;                                        // 0x0604(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AVRMagazine*                                 Magazine;                                                 // 0x0608(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bBulletInChamber;                                         // 0x0610(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHammerReady;                                             // 0x0611(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x0612(0x0002) MISSED OFFSET
	float                                              HammerRatio;                                              // 0x0614(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SkinId;                                                   // 0x0618(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GenericVector1;                                           // 0x061C(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     GenericVector2;                                           // 0x0628(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GenericScalar1;                                           // 0x0634(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GenericScalar2;                                           // 0x0638(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGenericFlag1;                                            // 0x063C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGenericFlag2;                                            // 0x063D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGenericFlag3;                                            // 0x063E(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1];                                       // 0x063F(0x0001) MISSED OFFSET
	bool                                               bDisableCocking;                                          // 0x0640(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0641(0x0007) MISSED OFFSET
	class UClass*                                      StateClass;                                               // 0x0648(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MuzzleSocket;                                             // 0x0650(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MuzzleZeroBias;                                           // 0x0658(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x065C(0x0004) MISSED OFFSET
	class UCurveVector*                                NormalizedRecoilCurve;                                    // 0x0660(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilCurveScale;                                         // 0x0668(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilAngleMul;                                           // 0x066C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilAngleLateralMul;                                    // 0x0670(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilTraslationMul;                                      // 0x0674(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUsePivotedRecoil;                                        // 0x0678(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0679(0x0003) MISSED OFFSET
	struct FVector                                     RecoilPivotOffset;                                        // 0x067C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PivotRecoilMul;                                           // 0x0688(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PivotRecoilLateralMul;                                    // 0x068C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CounterPivotRecoilDuration;                               // 0x0690(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0694(0x0004) MISSED OFFSET
	class UCurveFloat*                                 CounterPivotRecoilCurve;                                  // 0x0698(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CokingThreashold;                                         // 0x06A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReChamberThreashold;                                      // 0x06A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FireThreashold;                                           // 0x06A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FireRate;                                                 // 0x06AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EVRGunFireMode                                     FireMode;                                                 // 0x06B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x06B1(0x0007) MISSED OFFSET
	class USoundCue*                                   HandlingSound;                                            // 0x06B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FireDelay;                                                // 0x06C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x06C4(0x0004) MISSED OFFSET
	TArray<EVRGunFireMode>                             AdditionalFireModes;                                      // 0x06C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              BurstDelay;                                               // 0x06D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLockBolt;                                                // 0x06DC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x06DD(0x0003) MISSED OFFSET
	float                                              BoltReleaseCooldown;                                      // 0x06E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStaticSlider;                                            // 0x06E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x06E5(0x0003) MISSED OFFSET
	struct FName                                       ChargingHandleAttachName;                                 // 0x06E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      BulletClass;                                              // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BulletSpray;                                              // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BulletSpraySpread;                                        // 0x06FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseEvenSpread;                                           // 0x0700(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x0701(0x0003) MISSED OFFSET
	float                                              EvenSpread;                                               // 0x0704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LimitedBulletSpraySpreadMul;                              // 0x0708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilLimitThreadshold;                                   // 0x070C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 BulletSprayRecoilCurve;                                   // 0x0710(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilPerBullet;                                          // 0x0718(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilNormalizationRate;                                  // 0x071C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilMul;                                                // 0x0720(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x0724(0x0004) MISSED OFFSET
	class UCurveFloat*                                 RecoilCurve;                                              // 0x0728(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 RecoilPatternCurve;                                       // 0x0730(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      MagazineClass;                                            // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bManualMagazineRelease;                                   // 0x0740(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x0741(0x0003) MISSED OFFSET
	float                                              ManualReloadCooldown;                                     // 0x0744(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNoMagazine;                                              // 0x0748(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bReloadChamberByMagazine;                                 // 0x0749(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bComplexTrigger;                                          // 0x074A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x1];                                       // 0x074B(0x0001) MISSED OFFSET
	float                                              ComplexTriggerDuration;                                   // 0x074C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 ComplexTriggerCurve;                                      // 0x0750(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoUnchamber;                                           // 0x0758(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTakeBulletOnQuickReload;                                 // 0x0759(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x2];                                       // 0x075A(0x0002) MISSED OFFSET
	float                                              BasisLerpRate;                                            // 0x075C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDynamicRecoil;                                           // 0x0760(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x0761(0x0003) MISSED OFFSET
	float                                              CounterRecoilDuration;                                    // 0x0764(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bApplyRecoilPullback;                                     // 0x0768(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x0769(0x0003) MISSED OFFSET
	float                                              PullbackLerpExp;                                          // 0x076C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CounterRecoilPullback;                                    // 0x0770(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x4];                                       // 0x0774(0x0004) MISSED OFFSET
	class UCurveVector*                                CounterRecoilCurve;                                       // 0x0778(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CounterRecoilThreashold;                                  // 0x0780(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CounterRecoilLimits;                                      // 0x0784(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SmoothCounterRecoilLimitsExp;                             // 0x0790(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0x4];                                       // 0x0794(0x0004) MISSED OFFSET
	class USoundCue*                                   ShotSound;                                                // 0x0798(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ShotTailSound;                                            // 0x07A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SuppressedShotSound;                                      // 0x07A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SuppressedShotTailSound;                                  // 0x07B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ShotSoundLQ;                                              // 0x07B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ShotSoundLQ2D;                                            // 0x07C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SuppressedShotSoundLQ;                                    // 0x07C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SupressedShotSoundLQ2D;                                   // 0x07D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundSourceBus*                             ShotSourceBus;                                            // 0x07D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundSourceBus*                             SuppressedShotSourceBus;                                  // 0x07E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LowAmmoThreashold;                                        // 0x07E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData26[0x4];                                       // 0x07EC(0x0004) MISSED OFFSET
	class USoundCue*                                   LowAmmoSound;                                             // 0x07F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   TriggerSound;                                             // 0x07F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ReleaseTriggerSound;                                      // 0x0800(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   BoltReleaseSound;                                         // 0x0808(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   BoltLockSound;                                            // 0x0810(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   CockSound;                                                // 0x0818(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ReloadSound;                                              // 0x0820(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   EjectMagazineSound;                                       // 0x0828(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   CycleFireModeSound;                                       // 0x0830(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MuzzleFlashDuration;                                      // 0x0838(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MuzzleFlashScale;                                         // 0x083C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MuzzleFlashOffset;                                        // 0x0840(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData27[0x4];                                       // 0x0844(0x0004) MISSED OFFSET
	class UParticleSystem*                             MuzzleFlash;                                              // 0x0848(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             MuzzleFlashLQ;                                            // 0x0850(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             MuzzleFlashSuppressed;                                    // 0x0858(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             MuzzleFlashSuppressedLQ;                                  // 0x0860(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UHapticFeedbackEffect_Base*                  ShotHapticEffect;                                         // 0x0868(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRFramework.VRGun");
		return ptr;
	}


	void UngrabChargingHandle();
	class UAudioComponent* SpawnGunHandlingSoundAtComponent(class USoundCue* SoundCue, class USceneComponent* Component, bool bReplicate);
	class UAudioComponent* SpawnGunHandlingSound(class USoundCue* SoundCue, const struct FVector& LocalOffset, bool bReplicate);
	void ServerUpdateState(TArray<unsigned char> RawState);
	void ServerTrigger(bool bPulled);
	void ServerSpawnGunHandlingSound(class USoundCue* SoundCue);
	void ServerReleaseMagazine();
	void ServerReleaseBolt();
	void ServerLoadMagazine(class AVRMagazine* NewMagazine);
	void ServerLoadChamber();
	void ServerCycleFireMode();
	void ServerCock();
	void SendStateToClientOwner();
	void ReleaseTrigger();
	void ReleaseMagazine();
	void ReleaseBolt();
	void QuickReloadImpl();
	void QuickReload();
	void PullTrigger();
	void OnUnload();
	void OnSnapTriggerReset();
	void OnRoundEjected(bool bLive);
	void OnRep_StateProxy();
	void OnRep_Magazine();
	void OnMagazinePicked(class AVRItem* Item);
	void OnMagazineChanged(bool bHasMagazine);
	void OnChargingHandleGrab();
	void OnChamberLoaded();
	void MulticastOnStateUpdated(TArray<unsigned char> RawState);
	void MulticastOnMagazineReleased(class AVRMagazine* ReleasedMagazine);
	void MulticastOnDryFire();
	void MulticastOnCock(bool bPullBack);
	void MulticastOnChamberLoaded();
	void MulticastOnBoltRelease();
	void MulticastFire();
	void LoadMagazine(class AVRMagazine* NewMagazine, bool bForce);
	void LoadChamber();
	bool IsSuppressed();
	bool IsOwnedLocally();
	bool IsOwnedByPrimaryPlayer();
	bool IsLoaded();
	bool IsIndoor();
	bool HasMagazine();
	float GetSlideTime();
	float GetRecoilTime();
	struct FVector GetMuzzleLocalOffset();
	struct FVector GetLocalMagazineOffset();
	class UVRHandleComponent* GetChargingHandle();
	struct FTransform GetBasisTransform();
	void ForceGunStateUpdate();
	void Fired();
	void DeactivateMuzzleFlash();
	void CycleFireMode();
	void Cock(float Ratio);
	void ClientUpdateState(TArray<unsigned char> RawState);
	bool CanLoadChamber();
	bool CanFire();
	void AttachMagazine(class AVRMagazine* MagazineToAttach);
};


// Class VRFramework.VRGunAnimInstance
// 0x0070 (0x0440 - 0x03D0)
class UVRGunAnimInstance : public UVRControllerAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x03D0(0x0004) MISSED OFFSET
	bool                                               bLoaded;                                                  // 0x03D4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EVRGunFireMode                                     FireMode;                                                 // 0x03D5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bBoltLocked;                                              // 0x03D6(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x03D7(0x0001) MISSED OFFSET
	float                                              RecoilTime;                                               // 0x03D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	class UCurveFloat*                                 RecoilFilterCurve;                                        // 0x03E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SlideTime;                                                // 0x03E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET
	class UCurveFloat*                                 SlideFilterCurve;                                         // 0x03F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SlideBackDuration;                                        // 0x03F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHideIronSight;                                           // 0x03FC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHideCompensator;                                         // 0x03FD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x03FE(0x0002) MISSED OFFSET
	float                                              ChargingHandleTime;                                       // 0x0400(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HammerTime;                                               // 0x0404(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SnapTrigger;                                              // 0x0408(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SnapTriggerSmooth;                                        // 0x040C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EVRGunChamberState                                 ChamberState;                                             // 0x0410(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0411(0x0003) MISSED OFFSET
	int                                                ActiveChamber;                                            // 0x0414(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     GenericVector1;                                           // 0x0418(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     GenericVector2;                                           // 0x0424(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GenericScalar1;                                           // 0x0430(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GenericScalar2;                                           // 0x0434(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bGenericFlag1;                                            // 0x0438(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bGenericFlag2;                                            // 0x0439(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bGenericFlag3;                                            // 0x043A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x5];                                       // 0x043B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRFramework.VRGunAnimInstance");
		return ptr;
	}

};


// Class VRFramework.VRGunState
// 0x0070 (0x0160 - 0x00F0)
class UVRGunState : public UActorComponent
{
public:
	TArray<EVRGunChamberState>                         Chambers;                                                 // 0x00F0(0x0010) (ZeroConstructor)
	uint16_t                                           Bullets;                                                  // 0x0100(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ActiveChamber;                                            // 0x0102(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bDirty;                                                   // 0x0103(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ChamberNum;                                               // 0x0104(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoIncrementChamber;                                    // 0x0108(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoEmptyChamber;                                        // 0x0109(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoChambering;                                          // 0x010A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x010B(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnChamberStateChanged;                                    // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDetonation;                                             // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBulletTaken;                                            // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBulletPut;                                              // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnClientUpdate;                                           // 0x0150(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRFramework.VRGunState");
		return ptr;
	}


	void SetChamberState(EVRGunChamberState NewState, int Index);
	bool IsChamberLoaded(int Index);
	bool IsAnyChamberLoaded();
	int GetMagazineBulletCount();
	EVRGunChamberState GetChamberState(int Index);
	unsigned char GetBulletCount(bool bEmptyShellsToo);
};


// Class VRFramework.VRHand
// 0x0050 (0x0560 - 0x0510)
class AVRHand : public AVRController
{
public:
	TArray<struct FVRHandFingerJoint>                  FingerJoints;                                             // 0x0510(0x0010) (ZeroConstructor)
	class USkeletalMesh*                               LeftHandMesh;                                             // 0x0520(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      LeftHandAnimBlueprint;                                    // 0x0528(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    LeftHandRotation;                                         // 0x0530(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x053C(0x0004) MISSED OFFSET
	class USkeletalMesh*                               RightHandMesh;                                            // 0x0540(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      RightHandAnimBlueprint;                                   // 0x0548(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    RightHandRotation;                                        // 0x0550(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HandPitch;                                                // 0x055C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRFramework.VRHand");
		return ptr;
	}


	struct FVector GetShoulderLocation();
};


// Class VRFramework.VRHandAnimInstance
// 0x0000 (0x03D0 - 0x03D0)
class UVRHandAnimInstance : public UVRControllerAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRFramework.VRHandAnimInstance");
		return ptr;
	}

};


// Class VRFramework.VRHandleComponent
// 0x0150 (0x06D0 - 0x0580)
class UVRHandleComponent : public UBoxComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0580(0x0020) MISSED OFFSET
	TWeakObjectPtr<class AVRController>                GrabbedBy;                                                // 0x05A0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x05A8(0x0028) MISSED OFFSET
	class USceneComponent*                             SequenceRefComp;                                          // 0x05D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              LinearRange;                                              // 0x05D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinInput;                                                 // 0x05DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxInput;                                                 // 0x05E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseVectorInput;                                          // 0x05E4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseRotation;                                             // 0x05E5(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EVRHandleRotationType                              RotationType;                                             // 0x05E6(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x05E7(0x0001) MISSED OFFSET
	class USoundCue*                                   GrabSound;                                                // 0x05E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GrabSoundThreashold;                                      // 0x05F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x05F4(0x0004) MISSED OFFSET
	class USoundCue*                                   UngrabSound;                                              // 0x05F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UngrabSoundThreashold;                                    // 0x0600(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHapticEnabled;                                           // 0x0604(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EVRHandleHapticMode                                HapticMode;                                               // 0x0605(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0606(0x0002) MISSED OFFSET
	float                                              HapticPulseDuration;                                      // 0x0608(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HapticPulseStep;                                          // 0x060C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HapticInputReference;                                     // 0x0610(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinHapticAmp;                                             // 0x0614(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxHapticAmp;                                             // 0x0618(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x061C(0x0004) MISSED OFFSET
	struct FString                                     SequenceRefCompName;                                      // 0x0620(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       SequenceRefBone;                                          // 0x0630(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVRHandleSequenceSetup                      SequenceRightHand;                                        // 0x0638(0x0020) (Edit, DisableEditOnInstance)
	struct FVRHandleSequenceSetup                      SequenceLeftHand;                                         // 0x0658(0x0020) (Edit, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnInputReceived;                                          // 0x0678(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnVectorInputReceived;                                    // 0x0688(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRotationInputReceived;                                  // 0x0698(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHandleGrab;                                             // 0x06A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHandleUngrab;                                           // 0x06B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData06[0x8];                                       // 0x06C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRFramework.VRHandleComponent");
		return ptr;
	}


	bool IsGrabbed();
	class AVRController* GetGrabbedBy();
};


// Class VRFramework.VRInventory
// 0x0120 (0x0448 - 0x0328)
class AVRInventory : public AActor
{
public:
	class USceneComponent*                             Pivot;                                                    // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             HeadPivot;                                                // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0340(0x0008) MISSED OFFSET
	TMap<EVRQuickSlotType, class UPrimitiveComponent*> QuickSlotVolumes;                                         // 0x0348(0x0050) (ExportObject, ZeroConstructor)
	class UPrimitiveComponent*                         VestVolume;                                               // 0x0398(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bRotating;                                                // 0x03A0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03A1(0x0003) MISSED OFFSET
	float                                              RotationExp;                                              // 0x03A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotationAngleThreashold;                                  // 0x03A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Offset;                                                   // 0x03AC(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotationDelay;                                            // 0x03B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	class USoundCue*                                   GetSuccessSound;                                          // 0x03C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   GetFailureSound;                                          // 0x03C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UHapticFeedbackEffect_Base*                  GetHaptic;                                                // 0x03D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   PutSuccessSound;                                          // 0x03D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   PutFailureSound;                                          // 0x03E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UHapticFeedbackEffect_Base*                  PutHaptic;                                                // 0x03E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   VestActionSuccessSound;                                   // 0x03F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   VestActionFailureSound;                                   // 0x03F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UHapticFeedbackEffect_Base*                  VestHaptic;                                               // 0x0400(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 LeanCurve;                                                // 0x0408(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 CrouchCurve;                                              // 0x0410(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVRInventoryFilter>                  SlotFilters;                                              // 0x0418(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FVRInventoryFilter                          DefaultSlotFilter;                                        // 0x0428(0x0018) (Edit, DisableEditOnInstance)
	class USoundBase*                                  FilteredOutSound;                                         // 0x0440(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRFramework.VRInventory");
		return ptr;
	}


	void ReAttachChildren();
	void OnRotationChanged();
	bool OnQuickSlotAction(class AVRItemController* Controller, EVRQuickSlotType Type, bool bState);
	class UPrimitiveComponent* GetVestVolume();
	class UPrimitiveComponent* GetQuickSlotVolume(EVRQuickSlotType Type);
	class AVRPawn* GetPawn();
	class AVRInventoryLogic* GetLogic();
};


// Class VRFramework.VRInventoryLogic
// 0x0020 (0x04F0 - 0x04D0)
class AVRInventoryLogic : public AVRItem
{
public:
	TArray<struct FVRInventorySlot>                    Slots;                                                    // 0x04D0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x04E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRFramework.VRInventoryLogic");
		return ptr;
	}


	void Set(unsigned char Slot, class AVRItem* Item);
	void ServerPut(unsigned char Slot, class AVRItemController* ByController);
	void ServerGet(unsigned char Slot, class AVRItemController* ByController);
	void ReAttachChildren();
	bool Put(unsigned char Slot, class AVRItemController* ByController);
	struct FName GetSlotName(unsigned char Slot);
	class AVRPawn* GetPawn();
	bool Get(unsigned char Slot, class AVRItemController* ByController);
	void DropEverything();
};


// Class VRFramework.VRItemController
// 0x0140 (0x0650 - 0x0510)
class AVRItemController : public AVRController
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0510(0x0080) MISSED OFFSET
	struct FVRItemControllerState                      SavedOldState;                                            // 0x0590(0x0050)
	unsigned char                                      UnknownData01[0x10];                                      // 0x05E0(0x0010) MISSED OFFSET
	struct FVRItemControllerState                      State;                                                    // 0x05F0(0x0050) (BlueprintVisible, BlueprintReadOnly, Net)
	class AVRItem*                                     Pickup;                                                   // 0x0640(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DropHoldDuration;                                         // 0x0648(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHideMesh;                                                // 0x064C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSnapMesh;                                                // 0x064D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x064E(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRFramework.VRItemController");
		return ptr;
	}


	void ServerReportStateChange(const struct FVRItemControllerState& NewState);
	void ServerPickManual(class AVRItem* Item);
	void ServerDrop(class AVRItem* PickupToDrop, const struct FVector& DesiredThrowLocation, const struct FVector& DesiredThrowVelocity, const struct FRotator& DesiredThrowRotation);
	void ReportPickupDrop(class AVRItem* Item);
	void PredictedPickManual(class AVRItem* Item);
	void PickManual(class AVRItem* Item);
	void Pick();
	void OnStateChanged(const struct FVRItemControllerState& OldState);
	void OnRep_State();
	void OnPickupDestroyed(class AActor* DestroyedActor);
	void OnDropTimer();
	void MulticastChangeState(const struct FVRItemControllerState& NewState);
	bool IsLocallyOwned();
	void Drop();
};


// Class VRFramework.VRLadder
// 0x0008 (0x0330 - 0x0328)
class AVRLadder : public AActor
{
public:
	float                                              ClimbSpeed;                                               // 0x0328(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x032C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRFramework.VRLadder");
		return ptr;
	}


	void CreateVolume();
};


// Class VRFramework.VRMagazine
// 0x0030 (0x0500 - 0x04D0)
class AVRMagazine : public AVRItem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04D0(0x0008) MISSED OFFSET
	int                                                Bullets;                                                  // 0x04D8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                SkinId;                                                   // 0x04DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AVRGun*                                      Gun;                                                      // 0x04E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bRecentlyReleased;                                        // 0x04E8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bObliterated;                                             // 0x04E9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x04EA(0x0002) MISSED OFFSET
	int                                                MaxBullets;                                               // 0x04EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                InitialBullets;                                           // 0x04F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceFullMerge;                                          // 0x04F4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04F5(0x0003) MISSED OFFSET
	float                                              NoInsertDelay;                                            // 0x04F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRFramework.VRMagazine");
		return ptr;
	}


	void ServerObliterate();
	void ServerMerge(class AVRMagazine* Magazine);
	void OnRep_Gun();
	void OnRep_Bullets();
	void OnReleasedFromGun();
	void OnLoadedIntoGun();
	void OnBulletsChanged();
	void Merge(class AVRMagazine* Magazine);
	void MakeReinsertable();
	bool IsFull();
};


// Class VRFramework.VRMagazineSlotComponent
// 0x0020 (0x05A0 - 0x0580)
class UVRMagazineSlotComponent : public UBoxComponent
{
public:
	class AVRGun*                                      Gun;                                                      // 0x0580(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowRefill;                                             // 0x0588(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCockEnabled;                                             // 0x0589(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEmptyChamberOnly;                                        // 0x058A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x058B(0x0005) MISSED OFFSET
	class USoundCue*                                   RefillSound;                                              // 0x0590(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0598(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRFramework.VRMagazineSlotComponent");
		return ptr;
	}


	void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class VRFramework.VRMenu
// 0x0020 (0x0348 - 0x0328)
class AVRMenu : public AActor
{
public:
	class USceneComponent*                             Pivot;                                                    // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            Widget;                                                   // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class AVRController*                               Controller;                                               // 0x0338(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Damage;                                                   // 0x0340(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0344(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRFramework.VRMenu");
		return ptr;
	}


	void Close();
};


// Class VRFramework.VRMotionControllerComponent
// 0x0010 (0x0620 - 0x0610)
class UVRMotionControllerComponent : public UMotionControllerComponent
{
public:
	struct FRotator                                    OculusRotationOffset;                                     // 0x0610(0x000C) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x061C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRFramework.VRMotionControllerComponent");
		return ptr;
	}

};


// Class VRFramework.VRMovementComponent
// 0x00E8 (0x0260 - 0x0178)
class UVRMovementComponent : public UPawnMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0178(0x0028) MISSED OFFSET
	float                                              ClientTimeStamp;                                          // 0x01A0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ClientTimeStampRaw;                                       // 0x01A4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x01A8(0x0008) MISSED OFFSET
	float                                              ServerLerpRate;                                           // 0x01B0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x01B4(0x000C) MISSED OFFSET
	class AVRLadder*                                   ActiveLadder;                                             // 0x01C0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x01C8(0x000C) MISSED OFFSET
	float                                              VelocityZ;                                                // 0x01D4(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x01D8(0x0008) MISSED OFFSET
	TArray<struct FVRMovementSnapshot>                 MovementSnapshotHistory;                                  // 0x01E0(0x0010) (ZeroConstructor)
	struct FVRMovementSnapshot                         MovementSnapshot;                                         // 0x01F0(0x0024) (Net)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0214(0x0004) MISSED OFFSET
	TArray<struct FVector>                             NavPoints;                                                // 0x0218(0x0010) (ZeroConstructor)
	int                                                CurrentPathIndex;                                         // 0x0228(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bInputEnabled;                                            // 0x022C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x022D(0x0003) MISSED OFFSET
	float                                              SpeedMul;                                                 // 0x0230(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSmoothSpeed;                                          // 0x0234(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0235(0x0003) MISSED OFFSET
	float                                              Speed;                                                    // 0x0238(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GroundQueryInterval;                                      // 0x023C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnBeginMove;                                              // 0x0240(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndMove;                                                // 0x0250(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRFramework.VRMovementComponent");
		return ptr;
	}


	void SyncTime();
	void ServerSyncTime();
	void ServerReportMovement(const struct FVRMovementSnapshot& M0);
	void ServerMoveTo(const struct FVector& Location);
	void OnRep_MovementSnapshot();
	void OnPawnEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnPawnBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void MulticastMoveTo(const struct FVector& Location);
	void MoveTo(const struct FVector& Location);
	TEnumAsByte<EPhysicalSurface> GetGroundSurface();
	void ClientSyncTime(float ServerTimeSeconds);
};


// Class VRFramework.VROBBProxy
// 0x0008 (0x0330 - 0x0328)
class AVROBBProxy : public AActor
{
public:
	class UCameraComponent*                            HeadCamera;                                               // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRFramework.VROBBProxy");
		return ptr;
	}

};


// Class VRFramework.VRPawn
// 0x03A0 (0x0AE0 - 0x0740)
class AVRPawn : public ACharacter
{
public:
	class UCameraComponent*                            HeadCamera;                                               // 0x0740(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0748(0x0028) MISSED OFFSET
	struct FVRNetSnapshot                              LatestSnapshot;                                           // 0x0770(0x0068) (Net)
	unsigned char                                      UnknownData01[0x1C8];                                     // 0x07D8(0x01C8) MISSED OFFSET
	float                                              NetUpdateTimer;                                           // 0x09A0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x09A4(0x0004) MISSED OFFSET
	TArray<class UMaterialInterface*>                  SavedMaterials;                                           // 0x09A8(0x0010) (ZeroConstructor)
	class AVROBBProxy*                                 OBBProxyInstance;                                         // 0x09B8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x09C0(0x0018) MISSED OFFSET
	class UVRAvatarComponent*                          AvatarComp;                                               // 0x09D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     LastPosition;                                             // 0x09E0(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x09EC(0x000C) MISSED OFFSET
	class AVRInventoryLogic*                           InventoryLogic;                                           // 0x09F8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class AVRInventory*                                Inventory;                                                // 0x0A00(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AVRLadder*                                   Ladder;                                                   // 0x0A08(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      VRControllerClass;                                        // 0x0A10(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAdjustElevation;                                         // 0x0A18(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0A19(0x0003) MISSED OFFSET
	float                                              TeleportFadeDuration;                                     // 0x0A1C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOOBEnabled;                                              // 0x0A20(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReCenterRoomScale;                                       // 0x0A21(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0A22(0x0002) MISSED OFFSET
	float                                              HeightOffsetScale;                                        // 0x0A24(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CenterOffset;                                             // 0x0A28(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCameraClip;                                              // 0x0A34(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTeleporting;                                             // 0x0A35(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x0A36(0x0002) MISSED OFFSET
	class AVRController*                               LeftController;                                           // 0x0A38(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class AVRController*                               RightController;                                          // 0x0A40(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              BodyRotationLerpExp;                                      // 0x0A48(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0A4C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 TouchpadInputCurve;                                       // 0x0A50(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseInventory;                                            // 0x0A58(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0A59(0x0007) MISSED OFFSET
	class UClass*                                      InventoryClass;                                           // 0x0A60(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      InventoryLogicClass;                                      // 0x0A68(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OBBSnapInterval;                                          // 0x0A70(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0A74(0x0004) MISSED OFFSET
	class UMaterial*                                   OBBMaterial;                                              // 0x0A78(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NetLerpExp;                                               // 0x0A80(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NetLerpAngularExp;                                        // 0x0A84(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NetUpdateInterval;                                        // 0x0A88(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0A8C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMenuPressed;                                            // 0x0A90(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTriggerPressed;                                         // 0x0AA0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGripPressed;                                            // 0x0AB0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTrackpadPressed;                                        // 0x0AC0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UBehaviorTree*                               FakePlayerBehavior;                                       // 0x0AD0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x8];                                       // 0x0AD8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRFramework.VRPawn");
		return ptr;
	}


	void Teleport(const struct FVector& WorldLocation, const struct FRotator& WorldRotation, EVRTeleportSpace Space);
	void SetFakePlayer(bool bEnabled);
	void SetAllPockets(bool bEnabled);
	void ServerUpdate(const struct FVRNetSnapshot& Snapshot);
	void ServerTeleport(const struct FVector& WorldLocation, const struct FRotator& WorldRotation);
	void ServerRotate(float Yaw);
	void ReCenter();
	void ProjectToFloor();
	void OnTeleport();
	void OnRep_RightController();
	void OnRep_LeftController();
	void OnRep_LatestSnapshot();
	void OnRep_InventoryLogic();
	void OnPreTeleport();
	void OnEndMove();
	void OnBeginMove();
	void MulticastRotated(float Yaw);
	bool IsProne();
	bool IsMoving();
	bool IsFakePlayer();
	bool IsCrouching();
	class UVRPlayerEmulatorComponent* GetPlayerEmulator();
	class USceneComponent* GetPivot();
	float GetMovingSpeed();
	float GetMovingRatio();
	struct FRotator GetHeadRotation();
	struct FVector GetHeadLocation();
	class UCameraComponent* GetHeadCamera();
	struct FVector GetGroundLocation();
	float GetCrouchRatio();
	float GetAvatarScale();
	class UVRAvatarComponent* GetAvatarComponent();
	void ClientBulletPassby(class USoundCue* BuzzingSound, const struct FVector& Location, const struct FVector_NetQuantize& Velocity);
	void CheckAndSwapHands();
	bool CanTeleport();
};


// Class VRFramework.VRPlayArea
// 0x0008 (0x0330 - 0x0328)
class AVRPlayArea : public AActor
{
public:
	class UBoxComponent*                               Volume;                                                   // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRFramework.VRPlayArea");
		return ptr;
	}

};


// Class VRFramework.VRPlayerEmulatorComponent
// 0x01D0 (0x02C0 - 0x00F0)
class UVRPlayerEmulatorComponent : public UActorComponent
{
public:
	struct FRotator                                    AimDeviation;                                             // 0x00F0(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    AimDeviationTarget;                                       // 0x00FC(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              AimDeviationUpdateTimer;                                  // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	class AVRPawn*                                     Pawn;                                                     // 0x0110(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0118(0x0008) MISSED OFFSET
	struct FVREmulatedPlayerPose                       Pose;                                                     // 0x0120(0x00B0) (BlueprintVisible, BlueprintReadOnly)
	struct FVREmulatedPlayerPose                       DesiredPose;                                              // 0x01D0(0x00B0) (BlueprintVisible)
	bool                                               bAim;                                                     // 0x0280(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0281(0x0003) MISSED OFFSET
	float                                              RotationSpeed;                                            // 0x0284(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Accuracy;                                                 // 0x0288(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EVREmulatedPlayerRotation                          RotationMode;                                             // 0x028C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x028D(0x0003) MISSED OFFSET
	struct FVector                                     FocusPoint;                                               // 0x0290(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    AimRotation;                                              // 0x029C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x02A8(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationTarget;                                           // 0x02B4(0x000C) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRFramework.VRPlayerEmulatorComponent");
		return ptr;
	}


	void SetAimRotation(const struct FVector& WorldLocation, float AngleDeviation, bool bEnableAim);
};


// Class VRFramework.VRPocketComponent
// 0x0010 (0x0600 - 0x05F0)
class UVRPocketComponent : public UStaticMeshComponent
{
public:
	class AVRPawn*                                     Pawn;                                                     // 0x05F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x05F8(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x05F9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRFramework.VRPocketComponent");
		return ptr;
	}


	void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void MulticastUnpocketize(class AVRItem* Item);
};


// Class VRFramework.VRSelectionComponent
// 0x0040 (0x0130 - 0x00F0)
class UVRSelectionComponent : public UActorComponent
{
public:
	TArray<class UMeshComponent*>                      ProxyMeshes;                                              // 0x00F0(0x0010) (ExportObject, ZeroConstructor)
	class UMaterialInterface*                          ProxyMeshMaterial;                                        // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRecursive;                                               // 0x0108(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0109(0x0007) MISSED OFFSET
	TArray<struct FName>                               MeshFilter;                                               // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bMeshFilterExclusive;                                     // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
	struct FName                                       ForcedMasterPoseComponent;                                // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRFramework.VRSelectionComponent");
		return ptr;
	}

};


// Class VRFramework.VRSpectatorComponent
// 0x0060 (0x0150 - 0x00F0)
class UVRSpectatorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00F0(0x0018) MISSED OFFSET
	class UMotionControllerComponent*                  LC;                                                       // 0x0108(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMotionControllerComponent*                  RC;                                                       // 0x0110(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bTwoPointGrab;                                            // 0x0118(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0119(0x0003) MISSED OFFSET
	float                                              Scale;                                                    // 0x011C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // 0x0120(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxScale;                                                 // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScaleExp;                                                 // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSpectatorScale;                                         // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSpectatorYaw;                                           // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRFramework.VRSpectatorComponent");
		return ptr;
	}


	void SetTwoPointGrabEnabled(bool bEnabled);
	void SetMotionControllers(class UMotionControllerComponent* LeftController, class UMotionControllerComponent* RightController);
};


// Class VRFramework.VRStatics
// 0x0000 (0x0028 - 0x0028)
class UVRStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRFramework.VRStatics");
		return ptr;
	}


	void STATIC_SaveVRSettings(class UObject* WorldContextObject, const struct FVRSettings& Settings);
	struct FVRSettings STATIC_LoadVRSettings(class UObject* WorldContextObject);
	bool STATIC_IsOculusTouch();
	EVRPlatform STATIC_GetVRPlatform();
	struct FTransform STATIC_GetContraintRefFrame(class UObject* WorldContextObject, class UPhysicsConstraintComponent* ConstraintComponent, TEnumAsByte<EConstraintFrame> Frame);
	void STATIC_ApplyVRSettings(class UObject* WorldContextObject, const struct FVRSettings& Settings);
	void STATIC_ApplyAndSaveSingleVRSettingFromString(class UObject* WorldContextObject, const struct FName& Key, const struct FString& String);
	void STATIC_AddContraintRefFrameOffset(class UObject* WorldContextObject, const struct FVector& Offset, class UPhysicsConstraintComponent* ConstraintComponent, TEnumAsByte<EConstraintFrame> Frame);
};


// Class VRFramework.VRStickComponent
// 0x0030 (0x0460 - 0x0430)
class UVRStickComponent : public UWidgetInteractionComponent
{
public:
	class UStaticMeshComponent*                        Line;                                                     // 0x0430(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMesh*                                 PointerMesh;                                              // 0x0438(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 LineMesh;                                                 // 0x0440(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PointerScale;                                             // 0x0448(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LineScale;                                                // 0x044C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     Channel;                                                  // 0x0450(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0451(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRFramework.VRStickComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
