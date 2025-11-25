/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\statemachine\startscreen.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017680C -> 0x80177214
*/
// Range: 0x8017680C -> 0x801768AC
void StartScreenVars::Startup(class StartScreenVars * const this /* r31 */) {
    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x801768AC -> 0x80176900
void StartScreenVars::Shutdown(class StartScreenVars * const this /* r31 */) {}

// Range: 0x80176900 -> 0x80176988
void StartScreenVars::Reset(class StartScreenVars * const this /* r31 */) {}

// Range: 0x80176988 -> 0x801769CC
void StartScreenVars::Update() {}

// Range: 0x801769CC -> 0x80176A98
void StartScreenVars::DrawPressStart(class ERC * prc /* r29 */) {
    // Local variables
    class ERFont * pFont; // r30

    // References
    // -> static class EVec2 s_press_start_position;
    // -> static class EVec4 s_press_start_color;
    // -> class EGlobal _globals;
}

// Range: 0x80176A98 -> 0x80176B1C
void TheSimsStartScreenStateMachine::Startup(class TheSimsStartScreenStateMachine * const this /* r31 */) {
    // References
    // -> class EDatasetManager _datasetman;
    // -> static class StartScreenVars * s_pVars;
}

// Range: 0x80176B1C -> 0x80176B6C
void * StartScreenStartState::StartScreenStartState(class StartScreenStartState * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__21StartScreenStartState;
}

// Range: 0x80176B6C -> 0x80176BA8
void * StartScreenVars::StartScreenVars(class StartScreenVars * const this /* r31 */) {}

// Range: 0x80176BA8 -> 0x80176BF4
void TheSimsStartScreenStateMachine::Shutdown(class TheSimsStartScreenStateMachine * const this /* r31 */) {
    // References
    // -> static class StartScreenVars * s_pVars;
}

// Range: 0x80176BF4 -> 0x80176C58
void TheSimsStartScreenStateMachine::Reset(class TheSimsStartScreenStateMachine * const this /* r31 */) {
    // References
    // -> class EControllerManager * _pCtrlMan;
    // -> class EGlobal _globals;
    // -> static class StartScreenVars * s_pVars;
}

// Range: 0x80176C58 -> 0x80176CA0
void TheSimsStartScreenStateMachine::Update(class TheSimsStartScreenStateMachine * const this /* r31 */, float fDeltaSeconds /* f31 */) {
    // References
    // -> static class StartScreenVars * s_pVars;
}

// Range: 0x80176CA0 -> 0x80176D7C
void StartScreenStartState::Startup(class StartScreenStartState * const this /* r30 */) {
    // References
    // -> class EShaderManager _shaderman;
    // -> class GameData _gd;
    // -> static class StartScreenVars * s_pVars;
    // -> class HDDThread g_hddThread;
}

// Range: 0x80176D7C -> 0x80176DF8
void StartScreenStartState::Shutdown(class StartScreenStartState * const this /* r29 */) {
    // References
    // -> class GameData _gd;
    // -> class EShaderManager _shaderman;
}

// Range: 0x80176DF8 -> 0x80176FF4
void StartScreenStartState::Update(class StartScreenStartState * const this /* r30 */) {
    // References
    // -> class EGlobal _globals;
    // -> class EAudio * _pActualAudio;
    // -> class EControllerManager * _pCtrlMan;
    // -> float _dt;
    // -> static class StartScreenVars * s_pVars;
    // -> class GameData _gd;
    // -> class EShaderManager _shaderman;
}

// Range: 0x80176FF4 -> 0x801771CC
void StartScreenStartState::Draw(class StartScreenStartState * const this /* r26 */, class ERC * prc /* r27 */) {
    // References
    // -> static class StartScreenVars * s_pVars;
    // -> class EGraphics * _pGfx;
}

// Range: 0x801771CC -> 0x80177214
static void __sinit_\game_statemachine_unity_cpp() {
    // References
    // -> static class EVec2 s_press_start_position;
    // -> static class EVec4 s_press_start_color;
}


