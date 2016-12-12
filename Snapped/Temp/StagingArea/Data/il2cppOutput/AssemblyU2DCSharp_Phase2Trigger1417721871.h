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

// Phase2Trigger
struct  Phase2Trigger_t1417721871  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Phase2Trigger::entered
	bool ___entered_2;
	// System.Boolean Phase2Trigger::shifted
	bool ___shifted_3;
	// UnityEngine.GameObject Phase2Trigger::phase2Decals
	GameObject_t1756533147 * ___phase2Decals_4;

public:
	inline static int32_t get_offset_of_entered_2() { return static_cast<int32_t>(offsetof(Phase2Trigger_t1417721871, ___entered_2)); }
	inline bool get_entered_2() const { return ___entered_2; }
	inline bool* get_address_of_entered_2() { return &___entered_2; }
	inline void set_entered_2(bool value)
	{
		___entered_2 = value;
	}

	inline static int32_t get_offset_of_shifted_3() { return static_cast<int32_t>(offsetof(Phase2Trigger_t1417721871, ___shifted_3)); }
	inline bool get_shifted_3() const { return ___shifted_3; }
	inline bool* get_address_of_shifted_3() { return &___shifted_3; }
	inline void set_shifted_3(bool value)
	{
		___shifted_3 = value;
	}

	inline static int32_t get_offset_of_phase2Decals_4() { return static_cast<int32_t>(offsetof(Phase2Trigger_t1417721871, ___phase2Decals_4)); }
	inline GameObject_t1756533147 * get_phase2Decals_4() const { return ___phase2Decals_4; }
	inline GameObject_t1756533147 ** get_address_of_phase2Decals_4() { return &___phase2Decals_4; }
	inline void set_phase2Decals_4(GameObject_t1756533147 * value)
	{
		___phase2Decals_4 = value;
		Il2CppCodeGenWriteBarrier(&___phase2Decals_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
