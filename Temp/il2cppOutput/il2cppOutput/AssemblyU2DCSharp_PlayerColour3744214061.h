#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerColour
struct  PlayerColour_t3744214061  : public Il2CppObject
{
public:
	// UnityEngine.Color PlayerColour::panelColour
	Color_t4194546905  ___panelColour_0;
	// UnityEngine.Color PlayerColour::textColour
	Color_t4194546905  ___textColour_1;

public:
	inline static int32_t get_offset_of_panelColour_0() { return static_cast<int32_t>(offsetof(PlayerColour_t3744214061, ___panelColour_0)); }
	inline Color_t4194546905  get_panelColour_0() const { return ___panelColour_0; }
	inline Color_t4194546905 * get_address_of_panelColour_0() { return &___panelColour_0; }
	inline void set_panelColour_0(Color_t4194546905  value)
	{
		___panelColour_0 = value;
	}

	inline static int32_t get_offset_of_textColour_1() { return static_cast<int32_t>(offsetof(PlayerColour_t3744214061, ___textColour_1)); }
	inline Color_t4194546905  get_textColour_1() const { return ___textColour_1; }
	inline Color_t4194546905 * get_address_of_textColour_1() { return &___textColour_1; }
	inline void set_textColour_1(Color_t4194546905  value)
	{
		___textColour_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
