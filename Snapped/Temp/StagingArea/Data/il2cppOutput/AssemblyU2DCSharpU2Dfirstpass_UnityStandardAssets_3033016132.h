﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t189460977;
// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings
struct MovementSettings_t2022709369;
// UnityStandardAssets.Characters.FirstPerson.MouseLook
struct MouseLook_t1211692966;
// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings
struct AdvancedSettings_t2437783586;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t720607407;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController
struct  RigidbodyFirstPersonController_t3033016132  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::cam
	Camera_t189460977 * ___cam_2;
	// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/MovementSettings UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::movementSettings
	MovementSettings_t2022709369 * ___movementSettings_3;
	// UnityStandardAssets.Characters.FirstPerson.MouseLook UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::mouseLook
	MouseLook_t1211692966 * ___mouseLook_4;
	// UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController/AdvancedSettings UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::advancedSettings
	AdvancedSettings_t2437783586 * ___advancedSettings_5;
	// UnityEngine.Rigidbody UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_RigidBody
	Rigidbody_t4233889191 * ___m_RigidBody_6;
	// UnityEngine.CapsuleCollider UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_Capsule
	CapsuleCollider_t720607407 * ___m_Capsule_7;
	// System.Single UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_YRotation
	float ___m_YRotation_8;
	// UnityEngine.Vector3 UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_GroundContactNormal
	Vector3_t2243707580  ___m_GroundContactNormal_9;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_Jump
	bool ___m_Jump_10;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_PreviouslyGrounded
	bool ___m_PreviouslyGrounded_11;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_Jumping
	bool ___m_Jumping_12;
	// System.Boolean UnityStandardAssets.Characters.FirstPerson.RigidbodyFirstPersonController::m_IsGrounded
	bool ___m_IsGrounded_13;

