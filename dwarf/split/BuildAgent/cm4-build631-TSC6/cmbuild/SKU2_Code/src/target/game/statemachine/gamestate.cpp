/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\statemachine\gamestate.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8016E82C -> 0x8016EC44
*/
// Range: 0x8016E82C -> 0x8016E888
void * EGameState::~EGameState(class EGameState * const this /* r30 */) {}

// Range: 0x8016E888 -> 0x8016E8D0
void * EGameStateMan::EGameStateMan(class EGameStateMan * const this /* r31 */) {}

// Range: 0x8016E928 -> 0x8016E990
void * EGameStateMan::~EGameStateMan(class EGameStateMan * const this /* r30 */) {}

// Range: 0x8016E990 -> 0x8016EAA4
void EGameStateMan::SetState(class EGameStateMan * const this /* r27 */, class EGameStateId & newState /* r28 */) {
    // Local variables
    class NLIteratorPtrType * nli; // r30
    class EGameState * pState; // r29

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8016EAA4 -> 0x8016EAE4
void EGameStateMan::AddState(class EGameStateMan * const this /* r30 */, class EGameState * pState /* r31 */) {}

// Range: 0x8016EAE4 -> 0x8016EB3C
void EGameStateMan::KillState(class EGameStateMan * const this /* r31 */) {}

// Range: 0x8016EB3C -> 0x8016EBA8
void EGameStateMan::DeleteAllStates(class EGameStateMan * const this /* r31 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8016EBA8 -> 0x8016EC00
void EGameStateMan::Update(class EGameStateMan * const this /* r31 */) {
    // Local variables
    class EGameState * pState; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8016EC00 -> 0x8016EC44
void EGameStateMan::Draw(class ERC * prc /* r31 */) {}


