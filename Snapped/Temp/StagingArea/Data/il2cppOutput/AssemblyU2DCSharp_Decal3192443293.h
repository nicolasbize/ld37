#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Sprite
struct Sprite_t309593783;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Decal
struct  Decal_t3192443293  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Material Decal::material
	Material_t193706927 * ___material_2;
	// UnityEngine.Sprite Decal::sprite
	Sprite_t309593783 * ___sprite_3;
	// System.Single Decal::maxAngle
	float ___maxAngle_4;
	// System.Single Decal::pushDistance
	float ___pushDistance_5;
	// UnityEngine.LayerMask Decal::affectedLayers
	LayerMask_t3188175821  ___affectedLayers_6;

public:
	inline static int32_t get_offset_of_material_2() { return static_cast<int32_t>(offsetof(Decal_t3192443293, ___material_2)); }
	inline Material_t193706927 * get_material_2() const { return ___material_2; }
	inline Material_t193706927 ** get_address_of_material_2() { return &___material_2; }
	inline void set_material_2(Material_t193706927 * value)
	{
		___material_2 = value;
		Il2CppCodeGenWriteBarrier(&___material_2, value);
	}

	inline static int32_t get_offset_of_sprite_3() { return static_cast<int32_t>(offsetof(Decal_t3192443293, ___sprite_3)); }
	inline Sprite_t309593783 * get_sprite_3() const { return ___sprite_3; }
	inline Sprite_t309593783 ** get_address_of_sprite_3() { return &___sprite_3; }
	inline void set_sprite_3(Sprite_t309593783 * value)
	{
		___sprite_3 = value;
		Il2CppCodeGenWriteBarrier(&___sprite_3, value);
	}

	inline static int32_t get_offset_of_maxAngle_4() { return static_cast<int32_t>(offsetof(Decal_t3192443293, ___maxAngle_4)); }
	inline float get_maxAngle_4() const { return ___maxAngle_4; }
	inline float* get_address_of_maxAngle_4() { return &___maxAngle_4; }
	inline void set_maxAngle_4(float value)
	{
		___maxAngle_4 = value;
	}

	inline static int32_t get_offset_of_pushDistance_5() { return static_cast<int32_t>(offsetof(Decal_t3192443293, ___pushDistance_5)); }
	inline float get_pushDistance_5() const { return ___pushDistance_5; }
	inline float* get_address_of_pushDistance_5() { return &___pushDistance_5; }
	inline void set_pushDistance_5(float value)
	{
		___pushDistance_5 = value;
	}

	inline static int32_t get_offset_of_affectedLayers_6() { return static_cast<int32_t>(offsetof(Decal_t3192443293, ___affectedLayers_6)); }
	inline LayerMask_t3188175821  get_affectedLayers_6() const { return ___affectedLayers_6; }
	inline LayerMask_t3188175821 * get_address_of_affectedLayers_6() { return &___affectedLayers_6; }
	inline void set_affectedLayers_6(LayerMask_t3188175821  value)
	{
		___affectedLayers_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
