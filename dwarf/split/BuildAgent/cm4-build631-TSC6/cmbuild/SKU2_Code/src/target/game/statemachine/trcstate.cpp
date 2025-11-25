/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\statemachine\trcstate.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017AF90 -> 0x8017BB60
*/
// Range: 0x8017AF90 -> 0x8017AFFC
static unsigned char IsTRCShowing() {
    // Local variables
    class UIScreenManager * pUISM; // r30

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8017AFFC -> 0x8017B158
void TRCStateMachine::Startup(class TRCStateMachine * const this /* r31 */) {}

// Range: 0x8017B158 -> 0x8017B198
void * TRCBatteryLowState::TRCBatteryLowState(class TRCBatteryLowState * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__18TRCBatteryLowState;
}

// Range: 0x8017B198 -> 0x8017B1F0
void * TRCNunchukReconnectState::TRCNunchukReconnectState(class TRCNunchukReconnectState * const this /* r31 */) {
    // References
    // -> class EControllerManager * _pCtrlMan;
    // -> struct [anonymous] __vt__24TRCNunchukReconnectState;
}

// Range: 0x8017B1F0 -> 0x8017B230
void * TRCNunchukDisconnectState::TRCNunchukDisconnectState(class TRCNunchukDisconnectState * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__25TRCNunchukDisconnectState;
}

// Range: 0x8017B230 -> 0x8017B270
void * TRCCoreDisconnectState::TRCCoreDisconnectState(class TRCCoreDisconnectState * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__22TRCCoreDisconnectState;
}

// Range: 0x8017B270 -> 0x8017B2B0
void * TRCDelayState::TRCDelayState(class TRCDelayState * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__13TRCDelayState;
}

// Range: 0x8017B2B0 -> 0x8017B2F0
void * TRCReadyState::TRCReadyState(class TRCReadyState * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__13TRCReadyState;
}

// Range: 0x8017B2F0 -> 0x8017B324
void TRCStateMachine::Shutdown(class TRCStateMachine * const this /* r31 */) {}

// Range: 0x8017B324 -> 0x8017B370
void TRCStateMachine::Reset(class TRCStateMachine * const this /* r31 */) {
    // References
    // -> static unsigned int s_batteryTimeout;
}

// Range: 0x8017B370 -> 0x8017B4A4
void TRCStateMachine::Update(class TRCStateMachine * const this /* r31 */, float fDeltaSeconds /* f31 */) {
    // Local variables
    unsigned char bDialogPending; // r0

    // References
    // -> static unsigned int s_delayTimeout;
    // -> float _dt;
    // -> class EGlobal _globals;
}

// Range: 0x8017B4A4 -> 0x8017B750
void TRCStateMachine::UpdateControllers(class TRCStateMachine * const this /* r29 */, int control /* r30 */) {
    // Local variables
    long wpadResult; // r0
    struct _WiiPadInfo * pInfo; // r0
    unsigned char bNotifyCore; // r0
    unsigned char bCoreConnected; // r5
    unsigned char bBatteryLow; // r0
    unsigned char bNunChukConnected; // r27
    unsigned char bNotifyCore; // r0
    unsigned char bCurrentStateIsDisconnect; // r0

    // References
    // -> static unsigned int s_batteryTimeout;
}

// Range: 0x8017B794 -> 0x8017B7B4
void TRCStateMachine::EnableNotification() {}

// Range: 0x8017B7B4 -> 0x8017B7D4
void TRCStateMachine::DisableNotification() {}

// Range: 0x8017B7D4 -> 0x8017B7FC
unsigned char TRCStateMachine::GetNotificationEnabled() {}

// Range: 0x8017B7FC -> 0x8017B874
void TRCStateMachine::Monitor(unsigned char enable /* r31 */, unsigned int delay /* r30 */) {
    // Local variables
    class StateMachine * pTRCStateMachine; // r31

    // References
    // -> static unsigned int s_delayTimeout;
}

// Range: 0x8017B874 -> 0x8017B8CC
void TRCCoreDisconnectState::Startup() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8017B8CC -> 0x8017B91C
void TRCCoreDisconnectState::Shutdown() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8017B91C -> 0x8017B964
void TRCNunchukReconnectState::Startup(class TRCNunchukReconnectState * const this /* r31 */) {}

// Range: 0x8017B964 -> 0x8017B9B4
void TRCNunchukReconnectState::Shutdown(class TRCNunchukReconnectState * const this /* r31 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8017B9B4 -> 0x8017B9FC
void TRCNunchukReconnectState::Update(class TRCNunchukReconnectState * const this /* r31 */) {}

// Range: 0x8017B9FC -> 0x8017BA64
void TRCNunchukDisconnectState::Startup() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8017BA64 -> 0x8017BA9C
void TRCNunchukDisconnectState::Shutdown() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8017BA9C -> 0x8017BAA0
void TRCNunchukDisconnectState::Update() {}

// Range: 0x8017BAA0 -> 0x8017BAD4
void TRCBatteryLowState::Startup() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8017BAD4 -> 0x8017BB18
void TRCBatteryLowState::Shutdown() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8017BB18 -> 0x8017BB60
void TRCBatteryLowState::Update(class TRCBatteryLowState * const this /* r31 */) {}


