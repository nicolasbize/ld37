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
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t362681087;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UI
struct  UI_t2476083030  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean UI::hasStarted
	bool ___hasStarted_2;
	// System.Int32 UI::timer
	int32_t ___timer_3;
	// UnityEngine.GameObject UI::activeObject
	GameObject_t1756533147 * ___activeObject_4;
	// UnityEngine.AudioClip UI::introMusic
	AudioClip_t1932558630 * ___introMusic_5;
	// UnityEngine.AudioClip UI::mainMusic
	AudioClip_t1932558630 * ___mainMusic_6;
	// UnityEngine.AudioClip UI::endMusic
	AudioClip_t1932558630 * ___endMusic_7;
	// System.Single UI::introMusicVolume
	float ___introMusicVolume_8;
	// System.Single UI::mainMusicVolume
	float ___mainMusicVolume_9;
	// System.Boolean UI::isFadingMusic
	bool ___isFadingMusic_10;
	// UnityEngine.AudioClip UI::currentClip
	AudioClip_t1932558630 * ___currentClip_11;
	// System.Collections.Generic.HashSet`1<System.String> UI::cluesFound
	HashSet_1_t362681087 * ___cluesFound_12;

public:
	inline static int32_t get_offset_of_hasStarted_2() { return static_cast<int32_t>(offsetof(UI_t2476083030, ___hasStarted_2)); }
	inline bool get_hasStarted_2() const { return ___hasStarted_2; }
	inline bool* get_address_of_hasStarted_2() { return &___hasStarted_2; }
	inline void set_hasStarted_2(bool value)
	{
		___hasStarted_2 = value;
	}

	inline static int32_t get_offset_of_timer_3() { return static_cast<int32_t>(offsetof(UI_t2476083030, ___timer_3)); }
	inline int32_t get_timer_3() const { return ___timer_3; }
	inline int32_t* get_address_of_timer_3() { return &___timer_3; }
	inline void set_timer_3(int32_t value)
	{
		___timer_3 = value;
	}

	inline static int32_t get_offset_of_activeObject_4() { return static_cast<int32_t>(offsetof(UI_t2476083030, ___activeObject_4)); }
	inline GameObject_t1756533147 * get_activeObject_4() const { return ___activeObject_4; }
	inline GameObject_t1756533147 ** get_address_of_activeObject_4() { return &___activeObject_4; }
	inline void set_activeObject_4(GameObject_t1756533147 * value)
	{
		___activeObject_4 = value;
		Il2CppCodeGenWriteBarrier(&___activeObject_4, value);
	}

	inline static int32_t get_offset_of_introMusic_5() { return static_cast<int32_t>(offsetof(UI_t2476083030, ___introMusic_5)); }
	inline AudioClip_t1932558630 * get_introMusic_5() const { return ___introMusic_5; }
	inline AudioClip_t1932558630 ** get_address_of_introMusic_5() { return &___introMusic_5; }
	inline void set_introMusic_5(AudioClip_t1932558630 * value)
	{
		___introMusic_5 = value;
		Il2CppCodeGenWriteBarrier(&___introMusic_5, value);
	}

	inline static int32_t get_offset_of_mainMusic_6() { return static_cast<int32_t>(offsetof(UI_t2476083030, ___mainMusic_6)); }
	inline AudioClip_t1932558630 * get_mainMusic_6() const { return ___mainMusic_6; }
	inline AudioClip_t1932558630 ** get_address_of_mainMusic_6() { return &___mainMusic_6; }
	inline void set_mainMusic_6(AudioClip_t1932558630 * value)
	{
		___mainMusic_6 = value;
		Il2CppCodeGenWriteBarrier(&___mainMusic_6, value);
	}

	inline static int32_t get_offset_of_endMusic_7() { return static_cast<int32_t>(offsetof(UI_t2476083030, ___endMusic_7)); }
	inline AudioClip_t1932558630 * get_endMusic_7() const { return ___endMusic_7; }
	inline AudioClip_t1932558630 ** get_address_of_endMusic_7() { return &___endMusic_7; }
	inline void set_endMusic_7(AudioClip_t1932558630 * value)
	{
		___endMusic_7 = value;
		Il2CppCodeGenWriteBarrier(&___endMusic_7, value);
	}

	inline static int32_t get_offset_of_introMusicVolume_8() { return static_cast<int32_t>(offsetof(UI_t2476083030, ___introMusicVolume_8)); }
	inline float get_introMusicVolume_8() const { return ___introMusicVolume_8; }
	inline float* get_address_of_introMusicVolume_8() { return &___introMusicVolume_8; }
	inline void set_introMusicVolume_8(float value)
	{
		___introMusicVolume_8 = value;
	}

	inline static int32_t get_offset_of_mainMusicVolume_9() { return static_cast<int32_t>(offsetof(UI_t2476083030, ___mainMusicVolume_9)); }
	inline float get_mainMusicVolume_9() const { return ___mainMusicVolume_9; }
	inline float* get_address_of_mainMusicVolume_9() { return &___mainMusicVolume_9; }
	inline void set_mainMusicVolume_9(float value)
	{
		___mainMusicVolume_9 = value;
	}

	inline static int32_t get_offset_of_isFadingMusic_10() { return static_cast<int32_t>(offsetof(UI_t2476083030, ___isFadingMusic_10)); }
	inline bool get_isFadingMusic_10() const { return ___isFadingMusic_10; }
	inline bool* get_address_of_isFadingMusic_10() { return &___isFadingMusic_10; }
	inline void set_isFadingMusic_10(bool value)
	{
		___isFadingMusic_10 = value;
	}

	inline static int32_t get_offset_of_currentClip_11() { return static_cast<int32_t>(offsetof(UI_t2476083030, ___currentClip_11)); }
	inline AudioClip_t1932558630 * get_currentClip_11() const { return ___currentClip_11; }
	inline AudioClip_t1932558630 ** get_address_of_currentClip_11() { return &___currentClip_11; }
	inline void set_currentClip_11(AudioClip_t1932558630 * value)
	{
		___currentClip_11 = value;
		Il2CppCodeGenWriteBarrier(&___currentClip_11, value);
	}

	inline static int32_t get_offset_of_cluesFound_12() { return static_cast<int32_t>(offsetof(UI_t2476083030, ___cluesFound_12)); }
	inline HashSet_1_t362681087 * get_cluesFound_12() const { return ___cluesFound_12; }
	inline HashSet_1_t362681087 ** get_address_of_cluesFound_12() { return &___cluesFound_12; }
	inline void set_cluesFound_12(HashSet_1_t362681087 * value)
	{
		___cluesFound_12 = value;
		Il2CppCodeGenWriteBarrier(&___cluesFound_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
