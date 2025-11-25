/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\Apt.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802FCE5C -> 0x802FE0FC
*/
static char __PRETTY_FUNCTION__[78]; // size: 0x4E, address: 0x80458240
static char __PRETTY_FUNCTION__[44]; // size: 0x2C, address: 0x80458290
static char __PRETTY_FUNCTION__[33]; // size: 0x21, address: 0x804582BC
struct AptSavedInputRecord {
    // total size: 0x4
    unsigned int nTick; // offset 0x0, size 0x4
};
struct AptUserFunctions gAptFuncs; // size: 0xAC, address: 0x80544EE8
unsigned int gNullInput; // size: 0x4, address: 0x805DC1C0
static int bInitialized; // size: 0x4, address: 0x805DC1C4
int gbSavedInputsEnabled; // size: 0x4, address: 0x805DC1C8
unsigned int gnCurTick; // size: 0x4, address: 0x805DC1CC
unsigned char gbGarbageCollectThisFrame; // size: 0x1, address: 0x805DC1D0
class AptValueVector * gpValuesToRelease; // size: 0x4, address: 0x805DC1D4
class StringDataC {
    // total size: 0x8
public:
    unsigned short m_uRefCount; // offset 0x0, size 0x2
    unsigned short m_uSize; // offset 0x2, size 0x2
    unsigned short m_uMaxSize; // offset 0x4, size 0x2
    unsigned short m_uHash; // offset 0x6, size 0x2
};
class DebugDataC : public StringDataC {
    // total size: 0x108
public:
    char m_strText[256]; // offset 0x8, size 0x100
};
enum CBPushZero {
    CB_NO_PUSH_ZERO = 0,
    CB_PUSH_ZERO = 1,
};
class EAStringC {
    // total size: 0x4
    class DebugDataC * m_pData; // offset 0x0, size 0x4
};
class EAStringC gstrTempString; // size: 0x4, address: 0x805DC1D8
unsigned char gbBackgroundColorSet; // size: 0x1, address: 0x805DC1DC
struct AptInitParmsT gAptInitParms; // size: 0x3C, address: 0x80544FA0
class DOGMA_PoolManager * gpNonGCPoolManager; // size: 0x4, address: 0x805DC1E0
class AptValueGC_PoolManager * gpGCPoolManager; // size: 0x4, address: 0x805DC1E4
class AptValueVector * gpZombieVector; // size: 0x4, address: 0x805DC1E8
unsigned long gAptOptFlags; // size: 0x4, address: 0x805DC1EC
unsigned char bDefaultMouseWheel; // size: 0x1, address: 0x805DC1F0
unsigned char bPrintZombieReferences; // size: 0x1, address: 0x805DA580
struct SavedInputPlayback {
    // total size: 0x14
    unsigned char * pSavedInputs; // offset 0x0, size 0x4
    unsigned char * pCurSavedInput; // offset 0x4, size 0x4
    int nInputFileSize; // offset 0x8, size 0x4
    int nLoadedAnims; // offset 0xC, size 0x4
    unsigned int nCurTick; // offset 0x10, size 0x4
};
struct SavedInputPlayback gSIPlayback; // size: 0x14, address: 0x80544FDC
struct AptAnimationPoolData * gpPool; // size: 0x4, address: 0x805DC1F4
struct AptLoader * gpLoader; // size: 0x4, address: 0x805DC1F8
struct AptLinker * gpLinker; // size: 0x4, address: 0x805DC1FC
struct AptSavedInputCheckpoints * gpSavedInputCheckpoints; // size: 0x4, address: 0x805DC200
// Range: 0x802FCE5C -> 0x802FCE70
static void _passthruToMemFree() {
    // References
    // -> struct AptUserFunctions gAptFuncs;
}

// Range: 0x802FCE70 -> 0x802FCE74
void _profileInit() {}

// Range: 0x802FCE74 -> 0x802FCF24
void * AptUserFunctions::AptUserFunctions() {}

// Range: 0x802FCF24 -> 0x802FD0B0
void AptInitialize(const struct AptInitParmsT * pAptInitParms /* r31 */) {
    // Local variables
    struct AptInitParmsT defParms; // r1+0x8

    // References
    // -> static int bInitialized;
    // -> struct AptAnimationPoolData * gpPool;
    // -> struct AptSavedInputCheckpoints * gpSavedInputCheckpoints;
    // -> struct AptLinker * gpLinker;
    // -> struct AptLoader * gpLoader;
    // -> struct AptActionInterpreter gAptActionInterpreter;
    // -> class AptValueVector * gpZombieVector;
    // -> class AptValueVector * gpValuesToRelease;
    // -> unsigned char bPrintZombieReferences;
    // -> unsigned char bDefaultMouseWheel;
    // -> struct AptUserFunctions gAptFuncs;
    // -> class EAStringC gstrTempString;
    // -> struct AptInitParmsT gAptInitParms;
}

