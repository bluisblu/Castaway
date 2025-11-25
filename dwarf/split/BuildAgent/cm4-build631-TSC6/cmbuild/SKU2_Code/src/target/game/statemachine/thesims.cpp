/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\statemachine\thesims.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801772A8 -> 0x8017A140
*/
// Range: 0x801772A8 -> 0x80177300
void * TheSimsNGCLicenseState::TheSimsNGCLicenseState(class TheSimsNGCLicenseState * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__22TheSimsNGCLicenseState;
}

// Range: 0x80177300 -> 0x801773F0
void TheSimsNGCLicenseState::Startup(class TheSimsNGCLicenseState * const this /* r27 */) {
    // References
    // -> class EFontManager _fontman;
    // -> class EGlobal _globals;
}

// Range: 0x801773F0 -> 0x80177434
void TheSimsNGCLicenseState::Shutdown(class TheSimsNGCLicenseState * const this /* r31 */) {}

// Range: 0x80177434 -> 0x8017750C
void TheSimsNGCLicenseState::Update(class TheSimsNGCLicenseState * const this /* r31 */) {}

// Range: 0x8017750C -> 0x80177700
void TheSimsNGCLicenseState::Draw(class TheSimsNGCLicenseState * const this /* r26 */, class ERC * prc /* r27 */) {
    // References
    // -> class EVec4 _BLACK;
    // -> class EGlobal _globals;
}

// Range: 0x80177700 -> 0x80177768
void * TheSimsNGCHealthWarningState::TheSimsNGCHealthWarningState(class TheSimsNGCHealthWarningState * const this /* r30 */) {
    // References
    // -> struct [anonymous] __vt__28TheSimsNGCHealthWarningState;
}

// Range: 0x80177768 -> 0x80177A30
void TheSimsNGCHealthWarningState::Startup(class TheSimsNGCHealthWarningState * const this /* r31 */) {
    // Local variables
    int osLanguage; // r0

    // References
    // -> class EGraphics * _pGfx;
    // -> class EFontManager _fontman;
    // -> class EGlobal _globals;
}

// Range: 0x80177A30 -> 0x80177A90
void TheSimsNGCHealthWarningState::Shutdown(class TheSimsNGCHealthWarningState * const this /* r31 */) {}

// Range: 0x80177A90 -> 0x80177AE0
void TheSimsNGCHealthWarningState::Reset(class TheSimsNGCHealthWarningState * const this /* r31 */) {}

