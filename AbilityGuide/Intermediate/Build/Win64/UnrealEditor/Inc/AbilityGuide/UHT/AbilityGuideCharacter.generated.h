// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilityGuideCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABILITYGUIDE_AbilityGuideCharacter_generated_h
#error "AbilityGuideCharacter.generated.h already included, missing '#pragma once' in AbilityGuideCharacter.h"
#endif
#define ABILITYGUIDE_AbilityGuideCharacter_generated_h

#define FID_AbilityGuide_Source_AbilityGuide_AbilityGuideCharacter_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAbilityGuideCharacter(); \
	friend struct Z_Construct_UClass_AAbilityGuideCharacter_Statics; \
public: \
	DECLARE_CLASS(AAbilityGuideCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AbilityGuide"), NO_API) \
	DECLARE_SERIALIZER(AAbilityGuideCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AAbilityGuideCharacter*>(this); }


#define FID_AbilityGuide_Source_AbilityGuide_AbilityGuideCharacter_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAbilityGuideCharacter(AAbilityGuideCharacter&&); \
	AAbilityGuideCharacter(const AAbilityGuideCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAbilityGuideCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAbilityGuideCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAbilityGuideCharacter) \
	NO_API virtual ~AAbilityGuideCharacter();


#define FID_AbilityGuide_Source_AbilityGuide_AbilityGuideCharacter_h_34_PROLOG
#define FID_AbilityGuide_Source_AbilityGuide_AbilityGuideCharacter_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AbilityGuide_Source_AbilityGuide_AbilityGuideCharacter_h_37_INCLASS_NO_PURE_DECLS \
	FID_AbilityGuide_Source_AbilityGuide_AbilityGuideCharacter_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABILITYGUIDE_API UClass* StaticClass<class AAbilityGuideCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AbilityGuide_Source_AbilityGuide_AbilityGuideCharacter_h


#define FOREACH_ENUM_EABILITYINPUTID(op) \
	op(EAbilityInputID::Attack) \
	op(EAbilityInputID::Item) \
	op(EAbilityInputID::Dash) 

namespace EAbilityInputID { enum Type : int; }
template<> ABILITYGUIDE_API UEnum* StaticEnum<EAbilityInputID::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
