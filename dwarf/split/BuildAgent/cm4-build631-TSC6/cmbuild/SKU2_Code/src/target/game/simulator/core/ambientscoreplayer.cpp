/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\ambientscoreplayer.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800EEE9C -> 0x800EFED8
*/
// Range: 0x800EEE9C -> 0x800EEF20
void * AmbientScorePlayer::AmbientScorePlayer(class AmbientScorePlayer * const this /* r31 */) {}

// Range: 0x800EEF20 -> 0x800EEF80
void * AmbientScorePlayer::~AmbientScorePlayer(class AmbientScorePlayer * const this /* r30 */) {}

// Range: 0x800EEF80 -> 0x800EF1A0
void AmbientScorePlayer::Update(class AmbientScorePlayer * const this /* r31 */) {
    // Local variables
    int i; // r29
    int timediff; // r0
    unsigned int totalProbability; // r29
    class vector activeSounds; // r1+0x10
    const class ERAmbientSound * itSounds; // r1+0xC
    int soundsNeeded; // r4
    class AmbientSoundPlayer * pSoundPlayer; // r0
    class ERAmbientSound * itSounds'80; // r30
}

// Range: 0x800EF1A0 -> 0x800EF1A8
void AmbientScorePlayer::SetListenerCount() {}

// Range: 0x800EF1A8 -> 0x800EF30C
void AmbientScorePlayer::UpdateListener(class AmbientScorePlayer * const this /* r28 */, unsigned int listenerIndex /* r30 */, const class EVec3 & pos /* r29 */, const class EVec3 & dir /* r31 */) {
    // Local variables
    struct ListenerInfo * listenerInfo; // r30
    class CTilePt tilept; // r1+0x8
}

// Range: 0x800EF30C -> 0x800EF314
void AmbientScorePlayer::SetTime() {}

// Range: 0x800EF314 -> 0x800EF31C
float AmbientScorePlayer::GetTime() {}

// Range: 0x800EF31C -> 0x800EF454
unsigned char AmbientScorePlayer::Load(class AmbientScorePlayer * const this /* r29 */, const char * scoreName /* r30 */) {
    // Local variables
    int i; // r30

    // References
    // -> class EAmbientScoreManager g_ambientscoreman;
}

// Range: 0x800EF454 -> 0x800EF490
unsigned char AmbientScorePlayer::Start(class AmbientScorePlayer * const this /* r31 */) {}

// Range: 0x800EF490 -> 0x800EF49C
unsigned char AmbientScorePlayer::Stop() {}

// Range: 0x800EF49C -> 0x800EF538
unsigned char AmbientScorePlayer::Shutdown(class AmbientScorePlayer * const this /* r31 */) {
    // References
    // -> class EAmbientScoreManager g_ambientscoreman;
}

// Range: 0x800EF538 -> 0x800EF648
unsigned char AmbientScorePlayer::SetPause(class AmbientScorePlayer * const this /* r29 */) {
    // Local variables
    int i; // r30
    int i; // r30
}

// Range: 0x800EF648 -> 0x800EF654
unsigned char AmbientScorePlayer::SetVolume() {}

// Range: 0x800EF654 -> 0x800EF65C
int AmbientScorePlayer::GetVolume() {}

// Range: 0x800EF65C -> 0x800EF664
class ERAmbientScore * AmbientScorePlayer::GetAmbientScore() {}

// Range: 0x800EF664 -> 0x800EF66C
class vector * AmbientScorePlayer::GetListenerInfos() {}

// Range: 0x800EF66C -> 0x800EF718
unsigned char AmbientScorePlayer::SoundRangeCoversCurTime() {}

// Range: 0x800EF718 -> 0x800EF7B0
unsigned char AmbientScorePlayer::SoundAlreadyPlaying(class AmbientScorePlayer * const this /* r28 */, const class ERAmbientSound * ambientSound /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x800EF7B0 -> 0x800EFA54
unsigned char AmbientScorePlayer::SoundInHearingDistance(class AmbientScorePlayer * const this /* r27 */, const class ERAmbientSound * ambientSound /* r28 */) {
    // Local variables
    struct ListenerInfo * it; // r29
    class EVec3 delta; // r1+0x8
}

// Range: 0x800EFA54 -> 0x800EFB84
unsigned char AmbientScorePlayer::SoundAllowedByWeatherState(const class ERAmbientSound * ambientSound /* r29 */) {
    // Local variables
    class WeatherManager * pWeatherManager; // r30
    enum WindLevel windLevel; // r0
    enum RainLevel rainLevel; // r0
}

// Range: 0x800EFB84 -> 0x800EFC5C
class AmbientSoundPlayer * AmbientScorePlayer::AddSoundBasedOnProbability(class AmbientScorePlayer * const this /* r28 */, class vector & soundVect /* r29 */, int totalPlayProb /* r30 */) {
    // Local variables
    int randValue; // r31
    const class ERAmbientSound * * it; // r30
}

// Range: 0x800EFC5C -> 0x800EFD24
unsigned char AmbientScorePlayer::KillAllAmbientSounds(class AmbientScorePlayer * const this /* r28 */) {
    // Local variables
    unsigned char bSuccess; // r30
    int i; // r29
}

// Range: 0x800EFD24 -> 0x800EFDCC
class AmbientSoundPlayer * AmbientScorePlayer::AddNewAmbientSoundPlayer(class AmbientScorePlayer * const this /* r28 */, const class ERAmbientSound * pAmbientSound /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x800EFDCC -> 0x800EFED8
void AmbientScorePlayer::RemoveFinishedSounds(class AmbientScorePlayer * const this /* r29 */) {
    // Local variables
    int i; // r30
}


