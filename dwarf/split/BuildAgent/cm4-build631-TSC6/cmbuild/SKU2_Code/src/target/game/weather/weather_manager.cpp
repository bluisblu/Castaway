/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\weather\weather_manager.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80249118 -> 0x8024CA0C
*/
// Range: 0x80249118 -> 0x8024941C
void * WeatherManager::WeatherManager(class WeatherManager * const this /* r30 */) {
    // Local variables
    int i; // r7

    // References
    // -> signed short MonthsInAYear;
}

// Range: 0x8024941C -> 0x80249614
void * WeatherManager::~WeatherManager(class WeatherManager * const this /* r27 */) {
    // Local variables
    int i; // r29
}

// Range: 0x80249614 -> 0x8024965C
void WeatherManager::DeallocateSunMoon(class WeatherManager * const this /* r31 */) {}

// Range: 0x8024965C -> 0x802496E8
void WeatherManager::DeallocateWindyPlantAssets(class WeatherManager * const this /* r31 */) {
    // References
    // -> class EAnimManager _animman;
}

// Range: 0x802496E8 -> 0x80249900
void WeatherManager::Init(class WeatherManager * const this /* r31 */) {
    // Local variables
    unsigned int i; // r26
    signed short j; // r25
    int i; // r25

    // References
    // -> class EAnimManager _animman;
    // -> char * ms_szRainLevelNames[5];
    // -> class ECharacterManager _characterman;
    // -> class EModelManager _modelman;
    // -> class EGlobal _globals;
    // -> signed short MonthsInAYear;
    // -> class EQuickdataManager _quickdataman;
}

// Range: 0x80249900 -> 0x80249960
void WeatherManager::Reset(class WeatherManager * const this /* r31 */) {}

// Range: 0x80249960 -> 0x80249BC0
void WeatherManager::DoStream(class WeatherManager * const this /* r27 */, class ReconBuffer * r /* r28 */, int version /* r29 */) {
    // Local variables
    int i; // r31
    struct WeatherEvent weatherEvent; // r1+0x18
    int i; // r31
    struct WeatherEvent * pWeatherEvent; // r30
    int nTemp32; // r1+0x14
    signed short nTemp16; // r1+0xA
    signed char nTemp8; // r1+0x8
    int nWeatherStateID; // r1+0x10
    int i; // r30
    const char * szStateName; // r0
    const struct WeatherState * tempData; // r1+0xC
}

// Range: 0x80249BC0 -> 0x80249C24
int WeatherManager::GetNumWeatherSequences(class WeatherManager * const this /* r7 */) {
    // Local variables
    const struct WeatherState * tempData; // r1+0x8
}

