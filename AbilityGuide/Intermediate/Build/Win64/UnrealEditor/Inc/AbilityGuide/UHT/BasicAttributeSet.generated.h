// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BasicAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef ABILITYGUIDE_BasicAttributeSet_generated_h
#error "BasicAttributeSet.generated.h already included, missing '#pragma once' in BasicAttributeSet.h"
#endif
#define ABILITYGUIDE_BasicAttributeSet_generated_h

#define FID_AbilityGuide_Source_AbilityGuide_BasicAttributeSet_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_Speed); \
	DECLARE_FUNCTION(execOnRep_HealthMax); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_AbilityGuide_Source_AbilityGuide_BasicAttributeSet_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBasicAttributeSet(); \
	friend struct Z_Construct_UClass_UBasicAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UBasicAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AbilityGuide"), NO_API) \
	DECLARE_SERIALIZER(UBasicAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		HealthMax, \
		Speed, \
		NETFIELD_REP_END=Speed	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UBasicAttributeSet) \
public:


#define FID_AbilityGuide_Source_AbilityGuide_BasicAttributeSet_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBasicAttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBasicAttributeSet(UBasicAttributeSet&&); \
	UBasicAttributeSet(const UBasicAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBasicAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBasicAttributeSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBasicAttributeSet) \
	NO_API virtual ~UBasicAttributeSet();


#define FID_AbilityGuide_Source_AbilityGuide_BasicAttributeSet_h_9_PROLOG
#define FID_AbilityGuide_Source_AbilityGuide_BasicAttributeSet_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AbilityGuide_Source_AbilityGuide_BasicAttributeSet_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AbilityGuide_Source_AbilityGuide_BasicAttributeSet_h_12_INCLASS_NO_PURE_DECLS \
	FID_AbilityGuide_Source_AbilityGuide_BasicAttributeSet_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYGUIDE_API UClass* StaticClass<class UBasicAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AbilityGuide_Source_AbilityGuide_BasicAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
