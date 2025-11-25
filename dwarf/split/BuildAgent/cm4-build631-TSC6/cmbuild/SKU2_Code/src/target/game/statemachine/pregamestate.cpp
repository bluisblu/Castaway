/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\statemachine\pregamestate.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017580C -> 0x80176324
*/
// Range: 0x8017580C -> 0x80175888
void PreGameState::Reset(class PreGameState * const this /* r30 */) {
    // References
    // -> class GameData _gd;
}

// Range: 0x80175888 -> 0x80175A18
void PreGameState::Update(class PreGameState * const this /* r27 */) {
    // Local variables
    unsigned char bDone; // r29
    class QTimer lqtimer; // r1+0x8
    int iOldStage; // r28

    // References
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x80175A18 -> 0x80175A50
void PreGameCreateAFamilyState::Reset() {
    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x80175A50 -> 0x80175C44
void PreGameCreateAFamilyState::Update(class PreGameCreateAFamilyState * const this /* r29 */) {
    // Local variables
    enum eGameState flowStateRequest; // r0

    // References
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x80175C44 -> 0x80175CD0
void InLevelCreateASimState::Reset(class InLevelCreateASimState * const this /* r29 */) {
    // Local variables
    int neighborId; // r0

    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x80175CD0 -> 0x80175D90
void InLevelCreateASimState::Update(class InLevelCreateASimState * const this /* r30 */) {
    // References
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x80175D90 -> 0x80175F64
void PreGameSetupState::Startup() {
    // Local variables
    class Family * pFamily; // r30
    class Family * pLotFamily; // r31

    // References
    // -> class ESimsApp _app;
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x80175F64 -> 0x80175F68
void PreGameSetupState::Shutdown() {}

// Range: 0x80175F68 -> 0x80175F94
void PreGameSetupState::Reset() {
    // References
    // -> class GameData _gd;
}

// Range: 0x80175F94 -> 0x8017610C
void PreGameSetupState::Update(class PreGameSetupState * const this /* r30 */) {
    // Local variables
    int callStateResult; // r0
    enum eGameState flowStateRequest; // r0

    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x8017610C -> 0x80176110
void PreGameSetupState::Draw() {}

// Range: 0x80176110 -> 0x80176160
void NeighborhoodState::Startup(class NeighborhoodState * const this /* r31 */) {
    // References
    // -> class EDatasetManager _datasetman;
}

// Range: 0x80176160 -> 0x801761D4
void NeighborhoodState::Shutdown(class NeighborhoodState * const this /* r31 */) {
    // References
    // -> class EDatasetManager _datasetman;
}

// Range: 0x801761D4 -> 0x801761D8
void NeighborhoodState::Reset() {}

// Range: 0x801761D8 -> 0x80176320
void NeighborhoodState::Update(class NeighborhoodState * const this /* r30 */) {
    // Local variables
    int selectedFamily; // r31
    class Family * pFamily; // r31
    int lot_number; // r0

    // References
    // -> class ESimsApp _app;
    // -> class EGlobal _globals;
    // -> class GameData _gd;
    // -> class EDatasetManager _datasetman;
}

// Range: 0x80176320 -> 0x80176324
void NeighborhoodState::Draw() {}


