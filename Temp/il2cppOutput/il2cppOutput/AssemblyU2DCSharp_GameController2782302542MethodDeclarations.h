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

// GameController
struct GameController_t2782302542;
// System.String
struct String_t;
// Player
struct Player_t2393081601;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_Player2393081601.h"

// System.Void GameController::.ctor()
extern "C"  void GameController__ctor_m4168274701 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::SetGameControllersOnButtons()
extern "C"  void GameController_SetGameControllersOnButtons_m411787402 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::Awake()
extern "C"  void GameController_Awake_m110912624 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameController::GetPlayerSide()
extern "C"  String_t* GameController_GetPlayerSide_m3421618166 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::EndTurn()
extern "C"  void GameController_EndTurn_m4088631203 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::GameOver(System.String)
extern "C"  void GameController_GameOver_m3933496869 (GameController_t2782302542 * __this, String_t* ___winningPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::ChangeSide()
extern "C"  void GameController_ChangeSide_m3920337790 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::SetGameOverText(System.String)
extern "C"  void GameController_SetGameOverText_m3871131874 (GameController_t2782302542 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::ResetGame()
extern "C"  void GameController_ResetGame_m3845078220 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::SetBoardInteractable(System.Boolean)
extern "C"  void GameController_SetBoardInteractable_m4002537506 (GameController_t2782302542 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::SetPlayerColours(Player,Player)
extern "C"  void GameController_SetPlayerColours_m903907243 (GameController_t2782302542 * __this, Player_t2393081601 * ___newPlayer0, Player_t2393081601 * ___oldPlayer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::SetStartingSide(System.String)
extern "C"  void GameController_SetStartingSide_m1964263646 (GameController_t2782302542 * __this, String_t* ___startingSide0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::StartGame()
extern "C"  void GameController_StartGame_m2751531423 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::SetPlayerButtons(System.Boolean)
extern "C"  void GameController_SetPlayerButtons_m4178069740 (GameController_t2782302542 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::SetPlayerColourInactive()
extern "C"  void GameController_SetPlayerColourInactive_m2956610117 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
