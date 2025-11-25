/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\statemachine\livemode.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80170F68 -> 0x801743DC
*/
// Range: 0x80170F68 -> 0x80170FE0
static void LoadLevelGlobalData() {
    // Local variables
    int shd; // r29

    // References
    // -> class EShaderManager _shaderman;
    // -> static unsigned int g_levelShaders[4];
}

// Range: 0x80170FE0 -> 0x80171088
static void UnloadLevelGlobalData() {
    // Local variables
    int shd; // r29
    class cFixedWorld * pWorld; // r29

    // References
    // -> static unsigned int g_levelShaders[4];
    // -> class EShaderManager _shaderman;
}

// Range: 0x80171088 -> 0x80171120
static void RenderPostProcessEffects(class ERC * rc /* r29 */) {
    // Local variables
    class FrameEffectsManager * feMgr; // r31
    class Bloom * bloomObj; // r30
    class MotionBlur * blurObj; // r31

    // References
    // -> float _dt;
    // -> class EGlobal _globals;
}

// Range: 0x80171120 -> 0x801711B4
void * ELiveMode::ELiveMode(class ELiveMode * const this /* r31 */) {
    // References
    // -> class GameData _gd;
    // -> struct [anonymous] __vt__9ELiveMode;
}

// Range: 0x801711B4 -> 0x8017121C
void * ELiveMode::~ELiveMode(class ELiveMode * const this /* r30 */) {
    // References
    // -> class GameData _gd;
}

// Range: 0x8017121C -> 0x801712BC
void ELiveMode::Init(class ELiveMode * const this /* r30 */) {
    // References
    // -> class EShaderManager _shaderman;
    // -> class GameData _gd;
}

// Range: 0x801712BC -> 0x801712E0
void LiveModeInitState::Shutdown() {}

// Range: 0x801712E0 -> 0x8017138C
void LiveModeInitState::Reset(class LiveModeInitState * const this /* r31 */) {
    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
    // -> class HDDThread g_hddThread;
    // -> class cBoxX * g_pBoxX;
}

// Range: 0x8017138C -> 0x80171EC0
void LiveModeInitState::Update(class LiveModeInitState * const this /* r28 */) {
    // Local variables
    unsigned char bDone; // r30
    int iOldStage; // r29
    char lotpredataset[64]; // r1+0x70
    char lotpredataset[64]; // r1+0x30
    enum eMUResult muResult; // r0
    int neighborid; // r26
    class FTilePt start; // r1+0x10
    class FindGoodLocationParams fglp; // r1+0x18
    unsigned char success; // r26
    class Neighbor * pNeighbor; // r0
    signed short nNeighborID; // r0
    unsigned int dmp; // r25
    const char * tableLabel; // r5

    // References
    // -> float _dt;
    // -> class EResourceLoader * _pResLoader;
    // -> class EGlobal _globals;
    // -> class EDatasetManager _datasetman;
    // -> class GameData _gd;
}

// Range: 0x80171EC0 -> 0x80171EC4
void LiveModeInitState::Draw() {}

// Range: 0x80171EC4 -> 0x80171F08
void LiveModeInitState::DatasetFinishAddRefAsync(class LiveModeInitState * const this /* r31 */) {
    // References
    // -> class EDatasetManager _datasetman;
}

// Range: 0x80171F08 -> 0x8017203C
void ELiveMode::Reset(class ELiveMode * const this /* r31 */) {
    // Local variables
    class ObjectFolder * pObjectFolder; // r31

    // References
    // -> class EGlobal _globals;
    // -> class cBoxX * g_pBoxX;
}

// Range: 0x8017203C -> 0x80172074
void ChangeHouseDemolishHouse::Reset() {
    // References
    // -> class GameData _gd;
}

// Range: 0x80172074 -> 0x801720F0
void ChangeHouseDemolishHouse::Update(class ChangeHouseDemolishHouse * const this /* r31 */) {
    // References
    // -> class GameData _gd;
}

// Range: 0x801720F0 -> 0x8017211C
void ChangeHouseSaveHouse::Reset() {}

