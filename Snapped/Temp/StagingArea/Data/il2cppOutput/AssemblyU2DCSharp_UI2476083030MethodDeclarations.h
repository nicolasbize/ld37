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

// UI
struct UI_t2476083030;
// System.String
struct String_t;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_AudioClip1932558630.h"

// System.Void UI::.ctor()
extern "C"  void UI__ctor_m2541156979 (UI_t2476083030 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI::Start()
extern "C"  void UI_Start_m1466288183 (UI_t2476083030 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI::StartSpeech()
extern "C"  void UI_StartSpeech_m839052787 (UI_t2476083030 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI::FoundClue(System.String)
extern "C"  void UI_FoundClue_m1840700974 (UI_t2476083030 * __this, String_t* ___clue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI::DisplayDismissableItem(System.String)
extern "C"  void UI_DisplayDismissableItem_m3152671558 (UI_t2476083030 * __this, String_t* ___objName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI::DisplayDismissableItem(System.String,UnityEngine.AudioClip,UnityEngine.AudioClip)
extern "C"  void UI_DisplayDismissableItem_m2883818854 (UI_t2476083030 * __this, String_t* ___objName0, AudioClip_t1932558630 * ___audioEnter1, AudioClip_t1932558630 * ___audioExit2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI::Update()
extern "C"  void UI_Update_m3923300708 (UI_t2476083030 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI::CrossFadeMusic()
extern "C"  void UI_CrossFadeMusic_m278660868 (UI_t2476083030 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UI::EndGame()
extern "C"  void UI_EndGame_m3188656878 (UI_t2476083030 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
