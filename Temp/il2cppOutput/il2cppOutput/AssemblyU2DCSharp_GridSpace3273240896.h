#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Button
struct Button_t3896396478;
// UnityEngine.UI.Text
struct Text_t9039225;
// GameController
struct GameController_t2782302542;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GridSpace
struct  GridSpace_t3273240896  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Button GridSpace::button
	Button_t3896396478 * ___button_2;
	// UnityEngine.UI.Text GridSpace::buttonText
	Text_t9039225 * ___buttonText_3;
	// GameController GridSpace::gameController
	GameController_t2782302542 * ___gameController_4;

public:
	inline static int32_t get_offset_of_button_2() { return static_cast<int32_t>(offsetof(GridSpace_t3273240896, ___button_2)); }
	inline Button_t3896396478 * get_button_2() const { return ___button_2; }
	inline Button_t3896396478 ** get_address_of_button_2() { return &___button_2; }
	inline void set_button_2(Button_t3896396478 * value)
	{
		___button_2 = value;
		Il2CppCodeGenWriteBarrier(&___button_2, value);
	}

	inline static int32_t get_offset_of_buttonText_3() { return static_cast<int32_t>(offsetof(GridSpace_t3273240896, ___buttonText_3)); }
	inline Text_t9039225 * get_buttonText_3() const { return ___buttonText_3; }
	inline Text_t9039225 ** get_address_of_buttonText_3() { return &___buttonText_3; }
	inline void set_buttonText_3(Text_t9039225 * value)
	{
		___buttonText_3 = value;
		Il2CppCodeGenWriteBarrier(&___buttonText_3, value);
	}

	inline static int32_t get_offset_of_gameController_4() { return static_cast<int32_t>(offsetof(GridSpace_t3273240896, ___gameController_4)); }
	inline GameController_t2782302542 * get_gameController_4() const { return ___gameController_4; }
	inline GameController_t2782302542 ** get_address_of_gameController_4() { return &___gameController_4; }
	inline void set_gameController_4(GameController_t2782302542 * value)
	{
		___gameController_4 = value;
		Il2CppCodeGenWriteBarrier(&___gameController_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
