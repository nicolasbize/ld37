#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t1932558630;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ClueCollider
struct  ClueCollider_t2703257271  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean ClueCollider::givePoints
	bool ___givePoints_2;
	// UnityEngine.AudioClip ClueCollider::clip
	AudioClip_t1932558630 * ___clip_3;
	// System.Boolean ClueCollider::loop
	bool ___loop_4;

public:
	inline static int32_t get_offset_of_givePoints_2() { return static_cast<int32_t>(offsetof(ClueCollider_t2703257271, ___givePoints_2)); }
	inline bool get_givePoints_2() const { return ___givePoints_2; }
	inline bool* get_address_of_givePoints_2() { return &___givePoints_2; }
	inline void set_givePoints_2(bool value)
	{
		___givePoints_2 = value;
	}

	inline static int32_t get_offset_of_clip_3() { return static_cast<int32_t>(offsetof(ClueCollider_t2703257271, ___clip_3)); }
	inline AudioClip_t1932558630 * get_clip_3() const { return ___clip_3; }
	inline AudioClip_t1932558630 ** get_address_of_clip_3() { return &___clip_3; }
	inline void set_clip_3(AudioClip_t1932558630 * value)
	{
		___clip_3 = value;
		Il2CppCodeGenWriteBarrier(&___clip_3, value);
	}

	inline static int32_t get_offset_of_loop_4() { return static_cast<int32_t>(offsetof(ClueCollider_t2703257271, ___loop_4)); }
	inline bool get_loop_4() const { return ___loop_4; }
	inline bool* get_address_of_loop_4() { return &___loop_4; }
	inline void set_loop_4(bool value)
	{
		___loop_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
