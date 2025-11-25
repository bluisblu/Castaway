/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\Wii\TRCWiiHomeButton.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80246FA4 -> 0x802483A4
*/
// Range: 0x80246FA4 -> 0x80246FF8
class TRCHomeButton * TRCHomeButton::Create() {
    // References
    // -> struct TRCWiiInit msInitParams;
    // -> class TRCHomeButton * m_pInstance;
}

// Range: 0x80246FF8 -> 0x8024700C
void TRCHomeButton::Destroy() {}

// Range: 0x8024700C -> 0x80247108
void * TRCHomeButton::TRCHomeButton(class TRCHomeButton * const this /* r31 */) {
    // References
    // -> class TRCHomeButton * m_pInstance;
}

// Range: 0x80247108 -> 0x80247168
void * TRCHomeButton::~TRCHomeButton(class TRCHomeButton * const this /* r30 */) {
    // References
    // -> class TRCHomeButton * m_pInstance;
}

// Range: 0x80247168 -> 0x80247230
void * TRCHomeButton::LoadData(const char * pAllocName /* r26 */, int alignment /* r27 */, unsigned long * pOutSize /* r28 */) {
    // Local variables
    void * pDataResult; // r31
    class EFile * pFile; // r30
    unsigned long fileSize; // r29

    // References
    // -> struct TRCWiiInit msInitParams;
}

// Range: 0x80247230 -> 0x802472F0
unsigned char TRCHomeButton::Init(class TRCHomeButton * const this /* r30 */, enum HomeInputType inputType /* r31 */) {}

// Range: 0x802472F0 -> 0x802473F4
void TRCHomeButton::LoadBanIcon(class TRCHomeButton * const this /* r29 */, const char * homeMenuRoot /* r30 */) {
    // Local variables
    char nameBuf[64]; // r1+0x8
}

// Range: 0x802473F4 -> 0x80247544
void TRCHomeButton::Restore(class TRCHomeButton * const this /* r31 */) {
    // References
    // -> struct TRCWiiInit msInitParams;
}

// Range: 0x80247544 -> 0x802477B8
unsigned char TRCHomeButton::InitInfo(class TRCHomeButton * const this /* r30 */) {
    // Local variables
    char nameBuf[64]; // r1+0x8
}

// Range: 0x802477B8 -> 0x80247824
unsigned char TRCHomeButton::InitHBMLibrary(class TRCHomeButton * const this /* r31 */) {
    // References
    // -> struct TRCWiiInit msInitParams;
}

// Range: 0x80247824 -> 0x802478E4
unsigned char TRCHomeButton::InitSound(class TRCHomeButton * const this /* r31 */) {
    // Local variables
    char nameBuf[64]; // r1+0x8

    // References
    // -> struct TRCWiiInit msInitParams;
}

// Range: 0x802478E4 -> 0x8024795C
void TRCHomeButton::InitHomeMenu(class TRCHomeButton * const this /* r31 */) {}

// Range: 0x8024795C -> 0x80247964
int TRCHomeButton::SoundCallback() {}

// Range: 0x80247964 -> 0x802479E8
unsigned char TRCHomeButton::WasHomeButtonPressedThisFrame(class TRCHomeButton * const this /* r31 */) {
    // Local variables
    unsigned int i; // r0
}

// Range: 0x802479E8 -> 0x80247A2C
void TRCHomeButton::StartUpHomeMenu() {}

// Range: 0x80247A2C -> 0x80247A30
void TRCHomeButton::RestoreHomeMenu() {}

// Range: 0x80247A30 -> 0x80247A50
void TRCHomeButton::ShutDownHomeMenu() {}

// Range: 0x80247A50 -> 0x80247AB8
void TRCHomeButton::Update(class TRCHomeButton * const this /* r31 */) {}

// Range: 0x80247AB8 -> 0x80247B28
void TRCHomeButton::ClearInputHistory() {}

// Range: 0x80247B28 -> 0x80247CC8
void TRCHomeButton::UpdateControllersKPAD(class TRCHomeButton * const this /* r31 */) {
    // Local variables
    unsigned int i; // r24
    unsigned long dev_type; // r23
    signed char wpad_err; // r22
    unsigned int i; // r22
}

// Range: 0x80247CC8 -> 0x80247D1C
void TRCHomeButton::ProcessController(class TRCHomeButton * const this /* r31 */) {}

// Range: 0x80247D1C -> 0x80247E70
void TRCHomeButton::PreRender(class TRCHomeButton * const this /* r30 */) {
    // Local variables
    float mv[3][4]; // r1+0x58
    float projMtx[4][4]; // r1+0x18
    int i; // r30
}

// Range: 0x80247E70 -> 0x80247F0C
void TRCHomeButton::PostRender(class TRCHomeButton * const this /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x80247F0C -> 0x80247F44
void TRCHomeButton::RenderHomeMenu(class TRCHomeButton * const this /* r31 */) {}

// Range: 0x80247F44 -> 0x80247FAC
void TRCHomeButton::TriggerHomeMenuBanIcon(class TRCHomeButton * const this /* r31 */) {}

// Range: 0x80247FAC -> 0x8024810C
float TRCHomeButton::UpdateBanIconAlpha(class TRCHomeButton * const this /* r31 */) {
    // Local variables
    float elapse; // f3
}

// Range: 0x8024810C -> 0x80248124
void TRCHomeButton::DisableHomeMenu() {}

// Range: 0x80248124 -> 0x802483A4
void TRCHomeButton::RenderBanIcon(class TRCHomeButton * const this /* r31 */) {
    // Local variables
    struct _GXTexObj texObj; // r1+0x10
}


