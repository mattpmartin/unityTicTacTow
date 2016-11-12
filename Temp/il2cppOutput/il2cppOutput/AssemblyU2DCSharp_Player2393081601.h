#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t538875265;
// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.UI.Button
struct Button_t3896396478;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player
struct  Player_t2393081601  : public Il2CppObject
{
public:
	// UnityEngine.UI.Image Player::panel
	Image_t538875265 * ___panel_0;
	// UnityEngine.UI.Text Player::text
	Text_t9039225 * ___text_1;
	// UnityEngine.UI.Button Player::button
	Button_t3896396478 * ___button_2;

public:
	inline static int32_t get_offset_of_panel_0() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___panel_0)); }
	inline Image_t538875265 * get_panel_0() const { return ___panel_0; }
	inline Image_t538875265 ** get_address_of_panel_0() { return &___panel_0; }
	inline void set_panel_0(Image_t538875265 * value)
	{
		___panel_0 = value;
		Il2CppCodeGenWriteBarrier(&___panel_0, value);
	}

	inline static int32_t get_offset_of_text_1() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___text_1)); }
	inline Text_t9039225 * get_text_1() const { return ___text_1; }
	inline Text_t9039225 ** get_address_of_text_1() { return &___text_1; }
	inline void set_text_1(Text_t9039225 * value)
	{
		___text_1 = value;
		Il2CppCodeGenWriteBarrier(&___text_1, value);
	}

	inline static int32_t get_offset_of_button_2() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___button_2)); }
	inline Button_t3896396478 * get_button_2() const { return ___button_2; }
	inline Button_t3896396478 ** get_address_of_button_2() { return &___button_2; }
	inline void set_button_2(Button_t3896396478 * value)
	{
		___button_2 = value;
		Il2CppCodeGenWriteBarrier(&___button_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
