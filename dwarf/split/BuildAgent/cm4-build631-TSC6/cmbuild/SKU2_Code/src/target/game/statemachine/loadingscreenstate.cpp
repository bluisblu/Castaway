/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\statemachine\loadingscreenstate.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801745FC -> 0x80174F2C
*/
// Range: 0x801745FC -> 0x8017464C
void LoadingScreenWaitingForLoadState::Update(class LoadingScreenWaitingForLoadState * const this /* r31 */) {}

// Range: 0x8017464C -> 0x801746C8
void LoadingScreenUpdateState::Update(class LoadingScreenUpdateState * const this /* r31 */, float fDeltaSeconds /* f31 */) {
    // Local variables
    class CLoadingScreen * loadingScreen; // r0
}

// Range: 0x801746C8 -> 0x8017474C
void LoadingScreenUpdateState::DrawTopmost(class ERC * prc /* r30 */) {
    // Local variables
    class CLoadingScreen * loadingScreen; // r31
    float alpha; // f0
}

// Range: 0x8017474C -> 0x8017479C
void LssDummyPrintf() {}

// Range: 0x8017479C -> 0x801747F0
unsigned char LoadingScreenStateMachine::IsIrisTransitionInComplete(class LoadingScreenStateMachine * const this /* r31 */) {}

// Range: 0x801747F0 -> 0x80174808
unsigned char LoadingScreenStateMachine::IsIrisTransitionOutComplete() {}

// Range: 0x80174808 -> 0x8017481C
void LoadingScreenStateMachine::IrisTransitionIn() {}

// Range: 0x8017481C -> 0x80174830
void LoadingScreenStateMachine::IrisTransitionOut() {}

// Range: 0x80174830 -> 0x80174848
unsigned char LoadingScreenStateMachine::IsIrisTransitionInProgress() {}

// Range: 0x80174848 -> 0x80174860
unsigned char LoadingScreenStateMachine::IsIrisLoaded() {}

// Range: 0x80174860 -> 0x801748BC
void * LoadingScreenStateMachine::LoadingScreenStateMachine(class LoadingScreenStateMachine * const this /* r31 */) {
    // References
    // -> class LoadingScreenStateMachine * s_pSM;
    // -> struct [anonymous] __vt__25LoadingScreenStateMachine;
}

// Range: 0x801748BC -> 0x8017492C
void * LoadingScreenStateMachine::~LoadingScreenStateMachine(class LoadingScreenStateMachine * const this /* r30 */) {
    // References
    // -> class LoadingScreenStateMachine * s_pSM;
}

// Range: 0x8017492C -> 0x80174A08
void LoadingScreenStateMachine::Startup(class LoadingScreenStateMachine * const this /* r31 */) {}

// Range: 0x80174A08 -> 0x80174A0C
void LoadingScreenStateMachine::Update() {}

// Range: 0x80174A0C -> 0x80174A6C
void LoadingScreenStateMachine::CreateLoadingScreen(class LoadingScreenStateMachine * const this /* r30 */, const char * pLoadMessage /* r31 */) {}

// Range: 0x80174A6C -> 0x80174AC8
void LoadingScreenStateMachine::DeleteLoadingScreen(class LoadingScreenStateMachine * const this /* r31 */) {}

// Range: 0x80174AC8 -> 0x80174B14
void LoadingScreenStateMachine::CreateIris(class LoadingScreenStateMachine * const this /* r31 */) {}

// Range: 0x80174B14 -> 0x80174B6C
void LoadingScreenStateMachine::DeleteIris(class LoadingScreenStateMachine * const this /* r31 */) {}

// Range: 0x80174B6C -> 0x80174B74
unsigned char LoadingScreenStateMachine::IsReadyToLoad() {}

// Range: 0x80174B74 -> 0x80174BC8
unsigned char LoadingScreenStateMachine::IsLoading(const class LoadingScreenStateMachine * const this /* r30 */) {}

// Range: 0x80174BC8 -> 0x80174C80
void LoadingScreenStateMachine::StartLoad(class LoadingScreenStateMachine * const this /* r29 */, const char * pLoadMessage /* r30 */) {}

// Range: 0x80174C80 -> 0x80174CA0
void LoadingScreenStateMachine::StartingLoad() {
    // References
    // -> class LoadingScreenStateMachine * s_pSM;
}

// Range: 0x80174CA0 -> 0x80174CB4
void LoadingScreenStateMachine::LoadFinishing() {
    // References
    // -> class LoadingScreenStateMachine * s_pSM;
}

// Range: 0x80174CB4 -> 0x80174CCC
unsigned char LoadingScreenStateMachine::LoadInProgress() {
    // References
    // -> class LoadingScreenStateMachine * s_pSM;
}

// Range: 0x80174CCC -> 0x80174D20
void IrisTransitionInState::Startup(class IrisTransitionInState * const this /* r31 */) {
    // References
    // -> class PetsHomeButton _wiiHomeButton;
}

// Range: 0x80174D20 -> 0x80174DB4
void IrisTransitionInState::Update(class IrisTransitionInState * const this /* r31 */) {}

// Range: 0x80174DB4 -> 0x80174DB8
void IrisTransitionInState::Shutdown() {}

// Range: 0x80174DB8 -> 0x80174DE8
void IrisTransitionOutState::Startup() {}

// Range: 0x80174DE8 -> 0x80174E98
void IrisTransitionOutState::Update(class IrisTransitionOutState * const this /* r31 */, float fDeltaSeconds /* f31 */) {
    // Local variables
    class CLoadingScreen * loadingScreen; // r0
}

// Range: 0x80174E98 -> 0x80174EF0
void IrisTransitionOutState::DrawTopmost(class ERC * prc /* r31 */) {
    // Local variables
    class CLoadingScreen * loadingScreen; // r0
}

// Range: 0x80174EF0 -> 0x80174F2C
void IrisTransitionOutState::Shutdown() {
    // References
    // -> class PetsHomeButton _wiiHomeButton;
}