class AptValueSet {
    // total size: 0x8
public:
    unsigned short mnElements; // offset 0x0, size 0x2
    unsigned short mnMaxElements; // offset 0x2, size 0x2
    class AptCIH * * maElements; // offset 0x4, size 0x4
};
struct ButtonHitTestRecord {
    // total size: 0x1C
    class AptCIH * pCIH; // offset 0x0, size 0x4
    struct AptMatrix matrix; // offset 0x4, size 0x18
};
class AptValueSet {
    // total size: 0x8
public:
    unsigned short mnElements; // offset 0x0, size 0x2
    unsigned short mnMaxElements; // offset 0x2, size 0x2
    class AptValue * * maElements; // offset 0x4, size 0x4
};
class AptValuePtrStack {
    // total size: 0xC
    int m_nElements; // offset 0x0, size 0x4
    int m_nSize; // offset 0x4, size 0x4
    class AptValue * * m_aElements; // offset 0x8, size 0x4
};
struct AptIntervalTimer {
    // total size: 0x20
    int bValid; // offset 0x0, size 0x4
    class AptValue * pCBFunction; // offset 0x4, size 0x4
    float fInterval; // offset 0x8, size 0x4
    float fCurTime; // offset 0xC, size 0x4
    class AptValue * pContext; // offset 0x10, size 0x4
    class AptValuePtrStack pParams; // offset 0x14, size 0xC
};
struct AptAnalogStickInfo {
    // total size: 0x10
    float fXAxisValue; // offset 0x0, size 0x4
    float fYAxisValue; // offset 0x4, size 0x4
    unsigned char nController; // offset 0x8, size 0x1
    enum AptInputType nSide; // offset 0xC, size 0x4
};
enum APT_ACTION_TYPE {
    AAT_NONE = 0,
    AAT_ACTION = 1,
    AAT_FUNCTION = 2,
};
struct AptAction {
    // total size: 0xC
    int nFrame; // offset 0x0, size 0x4
    struct AptActionBlock * pBlock; // offset 0x4, size 0x4
    class AptCIH * pCIH; // offset 0x8, size 0x4
};
struct AptFunction {
    // total size: 0xC
    class AptCIH * pContext; // offset 0x0, size 0x4
    class AptValue * pFuncDef; // offset 0x4, size 0x4
    int nParams; // offset 0x8, size 0x4
};
union /* @class$4695Apt_cpp */ {
    struct AptAction action; // offset 0x0, size 0xC
    struct AptFunction function; // offset 0x0, size 0xC
};
struct AptActionPool {
    // total size: 0x14
    enum APT_ACTION_TYPE eActionType; // offset 0x0, size 0x4
    unsigned int input; // offset 0x4, size 0x4
    union { // inferred
        union /* @class$4695Apt_cpp */ {
            struct AptAction action; // offset 0x0, size 0xC
            struct AptFunction function; // offset 0x0, size 0xC
        } __anon$4701; // offset 0x8, size 0xC
        struct AptAction action; // offset 0x8, size 0xC
        struct AptFunction function; // offset 0x8, size 0xC
    };
};
class AptActionQueueC {
    // total size: 0x14
    struct AptActionPool * m_aActionPool; // offset 0x0, size 0x4
    struct AptActionPool * m_pStartDeque; // offset 0x4, size 0x4
    struct AptActionPool * m_pEndDeque; // offset 0x8, size 0x4
    struct AptActionPool * m_pCurDeque; // offset 0xC, size 0x4
    int m_iActionPoolSize; // offset 0x10, size 0x4
};
struct AptAnimationPoolData {
    // total size: 0xAC
    class AptCIH * * apNewInsts; // offset 0x0, size 0x4
    int nNewInsts; // offset 0x4, size 0x4
    class AptValueSet buttonSet; // offset 0x8, size 0x8
    int mBILCount; // offset 0x10, size 0x4
    struct ButtonHitTestRecord * aButtonInstanceList; // offset 0x14, size 0x4
    class AptValueSet listenerSet; // offset 0x18, size 0x8
    class AptValueSet inputSet; // offset 0x20, size 0x8
    struct AptDisplayList displayList; // offset 0x28, size 0x4
    struct AptIntervalTimer * aIntervalTimers; // offset 0x2C, size 0x4
    int nIntervalTimers; // offset 0x30, size 0x4
    int nQueuedInputs; // offset 0x34, size 0x4
    unsigned int * aQueuedInputs; // offset 0x38, size 0x4
    class AptValue * pDragMC; // offset 0x3C, size 0x4
    struct AptMatrix mDragPos; // offset 0x40, size 0x18
    class AptValue * pOnPress; // offset 0x58, size 0x4
    class AptValue * pOnRollOver; // offset 0x5C, size 0x4
    class AptValue * pTopMostSprite; // offset 0x60, size 0x4
    class AptCIH * pFocusButton; // offset 0x64, size 0x4
    unsigned char bButtonDown; // offset 0x68, size 0x1
    int nXMousePos; // offset 0x6C, size 0x4
    int nYMousePos; // offset 0x70, size 0x4
    struct AptAnalogStickInfo gAStickLeft; // offset 0x74, size 0x10
    struct AptAnalogStickInfo gAStickRight; // offset 0x84, size 0x10
private:
    class AptCIH * pInputMask; // offset 0x94, size 0x4
    class AptActionQueueC * m_pAptActionPool; // offset 0x98, size 0x4
    int m_iMaxNewMovieClips; // offset 0x9C, size 0x4
    int m_iMaxIntervalTimers; // offset 0xA0, size 0x4
    int m_iMaxQueuedInputs; // offset 0xA4, size 0x4
    int m_iButtonInstanceListSize; // offset 0xA8, size 0x4
};
class BasicString : public UseCapacity {
    // total size: 0x1C
    struct AptFileSavedInputState * mString; // offset 0x8, size 0x4
    struct AptFileSavedInputState mSmallString[2]; // offset 0xC, size 0x10
};
struct StringAsVectorPolicy : public DefaultPolicy {
    // total size: 0x1
};
struct AptFileSavedInputState {
    // total size: 0x8
private:
    class EAStringC mName; // offset 0x0, size 0x4
    enum State mState; // offset 0x4, size 0x4
};
class UseCapacity {
    // total size: 0x8
protected:
    int mSize; // offset 0x0, size 0x4
private:
    int mCapacity; // offset 0x4, size 0x4
};
struct AptSavedInputCheckpoints {
    // total size: 0x1C
private:
    class BasicString mPending; // offset 0x0, size 0x1C
};
struct AptLinker {
    // total size: 0x18
    class SingleList mThingys; // offset 0x0, size 0x4
    class BasicString mLoadedFilesWaitingForLink; // offset 0x4, size 0x14
};
class BasicString : public UseCapacity {
    // total size: 0x14
    class AptSharedPtr * mString; // offset 0x8, size 0x4
    class AptSharedPtr mSmallString[2]; // offset 0xC, size 0x8
};
class Iterator {
    // total size: 0x4
    struct Node * mRep; // offset 0x0, size 0x4
};
class SingleList {
    // total size: 0x4
    struct Node * mHead; // offset 0x0, size 0x4
};
struct Node {
    // total size: 0x8
    class AptSharedPtr mData; // offset 0x0, size 0x4
    struct Node * mNext; // offset 0x4, size 0x4
};
struct Allocator {
    // total size: 0x1
};
struct AptLinkerThingy : public AptSharedPtrRefCount {
    // total size: 0x10
    class AptSharedPtr mFile; // offset 0x4, size 0x4
    class AptCIH * pTarget; // offset 0x8, size 0x4
    unsigned char mAttachedToMovie; // offset 0xC, size 0x1
};
class AptSharedPtr {
    // total size: 0x4
public:
    struct AptLinkerThingy * pData; // offset 0x0, size 0x4
};
class SingleList {
    // total size: 0x4
    struct Node * mHead; // offset 0x0, size 0x4
};
struct Node {
    // total size: 0x8
    struct AptFile * mData; // offset 0x0, size 0x4
    struct Node * mNext; // offset 0x4, size 0x4
};
struct AptLoader {
    // total size: 0x4
private:
    class SingleList mFiles; // offset 0x0, size 0x4
};
class AptValueVector {
    // total size: 0xC
    int mCapacity; // offset 0x0, size 0x4
    int mCurrentNum; // offset 0x4, size 0x4
    class AptValue * * mpValues; // offset 0x8, size 0x4
};
struct AptDisplayListState {
    // total size: 0x4
    class AptCIH * pHead; // offset 0x0, size 0x4
};
// Range: 0x802FD0B0 -> 0x802FD1B4
void AptShutdown(int bQuiet /* r31 */) {
    // References
    // -> static int bInitialized;
    // -> class EAStringC gstrTempString;
    // -> class AptValueVector * gpZombieVector;
    // -> class AptValueVector * gpValuesToRelease;
    // -> struct AptSavedInputCheckpoints * gpSavedInputCheckpoints;
    // -> struct AptLinker * gpLinker;
    // -> struct AptLoader * gpLoader;
    // -> struct AptAnimationPoolData * gpPool;
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

// Range: 0x802FD1B4 -> 0x802FD23C
void AptAllocatorInitialize() {
    // References
    // -> class AptValueGC_PoolManager * gpGCPoolManager;
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

class AptValueGC_PoolManager : public DOGMA_PoolManager {
    // total size: 0x20
};
// Range: 0x802FD23C -> 0x802FD2B0
void AptAllocatorShutdown() {
    // Local variables
    class AptValue * pCurrent; // r4

    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
    // -> class AptValueGC_PoolManager * gpGCPoolManager;
}

// Range: 0x802FD30C -> 0x802FD310
void AptInitializeGC() {}

// Range: 0x802FD310 -> 0x802FD35C
void CleanAllNativeFunctions() {}

// Range: 0x802FD35C -> 0x802FD3CC
void AptCompleteAnimationAsyncLoad(void * pData /* r29 */, void * pConstTable /* r30 */, void * pUserData /* r31 */) {
    // References
    // -> struct AptLoader * gpLoader;
}

// Range: 0x802FD3CC -> 0x802FD494
class AptCIH * _AptGetAnimationAtLevel(int nLevel /* r30 */) {
    // Local variables
    class AptCIH * pCur; // r4

    // References
    // -> struct AptAnimationPoolData * gpPool;
}

struct /* @class$1452Apt_cpp */ {
    // total size: 0x4
    unsigned int mbIsAllocated : 1; // offset 0x0, size 0x4
    unsigned int mbHasRegisterReferenceMark : 1; // offset 0x0, size 0x4
    unsigned int mbIsInDeferredVector : 1; // offset 0x0, size 0x4
    unsigned int mbDestroyedGC : 1; // offset 0x0, size 0x4
    unsigned int mbIsDefined : 1; // offset 0x0, size 0x4
    unsigned int mbAllowsDelayedDeletion : 1; // offset 0x0, size 0x4
    unsigned int mnReferenceCount : 12; // offset 0x0, size 0x4
    unsigned int mnGCRootCount : 6; // offset 0x0, size 0x4
    unsigned int mnMaxRefCountHit : 1; // offset 0x0, size 0x4
    enum AptVirtualFunctionTable_Indices meValueType : 7; // offset 0x0, size 0x4
};
union /* @class$1451Apt_cpp */ {
    struct /* @class$1452Apt_cpp */ {
        // total size: 0x4
        unsigned int mbIsAllocated : 1; // offset 0x0, size 0x4
        unsigned int mbHasRegisterReferenceMark : 1; // offset 0x0, size 0x4
        unsigned int mbIsInDeferredVector : 1; // offset 0x0, size 0x4
        unsigned int mbDestroyedGC : 1; // offset 0x0, size 0x4
        unsigned int mbIsDefined : 1; // offset 0x0, size 0x4
        unsigned int mbAllowsDelayedDeletion : 1; // offset 0x0, size 0x4
        unsigned int mnReferenceCount : 12; // offset 0x0, size 0x4
        unsigned int mnGCRootCount : 6; // offset 0x0, size 0x4
        unsigned int mnMaxRefCountHit : 1; // offset 0x0, size 0x4
        enum AptVirtualFunctionTable_Indices meValueType : 7; // offset 0x0, size 0x4
    } mValueBitfield; // offset 0x0, size 0x4
    unsigned int mnValueData; // offset 0x0, size 0x4
};
class AptValueWithHash : public AptValueGC {
    // total size: 0x20
protected:
    class AptNativeHash mNativeHash; // offset 0xC, size 0x14
};
class AptNativeFunction : public AptObject {
    // total size: 0x28
public:
    class AptValue * (* pFunc)(class AptValue *, int); // offset 0x24, size 0x4
};
class AptArray : public AptObject {
    // total size: 0x30
    class AptValue * * mpValues; // offset 0x24, size 0x4
    int mnCapacity; // offset 0x28, size 0x4
    int mnLength; // offset 0x2C, size 0x4
};
class AptObject : public AptValueWithHash {
    // total size: 0x24
protected:
    unsigned int mnImplementedObjects : 8; // offset 0x20, size 0x4
    unsigned int mbHasClass : 1; // offset 0x20, size 0x4
    unsigned int mbIsInMainInst : 1; // offset 0x20, size 0x4
};
class AptStage : public AptObject {
    // total size: 0x24
};
class AptLoadVars : public AptObject {
    // total size: 0x28
public:
    int iIsLoaded; // offset 0x24, size 0x4
};
class AptXmlAttributes : public AptObject {
    // total size: 0x28
public:
    class IAptXmlNode * pIXmlNode; // offset 0x24, size 0x4
};
class AptXmlNode : public AptObject {
    // total size: 0x2C
public:
    class IAptXmlNode * pIXmlNode; // offset 0x24, size 0x4
    class AptArray * paChildNodes; // offset 0x28, size 0x4
};
class AptXml : public AptXmlNode {
    // total size: 0x2C
};
class AptMovieClip : public AptObject {
    // total size: 0x24
};
struct TextFormat {
    // total size: 0x20
    class EAStringC pFontName; // offset 0x0, size 0x4
    float fSize; // offset 0x4, size 0x4
    int nColor; // offset 0x8, size 0x4
    enum AptStringAlignment eAlignment; // offset 0xC, size 0x4
    unsigned int nFontStyle; // offset 0x10, size 0x4
    int nIndent; // offset 0x14, size 0x4
    int nLeftMargin; // offset 0x18, size 0x4
    int nRightMargin; // offset 0x1C, size 0x4
};
class AptTextFormat : public AptObject, public TextFormat {
    // total size: 0x44
};
class AptDate : public AptObject {
    // total size: 0x68
public:
    struct AptSysClock mTM; // offset 0x24, size 0x20
    struct AptSysClock mTMU; // offset 0x44, size 0x20
    int hourDiff; // offset 0x64, size 0x4
};
class AptPrototype : public AptValueWithHash {
    // total size: 0x24
    class AptValue * mp__constructor__; // offset 0x20, size 0x4
};
class AptScriptColour : public AptObject {
    // total size: 0x28
public:
    class AptCIH * pSprite; // offset 0x24, size 0x4
};
class AptMathObj : public AptObject {
    // total size: 0x24
};
class AptGlobal : public AptObject {
    // total size: 0x24
};
class AptKey : public AptObject {
    // total size: 0x24
};
class AptSound : public AptObject {
    // total size: 0x30
public:
    struct AptCharacter * pParentAnim; // offset 0x24, size 0x4
    void * zID; // offset 0x28, size 0x4
    const char * szName; // offset 0x2C, size 0x4
};
class AptFrameStack : public AptValueWithHash {
    // total size: 0x24
protected:
    class AptFrameStack * mpParentScope; // offset 0x20, size 0x4
};
struct _AptScriptFunctionState {
    // total size: 0x8
protected:
    class AptFrameStack * mpFrameStack; // offset 0x0, size 0x4
    class AptValue * * mpRegBlockPreviousFrameBase; // offset 0x4, size 0x4
};
struct AptConstantPool {
    // total size: 0x8
    int nItems; // offset 0x0, size 0x4
    class AptValue * * apItems; // offset 0x4, size 0x4
};
class AptScriptFunctionBase : public AptObject {
    // total size: 0x34
public:
    class AptCIH * mpCIH; // offset 0x24, size 0x4
    class AptCIH * mpParentAnim; // offset 0x28, size 0x4
protected:
    class AptFrameStack * mpCreatorScope; // offset 0x2C, size 0x4
    unsigned short mnFrameStackReserve; // offset 0x30, size 0x2
};
class AptValueNoGC : public AptValue {
    // total size: 0xC
};
union /* @class$2051Apt_cpp */ {
    unsigned char mbValue; // offset 0x0, size 0x1
    class AptBoolean * mpNextFree; // offset 0x0, size 0x4
};
class AptBoolean : public AptValueNoGC {
    // total size: 0x10
    union { // inferred
        union /* @class$2051Apt_cpp */ {
            unsigned char mbValue; // offset 0x0, size 0x1
            class AptBoolean * mpNextFree; // offset 0x0, size 0x4
        } __anon$2058; // offset 0xC, size 0x4
        unsigned char mbValue; // offset 0xC, size 0x1
        class AptBoolean * mpNextFree; // offset 0xC, size 0x4
    };
};
union /* @class$2084Apt_cpp */ {
    float mfValue; // offset 0x0, size 0x4
    class AptFloat * mpNextFree; // offset 0x0, size 0x4
};
class AptFloat : public AptValueNoGC {
    // total size: 0x10
    union { // inferred
        union /* @class$2084Apt_cpp */ {
            float mfValue; // offset 0x0, size 0x4
            class AptFloat * mpNextFree; // offset 0x0, size 0x4
        } __anon$2091; // offset 0xC, size 0x4
        float mfValue; // offset 0xC, size 0x4
        class AptFloat * mpNextFree; // offset 0xC, size 0x4
    };
};
class AptRegister : public AptValueNoGC {
    // total size: 0x10
public:
    int nVal; // offset 0xC, size 0x4
};
union /* @class$2001Apt_cpp */ {
    int mnValue; // offset 0x0, size 0x4
    class AptInteger * mpNextFree; // offset 0x0, size 0x4
};
class AptInteger : public AptValueNoGC {
    // total size: 0x10
    union { // inferred
        union /* @class$2001Apt_cpp */ {
            int mnValue; // offset 0x0, size 0x4
            class AptInteger * mpNextFree; // offset 0x0, size 0x4
        } __anon$2008; // offset 0xC, size 0x4
        int mnValue; // offset 0xC, size 0x4
        class AptInteger * mpNextFree; // offset 0xC, size 0x4
    };
};
class AptLookup : public AptValueNoGC {
    // total size: 0x10
public:
    int nLookup; // offset 0xC, size 0x4
};
class AptValue {
    // total size: 0xC
public:
    void * __vptr$; // offset 0x0, size 0x4
    union { // inferred
        union /* @class$1451Apt_cpp */ {
            struct /* @class$1452Apt_cpp */ {
                // total size: 0x4
                unsigned int mbIsAllocated : 1; // offset 0x0, size 0x4
                unsigned int mbHasRegisterReferenceMark : 1; // offset 0x0, size 0x4
                unsigned int mbIsInDeferredVector : 1; // offset 0x0, size 0x4
                unsigned int mbDestroyedGC : 1; // offset 0x0, size 0x4
                unsigned int mbIsDefined : 1; // offset 0x0, size 0x4
                unsigned int mbAllowsDelayedDeletion : 1; // offset 0x0, size 0x4
                unsigned int mnReferenceCount : 12; // offset 0x0, size 0x4
                unsigned int mnGCRootCount : 6; // offset 0x0, size 0x4
                unsigned int mnMaxRefCountHit : 1; // offset 0x0, size 0x4
                enum AptVirtualFunctionTable_Indices meValueType : 7; // offset 0x0, size 0x4
            } mValueBitfield; // offset 0x0, size 0x4
            unsigned int mnValueData; // offset 0x0, size 0x4
        } __anon$1456; // offset 0x4, size 0x4
        struct /* @class$1452Apt_cpp */ {
            // total size: 0x4
            unsigned int mbIsAllocated : 1; // offset 0x0, size 0x4
            unsigned int mbHasRegisterReferenceMark : 1; // offset 0x0, size 0x4
            unsigned int mbIsInDeferredVector : 1; // offset 0x0, size 0x4
            unsigned int mbDestroyedGC : 1; // offset 0x0, size 0x4
            unsigned int mbIsDefined : 1; // offset 0x0, size 0x4
            unsigned int mbAllowsDelayedDeletion : 1; // offset 0x0, size 0x4
            unsigned int mnReferenceCount : 12; // offset 0x0, size 0x4
            unsigned int mnGCRootCount : 6; // offset 0x0, size 0x4
            unsigned int mnMaxRefCountHit : 1; // offset 0x0, size 0x4
            enum AptVirtualFunctionTable_Indices meValueType : 7; // offset 0x0, size 0x4
        } mValueBitfield; // offset 0x4, size 0x4
        unsigned int mnValueData; // offset 0x4, size 0x4
protected:
    };
    unsigned int mnID; // offset 0x8, size 0x4
};
struct AptMovieclipInformation {
    // total size: 0x1C
    int nAnimations; // offset 0x0, size 0x4
    int nMovieClips; // offset 0x4, size 0x4
    int nButtons; // offset 0x8, size 0x4
    int nStaticText; // offset 0xC, size 0x4
    int nDynamicText; // offset 0x10, size 0x4
    int nMorph; // offset 0x14, size 0x4
    int nShapes; // offset 0x18, size 0x4
};
struct Mat44_t {
    // total size: 0x40
    float m[16]; // offset 0x0, size 0x40
};
struct Vec4_t {
    // total size: 0x10
    float vx; // offset 0x0, size 0x4
    float vy; // offset 0x4, size 0x4
    float vz; // offset 0x8, size 0x4
    float vw; // offset 0xC, size 0x4
};
struct ClipTransform_t {
    // total size: 0x60
    struct Mat44_t Pos44; // offset 0x0, size 0x40
    struct Vec4_t vColorMul4; // offset 0x40, size 0x10
    struct Vec4_t vColorAdd4; // offset 0x50, size 0x10
};
struct AptCharacterShapeInst : public AptCharacterInst {
    // total size: 0x18
};
struct AptCharacterButtonInst : public AptCharacterInst {
    // total size: 0x20
    enum AptCharacterButtonRecordState nState; // offset 0x18, size 0x4
    struct AptDisplayList displayList; // offset 0x1C, size 0x4
};
struct AptCharacterMorphInst : public AptCharacterInst {
    // total size: 0x1C
    float fRatio; // offset 0x18, size 0x4
};
struct AptCharacterStaticTextInst : public AptCharacterInst {
    // total size: 0x18
};
struct AptCharacterTextInst : public AptCharacterInst {
    // total size: 0x78
    class EAStringC mTextValue; // offset 0x18, size 0x4
    class EAStringC mVarValue; // offset 0x1C, size 0x4
    void * zID; // offset 0x20, size 0x4
    unsigned int nColour; // offset 0x24, size 0x4
    int nMaxScroll; // offset 0x28, size 0x4
    int nScroll; // offset 0x2C, size 0x4
    unsigned int nBackColor; // offset 0x30, size 0x4
    unsigned int nBorderColor; // offset 0x34, size 0x4
    enum AptStringAlignment eBoxAlignment; // offset 0x38, size 0x4
    enum AptStringAlignment eAlignment; // offset 0x3C, size 0x4
    int nMaxChars; // offset 0x40, size 0x4
    float fTextWidth; // offset 0x44, size 0x4
    float fTextHeight; // offset 0x48, size 0x4
    float fLength; // offset 0x4C, size 0x4
    struct AptRect rBounds; // offset 0x50, size 0x10
    float fFontSize; // offset 0x60, size 0x4
    int nFontID; // offset 0x64, size 0x4
    struct TextFormat * pMyTextFormat; // offset 0x68, size 0x4
    unsigned int eFlags; // offset 0x6C, size 0x4
    unsigned int nFontStyle; // offset 0x70, size 0x4
    unsigned int bCreatedDynamic : 1; // offset 0x74, size 0x4
    unsigned int bBorder : 1; // offset 0x74, size 0x4
    unsigned int bBackground : 1; // offset 0x74, size 0x4
    unsigned int bMouseWheelEnabled : 1; // offset 0x74, size 0x4
};
struct AptCharacterSpriteInst : public AptCharacterSpriteInstBase {
    // total size: 0x30
};
class AptCIH : public AptValueGC {
    // total size: 0x64
public:
    class EAStringC mMyName; // offset 0xC, size 0x4
    struct AptMatrix matrix; // offset 0x10, size 0x18
    struct AptCXForm cxform; // offset 0x28, size 0x20
    class AptCIH * pParent; // offset 0x48, size 0x4
    struct AptCharacterInst * pData; // offset 0x4C, size 0x4
    class AptCIH * pPrev; // offset 0x50, size 0x4
    class AptCIH * pNext; // offset 0x54, size 0x4
    int nDepth : 17; // offset 0x58, size 0x4
    int nCreatedOnFrame : 14; // offset 0x58, size 0x4
protected:
    unsigned int nZombieCounter : 16; // offset 0x5C, size 0x4
    unsigned int mbASChange : 1; // offset 0x5C, size 0x4
    unsigned int mbHasClass : 1; // offset 0x5C, size 0x4
    unsigned int mbIsZombie : 2; // offset 0x5C, size 0x4
    unsigned int mbIsVisible : 1; // offset 0x5C, size 0x4
    unsigned int mbInCtor : 1; // offset 0x5C, size 0x4
    float * fRot; // offset 0x60, size 0x4
};
class AptValueGC : public AptValue {
    // total size: 0xC
};
// Range: 0x802FD494 -> 0x802FD560
void AptGetAnimationSize(int * pnWidth /* r30 */, int * pnHeight /* r31 */) {
    // Local variables
    struct AptCharacterAnimationInst * pSprInst; // r0

    // References
    // -> struct AptAnimationPoolData * gpPool;
}

struct AptPseudoData_t {
    // total size: 0x1C
    struct AptCharacter * pCharacter; // offset 0x0, size 0x4
    struct AptMatrix * matrix; // offset 0x4, size 0x4
    struct AptnCXForm * ncxform; // offset 0x8, size 0x4
    struct AptEventActionSet * pActions; // offset 0xC, size 0x4
    float fRatio; // offset 0x10, size 0x4
    int eFlags; // offset 0x14, size 0x4
    int nFrameCreated : 16; // offset 0x18, size 0x4
    int nClipDepth : 16; // offset 0x18, size 0x4
};
struct AptPseudoCIH_t {
    // total size: 0x14
    struct AptControl * pControl; // offset 0x0, size 0x4
    struct AptPseudoData_t * pControlInfo; // offset 0x4, size 0x4
    struct AptPseudoCIH_t * pNext; // offset 0x8, size 0x4
    struct AptPseudoCIH_t * pPrev; // offset 0xC, size 0x4
    int nDepth; // offset 0x10, size 0x4
};
class AptPseudoDisplayList {
    // total size: 0x8
    struct AptPseudoCIH_t * pHead; // offset 0x0, size 0x4
    class AptCIH * pParentCIH; // offset 0x4, size 0x4
};
struct AptDisplayList {
    // total size: 0x4
    struct AptDisplayListState * pState; // offset 0x0, size 0x4
};
struct AptCharacterSpriteInstBase : public AptCharacterInst {
    // total size: 0x30
    int nFrame; // offset 0x18, size 0x4
    int nObjectClipActions : 24; // offset 0x1C, size 0x4
    unsigned int bJustLoaded : 1; // offset 0x1C, size 0x4
    unsigned int bIsPlaying : 1; // offset 0x1C, size 0x4
    unsigned int nIsCustomControl : 2; // offset 0x1C, size 0x4
    struct AptEventActionSet * pClipActions; // offset 0x20, size 0x4
    struct AptDisplayList displayList; // offset 0x24, size 0x4
    int nGotoAnded; // offset 0x28, size 0x4
    int bCreatedDynamic; // offset 0x2C, size 0x4
};
struct AptCharacterAnimationInst : public AptCharacterSpriteInstBase {
    // total size: 0x38
    unsigned int nLeftoverTime; // offset 0x30, size 0x4
    class AptSharedPtr pFile; // offset 0x34, size 0x4
};
enum AptVirtualFunctionTable_Indices {
    AptVFT_xxx = 0,
    AptVFT_StringValue = 1,
    AptVFT_Property = 2,
    AptVFT_None = 3,
    AptVFT_Register = 4,
    AptVFT_Boolean = 5,
    AptVFT_Float = 6,
    AptVFT_Integer = 7,
    AptVFT_Lookup = 8,
    AptVFT_NativeFunction = 9,
    AptVFT_UNUSED = 10,
    AptVFT_Extern = 11,
    AptVFT_CharacterShapeInst = 12,
    AptVFT_CharacterSpriteInst = 13,
    AptVFT_CharacterButtonInst = 14,
    AptVFT_CharacterTextInst = 15,
    AptVFT_CharacterStaticTextInst = 16,
    AptVFT_CharacterMorphInst = 17,
    AptVFT_CharacterAnimationInst = 18,
    AptVFT_CharacterLevelInst = 19,
    AptVFT_FrameStack = 20,
    AptVFT_Sound = 21,
    AptVFT_Array = 22,
    AptVFT_Math = 23,
    AptVFT_Key = 24,
    AptVFT_Global = 25,
    AptVFT_ScriptColour = 26,
    AptVFT_Object = 27,
    AptVFT_Prototype = 28,
    AptVFT_Date = 29,
    AptVFT_MovieClip = 30,
    AptVFT_Mouse = 31,
    AptVFT_XmlNode = 32,
    AptVFT_Xml = 33,
    AptVFT_XmlAttributes = 34,
    AptVFT_LoadVars = 35,
    AptVFT_TextFormat = 36,
    AptVFT_Extension = 37,
    AptVFT_GlobalExtension = 38,
    AptVFT_Stage = 39,
    AptVFT_RESERVED = 40,
    AptVFT_Error = 41,
    AptVFT_StringObject = 42,
    AptVFT_ScriptFunction1 = 43,
    AptVFT_ScriptFunction2 = 44,
    AptVFT_ScriptFunctionByteCodeBlock = 45,
    AptVFT_DisplayListHead = 46,
    AptVFT_NumVFTs = 47,
};
// Range: 0x802FD560 -> 0x802FD568
void AptSetValidFocusButton() {
    // References
    // -> struct AptAnimationPoolData * gpPool;
}

// Range: 0x802FD568 -> 0x802FD5EC
void AptLoadAnimation(const char * szBaseName /* r31 */) {
    // Local variables
    class EAStringC sTarget; // r1+0x10

    // References
    // -> struct AptLinker * gpLinker;
    // -> unsigned char gbBackgroundColorSet;
}

struct AptSharedPtrRefCount {
    // total size: 0x4
    int mRefCount; // offset 0x0, size 0x4
};
enum AptCharacterType {
    AptCharacterType_Shape = 1,
    AptCharacterType_Text = 2,
    AptCharacterType_Font = 3,
    AptCharacterType_Button = 4,
    AptCharacterType_Sprite = 5,
    AptCharacterType_Sound = 6,
    AptCharacterType_Bitmap = 7,
    AptCharacterType_Morph = 8,
    AptCharacterType_Animation = 9,
    AptCharacterType_StaticText = 10,
    AptCharacterType_None = 11,
    AptCharacterType_Video = 12,
};
struct AptRect {
    // total size: 0x10
    float fLeft; // offset 0x0, size 0x4
    float fTop; // offset 0x4, size 0x4
    float fRight; // offset 0x8, size 0x4
    float fBottom; // offset 0xC, size 0x4
};
struct AptCharacterShape {
    // total size: 0x14
    struct AptRect rBounds; // offset 0x0, size 0x10
    void * zID; // offset 0x10, size 0x4
};
struct AptCharacterMorph {
    // total size: 0x8
    struct AptCharacter * pStartCharacter; // offset 0x0, size 0x4
    struct AptCharacter * pEndCharacter; // offset 0x4, size 0x4
};
struct AptCharacterText {
    // total size: 0x34
    struct AptRect rBounds; // offset 0x0, size 0x10
    int nFontID; // offset 0x10, size 0x4
    enum AptStringAlignment eAlignment; // offset 0x14, size 0x4
    unsigned int nColour; // offset 0x18, size 0x4
    float fFontHeight; // offset 0x1C, size 0x4
    int bReadOnly; // offset 0x20, size 0x4
    int bMultiLine; // offset 0x24, size 0x4
    int bWordWrap; // offset 0x28, size 0x4
    char * szInitialText; // offset 0x2C, size 0x4
    char * szVariable; // offset 0x30, size 0x4
};
struct AptCharacterFont {
    // total size: 0xC
    char * szName; // offset 0x0, size 0x4
    int nGlyphs; // offset 0x4, size 0x4
    struct AptCharacter * * apGlyphs; // offset 0x8, size 0x4
};
enum AptCharacterButtonRecordState {
    AptCharacterButtonRecordState_None = 0,
    AptCharacterButtonRecordState_Up = 1,
    AptCharacterButtonRecordState_Over = 2,
    AptCharacterButtonRecordState_Down = 4,
    AptCharacterButtonRecordState_HitTest = 8,
};
struct AptCharacterButtonRecord {
    // total size: 0x44
    enum AptCharacterButtonRecordState eStates; // offset 0x0, size 0x4
    struct AptCharacter * pCharacter; // offset 0x4, size 0x4
    int nLayer; // offset 0x8, size 0x4
    struct AptMatrix matrix; // offset 0xC, size 0x18
    struct AptCXForm cxform; // offset 0x24, size 0x20
};
struct AptActionBlock {
    // total size: 0x4
    unsigned char * aActionStream; // offset 0x0, size 0x4
};
struct AptActionConditionBlock {
    // total size: 0x8
    int nConditions; // offset 0x0, size 0x4
    struct AptActionBlock actions; // offset 0x4, size 0x4
};
struct AptCharacterButtonSound {
    // total size: 0x10
    struct AptCharacter * pOverUpToIdle; // offset 0x0, size 0x4
    struct AptCharacter * pIdleToOverUp; // offset 0x4, size 0x4
    struct AptCharacter * pOverUpToOverDown; // offset 0x8, size 0x4
    struct AptCharacter * pOverDownToOverUp; // offset 0xC, size 0x4
};
struct AptCharacterButton {
    // total size: 0x38
    int bIsMenu; // offset 0x0, size 0x4
    struct AptRect mHitTestBoundingRect; // offset 0x4, size 0x10
    int mHitTestTriangles; // offset 0x14, size 0x4
    int mHitTestVertexCount; // offset 0x18, size 0x4
    float * mHitTestVertexTable; // offset 0x1C, size 0x4
    signed short * mHitTestIndexTable; // offset 0x20, size 0x4
    int nButtonRecords; // offset 0x24, size 0x4
    struct AptCharacterButtonRecord * aButtonRecords; // offset 0x28, size 0x4
    int nActionConditions; // offset 0x2C, size 0x4
    struct AptActionConditionBlock * aActionConditions; // offset 0x30, size 0x4
    struct AptCharacterButtonSound * pButtonSound; // offset 0x34, size 0x4
};
enum AptControlType {
    AptControlType_DoAction = 1,
    AptControlType_FrameLabel = 2,
    AptControlType_PlaceObject2 = 3,
    AptControlType_RemoveObject2 = 4,
    AptControlType_BackgroundColour = 5,
    AptControlType_StartSound = 6,
    AptControlType_StartSoundStream = 7,
    AptControlType_DoInitAction = 8,
};
struct AptControlDoAction {
    // total size: 0x4
    struct AptActionBlock actions; // offset 0x0, size 0x4
};
struct AptControlDoInitAction {
    // total size: 0x8
    int nSpriteID; // offset 0x0, size 0x4
    struct AptActionBlock actions; // offset 0x4, size 0x4
};
struct AptControlFrameLabel {
    // total size: 0x4
    char * szLabel; // offset 0x0, size 0x4
};
enum AptPlaceObjectFlags {
    AptPlaceObjectFlag_None = 0,
    AptPlaceObjectFlag_Move = 1,
    AptPlaceObjectFlag_Character = 2,
    AptPlaceObjectFlag_Matrix = 4,
    AptPlaceObjectFlag_CXForm = 8,
    AptPlaceObjectFlag_Ratio = 16,
    AptPlaceObjectFlag_Name = 32,
    AptPlaceObjectFlag_DefineClip = 64,
    AptPlaceObjectFlag_Actions = 128,
};
struct AptnCXForm {
    // total size: 0x8
    unsigned int nScale; // offset 0x0, size 0x4
    unsigned int nBias; // offset 0x4, size 0x4
};
struct AptEventActionBlock {
    // total size: 0xC
    int nTriggers; // offset 0x0, size 0x4
    int nKeyCode; // offset 0x4, size 0x4
    struct AptActionBlock actions; // offset 0x8, size 0x4
};
struct AptEventActionSet {
    // total size: 0x8
    int nEventActions; // offset 0x0, size 0x4
    struct AptEventActionBlock * aEventActions; // offset 0x4, size 0x4
};
struct AptControlPlaceObject2 {
    // total size: 0x3C
    enum AptPlaceObjectFlags eFlags; // offset 0x0, size 0x4
    int nDepth; // offset 0x4, size 0x4
    int nCharacterID; // offset 0x8, size 0x4
    struct AptMatrix matrix; // offset 0xC, size 0x18
    struct AptnCXForm ncxform; // offset 0x24, size 0x8
    float fRatio; // offset 0x2C, size 0x4
    char * szName; // offset 0x30, size 0x4
    int nClipDepth; // offset 0x34, size 0x4
    struct AptEventActionSet * pActions; // offset 0x38, size 0x4
};
struct AptControlRemoveObject2 {
    // total size: 0x4
    int nDepth; // offset 0x0, size 0x4
};
struct AptControlBackgroundColour {
    // total size: 0x4
    unsigned int nColour; // offset 0x0, size 0x4
};
struct AptControlSound {
    // total size: 0x4
    int nID; // offset 0x0, size 0x4
};
union /* @class$3419Apt_cpp */ {
    struct AptControlDoAction action; // offset 0x0, size 0x4
    struct AptControlDoInitAction initAction; // offset 0x0, size 0x8
    struct AptControlFrameLabel frameLabel; // offset 0x0, size 0x4
    struct AptControlPlaceObject2 placeObject2; // offset 0x0, size 0x3C
    struct AptControlRemoveObject2 removeObject2; // offset 0x0, size 0x4
    struct AptControlBackgroundColour backgroundColour; // offset 0x0, size 0x4
    struct AptControlSound startSound; // offset 0x0, size 0x4
    struct AptControlSound startSoundStream; // offset 0x0, size 0x4
};
struct AptControl {
    // total size: 0x40
    enum AptControlType eType; // offset 0x0, size 0x4
    union { // inferred
        union /* @class$3419Apt_cpp */ {
            struct AptControlDoAction action; // offset 0x0, size 0x4
            struct AptControlDoInitAction initAction; // offset 0x0, size 0x8
            struct AptControlFrameLabel frameLabel; // offset 0x0, size 0x4
            struct AptControlPlaceObject2 placeObject2; // offset 0x0, size 0x3C
            struct AptControlRemoveObject2 removeObject2; // offset 0x0, size 0x4
            struct AptControlBackgroundColour backgroundColour; // offset 0x0, size 0x4
            struct AptControlSound startSound; // offset 0x0, size 0x4
            struct AptControlSound startSoundStream; // offset 0x0, size 0x4
        } __anon$3420; // offset 0x4, size 0x3C
        struct AptControlDoAction action; // offset 0x4, size 0x4
        struct AptControlDoInitAction initAction; // offset 0x4, size 0x8
        struct AptControlFrameLabel frameLabel; // offset 0x4, size 0x4
        struct AptControlPlaceObject2 placeObject2; // offset 0x4, size 0x3C
        struct AptControlRemoveObject2 removeObject2; // offset 0x4, size 0x4
        struct AptControlBackgroundColour backgroundColour; // offset 0x4, size 0x4
        struct AptControlSound startSound; // offset 0x4, size 0x4
        struct AptControlSound startSoundStream; // offset 0x4, size 0x4
    };
};
struct AptFrame {
    // total size: 0x8
    int nControls; // offset 0x0, size 0x4
    struct AptControl * * apControls; // offset 0x4, size 0x4
};
struct AptHashItem {
    // total size: 0x8
    class EAStringC Key; // offset 0x0, size 0x4
    class AptValue * mValue; // offset 0x4, size 0x4
};
class AptNativeHash {
    // total size: 0x14
public:
    int mnTotalSize; // offset 0x0, size 0x4
    struct AptHashItem * mpData; // offset 0x4, size 0x4
    class AptValue * mp__proto__; // offset 0x8, size 0x4
    class AptValue * mpPrototype; // offset 0xC, size 0x4
    unsigned int nEventHandlers; // offset 0x10, size 0x4
};
union /* @class$4671Apt_cpp */ {
    char * szString; // offset 0x0, size 0x4
    float fFloat; // offset 0x0, size 0x4
    int nInteger; // offset 0x0, size 0x4
    int nRegister; // offset 0x0, size 0x4
    int bBoolean; // offset 0x0, size 0x4
    unsigned int nLookup; // offset 0x0, size 0x4
};
struct AptConstantTable {
    // total size: 0x8
    enum AptVirtualFunctionTable_Indices eType; // offset 0x0, size 0x4
    union { // inferred
        union /* @class$4671Apt_cpp */ {
            char * szString; // offset 0x0, size 0x4
            float fFloat; // offset 0x0, size 0x4
            int nInteger; // offset 0x0, size 0x4
            int nRegister; // offset 0x0, size 0x4
            int bBoolean; // offset 0x0, size 0x4
            unsigned int nLookup; // offset 0x0, size 0x4
        } __anon$4672; // offset 0x4, size 0x4
        char * szString; // offset 0x4, size 0x4
        float fFloat; // offset 0x4, size 0x4
        int nInteger; // offset 0x4, size 0x4
        int nRegister; // offset 0x4, size 0x4
        int bBoolean; // offset 0x4, size 0x4
        unsigned int nLookup; // offset 0x4, size 0x4
    };
};
struct AptConstFile {
    // total size: 0x20
    char aMagic[20]; // offset 0x0, size 0x14
    struct AptCharacter * pMainCharacter; // offset 0x14, size 0x4
    int nConstants; // offset 0x18, size 0x4
    struct AptConstantTable * aConstants; // offset 0x1C, size 0x4
};
struct AptMovie {
    // total size: 0xC
    int nFrames; // offset 0x0, size 0x4
    struct AptFrame * aFrames; // offset 0x4, size 0x4
    class AptNativeHash * phLabels; // offset 0x8, size 0x4
};
struct AptCharacterSprite {
    // total size: 0xC
    struct AptMovie movie; // offset 0x0, size 0xC
};
struct AptCharacterSound {
    // total size: 0x4
    void * zID; // offset 0x0, size 0x4
};
struct AptCharacterBitmap {
    // total size: 0x4
    void * zID; // offset 0x0, size 0x4
};
struct AptImport {
    // total size: 0x10
    char * szFile; // offset 0x0, size 0x4
    char * szName; // offset 0x4, size 0x4
    int nID; // offset 0x8, size 0x4
    class AptSharedPtr file; // offset 0xC, size 0x4
};
struct AptExport {
    // total size: 0x8
    char * szName; // offset 0x0, size 0x4
    int nID; // offset 0x4, size 0x4
};
struct AptCharacterAnimation : public AptCharacterSprite {
    // total size: 0x34
    int nCharacters; // offset 0xC, size 0x4
    struct AptCharacter * * apCharacters; // offset 0x10, size 0x4
    unsigned int nWidth; // offset 0x14, size 0x4
    unsigned int nHeight; // offset 0x18, size 0x4
    unsigned int nMillisecondsPerFrame; // offset 0x1C, size 0x4
    int nImports; // offset 0x20, size 0x4
    struct AptImport * aImports; // offset 0x24, size 0x4
    int nExports; // offset 0x28, size 0x4
    struct AptExport * aExports; // offset 0x2C, size 0x4
    int nCurrentConstantIndex; // offset 0x30, size 0x4
};
struct AptCharacterGlyphEntry {
    // total size: 0x4
    signed short nIndex; // offset 0x0, size 0x2
    signed short nAdvance; // offset 0x2, size 0x2
};
struct AptCharacterStaticTextRecords {
    // total size: 0x38
    int nFontID; // offset 0x0, size 0x4
    struct AptCXForm cxform; // offset 0x4, size 0x20
    float fXOffset; // offset 0x24, size 0x4
    float fYOffset; // offset 0x28, size 0x4
    float fScale; // offset 0x2C, size 0x4
    int nGlyphs; // offset 0x30, size 0x4
    struct AptCharacterGlyphEntry * aGlyphs; // offset 0x34, size 0x4
};
struct AptCharacterStaticText {
    // total size: 0x30
    struct AptRect rBounds; // offset 0x0, size 0x10
    struct AptMatrix matrix; // offset 0x10, size 0x18
    int nFontRecords; // offset 0x28, size 0x4
    struct AptCharacterStaticTextRecords * aRecords; // offset 0x2C, size 0x4
};
union /* @class$4327Apt_cpp */ {
    struct AptCharacterShape shape; // offset 0x0, size 0x14
    struct AptCharacterMorph morph; // offset 0x0, size 0x8
    struct AptCharacterText text; // offset 0x0, size 0x34
    struct AptCharacterFont font; // offset 0x0, size 0xC
    struct AptCharacterButton button; // offset 0x0, size 0x38
    struct AptCharacterSprite sprite; // offset 0x0, size 0xC
    struct AptCharacterSound sound; // offset 0x0, size 0x4
    struct AptCharacterBitmap bitmap; // offset 0x0, size 0x4
    struct AptCharacterAnimation animation; // offset 0x0, size 0x34
    struct AptCharacterStaticText statictext; // offset 0x0, size 0x30
};
struct AptCharacter {
    // total size: 0x40
    enum AptCharacterType eType; // offset 0x0, size 0x4
    struct AptCharacter * pParentAnim; // offset 0x4, size 0x4
    union { // inferred
        union /* @class$4327Apt_cpp */ {
            struct AptCharacterShape shape; // offset 0x0, size 0x14
            struct AptCharacterMorph morph; // offset 0x0, size 0x8
            struct AptCharacterText text; // offset 0x0, size 0x34
            struct AptCharacterFont font; // offset 0x0, size 0xC
            struct AptCharacterButton button; // offset 0x0, size 0x38
            struct AptCharacterSprite sprite; // offset 0x0, size 0xC
            struct AptCharacterSound sound; // offset 0x0, size 0x4
            struct AptCharacterBitmap bitmap; // offset 0x0, size 0x4
            struct AptCharacterAnimation animation; // offset 0x0, size 0x34
            struct AptCharacterStaticText statictext; // offset 0x0, size 0x30
        } __anon$4334; // offset 0x8, size 0x38
        struct AptCharacterShape shape; // offset 0x8, size 0x14
        struct AptCharacterMorph morph; // offset 0x8, size 0x8
        struct AptCharacterText text; // offset 0x8, size 0x34
        struct AptCharacterFont font; // offset 0x8, size 0xC
        struct AptCharacterButton button; // offset 0x8, size 0x38
        struct AptCharacterSprite sprite; // offset 0x8, size 0xC
        struct AptCharacterSound sound; // offset 0x8, size 0x4
        struct AptCharacterBitmap bitmap; // offset 0x8, size 0x4
        struct AptCharacterAnimation animation; // offset 0x8, size 0x34
        struct AptCharacterStaticText statictext; // offset 0x8, size 0x30
    };
};
struct AptFile : public AptSharedPtrRefCount {
    // total size: 0x18
private:
    class EAStringC mName; // offset 0x4, size 0x4
    enum State mState; // offset 0x8, size 0x4
    void * mAptData; // offset 0xC, size 0x4
    struct AptCharacter * mCharacter; // offset 0x10, size 0x4
    void * mUserData; // offset 0x14, size 0x4
};
enum State {
    Invalid = 0,
    Queued = 1,
    WaitingForData = 2,
    WaitingForImports = 3,
    Resolved = 4,
    Zombie = 5,
};
struct AptSavedInputRecordInput : public AptSavedInputRecord {
    // total size: 0x8
    unsigned int nInput; // offset 0x4, size 0x4
};
// Range: 0x802FD5EC -> 0x802FD66C
static void _addScreenGrabToSavedInputs() {
    // Local variables
    char szBuf[16]; // r1+0x10
    struct AptSavedInputRecordInput inputRecord; // r1+0x8

    // References
    // -> struct AptUserFunctions gAptFuncs;
    // -> unsigned int gnCurTick;
    // -> int gbSavedInputsEnabled;
}

// Range: 0x802FD66C -> 0x802FD7B4
static int _tick(unsigned int nDeltaTime /* r30 */) {
    // Local variables
    int bAdvancedFrame; // r31
    struct AptCharacterAnimationInst * pAnimInst; // r0
    unsigned int nMillisecondsPerFrame; // r29
    struct AptCharacterAnimationInst * pAnimInst; // r0

    // References
    // -> int gbSavedInputsEnabled;
    // -> unsigned int gnCurTick;
    // -> struct AptLinker * gpLinker;
    // -> struct AptAnimationPoolData * gpPool;
}

// Range: 0x802FD7B4 -> 0x802FDA00
static void _playbackSavedInputs() {
    // Local variables
    unsigned int nTargetTime; // r28
    unsigned int nInput; // r0
    char * szName; // r27
    char szBuf[16]; // r1+0x10
    unsigned int nCustomMessageBytes; // r27
    int bCorrectAnimsLoaded; // r0

    // References
    // -> struct AptLinker * gpLinker;
    // -> int gbSavedInputsEnabled;
    // -> struct AptAnimationPoolData * gpPool;
    // -> struct AptSavedInputCheckpoints * gpSavedInputCheckpoints;
    // -> struct AptUserFunctions gAptFuncs;
    // -> struct SavedInputPlayback gSIPlayback;
}

struct DbgIterator : public DbgIteratorBase {
    // total size: 0xC
};
class DbgIteratorBase {
    // total size: 0xC
protected:
    struct AptFileSavedInputState * mPtr; // offset 0x0, size 0x4
    struct AptFileSavedInputState * mBegin; // offset 0x4, size 0x4
    struct AptFileSavedInputState * mEnd; // offset 0x8, size 0x4
};
struct DefaultPolicy {
    // total size: 0x1
};
enum State {
    Invalid = 0,
    ExpectedBySavedInputButUnavailable = 1,
    LoadedButNotAtCheckpoint = 2,
    ReadyToBeLinked = 3,
    Linked = 4,
};
struct DbgIteratorFactory {
    // total size: 0x8
private:
    struct AptFileSavedInputState * mBegin; // offset 0x0, size 0x4
    struct AptFileSavedInputState * mEnd; // offset 0x4, size 0x4
};
// Range: 0x802FDA00 -> 0x802FDB00
static void _AptInternalUpdate(unsigned int nDeltaTime /* r31 */) {
    // Local variables
    class AptSharedPtr aLoadedFiles[96]; // r1+0x8

    // References
    // -> unsigned char gbGarbageCollectThisFrame;
    // -> class AptValueVector * gpValuesToRelease;
    // -> struct AptLinker * gpLinker;
    // -> struct AptAnimationPoolData * gpPool;
    // -> struct SavedInputPlayback gSIPlayback;
    // -> struct AptLoader * gpLoader;
}

class Iterator {
    // total size: 0x4
    struct Node * mRep; // offset 0x0, size 0x4
};
// Range: 0x802FDB00 -> 0x802FDB48
static void _AptInternalRender() {
    // References
    // -> struct AptRenderingContext * gpRenderingContext;
    // -> struct AptAnimationPoolData * gpPool;
}

class AptMath {
    // total size: 0x1
};
// Range: 0x802FDB48 -> 0x802FDBA0
void AptUpdate(unsigned int nDeltaTime /* r31 */) {
    // References
    // -> unsigned long gAptOptFlags;
}

class AptFastStack {
    // total size: 0x1
};
// Range: 0x802FDBA0 -> 0x802FDBA4
void AptRender() {}

enum AptInputType {
    AptInputType_MouseButton0 = 0,
    AptInputType_Left = 1,
    AptInputType_Right = 2,
    AptInputType_Home = 3,
    AptInputType_End = 4,
    AptInputType_Insert = 5,
    AptInputType_Delete = 6,
    AptInputType_Backspace = 8,
    AptInputType_Enter = 13,
    AptInputType_Up = 14,
    AptInputType_Down = 15,
    AptInputType_PgUp = 16,
    AptInputType_PgDn = 17,
    AptInputType_Tab = 18,
    AptInputType_Escape = 19,
    AptInputType_ASCII32 = 32,
    AptInputType_ASCII126 = 126,
    AptInputType_MouseMovement = 200,
    AptInputType_PadSelect = 300,
    AptInputType_PadBack = 300,
    AptInputType_PadStart = 301,
    AptInputType_PadCross = 302,
    AptInputType_PadA = 302,
    AptInputType_PadCircle = 303,
    AptInputType_PadB = 303,
    AptInputType_PadTriangle = 304,
    AptInputType_PadX = 304,
    AptInputType_PadSquare = 305,
    AptInputType_PadY = 305,
    AptInputType_PadL1 = 306,
    AptInputType_PadBlack = 306,
    AptInputType_PadR1 = 307,
    AptInputType_PadWhite = 307,
    AptInputType_PadZTrigger = 307,
    AptInputType_PadL2 = 308,
    AptInputType_PadL = 308,
    AptInputType_PadR2 = 309,
    AptInputType_PadR = 309,
    AptInputType_PadL3 = 310,
    AptInputType_PadR3 = 311,
    AptInputType_Connected = 400,
    AptInputType_Disconnected = 401,
    AptInputType_LeftAnalogStick = 501,
    AptInputType_RightAnalogStick = 502,
    AptInputType_NumInputs = 503,
};
enum AptInputState {
    AptInputState_Pressed = 0,
    AptInputState_Released = 1,
    AptInputState_NumStates = 2,
    AptInputState_WheelUp = 3,
    AptInputState_WheelDown = 4,
    AptInputState_MouseMove = 5,
};
// Range: 0x802FDBA4 -> 0x802FDBE8
void AptAddToInputQueue(enum AptInputType eInput /* r8 */, enum AptInputState eState /* r7 */) {
    // References
    // -> struct AptAnimationPoolData * gpPool;
    // -> struct SavedInputPlayback gSIPlayback;
    // -> static int bInitialized;
}

class AptString : public AptValueNoGC {
    // total size: 0x14
public:
    class EAStringC str; // offset 0xC, size 0x4
    class AptString * mpNext; // offset 0x10, size 0x4
};
// Range: 0x802FDBE8 -> 0x802FDDDC
void AptCallFunction(const char * szName /* r25 */, char * szReturnValue /* r26 */, int nNumParams /* r27 */) {
    // Local variables
    class AptString * apStrings[32]; // r1+0x80
    class AptValue * pContext; // r28
    int i; // r29
    class EAStringC strObject; // r1+0x6C
    struct __va_list_struct varargs[1]; // r1+0x70
    class EAStringC strName; // r1+0x68
    class AptValue * pFuncValue; // r29
    void * pFuncState; // r30
    class AptValue * pVal; // r0

    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

struct LocalContextT {
    // total size: 0x1C
    const unsigned char * pInstruction; // offset 0x0, size 0x4
    class AptCIH * pCurrentContext; // offset 0x4, size 0x4
    class AptValue * pCurWith; // offset 0x8, size 0x4
    unsigned char * pRemoveWithAt; // offset 0xC, size 0x4
    class AptValue * pSuper; // offset 0x10, size 0x4
    unsigned char bEncounteredReturn; // offset 0x14, size 0x1
    struct AptCharacterInst * pParentCharacter; // offset 0x18, size 0x4
};
struct FunctionTable {
    // total size: 0x4
    void (* mFunctionPointer)(struct AptActionInterpreter * const, struct LocalContextT * const); // offset 0x0, size 0x4
};
struct AptActionSetup {
    // total size: 0x1
};
struct AptActionInterpreter {
    // total size: 0x60
    class AptBasePtrStack stack; // offset 0x0, size 0xC
    class AptValuePtrStack withStack; // offset 0xC, size 0xC
    class AptValuePtrStack setTargetStack; // offset 0x18, size 0xC
    class AptValuePtrStack thisStack; // offset 0x24, size 0xC
    class AptScriptFunctionBase * mpCurrentFunction; // offset 0x30, size 0x4
    struct AptConstantPool constantPool; // offset 0x34, size 0x8
    unsigned int input; // offset 0x3C, size 0x4
    class AptValue * apRegisters[4]; // offset 0x40, size 0x10
    int nThisCount; // offset 0x50, size 0x4
private:
    class AptValue * mpThrownValue; // offset 0x54, size 0x4
    int mnStackFrameBase; // offset 0x58, size 0x4
public:
    unsigned char bShutDown; // offset 0x5C, size 0x1
};
class AptBasePtrStack {
    // total size: 0xC
    int m_nElements; // offset 0x0, size 0x4
    int m_nCapacity; // offset 0x4, size 0x4
    class AptValue * * m_aElements; // offset 0x8, size 0x4
};
// Range: 0x802FDDDC -> 0x802FDDFC
void AptDebugPlaySavedInputs() {
    // References
    // -> struct SavedInputPlayback gSIPlayback;
}

// Range: 0x802FDDFC -> 0x802FDE20
float Apt_atoff() {}

class IAptXmlImpl * gpAptXmlImpl; // size: 0x4, address: 0x805DC204
// Range: 0x802FDE20 -> 0x802FDE30
void AptSetXMLImplementor() {
    // References
    // -> class IAptXmlImpl * gpAptXmlImpl;
}

// Range: 0x802FDE30 -> 0x802FDE58
void AptFlushInputQueue() {
    // References
    // -> struct AptAnimationPoolData * gpPool;
    // -> struct SavedInputPlayback gSIPlayback;
}

class AptGlobalExtensionObject : public AptObject {
    // total size: 0x24
};
// Range: 0x802FDE58 -> 0x802FDE64
void AptPartialGarbageCollection() {
    // References
    // -> unsigned char gbGarbageCollectThisFrame;
}

static int nSwfVersion; // size: 0x4, address: 0x805DC208
// Range: 0x802FDE64 -> 0x802FDE6C
void AptSetSwfVersion() {
    // References
    // -> static int nSwfVersion;
}

// Range: 0x802FDE6C -> 0x802FDE74
int AptGetSwfVersion() {
    // References
    // -> static int nSwfVersion;
}

// Range: 0x802FDE74 -> 0x802FDFD0
void AptUpdateZombieVector(unsigned char bClean /* r27 */) {
    // Local variables
    class AptCIH * pCIH; // r29
    int nNumVals; // r0
    int i; // r28
    struct AptCharacterAnimationInst * pAnimation; // r0

    // References
    // -> class AptValueVector * gpZombieVector;
}

struct AptCharacterInst {
    // total size: 0x18
    int nClipDepth; // offset 0x0, size 0x4
    int nCreatedOnFrame; // offset 0x4, size 0x4
    struct AptCharacter * pCharacter; // offset 0x8, size 0x4
    void * __vptr$; // offset 0xC, size 0x4
private:
    class AptNativeHash * mpNativeHash; // offset 0x10, size 0x4
    unsigned char mbGCPointersDestroyed; // offset 0x14, size 0x1
};
// Range: 0x802FDFD0 -> 0x802FE008
void AptRegisterGlobalReferences() {
    // References
    // -> class AptNativeHash * gpObjRegistrationHash;
    // -> struct AptAnimationPoolData * gpPool;
}

unsigned char AptValueSizesByVType[47]; // size: 0x2F, address: 0x8041F380
// Range: 0x802FE008 -> 0x802FE054
unsigned int AptGetSizeOfAptValue(const class AptValue * pValue /* r31 */) {
    // Local variables
    enum AptVirtualFunctionTable_Indices eType; // r0

    // References
    // -> unsigned char AptValueSizesByVType[47];
}

class AptExtObject : public AptValueGC {
    // total size: 0x14
    class AptNativeHash * mpNativeHash; // offset 0xC, size 0x4
    unsigned int mnObjectSize; // offset 0x10, size 0x4
};
// Range: 0x802FE054 -> 0x802FE090
void * AptNonGCAllocSaveSize(unsigned long size /* r31 */) {
    // Local variables
    unsigned int * x; // r0

    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x802FE090 -> 0x802FE0A4
void AptNonGCFreeSavedSize(void * p /* r4 */) {
    // Local variables
    unsigned int * x; // r0

    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

struct {
    // total size: 0x14
} __vt__16AptCharacterInst; // size: 0x14, address: 0x804582E0
struct {
    // total size: 0x44
} __vt__10AptValueGC; // size: 0x44, address: 0x804582F4
// Range: 0x802FE0A4 -> 0x802FE0FC
static void __sinit_\Apt_cpp() {
    // References
    // -> struct AptInitParmsT gAptInitParms;
    // -> class EAStringC gstrTempString;
    // -> struct AptUserFunctions gAptFuncs;
}