public:
	inline static int32_t get_offset_of_cam_2() { return static_cast<int32_t>(offsetof(RigidbodyFirstPersonController_t3033016132, ___cam_2)); }
	inline Camera_t189460977 * get_cam_2() const { return ___cam_2; }
	inline Camera_t189460977 ** get_address_of_cam_2() { return &___cam_2; }
	inline void set_cam_2(Camera_t189460977 * value)
	{
		___cam_2 = value;
		Il2CppCodeGenWriteBarrier(&___cam_2, value);
	}

	inline static int32_t get_offset_of_movementSettings_3() { return static_cast<int32_t>(offsetof(RigidbodyFirstPersonController_t3033016132, ___movementSettings_3)); }
	inline MovementSettings_t2022709369 * get_movementSettings_3() const { return ___movementSettings_3; }
	inline MovementSettings_t2022709369 ** get_address_of_movementSettings_3() { return &___movementSettings_3; }
	inline void set_movementSettings_3(MovementSettings_t2022709369 * value)
	{
		___movementSettings_3 = value;
		Il2CppCodeGenWriteBarrier(&___movementSettings_3, value);
	}

	inline static int32_t get_offset_of_mouseLook_4() { return static_cast<int32_t>(offsetof(RigidbodyFirstPersonController_t3033016132, ___mouseLook_4)); }
	inline MouseLook_t1211692966 * get_mouseLook_4() const { return ___mouseLook_4; }
	inline MouseLook_t1211692966 ** get_address_of_mouseLook_4() { return &___mouseLook_4; }
	inline void set_mouseLook_4(MouseLook_t1211692966 * value)
	{
		___mouseLook_4 = value;
		Il2CppCodeGenWriteBarrier(&___mouseLook_4, value);
	}

	inline static int32_t get_offset_of_advancedSettings_5() { return static_cast<int32_t>(offsetof(RigidbodyFirstPersonController_t3033016132, ___advancedSettings_5)); }
	inline AdvancedSettings_t2437783586 * get_advancedSettings_5() const { return ___advancedSettings_5; }
	inline AdvancedSettings_t2437783586 ** get_address_of_advancedSettings_5() { return &___advancedSettings_5; }
	inline void set_advancedSettings_5(AdvancedSettings_t2437783586 * value)
	{
		___advancedSettings_5 = value;
		Il2CppCodeGenWriteBarrier(&___advancedSettings_5, value);
	}

	inline static int32_t get_offset_of_m_RigidBody_6() { return static_cast<int32_t>(offsetof(RigidbodyFirstPersonController_t3033016132, ___m_RigidBody_6)); }
	inline Rigidbody_t4233889191 * get_m_RigidBody_6() const { return ___m_RigidBody_6; }
	inline Rigidbody_t4233889191 ** get_address_of_m_RigidBody_6() { return &___m_RigidBody_6; }
	inline void set_m_RigidBody_6(Rigidbody_t4233889191 * value)
	{
		___m_RigidBody_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_RigidBody_6, value);
	}

	inline static int32_t get_offset_of_m_Capsule_7() { return static_cast<int32_t>(offsetof(RigidbodyFirstPersonController_t3033016132, ___m_Capsule_7)); }
	inline CapsuleCollider_t720607407 * get_m_Capsule_7() const { return ___m_Capsule_7; }
	inline CapsuleCollider_t720607407 ** get_address_of_m_Capsule_7() { return &___m_Capsule_7; }
	inline void set_m_Capsule_7(CapsuleCollider_t720607407 * value)
	{
		___m_Capsule_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_Capsule_7, value);
	}

	inline static int32_t get_offset_of_m_YRotation_8() { return static_cast<int32_t>(offsetof(RigidbodyFirstPersonController_t3033016132, ___m_YRotation_8)); }
	inline float get_m_YRotation_8() const { return ___m_YRotation_8; }
	inline float* get_address_of_m_YRotation_8() { return &___m_YRotation_8; }
	inline void set_m_YRotation_8(float value)
	{
		___m_YRotation_8 = value;
	}

	inline static int32_t get_offset_of_m_GroundContactNormal_9() { return static_cast<int32_t>(offsetof(RigidbodyFirstPersonController_t3033016132, ___m_GroundContactNormal_9)); }
	inline Vector3_t2243707580  get_m_GroundContactNormal_9() const { return ___m_GroundContactNormal_9; }
	inline Vector3_t2243707580 * get_address_of_m_GroundContactNormal_9() { return &___m_GroundContactNormal_9; }
	inline void set_m_GroundContactNormal_9(Vector3_t2243707580  value)
	{
		___m_GroundContactNormal_9 = value;
	}

	inline static int32_t get_offset_of_m_Jump_10() { return static_cast<int32_t>(offsetof(RigidbodyFirstPersonController_t3033016132, ___m_Jump_10)); }
	inline bool get_m_Jump_10() const { return ___m_Jump_10; }
	inline bool* get_address_of_m_Jump_10() { return &___m_Jump_10; }
	inline void set_m_Jump_10(bool value)
	{
		___m_Jump_10 = value;
	}

	inline static int32_t get_offset_of_m_PreviouslyGrounded_11() { return static_cast<int32_t>(offsetof(RigidbodyFirstPersonController_t3033016132, ___m_PreviouslyGrounded_11)); }
	inline bool get_m_PreviouslyGrounded_11() const { return ___m_PreviouslyGrounded_11; }
	inline bool* get_address_of_m_PreviouslyGrounded_11() { return &___m_PreviouslyGrounded_11; }
	inline void set_m_PreviouslyGrounded_11(bool value)
	{
		___m_PreviouslyGrounded_11 = value;
	}

	inline static int32_t get_offset_of_m_Jumping_12() { return static_cast<int32_t>(offsetof(RigidbodyFirstPersonController_t3033016132, ___m_Jumping_12)); }
	inline bool get_m_Jumping_12() const { return ___m_Jumping_12; }
	inline bool* get_address_of_m_Jumping_12() { return &___m_Jumping_12; }
	inline void set_m_Jumping_12(bool value)
	{
		___m_Jumping_12 = value;
	}

	inline static int32_t get_offset_of_m_IsGrounded_13() { return static_cast<int32_t>(offsetof(RigidbodyFirstPersonController_t3033016132, ___m_IsGrounded_13)); }
	inline bool get_m_IsGrounded_13() const { return ___m_IsGrounded_13; }
	inline bool* get_address_of_m_IsGrounded_13() { return &___m_IsGrounded_13; }
	inline void set_m_IsGrounded_13(bool value)
	{
		___m_IsGrounded_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