// Range: 0x8017211C -> 0x80172190
void ChangeHouseSaveHouse::Update(class ChangeHouseSaveHouse * const this /* r31 */) {
    // Local variables
    enum eMUResult muResult; // r0
}

// Range: 0x80172190 -> 0x80172288
void ChangeHouseUnloadHouse::Reset(class ChangeHouseUnloadHouse * const this /* r31 */) {
    // References
    // -> struct psystem * g_pParticleModelSystem;
    // -> struct psystem * g_pParticleWeatherSystem;
    // -> struct psystem * g_pParticleSystem;
    // -> class GameData _gd;
    // -> class EGlobal _globals;
    // -> class cBoxX * g_pBoxX;
}

// Range: 0x80172288 -> 0x801722C4
void ChangeHouseUnloadHouse::Update(class ChangeHouseUnloadHouse * const this /* r31 */) {}

// Range: 0x801722C4 -> 0x80172308
void ChangeHouseLoadHouse::DatasetFinishAddRefAsync(class ChangeHouseLoadHouse * const this /* r31 */) {
    // References
    // -> class EDatasetManager _datasetman;
}

// Range: 0x80172308 -> 0x80172390
void ChangeHouseLoadHouse::Reset(class ChangeHouseLoadHouse * const this /* r31 */) {
    // References
    // -> class GameData _gd;
    // -> class cBoxX * g_pBoxX;
}