// Range: 0x80249C24 -> 0x80249E68
void WeatherManager::SetWeatherState(class WeatherManager * const this /* r29 */, int nSequenceNumber /* r30 */, unsigned char bSkipTransition /* r31 */) {
    // Local variables
    const struct WeatherState * tempData; // r1+0x18

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80249E68 -> 0x80249ECC
char * WeatherManager::GetWeatherStateName() {
    // Local variables
    int i; // r8
}

// Range: 0x80249ECC -> 0x80249EE8
enum WeatherStateType WeatherManager::GetWeatherState() {}

// Range: 0x80249EE8 -> 0x80249EF8
void WeatherManager::SetToDefaultWeather() {}

// Range: 0x80249EF8 -> 0x80249F8C
void WeatherManager::Suspend(class WeatherManager * const this /* r31 */) {
    // References
    // -> class EEngine * _pEngine;
}

// Range: 0x80249F8C -> 0x8024A070
void WeatherManager::Resume(class WeatherManager * const this /* r30 */, class GameTime & nNewTime /* r31 */) {
    // Local variables
    class TreeBranchManager * pTreeBranchManager; // r0
    class TreeManager * pTreeManager; // r0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8024A070 -> 0x8024A128
void WeatherManager::SetCurrentTime(class WeatherManager * const this /* r29 */, const class GameTime & nCurrentTime /* r30 */) {
    // Local variables
    int nDeltaTime; // r31
}

// Range: 0x8024A128 -> 0x8024A1B4
void WeatherManager::SetWaitTimes(class WeatherManager * const this /* r31 */) {}

// Range: 0x8024A1B4 -> 0x8024A214
void WeatherManager::SetLevelData(class WeatherManager * const this /* r31 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x8024A214 -> 0x8024A22C
void WeatherManager::ResetDamageAccumulation() {}

// Range: 0x8024A22C -> 0x8024A28C
enum WindLevel WeatherManager::GetWindLevelForAmbientSound(const class WeatherManager * const this /* r31 */) {}

// Range: 0x8024A28C -> 0x8024A33C
void WeatherManager::SetWindLevel(class WeatherManager * const this /* r30 */) {
    // Local variables
    enum WindLevel prevWindLevel; // r31

    // References
    // -> char * ms_szWindLevelNames[5];
}

// Range: 0x8024A33C -> 0x8024A3A8
unsigned char WeatherManager::IsRaining(const class WeatherManager * const this /* r31 */) {}

// Range: 0x8024A3A8 -> 0x8024A408
enum RainLevel WeatherManager::GetRainLevelForAmbientSound(const class WeatherManager * const this /* r31 */) {}

// Range: 0x8024A408 -> 0x8024A4F4
void WeatherManager::SetRainLevel(class WeatherManager * const this /* r31 */) {
    // References
    // -> char * ms_szRainLevelNames[5];
}

// Range: 0x8024A4F4 -> 0x8024A500
void WeatherManager::SetGloomLevel() {}

// Range: 0x8024A500 -> 0x8024A508
void WeatherManager::SetTargetGloomLevel() {}

// Range: 0x8024A508 -> 0x8024A510
void WeatherManager::SetCloudLevel() {}

// Range: 0x8024A510 -> 0x8024A63C
void WeatherManager::SetFogLevel(class WeatherManager * const this /* r29 */) {
    // References
    // -> char * ms_szFogLevelNames[4];
}

// Range: 0x8024A63C -> 0x8024A68C
struct WeatherEvent * WeatherManager::GetLastWeatherEvent() {}

// Range: 0x8024A68C -> 0x8024A6C4
struct WeatherEvent * WeatherManager::GetWeatherEvent() {}

// Range: 0x8024A6C4 -> 0x8024A708
void WeatherManager::ClearWeatherEvents(class WeatherManager * const this /* r31 */) {}

// Range: 0x8024A708 -> 0x8024A7D4
void WeatherManager::AddWeatherEvent(class WeatherManager * const this /* r31 */) {}

// Range: 0x8024A7D4 -> 0x8024A8DC
unsigned char WeatherManager::AddPossibleWeatherEvent(class WeatherManager * const this /* r29 */) {
    // Local variables
    unsigned char bNewWeatherEvent; // r31
    struct WeatherEvent * pLastWeatherEvent; // r30
    struct WeatherEvent weatherEvent; // r1+0x8
}

// Range: 0x8024A8DC -> 0x8024ABF4
void WeatherManager::GetDamageEvents(class WeatherManager * const this /* r29 */, struct WeatherEvent * pWeatherEvent /* r27 */, class GameTime & startTime /* r26 */, class GameTime & endTime /* r25 */, int lotNumber /* r24 */, class vector & damageEvents /* r30 */) {
    // Local variables
    const struct LevelData * pLevelData; // r0
    int nNumHours; // r31
    float fDamagePerHour[4]; // r1+0x30
    const struct WindLevelRef * pWindLevelData; // r1+0x10
    const struct RainLevelRef * pRainLevelData; // r1+0xC
    int i; // r29
    float fMult; // f31
    int i; // r28
    float fRandomNumber; // f1
    float fAccumulatedDamage[4]; // r1+0x20
    int h; // r26
    struct DamageEvent damage; // r1+0x18
    unsigned char bApplyDamage; // r25
    int i; // r24
    float fIntPortion; // f0

    // References
    // -> char * ms_szRainLevelNames[5];
    // -> char * ms_szWindLevelNames[5];
    // -> int SecondsInAnHour;
    // -> class EGlobal _globals;
}

// Range: 0x8024ABF4 -> 0x8024AD04
int WeatherManager::AdvanceTime(class WeatherManager * const this /* r29 */, class GameTime & newTime /* r30 */) {
    // Local variables
    int nSequenceDeltaSeconds; // r30
}

// Range: 0x8024AD04 -> 0x8024B1D8
void WeatherManager::Update(class WeatherManager * const this /* r31 */, const class GameTime & nCurrentGameTime /* r28 */) {
    // Local variables
    int nDeltaTime; // r29
    int nSequenceDeltaSeconds; // r0
    float fRandomNumber; // f0
    float fRandomNumber; // f0
    int nNumHoursPassed; // r29

    // References
    // -> int SecondsInAnHour;
    // -> class EGlobal _globals;
}

// Range: 0x8024B1D8 -> 0x8024B370
void WeatherManager::Draw(class WeatherManager * const this /* r29 */, class ERC * prc /* r30 */) {
    // Local variables
    float fChange; // f30
    float fNoise; // f0
    float fSpeedMultiplier; // f0
}

// Range: 0x8024B370 -> 0x8024B480
void WeatherManager::ChooseNewWeatherState(class WeatherManager * const this /* r31 */) {
    // Local variables
    signed short nCurrentYear; // r1+0x12
    signed short nCurrentMonth; // r1+0x10
    signed short nCurrentDay; // r1+0xE
    signed short nCurrentHour; // r1+0xC
    signed short nCurrentMinute; // r1+0xA
    signed short nCurrentSecond; // r1+0x8
    signed short nMonthIndex; // r29
    int nRandomNumber; // r28
    int nCurrentWeight; // r27
    int i; // r26

    // References
    // -> signed short EpochMonth;
}

// Range: 0x8024B480 -> 0x8024B620
void WeatherManager::TriggerLightningEffect(class WeatherManager * const this /* r31 */) {
    // Local variables
    float fIntensity; // f0
    char szRowName[64]; // r1+0x10
    int nThunderDelay; // r30
    const struct WeatherSounds * pThunderSounds; // r1+0x8
    int nSoundEventIndex; // r0
    unsigned int nSoundEventID; // r31
}

// Range: 0x8024B620 -> 0x8024B7C8
void WeatherManager::TriggerEarthquakeEffect(class WeatherManager * const this /* r29 */) {
    // Local variables
    class BitFlags nWeatherFlags; // r1+0x8
    struct WeatherEvent weatherEvent; // r1+0x10
    int i; // r30
    float fRandomNumber; // f1
}

// Range: 0x8024B7C8 -> 0x8024B9DC
void WeatherManager::SetTransitionVariables(class WeatherManager * const this /* r30 */, float fInterpolationFactor /* f31 */) {
    // Local variables
    float fPreviousGloom; // f30
    enum RainLevel previousRainLevel; // r31
    enum FogLevel previousFogLevel; // r0
    float fPreviousFogIntensity; // f29
    const struct FogLevelRef * pPreviousFogLevelData; // r1+0x8
    float fGloomDelta; // f28
    float fFogIntensityDelta; // f0

    // References
    // -> class EEngine * _pEngine;
    // -> char * ms_szFogLevelNames[4];
}

// Range: 0x8024B9DC -> 0x8024BB10
void WeatherManager::ChangeWind(class WeatherManager * const this /* r31 */) {
    // Local variables
    float fDeltaSpeedRange; // f31
    float fDeltaSpeed; // f1
    float fDeltaDirectionRange; // f31
    float fDeltaDirection; // f31
    class EMat4 mat; // r1+0x20
}

// Range: 0x8024BB10 -> 0x8024BBB0
void WeatherManager::LoadWindyPlants(class WeatherManager * const this /* r31 */) {
    // References
    // -> class EAnimManager _animman;
}

// Range: 0x8024BBB0 -> 0x8024BD10
void WeatherManager::UpdateWindyPlantAssetLoad(class WeatherManager * const this /* r29 */) {
    // Local variables
    class ERLevel * pLevel; // r31
    class vector l; // r1+0x18
    class EMidLotInstance * * iter; // r30
    struct WindyPlantInfo info; // r1+0x10

    // References
    // -> class EAnimManager _animman;
    // -> class EEngine * _pEngine;
}

// Range: 0x8024BD10 -> 0x8024BE98
void WeatherManager::StartWindyPlantAnimation(class WeatherManager * const this /* r27 */) {
    // Local variables
    struct WindyPlantInfo * iter; // r29
    class EMidLotInstance * pMidLotInstance; // r28
    class EACTrack * pTrack; // r30
    float fPos; // f29
}

// Range: 0x8024BE98 -> 0x8024C02C
void WeatherManager::ApplyGlobalDamage(class WeatherManager * const this /* r27 */) {
    // Local variables
    struct DamageEvent damage; // r1+0x8
    unsigned char bApplyDamage; // r29
    int i; // r28
    float fMult; // f30
    float fIntPortion; // f0

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8024C02C -> 0x8024C6B0
void WeatherManager::UpdateSunMoon(class WeatherManager * const this /* r30 */) {
    // Local variables
    const struct LightingSequence * pLightingSequence; // r31
    signed short nCurrentYear; // r1+0x12
    signed short nCurrentMonth; // r1+0x10
    signed short nCurrentDay; // r1+0xE
    signed short nCurrentHour; // r1+0xC
    signed short nCurrentMinute; // r1+0xA
    signed short nCurrentSecond; // r1+0x8
    int nPrev; // r1+0x2C
    int nCur; // r1+0x28
    float fTimeInHours; // f1
    const struct LightingEntry & lighting; // r0
    int nTotalSecondsOfDaylight; // r29
    int nSecondsSinceSunrise; // r0
    float fPercentOfTraversalComplete; // f0
    int nTotalSecondsOfMoonlight; // r29
    int nSecondsSinceMoonrise; // r0
    float fPercentOfTraversalComplete; // f0
    float xSize; // f30
    float ySize; // f2
    float fXOffset; // f31
    float fYOffset; // f30
    float sin_theta; // r1+0x24
    float cos_theta; // r1+0x20
    float sin_phi; // r1+0x1C
    float cos_phi; // r1+0x18
    class ERLevel * pLevel; // r0

    // References
    // -> class EEngine * _pEngine;
    // -> class cFixedWorld * pFixedWorld;
    // -> int SECONDS_BETWEEN_MOON_PHASE_UPDATE;
    // -> signed short SecondsInAMinute;
    // -> int SecondsInAnHour;
    // -> signed short EpochMinute;
    // -> signed short EpochHour;
    // -> signed short EpochDay;
    // -> signed short EpochMonth;
    // -> class EGlobal _globals;
}

// Range: 0x8024C6B0 -> 0x8024C8E4
void WeatherManager::CalculateSunData(class WeatherManager * const this /* r28 */, signed short nCurrentYear /* r29 */, signed short nCurrentMonth /* r30 */, signed short nCurrentDay /* r31 */) {
    // Local variables
    const struct MonthData * pNextMonthData; // r0
    float dt; // f3
    float invdt; // f2
    const struct LightingSequence * pLightingSequence; // r27
    float fSunriseTime; // f31
    float fSunsetTime; // f30
    int nSunriseSeconds; // r1+0xC
    int nSunsetSeconds; // r1+0x8
    class ERLevel * pLevel; // r0

    // References
    // -> class EEngine * _pEngine;
    // -> signed short EpochSecond;
    // -> signed short EpochMinute;
    // -> signed short EpochHour;
    // -> int SecondsInAnHour;
    // -> class EGlobal _globals;
    // -> signed short DaysInAMonth;
    // -> signed short MonthsInAYear;
    // -> signed short EpochMonth;
}

// Range: 0x8024C8E4 -> 0x8024CA00
void WeatherManager::CalculateMoonData(class WeatherManager * const this /* r27 */, signed short nCurrentYear /* r28 */, signed short nCurrentMonth /* r29 */, signed short nCurrentDay /* r30 */) {
    // Local variables
    float fMoonriseTime; // f2
    int nMoonriseSeconds; // r1+0x10

    // References
    // -> signed short EpochSecond;
    // -> signed short EpochMinute;
    // -> signed short EpochHour;
    // -> int SecondsInAnHour;
    // -> int SECONDS_BETWEEN_MOON_PHASE_UPDATE;
}

// Range: 0x8024CA00 -> 0x8024CA0C
static void __sinit_\weather_unity_cpp() {
    // References
    // -> int SECONDS_BETWEEN_MOON_PHASE_UPDATE;
    // -> int SecondsInADay;
}


