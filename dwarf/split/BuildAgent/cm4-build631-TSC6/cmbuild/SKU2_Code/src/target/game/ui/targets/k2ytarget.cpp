/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\k2ytarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801AEF64 -> 0x801B0388
*/
// Range: 0x801AEF64 -> 0x801AEF78
void * KeyboardWorkOrder::KeyboardWorkOrder() {}

// Range: 0x801AEF78 -> 0x801AEF88
void KeyboardWorkOrder::Initialize() {}

// Range: 0x801AEF88 -> 0x801AEF9C
void * KeyboardInputItem::KeyboardInputItem() {}

// Range: 0x801AEF9C -> 0x801AEFDC
void * KeyboardInputItem::~KeyboardInputItem(struct KeyboardInputItem * const this /* r31 */) {}

// Range: 0x801AEFDC -> 0x801AF16C
void * K2YTarget::K2YTarget(class K2YTarget * const this /* r29 */) {
    // References
    // -> class AptViewer * _gpAptViewer;
    // -> unsigned short * m_currentEntryPtr;
    // -> struct [anonymous] __vt__9K2YTarget;
}

// Range: 0x801AF16C -> 0x801AF394
void K2YTarget::InstallCommandsAndTests(class K2YTarget * const this /* r30 */) {}

// Range: 0x801AF394 -> 0x801AF49C
void * K2YTarget::~K2YTarget(class K2YTarget * const this /* r30 */) {
    // References
    // -> class AptViewer * _gpAptViewer;
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9K2YTarget;
}

// Range: 0x801AF49C -> 0x801AF4E8
void K2YTarget::CleanupRouterString(class K2YTarget * const this /* r31 */) {}

// Range: 0x801AF4E8 -> 0x801AF554
void K2YTarget::CommitEntry(class K2YTarget * const this /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x801AF554 -> 0x801AF63C
void K2YTarget::CleanupEntry(class K2YTarget * const this /* r28 */) {
    // Local variables
    int i; // r29

    // References
    // -> unsigned short * m_currentEntryPtr;
}

// Range: 0x801AF63C -> 0x801AF698
void K2YTarget::SetRouterCompletionString(class K2YTarget * const this /* r30 */, char * routerSetVariable /* r31 */) {}

// Range: 0x801AF698 -> 0x801AF6D0
void K2YTarget::InvokeRouterAcceptCommand() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801AF6D0 -> 0x801AF708
void K2YTarget::InvokeRouterCancelCommand() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801AF708 -> 0x801AF788
void K2YTarget::Update(class K2YTarget * const this /* r31 */) {
    // Local variables
    class EVec2 dummy; // r1+0x8

    // References
    // -> class EControllerManager * _pCtrlMan;
    // -> class EGlobal _globals;
}

// Range: 0x801AF788 -> 0x801AFA8C
void K2YTarget::SetVariable(class K2YTarget * const this /* r28 */, const char * szCommand /* r29 */, const char * szParams /* r30 */) {
    // Local variables
    int len; // r0
    const unsigned short * pChar; // r30

    // References
    // -> class EGlobal _globals;
    // -> unsigned short * m_currentEntryPtr;
}

// Range: 0x801AFA8C -> 0x801AFD20
char * K2YTarget::GetVariable(class K2YTarget * const this /* r27 */, const char * szVar /* r28 */) {
    // Local variables
    char * retStr; // r29
    int len; // r0
    int maxed; // r30
    int kb; // r1+0xC
    int row; // r1+0x8
    char * pStr; // r3
    int keybits; // r30
    int i; // r31
    int bit; // r0

    // References
    // -> unsigned short * m_currentEntryPtr;
}

// Range: 0x801AFD20 -> 0x801AFEF4
unsigned short * K2YTarget::GetLocalizable(class K2YTarget * const this /* r28 */, const char * szVar /* r29 */) {
    // Local variables
    unsigned short * wideStr; // r30
    unsigned short * outString; // r31

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801AFEF4 -> 0x801B00B0
int K2YTarget::GetKeybits(int kb /* r30 */, int row /* r28 */) {
    // Local variables
    int retVal; // r29
    char psName[32]; // r1+0x50
    char temp[32]; // r1+0x30
    char useName[32]; // r1+0x10
    class BString2 key; // r1+0xC
    int i; // r28

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801B00B0 -> 0x801B02A8
void K2YTarget::StartUp(class K2YTarget * const this /* r26 */, struct KeyboardWorkOrder * workOrder /* r27 */, int numOrders /* r28 */, enum K2Y_INPUT_MAXIMUM input_max /* r29 */) {
    // Local variables
    int i; // r30
    char * title; // r25

    // References
    // -> class EGlobal _globals;
    // -> unsigned short * m_currentEntryPtr;
    // -> unsigned short * EmptyString;
}

// Range: 0x801B02A8 -> 0x801B035C
unsigned int K2YTarget::CalculateMaxLengthFromEnum() {
    // References
    // -> class EQuickdataManager _quickdataman;
}

// Range: 0x801B035C -> 0x801B0370
unsigned short * K2YTarget::GetCurrentEntry() {
    // References
    // -> unsigned short * EmptyString;
    // -> unsigned short * m_currentEntryPtr;
}

// Range: 0x801B0370 -> 0x801B0388
unsigned int K2YTarget::GetCurrentMaxLength() {}


