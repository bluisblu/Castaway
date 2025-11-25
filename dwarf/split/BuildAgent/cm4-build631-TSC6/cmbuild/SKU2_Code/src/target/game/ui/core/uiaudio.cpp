/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\core\uiaudio.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017F7C8 -> 0x801800DC
*/
// Range: 0x8017F7C8 -> 0x8017F8D8
void * UIAUDIO::UIAUDIO(class UIAUDIO * const this /* r28 */) {
    // Local variables
    class UIAUDIORecord * prev; // r30
    int i; // r31
    int i; // r29

    // References
    // -> class EAudio * _pActualAudio;
    // -> struct [anonymous] __vt__7UIAUDIO;
}

// Range: 0x8017F8D8 -> 0x8017F9DC
void * UIAUDIO::~UIAUDIO(class UIAUDIO * const this /* r27 */) {
    // Local variables
    class UIAUDIORecord * record; // r5
    class UIAUDIORecord * next; // r30
    int i; // r29

    // References
    // -> class EAudio * _pActualAudio;
    // -> struct [anonymous] __vt__7UIAUDIO;
}

// Range: 0x8017F9DC -> 0x8017FA48
void UIAUDIO::AddEntry() {
    // Local variables
    class UIAUDIORecord * record; // r8
}

// Range: 0x8017FA48 -> 0x8017FAE8
void UIAUDIO::RemoveEntry() {}

// Range: 0x8017FAE8 -> 0x8017FB94
unsigned char UIAUDIO::InstallEntry(class UIAUDIO * const this /* r26 */, const char * flashName /* r27 */, unsigned int sampleId /* r28 */, const char * className /* r29 */) {
    // Local variables
    class UIAUDIORecord * record; // r31
    unsigned char done; // r30
}

// Range: 0x8017FB94 -> 0x8017FC18
unsigned char UIAUDIO::UnInstallEntry(class UIAUDIO * const this /* r29 */, const char * flashName /* r30 */) {
    // Local variables
    class UIAUDIORecord * record; // r31
}

// Range: 0x8017FC18 -> 0x8017FC8C
unsigned char UIAUDIO::UnInstallAllEntries(class UIAUDIO * const this /* r29 */, const char * className /* r30 */) {
    // Local variables
    unsigned char rc; // r3
    class UIAUDIORecord * record; // r5
    class UIAUDIORecord * next; // r31
}

// Range: 0x8017FC8C -> 0x8017FD5C
unsigned int UIAUDIO::GetSound(class UIAUDIO * const this /* r28 */, const char * flashName /* r29 */) {
    // Local variables
    class UIAUDIORecord * record; // r30
}

// Range: 0x8017FD5C -> 0x8017FE50
void UIAUDIO::PlaySound(class UIAUDIO * const this /* r31 */, unsigned int sampleId /* r30 */) {
    // References
    // -> class EAudioSampleManager * _pAudiosampleman;
    // -> class EGlobal _globals;
}

// Range: 0x8017FE50 -> 0x8017FE9C
void UIAUDIO::Update(class UIAUDIO * const this /* r30 */) {
    // Local variables
    int index; // r31
}

// Range: 0x8017FE9C -> 0x80180020
void UIAUDIO::UpdateAudioLoad(class UIAUDIO * const this /* r28 */, int index /* r30 */) {
    // Local variables
    struct EVoiceDesc desc; // r1+0x8

    // References
    // -> class EAudio * _pActualAudio;
    // -> class EGlobal _globals;
    // -> class EAudioSampleManager * _pAudiosampleman;
}

// Range: 0x80180020 -> 0x801800DC
void UIAUDIO::StopSound(class UIAUDIO * const this /* r28 */, int voiceIndex /* r31 */) {
    // References
    // -> class EAudio * _pActualAudio;
    // -> class EAudioSampleManager * _pAudiosampleman;
    // -> class EGlobal _globals;
}


