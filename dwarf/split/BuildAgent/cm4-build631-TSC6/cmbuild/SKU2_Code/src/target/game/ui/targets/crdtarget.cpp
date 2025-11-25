/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\crdtarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801A1F58 -> 0x801A33E8
*/
// Range: 0x801A1F58 -> 0x801A2244
void * CRDTarget::CRDTarget(class CRDTarget * const this /* r29 */, class UIObjectBase * pCallingTarget /* r30 */) {
    // References
    // -> struct [anonymous] __vt__9CRDTarget;
}

// Range: 0x801A2244 -> 0x801A2358
void * CRDTarget::~CRDTarget(class CRDTarget * const this /* r30 */) {
    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9CRDTarget;
}

// Range: 0x801A2358 -> 0x801A2430
void CRDTarget::SetVariable(class CRDTarget * const this /* r29 */, const char * szCommand /* r30 */) {}

// Range: 0x801A2430 -> 0x801A251C
char * CRDTarget::GetVariable(class CRDTarget * const this /* r28 */, const char * szVar /* r29 */) {
    // Local variables
    char * retStr; // r30
}

// Range: 0x801A251C -> 0x801A259C
unsigned short * CRDTarget::GetLocalizable() {
    // Local variables
    unsigned short * wideStr; // r31
    unsigned short * outString; // r30
}

// Range: 0x801A259C -> 0x801A25A0
void CRDTarget::Draw() {}

// Range: 0x801A25A0 -> 0x801A26E0
void CRDTarget::Update(class CRDTarget * const this /* r30 */) {
    // Local variables
    unsigned char cheatState; // r0
    float interp; // f3
    int pos; // r31
    class UIReflow reflow; // r1+0x8

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801A26E0 -> 0x801A280C
void CRDTarget::ShowCredits(class CRDTarget * const this /* r29 */) {
    // Local variables
    class UIReflow reflow; // r1+0x8

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801A280C -> 0x801A28B8
void CRDTarget::HideCredits(class CRDTarget * const this /* r31 */) {
    // Local variables
    class UIReflow reflow; // r1+0x8
}

// Range: 0x801A28B8 -> 0x801A292C
void CRDTarget::StartCredits(class CRDTarget * const this /* r31 */) {
    // References
    // -> class EClock _sysclock;
}

// Range: 0x801A292C -> 0x801A29F8
void CRDTarget::EndCredits(class CRDTarget * const this /* r30 */) {
    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x801A2A54 -> 0x801A2AD4
void CRDTarget::InitCreditsTextFetch(class CRDTarget * const this /* r31 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801A2AD4 -> 0x801A3328
void CRDTarget::ScrollingCallback(class CRDTarget * const this /* r18 */, class ERC * prc /* r19 */, const struct structDrawCBparams * params /* r20 */) {
    // Local variables
    unsigned char doDraw; // r3
    unsigned char drawnFirst; // r24
    float curYoffset; // f29
    float pghHeight; // f24
    float firstHeight; // f28
    float scrollAmount; // f24
    float flashAlpha; // f27
    float fontSize; // f26
    unsigned short tmpChar16; // r25
    unsigned short * curTextOffset; // r23
    unsigned short * tmpTextOffset; // r22
    char nextRow[16]; // r1+0x70
    int carryOverCount; // r22
    class EVec2 tl; // r1+0x28
    class EVec2 br; // r1+0x20
    class EVec4 vCol; // r1+0x60
    class EVec4 cTrans; // r1+0x50
    class EVec4 cScale; // r1+0x40
    class EMat4 tmpM; // r1+0x80
    class AptParagraph * pPgh; // r21
    float inLine; // f2
    float outLine; // f0
    char numStr[8]; // r1+0x18
    class EController * pCtrl; // r19

    // References
    // -> class EControllerManager * _pCtrlMan;
    // -> float _dt;
    // -> static float yBaseOffset;
    // -> class EGlobal _globals;
    // -> static class EVec2 textWidHei;
}

// Range: 0x801A3328 -> 0x801A33A4
void CRDTarget::ShowPhoto(class CRDTarget * const this /* r31 */) {
    // Local variables
    class UIReflow reflow; // r1+0x8
}

// Range: 0x801A33A4 -> 0x801A33E8
void CRDTarget::HidePhoto() {
    // Local variables
    class UIReflow reflow; // r1+0x8
}


