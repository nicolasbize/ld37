#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// SoundManager
struct SoundManager_t654432262;
// System.String
struct String_t;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_AudioClip1932558630.h"

// System.Void SoundManager::.ctor()
extern "C"  void SoundManager__ctor_m3417712111 (SoundManager_t654432262 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::PlaySound(System.String,System.Boolean)
extern "C"  void SoundManager_PlaySound_m1446448881 (SoundManager_t654432262 * __this, String_t* ___name0, bool ___loop1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoundManager::PlaySound(UnityEngine.AudioClip,System.Boolean)
extern "C"  void SoundManager_PlaySound_m387897004 (SoundManager_t654432262 * __this, AudioClip_t1932558630 * ___clip0, bool ___loop1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SoundManager::IsPlaying()
extern "C"  bool SoundManager_IsPlaying_m53552765 (SoundManager_t654432262 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
