#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FrontDoor
struct  FrontDoor_t4103723497  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean FrontDoor::isFinale
	bool ___isFinale_2;
	// UnityEngine.GameObject FrontDoor::trigger
	GameObject_t1756533147 * ___trigger_3;

public:
	inline static int32_t get_offset_of_isFinale_2() { return static_cast<int32_t>(offsetof(FrontDoor_t4103723497, ___isFinale_2)); }
	inline bool get_isFinale_2() const { return ___isFinale_2; }
	inline bool* get_address_of_isFinale_2() { return &___isFinale_2; }
	inline void set_isFinale_2(bool value)
	{
		___isFinale_2 = value;
	}

	inline static int32_t get_offset_of_trigger_3() { return static_cast<int32_t>(offsetof(FrontDoor_t4103723497, ___trigger_3)); }
	inline GameObject_t1756533147 * get_trigger_3() const { return ___trigger_3; }
	inline GameObject_t1756533147 ** get_address_of_trigger_3() { return &___trigger_3; }
	inline void set_trigger_3(GameObject_t1756533147 * value)
	{
		___trigger_3 = value;
		Il2CppCodeGenWriteBarrier(&___trigger_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
