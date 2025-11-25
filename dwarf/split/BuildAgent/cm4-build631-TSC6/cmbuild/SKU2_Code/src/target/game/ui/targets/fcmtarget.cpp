/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\fcmtarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801A4F14 -> 0x801A588C
*/
// Range: 0x801A4F14 -> 0x801A5128
void * FCMTarget::FCMTarget(class FCMTarget * const this /* r29 */) {
    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9FCMTarget;
}

// Range: 0x801A5128 -> 0x801A51B8
void * FCMTarget::~FCMTarget(class FCMTarget * const this /* r30 */) {
    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9FCMTarget;
}

// Range: 0x801A51B8 -> 0x801A52B4
void FCMTarget::SetVariable(class FCMTarget * const this /* r29 */, const char * szCommand /* r30 */) {}

// Range: 0x801A52B4 -> 0x801A533C
char * FCMTarget::GetVariable(class FCMTarget * const this /* r29 */, const char * szVar /* r30 */) {
    // Local variables
    char * retStr; // r31
}

// Range: 0x801A533C -> 0x801A53BC
unsigned short * FCMTarget::GetLocalizable() {
    // Local variables
    unsigned short * wideStr; // r31
    unsigned short * outString; // r30
}

// Range: 0x801A53BC -> 0x801A54A0
void FCMTarget::Update(class FCMTarget * const this /* r31 */) {}

// Range: 0x801A54A0 -> 0x801A5608
void FCMTarget::ShowFireCodeMeter(class FCMTarget * const this /* r28 */) {
    // Local variables
    float percent; // f1
    unsigned int height; // r30
    int ypos; // r29

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x801A5608 -> 0x801A5614
void FCMTarget::HideFireCodeMeter() {}

// Range: 0x801A5614 -> 0x801A5824
void FCMTarget::UpdateFireCodeMeter(class FCMTarget * const this /* r30 */) {
    // Local variables
    int meterLevel; // r0
    float percent; // f1
    unsigned int height; // r28
    int ypos; // r27
    int tweenTime; // r26
}

// Range: 0x801A5824 -> 0x801A585C
int FCMTarget::GetFireCodeMeterLevel() {
    // Local variables
    float firevalue; // f0
}

// Range: 0x801A585C -> 0x801A588C
void FCMTarget::SetMeterHeight() {}


