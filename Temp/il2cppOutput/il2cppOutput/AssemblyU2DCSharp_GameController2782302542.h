#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text[]
struct TextU5BU5D_t3798907012;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.UI.Text
struct Text_t9039225;
// Player
struct Player_t2393081601;
// PlayerColour
struct PlayerColour_t3744214061;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t2782302542  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Text[] GameController::buttonList
	TextU5BU5D_t3798907012* ___buttonList_2;
	// System.String GameController::playerSide
	String_t* ___playerSide_3;
	// UnityEngine.GameObject GameController::gameOverPanel
	GameObject_t3674682005 * ___gameOverPanel_4;
	// UnityEngine.UI.Text GameController::gameOverText
	Text_t9039225 * ___gameOverText_5;
	// UnityEngine.GameObject GameController::restartButton
	GameObject_t3674682005 * ___restartButton_6;
	// Player GameController::playerX
	Player_t2393081601 * ___playerX_7;
	// Player GameController::playerO
	Player_t2393081601 * ___playerO_8;
	// UnityEngine.GameObject GameController::startInfo
	GameObject_t3674682005 * ___startInfo_9;
	// PlayerColour GameController::activePlayerColour
	PlayerColour_t3744214061 * ___activePlayerColour_10;
	// PlayerColour GameController::inactivePlayerColour
	PlayerColour_t3744214061 * ___inactivePlayerColour_11;
	// System.Int32 GameController::moveCount
	int32_t ___moveCount_12;

public:
	inline static int32_t get_offset_of_buttonList_2() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___buttonList_2)); }
	inline TextU5BU5D_t3798907012* get_buttonList_2() const { return ___buttonList_2; }
	inline TextU5BU5D_t3798907012** get_address_of_buttonList_2() { return &___buttonList_2; }
	inline void set_buttonList_2(TextU5BU5D_t3798907012* value)
	{
		___buttonList_2 = value;
		Il2CppCodeGenWriteBarrier(&___buttonList_2, value);
	}

	inline static int32_t get_offset_of_playerSide_3() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___playerSide_3)); }
	inline String_t* get_playerSide_3() const { return ___playerSide_3; }
	inline String_t** get_address_of_playerSide_3() { return &___playerSide_3; }
	inline void set_playerSide_3(String_t* value)
	{
		___playerSide_3 = value;
		Il2CppCodeGenWriteBarrier(&___playerSide_3, value);
	}

	inline static int32_t get_offset_of_gameOverPanel_4() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___gameOverPanel_4)); }
	inline GameObject_t3674682005 * get_gameOverPanel_4() const { return ___gameOverPanel_4; }
	inline GameObject_t3674682005 ** get_address_of_gameOverPanel_4() { return &___gameOverPanel_4; }
	inline void set_gameOverPanel_4(GameObject_t3674682005 * value)
	{
		___gameOverPanel_4 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverPanel_4, value);
	}

	inline static int32_t get_offset_of_gameOverText_5() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___gameOverText_5)); }
	inline Text_t9039225 * get_gameOverText_5() const { return ___gameOverText_5; }
	inline Text_t9039225 ** get_address_of_gameOverText_5() { return &___gameOverText_5; }
	inline void set_gameOverText_5(Text_t9039225 * value)
	{
		___gameOverText_5 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverText_5, value);
	}

	inline static int32_t get_offset_of_restartButton_6() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___restartButton_6)); }
	inline GameObject_t3674682005 * get_restartButton_6() const { return ___restartButton_6; }
	inline GameObject_t3674682005 ** get_address_of_restartButton_6() { return &___restartButton_6; }
	inline void set_restartButton_6(GameObject_t3674682005 * value)
	{
		___restartButton_6 = value;
		Il2CppCodeGenWriteBarrier(&___restartButton_6, value);
	}

	inline static int32_t get_offset_of_playerX_7() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___playerX_7)); }
	inline Player_t2393081601 * get_playerX_7() const { return ___playerX_7; }
	inline Player_t2393081601 ** get_address_of_playerX_7() { return &___playerX_7; }
	inline void set_playerX_7(Player_t2393081601 * value)
	{
		___playerX_7 = value;
		Il2CppCodeGenWriteBarrier(&___playerX_7, value);
	}

	inline static int32_t get_offset_of_playerO_8() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___playerO_8)); }
	inline Player_t2393081601 * get_playerO_8() const { return ___playerO_8; }
	inline Player_t2393081601 ** get_address_of_playerO_8() { return &___playerO_8; }
	inline void set_playerO_8(Player_t2393081601 * value)
	{
		___playerO_8 = value;
		Il2CppCodeGenWriteBarrier(&___playerO_8, value);
	}

	inline static int32_t get_offset_of_startInfo_9() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___startInfo_9)); }
	inline GameObject_t3674682005 * get_startInfo_9() const { return ___startInfo_9; }
	inline GameObject_t3674682005 ** get_address_of_startInfo_9() { return &___startInfo_9; }
	inline void set_startInfo_9(GameObject_t3674682005 * value)
	{
		___startInfo_9 = value;
		Il2CppCodeGenWriteBarrier(&___startInfo_9, value);
	}

	inline static int32_t get_offset_of_activePlayerColour_10() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___activePlayerColour_10)); }
	inline PlayerColour_t3744214061 * get_activePlayerColour_10() const { return ___activePlayerColour_10; }
	inline PlayerColour_t3744214061 ** get_address_of_activePlayerColour_10() { return &___activePlayerColour_10; }
	inline void set_activePlayerColour_10(PlayerColour_t3744214061 * value)
	{
		___activePlayerColour_10 = value;
		Il2CppCodeGenWriteBarrier(&___activePlayerColour_10, value);
	}

	inline static int32_t get_offset_of_inactivePlayerColour_11() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___inactivePlayerColour_11)); }
	inline PlayerColour_t3744214061 * get_inactivePlayerColour_11() const { return ___inactivePlayerColour_11; }
	inline PlayerColour_t3744214061 ** get_address_of_inactivePlayerColour_11() { return &___inactivePlayerColour_11; }
	inline void set_inactivePlayerColour_11(PlayerColour_t3744214061 * value)
	{
		___inactivePlayerColour_11 = value;
		Il2CppCodeGenWriteBarrier(&___inactivePlayerColour_11, value);
	}

	inline static int32_t get_offset_of_moveCount_12() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___moveCount_12)); }
	inline int32_t get_moveCount_12() const { return ___moveCount_12; }
	inline int32_t* get_address_of_moveCount_12() { return &___moveCount_12; }
	inline void set_moveCount_12(int32_t value)
	{
		___moveCount_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
