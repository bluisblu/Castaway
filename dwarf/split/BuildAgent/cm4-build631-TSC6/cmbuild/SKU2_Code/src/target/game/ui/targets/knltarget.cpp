/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\knltarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801D9248 -> 0x801DA264
*/
// Range: 0x801D9248 -> 0x801D9530
void * KNLTarget::KNLTarget(class KNLTarget * const this /* r29 */) {
    // References
    // -> int m_sUserEnteredDays;
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9KNLTarget;
}

// Range: 0x801D9530 -> 0x801D95D4
void * KNLTarget::~KNLTarget(class KNLTarget * const this /* r30 */) {
    // References
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9KNLTarget;
}

// Range: 0x801D95D4 -> 0x801D97A4
void KNLTarget::SetVariable(class KNLTarget * const this /* r29 */, const char * szCommand /* r30 */) {
    // References
    // -> int m_sUserEnteredDays;
}

// Range: 0x801D97A4 -> 0x801D9900
char * KNLTarget::GetVariable(const char * szVar /* r29 */) {
    // Local variables
    char * retStr; // r30
}

// Range: 0x801D9900 -> 0x801D99EC
unsigned short * KNLTarget::GetLocalizable(class KNLTarget * const this /* r29 */, const char * szVar /* r30 */) {
    // Local variables
    unsigned short * wideStr; // r31
    unsigned short * outString; // r30
}

// Range: 0x801D99EC -> 0x801D9AA4
void KNLTarget::Update(class KNLTarget * const this /* r31 */) {}

// Range: 0x801D9AA4 -> 0x801D9AEC
unsigned char KNLTarget::OnDpadUp() {}

// Range: 0x801D9AEC -> 0x801D9B34
unsigned char KNLTarget::OnDpadDown() {}

// Range: 0x801D9B34 -> 0x801D9BD8
unsigned char KNLTarget::OnDpadLeft(class KNLTarget * const this /* r31 */) {}

// Range: 0x801D9BD8 -> 0x801D9C70
unsigned char KNLTarget::OnDpadRight(class KNLTarget * const this /* r31 */) {}

// Range: 0x801D9C70 -> 0x801D9D14
void KNLTarget::RefreshLocalizables(class KNLTarget * const this /* r30 */) {
    // Local variables
    class StackString2 strMoney; // r1+0x8
}

// Range: 0x801D9D14 -> 0x801D9DDC
void KNLTarget::CapDitchAmount(class KNLTarget * const this /* r30 */) {
    // References
    // -> int m_sMaximumKennelDays;
    // -> int m_sCostPerKennelDay;
}

// Range: 0x801D9DDC -> 0x801D9DEC
int KNLTarget::PetPointsToSpend() {
    // References
    // -> int m_sCostPerKennelDay;
}

// Range: 0x801D9DEC -> 0x801D9EA4
unsigned char KNLTarget::OnSelect(class KNLTarget * const this /* r31 */) {}

// Range: 0x801D9EA4 -> 0x801D9EB0
void KNLTarget::ShowKNLMenu() {}

// Range: 0x801D9EB0 -> 0x801D9F68
void KNLTarget::ShowKNLMenu_Begin(class KNLTarget * const this /* r31 */) {}

// Range: 0x801D9F68 -> 0x801D9F74
void KNLTarget::HideKNLMenu() {}

// Range: 0x801D9F74 -> 0x801DA020
void KNLTarget::HideKNLMenu_Begin(class KNLTarget * const this /* r31 */) {}

// Range: 0x801DA020 -> 0x801DA130
void KNLTarget::UpdateSelectionState(class KNLTarget * const this /* r29 */, int newState /* r30 */) {}

// Range: 0x801DA130 -> 0x801DA25C
void KNLTarget::UpdateSwfArrowState(class KNLTarget * const this /* r28 */, enum KNLArrowState leftState /* r29 */, enum KNLArrowState rightState /* r30 */, unsigned char openReflow /* r31 */) {}

// Range: 0x801DA25C -> 0x801DA264
int KNLTarget::GetCostPerDay() {
    // References
    // -> int m_sCostPerKennelDay;
}


