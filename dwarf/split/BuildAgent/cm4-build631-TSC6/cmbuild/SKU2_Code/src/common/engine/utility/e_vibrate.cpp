/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\utility\e_vibrate.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802F5824 -> 0x802F5B48
*/
// Range: 0x802F5824 -> 0x802F587C
void * EVibrate::EVibrate(class EVibrate * const this /* r31 */) {
    // References
    // -> unsigned char s_u8SysAlign[6];
}

// Range: 0x802F587C -> 0x802F58BC
void * EVibrate::~EVibrate(class EVibrate * const this /* r31 */) {}

// Range: 0x802F58BC -> 0x802F5908
void EVibrate::Enable(class EVibrate * const this /* r31 */) {}

// Range: 0x802F5908 -> 0x802F5914
void EVibrate::Disable() {}

// Range: 0x802F5914 -> 0x802F591C
unsigned char EVibrate::IsOn() {}

// Range: 0x802F591C -> 0x802F599C
unsigned char EVibrate::TurnOn(class EVibrate * const this /* r30 */, unsigned char Port /* r31 */) {
    // Local variables
    class EController * pController; // r0

    // References
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x802F599C -> 0x802F59A0
unsigned char EVibrate::IsControllerReady() {}

// Range: 0x802F59A0 -> 0x802F59B4
void EVibrate::TurnOff() {}

// Range: 0x802F59B4 -> 0x802F59D8
unsigned char EVibrate::IsControllerOn() {}

// Range: 0x802F59D8 -> 0x802F5A3C
unsigned char EVibrate::VibrateMotorOne(float Intensity /* f30 */, float Duration /* f31 */) {
    // Local variables
    class EController * pController; // r0

    // References
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x802F5A3C -> 0x802F5AB0
unsigned char EVibrate::VibrateAll(float I1 /* f28 */, float I2 /* f29 */, float D1 /* f30 */, float D2 /* f31 */) {
    // Local variables
    class EController * pController; // r0

    // References
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x802F5AB0 -> 0x802F5B40
void EVibrate::StopAllVibration(class EVibrate * const this /* r30 */) {
    // Local variables
    int i; // r31
    class EController * pController; // r0

    // References
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x802F5B40 -> 0x802F5B48
unsigned char EVibrate::UpdateVibration() {}