// Range: 0x80172390 -> 0x80172C30
void ChangeHouseLoadHouse::Update(class ChangeHouseLoadHouse * const this /* r28 */) {
    // Local variables
    unsigned char bDone; // r30
    int iOldStage; // r29
    char lotpredataset[64]; // r1+0x50
    char lotpredataset[64]; // r1+0x10
    enum eMUResult muResult; // r0
    int neighborid; // r24
    class Neighbor * pNeighbor; // r27
    signed short nNeighborID; // r0

    // References
    // -> class ESimsDataManager _simsdataman;
    // -> class EResourceLoader * _pResLoader;
    // -> class AptViewer * _gpAptViewer;
    // -> class EDatasetManager _datasetman;
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x80172C30 -> 0x80172C44
unsigned char ChangeHouseLoadHouse::DatasetPendingAddRefAsync() {}

// Range: 0x80172C44 -> 0x80172D50
void LiveModeChangeHouseStateMachine::Startup(class LiveModeChangeHouseStateMachine * const this /* r30 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80172D50 -> 0x80172D98
void * ChangeHouseLoadHouse::ChangeHouseLoadHouse(class ChangeHouseLoadHouse * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__20ChangeHouseLoadHouse;
}

// Range: 0x80172D98 -> 0x80172DD8
void * ChangeHouseUnloadHouse::ChangeHouseUnloadHouse(class ChangeHouseUnloadHouse * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__22ChangeHouseUnloadHouse;
}

// Range: 0x80172DD8 -> 0x80172E18
void * ChangeHouseSaveHouse::ChangeHouseSaveHouse(class ChangeHouseSaveHouse * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__20ChangeHouseSaveHouse;
}

// Range: 0x80172E18 -> 0x80172E58
void * ChangeHouseDemolishHouse::ChangeHouseDemolishHouse(class ChangeHouseDemolishHouse * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__24ChangeHouseDemolishHouse;
}

// Range: 0x80172E58 -> 0x80172E90
void LiveModeChangeHouseStateMachine::Shutdown(class LiveModeChangeHouseStateMachine * const this /* r31 */) {}

// Range: 0x80172E90 -> 0x80172EF4
void LiveModeChangeHouseStateMachine::Reset(class LiveModeChangeHouseStateMachine * const this /* r31 */) {
    // References
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x80172EF4 -> 0x80172EF8
void LiveModeChangeHouseStateMachine::Update() {}

// Range: 0x80172EF8 -> 0x80172EFC
void LiveModeChangeHouseStateMachine::Draw() {}

// Range: 0x80172EFC -> 0x80172F30
void ELiveMode::ChangeHouse() {}

// Range: 0x80172F30 -> 0x80172F88
void ELiveMode::GotoStartMode() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80172F88 -> 0x80173054
void ELiveMode::QuitToMainMenu(class ELiveMode * const this /* r29 */) {
    // References
    // -> class ESimsApp _app;
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x80173054 -> 0x801731B8
unsigned char ELiveMode::IsReadyForUpdate(class ELiveMode * const this /* r30 */) {
    // References
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x801731B8 -> 0x80173598
void ELiveMode::UpdateIntroCamera(class ELiveMode * const this /* r31 */) {
    // Local variables
    unsigned char exitStage; // r29
    class EMat4 simMat; // r1+0x18

    // References
    // -> float _dtlim15;
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x80173598 -> 0x801739A4
void ELiveMode::Update(class ELiveMode * const this /* r31 */) {
    // Local variables
    unsigned char animpaused; // r0
    float speedMult; // f0
    class ESimsCam * pCam; // r30
    signed short freeWillOverride; // r0
    float interactorUpdateTime; // f31
    class ESimsCam * pCam; // r0

    // References
    // -> float _gamedt;
    // -> float _dt;
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x801739A4 -> 0x80173DD8
void ELiveMode::Draw(class ELiveMode * const this /* r26 */, class ERC * prc /* r31 */) {
    // Local variables
    const unsigned short * string; // r26
    class EVec2 Dimensions; // r1+0x48
    class EVec2 Pos; // r1+0x40
    class EVec3 ambient; // r1+0x94
    struct EDirLight directional; // r1+0xA0
    class EVec3 bgColor; // r1+0x88
    float mixRatio; // f31

    // References
    // -> class EGraphics * _pGfx;
    // -> class EVec4 _BLACK;
    // -> class EVec4 _WHITE;
    // -> static unsigned char FlipFlop;
    // -> float _dt;
    // -> static float Accumulator;
    // -> class ESimsApp _app;
    // -> class EGlobal _globals;
}

// Range: 0x80173DD8 -> 0x80173DDC
void ELiveMode::PauseAllSounds() {}

// Range: 0x80173DDC -> 0x80174094
void ELiveMode::DrawMain(class ERC * prc /* r27 */) {
    // Local variables
    class ESimsCam * pCam; // r29
    class E3DWindow * win; // r28

    // References
    // -> class EGraphics * _pGfx;
    // -> class EGlobal _globals;
    // -> class GameData _gd;
}

// Range: 0x80174094 -> 0x80174100
void ELiveMode::TriggerIntroCamera(class ELiveMode * const this /* r30 */, class CameraDirector * pCameraDirector /* r31 */) {}

// Range: 0x80174100 -> 0x80174308
unsigned char ELiveMode::StartIntroCamera(class ELiveMode * const this /* r30 */, class CameraDirector * pCameraDirector /* r28 */, class ESimsCam * pCamera /* r29 */) {
    // Local variables
    class ERQuickdata * pObjectData; // r31
    const struct ERQTable * pAnimRefTable; // r1+0x10
    const struct AnimRef * pAnimRef; // r1+0xC
    const char * szQuery; // r5
    class EString strIntroCameraName; // r1+0x8
    unsigned char relative; // r30

    // References
    // -> class EGlobal _globals;
    // -> class EQuickdataManager _quickdataman;
}

// Range: 0x80174308 -> 0x801743C8
unsigned char ELiveMode::EndIntroCamera(class CameraDirector * pCameraDirector /* r29 */, class ESimsCam * pCamera /* r30 */) {
    // Local variables
    float time; // f0
    int level; // r3

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801743C8 -> 0x801743CC
void ProfileLoadStages_Init() {}

// Range: 0x801743CC -> 0x801743D0
void ProfileLoadStages_Tick() {}

// Range: 0x801743D0 -> 0x801743D4
void ProfileLoadStages_Done() {}

// Range: 0x801743D4 -> 0x801743D8
void ProfileLoadStages_Log() {}

// Range: 0x801743D8 -> 0x801743DC
void ProfileLoadStages_LoadingScreenStart() {}