// Range: 0x80177AE0 -> 0x80177C64
void TheSimsNGCHealthWarningState::Update(class TheSimsNGCHealthWarningState * const this /* r31 */, float fDeltaSeconds /* f31 */) {
    // Local variables
    unsigned int wristStrapScreenAnimStep; // r0

    // References
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x80177C64 -> 0x80177D4C
void TheSimsNGCHealthWarningState::Draw(class TheSimsNGCHealthWarningState * const this /* r26 */, class ERC * prc /* r27 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80177D4C -> 0x80177DA4
void * TheSimsWiiNunchuckRequiredState::TheSimsWiiNunchuckRequiredState(class TheSimsWiiNunchuckRequiredState * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__31TheSimsWiiNunchuckRequiredState;
}

// Range: 0x80177DA4 -> 0x80177FB8
void TheSimsWiiNunchuckRequiredState::Startup(class TheSimsWiiNunchuckRequiredState * const this /* r31 */) {
    // Local variables
    unsigned int shaderId; // r4
    int menuSelectedLanguage; // r0

    // References
    // -> class EGraphics * _pGfx;
    // -> class EQuickdataManager _quickdataman;
    // -> class EFontManager _fontman;
    // -> class EGlobal _globals;
}

// Range: 0x80177FB8 -> 0x80178018
void TheSimsWiiNunchuckRequiredState::Shutdown(class TheSimsWiiNunchuckRequiredState * const this /* r31 */) {}

// Range: 0x80178018 -> 0x80178068
void TheSimsWiiNunchuckRequiredState::Reset(class TheSimsWiiNunchuckRequiredState * const this /* r31 */) {}

// Range: 0x80178068 -> 0x80178230
void TheSimsWiiNunchuckRequiredState::Update(class TheSimsWiiNunchuckRequiredState * const this /* r27 */, float fDeltaSeconds /* f31 */) {
    // Local variables
    class TRCStateMachine * pTRCStateMachine; // r29
    class StateMachine * pSM; // r30
    unsigned char bScreenTimeout; // r28

    // References
    // -> class EControllerManager * _pCtrlMan;
}

// Range: 0x80178230 -> 0x80178318
void TheSimsWiiNunchuckRequiredState::Draw(class TheSimsWiiNunchuckRequiredState * const this /* r26 */, class ERC * prc /* r27 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80178318 -> 0x80178364
void * TheSimsEAMovieState::TheSimsEAMovieState(class TheSimsEAMovieState * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__19TheSimsEAMovieState;
}

// Range: 0x80178364 -> 0x80178450
void TheSimsEAMovieState::Startup(class TheSimsEAMovieState * const this /* r30 */) {
    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
    // -> class EAudio * _pActualAudio;
}

// Range: 0x80178450 -> 0x801784A4
void TheSimsEAMovieState::Update(class TheSimsEAMovieState * const this /* r31 */) {
    // References
    // -> class GameData _gd;
}

// Range: 0x801784A4 -> 0x801784A8
void TheSimsEAMovieState::Draw() {}

// Range: 0x801784A8 -> 0x80178550
void TheSimsEAMovieState::Shutdown(class TheSimsEAMovieState * const this /* r30 */) {
    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x80178550 -> 0x80178594
void * TheSimsMemCardCheckState::TheSimsMemCardCheckState(class TheSimsMemCardCheckState * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__24TheSimsMemCardCheckState;
}

// Range: 0x80178594 -> 0x80178610
void TheSimsMemCardCheckState::Startup(class TheSimsMemCardCheckState * const this /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80178610 -> 0x80178614
void TheSimsMemCardCheckState::Shutdown() {}

// Range: 0x80178614 -> 0x80178618
void TheSimsMemCardCheckState::Update() {}

// Range: 0x80178618 -> 0x801786E8
void TheSimsMemCardCheckState::Draw(class ERC * prc /* r28 */) {
    // References
    // -> class EVec4 _BLACK;
    // -> class EGlobal _globals;
}

// Range: 0x801786E8 -> 0x80178740
void * TheSimsMaxisLogoState::TheSimsMaxisLogoState(class TheSimsMaxisLogoState * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__21TheSimsMaxisLogoState;
}

// Range: 0x80178740 -> 0x80178830
void TheSimsMaxisLogoState::Startup(class TheSimsMaxisLogoState * const this /* r31 */) {
    // References
    // -> class EFontManager _fontman;
    // -> class EGlobal _globals;
}

// Range: 0x80178830 -> 0x80178890
void TheSimsMaxisLogoState::Shutdown(class TheSimsMaxisLogoState * const this /* r31 */) {}

// Range: 0x80178890 -> 0x80178960
void TheSimsMaxisLogoState::Reset(class TheSimsMaxisLogoState * const this /* r31 */) {
    // Local variables
    class EVec2 v; // r1+0x10

    // References
    // -> class EGlobal _globals;
}

// Range: 0x80178960 -> 0x80178A54
void TheSimsMaxisLogoState::Update(class TheSimsMaxisLogoState * const this /* r31 */, float fDeltaSeconds /* f31 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80178A54 -> 0x80178B3C
void TheSimsMaxisLogoState::Draw(class TheSimsMaxisLogoState * const this /* r26 */, class ERC * prc /* r27 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80178B3C -> 0x80178B88
void * TheSimsSimsIntroMovieState::TheSimsSimsIntroMovieState(class TheSimsSimsIntroMovieState * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__26TheSimsSimsIntroMovieState;
}

// Range: 0x80178B88 -> 0x80178BE4
void TheSimsSimsIntroMovieState::Startup(class TheSimsSimsIntroMovieState * const this /* r31 */) {
    // References
    // -> class GameData _gd;
}

// Range: 0x80178BE4 -> 0x80178C58
void TheSimsSimsIntroMovieState::Shutdown(class TheSimsSimsIntroMovieState * const this /* r30 */) {
    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x80178C58 -> 0x80178D48
void TheSimsSimsIntroMovieState::Update(class TheSimsSimsIntroMovieState * const this /* r30 */) {
    // References
    // -> class ESimsApp _app;
    // -> class EAudio * _pActualAudio;
    // -> class EControllerManager * _pCtrlMan;
    // -> static int frames;
}

// Range: 0x80178D48 -> 0x80178DC4
void TheSimsEnterMainMenuState::Reset(class TheSimsEnterMainMenuState * const this /* r31 */) {
    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x80178DC4 -> 0x80178DC8
void TheSimsEnterMainMenuState::Shutdown() {}

// Range: 0x80178DC8 -> 0x80178DF8
static void BGExec_SetDefaults() {
    // References
    // -> class BG _bg;
    // -> class EGlobal _globals;
}

// Range: 0x80178DF8 -> 0x80178E38
static void BGCall_SetDefaults() {
    // References
    // -> class Background * _pBackground;
    // -> class BG _bg;
}

// Range: 0x80178E38 -> 0x80178E88
void * TheSimsEnterMainMenuState::TheSimsEnterMainMenuState(class TheSimsEnterMainMenuState * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__25TheSimsEnterMainMenuState;
}

// Range: 0x80178E88 -> 0x80178F58
void TheSimsEnterMainMenuState::Startup(class TheSimsEnterMainMenuState * const this /* r30 */) {
    // References
    // -> class EDatasetManager _datasetman;
    // -> class EGlobal _globals;
    // -> class EResourceLoader * _pResLoader;
}

// Range: 0x80178F58 -> 0x80179358
void TheSimsEnterMainMenuState::Update(class TheSimsEnterMainMenuState * const this /* r29 */) {
    // Local variables
    unsigned char bDone; // r31
    class QTimer lqtimer; // r1+0x10
    int iOldStage; // r30

    // References
    // -> class EGraphics * _pGfx;
    // -> class EGlobal _globals;
    // -> class cFixedWorld * pFixedWorld;
    // -> class EDatasetManager _datasetman;
    // -> class EAudioSampleManager * _pAudiosampleman;
    // -> class GameData _gd;
}

// Range: 0x80179358 -> 0x8017935C
void TheSimsEnterMainMenuState::Draw() {}

// Range: 0x8017935C -> 0x80179360
void TheSimsEnterMainMenuState::DrawTopmost() {}

// Range: 0x80179360 -> 0x801793A8
void TheSimsMainMenuState::Startup(class TheSimsMainMenuState * const this /* r31 */) {
    // References
    // -> class EGlobal _globals;
    // -> class HDDThread g_hddThread;
}

// Range: 0x801793A8 -> 0x80179414
void TheSimsMainMenuState::Shutdown() {
    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x80179414 -> 0x80179544
void TheSimsMainMenuState::Reset(class TheSimsMainMenuState * const this /* r31 */) {
    // References
    // -> class AptViewer * _gpAptViewer;
    // -> class EControllerManager * _pCtrlMan;
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x80179544 -> 0x80179984
void TheSimsMainMenuState::Update(class TheSimsMainMenuState * const this /* r30 */) {
    // Local variables
    int iRetVal; // r0
    int nFamilyNum; // r31

    // References
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x80179984 -> 0x80179A08
void TheSimsMainMenuState::LeavingMainMenuCleanup() {
    // References
    // -> class GameData _gd;
}

// Range: 0x80179A08 -> 0x80179A0C
void TheSimsMainMenuState::Draw() {}

// Range: 0x80179A0C -> 0x80179A7C
void TheSimsChooseLanguageState::Startup(class TheSimsChooseLanguageState * const this /* r31 */) {
    // References
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x80179A7C -> 0x80179AE0
void TheSimsChooseLanguageState::Shutdown(class TheSimsChooseLanguageState * const this /* r31 */) {}

// Range: 0x80179AE0 -> 0x80179B1C
void TheSimsChooseLanguageState::Reset(class TheSimsChooseLanguageState * const this /* r31 */) {}

// Range: 0x80179B1C -> 0x80179B8C
void TheSimsChooseLanguageState::Update(class TheSimsChooseLanguageState * const this /* r31 */) {}

// Range: 0x80179B8C -> 0x80179BE4
void TheSimsChooseLanguageState::Draw(class TheSimsChooseLanguageState * const this /* r30 */, class ERC * prc /* r31 */) {}

// Range: 0x80179BE4 -> 0x80179F44
void TheSimsStateMachine::Startup(class TheSimsStateMachine * const this /* r31 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80179F44 -> 0x80179F9C
void TheSimsStateMachine::Shutdown() {
    // References
    // -> class GameData _gd;
}

// Range: 0x80179F9C -> 0x80179FF0
void TheSimsStateMachine::Update(class TheSimsStateMachine * const this /* r31 */, float fDeltaSeconds /* f31 */) {
    // Local variables
    unsigned char pre; // r0

    // References
    // -> class GameData _gd;
}

// Range: 0x80179FF0 -> 0x8017A078
void TheSimsStateMachine::Draw(class TheSimsStateMachine * const this /* r29 */, class ERC * prc /* r30 */) {
    // References
    // -> class GameData _gd;
}

// Range: 0x8017A078 -> 0x8017A0D8
void * DummyMode::DummyMode(class DummyMode * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__9DummyMode;
}

// Range: 0x8017A0D8 -> 0x8017A130
void * DummyMode::~DummyMode(class DummyMode * const this /* r30 */) {}

// Range: 0x8017A130 -> 0x8017A134
void DummyMode::Init() {}

// Range: 0x8017A134 -> 0x8017A138
void DummyMode::Reset() {}

// Range: 0x8017A138 -> 0x8017A13C
void DummyMode::Update() {}

// Range: 0x8017A13C -> 0x8017A140
void DummyMode::Draw() {}


