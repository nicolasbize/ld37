#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t2203355011;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SoundManager
struct  SoundManager_t654432262  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioClip[] SoundManager::audioClips
	AudioClipU5BU5D_t2203355011* ___audioClips_2;
	// System.Int32 SoundManager::timer
	int32_t ___timer_3;

public:
	inline static int32_t get_offset_of_audioClips_2() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___audioClips_2)); }
	inline AudioClipU5BU5D_t2203355011* get_audioClips_2() const { return ___audioClips_2; }
	inline AudioClipU5BU5D_t2203355011** get_address_of_audioClips_2() { return &___audioClips_2; }
	inline void set_audioClips_2(AudioClipU5BU5D_t2203355011* value)
	{
		___audioClips_2 = value;
		Il2CppCodeGenWriteBarrier(&___audioClips_2, value);
	}

	inline static int32_t get_offset_of_timer_3() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___timer_3)); }
	inline int32_t get_timer_3() const { return ___timer_3; }
	inline int32_t* get_address_of_timer_3() { return &___timer_3; }
	inline void set_timer_3(int32_t value)
	{
		___timer_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
