/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\msstarget.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801D2780 -> 0x801D30A4
*/
// Range: 0x801D2780 -> 0x801D2A10
void * MSSTarget::MSSTarget(class MSSTarget * const this /* r31 */) {
    // Local variables
    unsigned long index; // r24
    unsigned long songindex; // r23
    unsigned long songcount; // r0

    // References
    // -> static const char * const MSS_stop;
    // -> static const char * const MSS_play;
    // -> static const char * const MSS_enable;
    // -> static const char * const MSS_hilite;
    // -> static const char * const MSS_entries;
    // -> static const char * const MSS_exists;
    // -> static const char * const MSSTargetName;
    // -> struct [anonymous] __vt__9MSSTarget;
}

// Range: 0x801D2A10 -> 0x801D2A88
void * MSSTarget::~MSSTarget(class MSSTarget * const this /* r30 */) {
    // References
    // -> struct [anonymous] __vt__9MSSTarget;
}

// Range: 0x801D2A88 -> 0x801D2BE4
void MSSTarget::SetVariable(class MSSTarget * const this /* r29 */, const char * varname /* r30 */, const char * varvalue /* r31 */) {
    // Local variables
    unsigned char bEnabled; // r0
    unsigned long songcount; // r0

    // References
    // -> static const char * const MSS_stop;
    // -> class EAudio * _pActualAudio;
    // -> unsigned int gMSSMusicIDs[6][16];
    // -> static const char * const MSS_play;
    // -> static const char * const MSS_enable;
    // -> static const char * const MSS_hilite;
}

// Range: 0x801D2BE4 -> 0x801D2C94
char * MSSTarget::GetVariable(class MSSTarget * const this /* r29 */, const char * varname /* r30 */) {
    // Local variables
    char * pResult; // r31

    // References
    // -> static const char * const MSS_exists;
    // -> static const char * const MSS_entries;
}

// Range: 0x801D2C94 -> 0x801D2D3C
unsigned short * MSSTarget::GetLocalizable() {
    // Local variables
    unsigned short widestring[4096]; // r1+0x10
    const unsigned short * const pString; // r3
    unsigned short * pResultString; // r31

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801D2D3C -> 0x801D2D40
void MSSTarget::Update() {}

// Range: 0x801D2D40 -> 0x801D2D44
void MSSTarget::Draw() {}

// Range: 0x801D2D44 -> 0x801D2E00
unsigned char MSSTarget::MusicSelectionsModified() {
    // Local variables
    unsigned long index; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801D2E00 -> 0x801D2E18
unsigned char MSSTarget::ResetSelection() {}

// Range: 0x801D2E18 -> 0x801D2E80
unsigned char MSSTarget::RememberMusicSelections() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801D2E80 -> 0x801D2EE8
unsigned char MSSTarget::CommitMusicSelections() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801D2EE8 -> 0x801D2FAC
unsigned char MSSTarget::get_MSS_entries(class MSSTarget * const this /* r27 */, char * pResult /* r28 */) {
    // Local variables
    int genreindex; // r30
    int songindex; // r29
    int songcount; // r0
}

// Range: 0x801D2FAC -> 0x801D2FD0
unsigned long MSSTarget::getSongCount() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801D2FD0 -> 0x801D304C
unsigned char MSSTarget::setIsMusicEnabled() {}

// Range: 0x801D304C -> 0x801D30A4
unsigned char MSSTarget::getIsMusicEnabled() {}


