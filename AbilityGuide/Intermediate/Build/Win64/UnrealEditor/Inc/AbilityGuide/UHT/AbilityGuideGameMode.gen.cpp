// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilityGuide/AbilityGuideGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityGuideGameMode() {}

// Begin Cross Module References
ABILITYGUIDE_API UClass* Z_Construct_UClass_AAbilityGuideGameMode();
ABILITYGUIDE_API UClass* Z_Construct_UClass_AAbilityGuideGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_AbilityGuide();
// End Cross Module References

// Begin Class AAbilityGuideGameMode
void AAbilityGuideGameMode::StaticRegisterNativesAAbilityGuideGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAbilityGuideGameMode);
UClass* Z_Construct_UClass_AAbilityGuideGameMode_NoRegister()
{
	return AAbilityGuideGameMode::StaticClass();
}
struct Z_Construct_UClass_AAbilityGuideGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AbilityGuideGameMode.h" },
		{ "ModuleRelativePath", "AbilityGuideGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAbilityGuideGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAbilityGuideGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AbilityGuide,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAbilityGuideGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAbilityGuideGameMode_Statics::ClassParams = {
	&AAbilityGuideGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAbilityGuideGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AAbilityGuideGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAbilityGuideGameMode()
{
	if (!Z_Registration_Info_UClass_AAbilityGuideGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAbilityGuideGameMode.OuterSingleton, Z_Construct_UClass_AAbilityGuideGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAbilityGuideGameMode.OuterSingleton;
}
template<> ABILITYGUIDE_API UClass* StaticClass<AAbilityGuideGameMode>()
{
	return AAbilityGuideGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAbilityGuideGameMode);
AAbilityGuideGameMode::~AAbilityGuideGameMode() {}
// End Class AAbilityGuideGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_AbilityGuide_Source_AbilityGuide_AbilityGuideGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAbilityGuideGameMode, AAbilityGuideGameMode::StaticClass, TEXT("AAbilityGuideGameMode"), &Z_Registration_Info_UClass_AAbilityGuideGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAbilityGuideGameMode), 3451495918U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AbilityGuide_Source_AbilityGuide_AbilityGuideGameMode_h_1614042410(TEXT("/Script/AbilityGuide"),
	Z_CompiledInDeferFile_FID_AbilityGuide_Source_AbilityGuide_AbilityGuideGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AbilityGuide_Source_AbilityGuide_AbilityGuideGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
