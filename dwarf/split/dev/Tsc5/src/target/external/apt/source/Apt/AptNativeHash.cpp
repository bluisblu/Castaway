/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\AptNativeHash.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803287FC -> 0x80329580
*/
static char __PRETTY_FUNCTION__[44]; // size: 0x2C, address: 0x8045D1F0
static char __PRETTY_FUNCTION__[50]; // size: 0x32, address: 0x8045D21C
static char __PRETTY_FUNCTION__[50]; // size: 0x32, address: 0x8045D250
static char __PRETTY_FUNCTION__[32]; // size: 0x20, address: 0x8045D288
static char __PRETTY_FUNCTION__[32]; // size: 0x20, address: 0x8045D2A8
static int aSpriteGperfToActionFlag[19]; // size: 0x4C, address: 0x8041FAC0
// Range: 0x803287FC -> 0x8032883C
void * AptNativeHash::AptNativeHash() {
    // Local variables
    int NextHighestPowerOfTwo; // r0
}

// Range: 0x8032883C -> 0x80328910
void * AptNativeHash::~AptNativeHash(class AptNativeHash * const this /* r27 */) {
    // Local variables
    int i; // r29

    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

static char __PRETTY_FUNCTION__[35]; // size: 0x23, address: 0x8045D2C8
// Range: 0x80328910 -> 0x803289CC
void AptNativeHash::DestroyGCPointers(class AptNativeHash * const this /* r26 */) {
    // Local variables
    int i; // r27

    // References
    // -> static char __PRETTY_FUNCTION__[35];
}

// Range: 0x803289CC -> 0x80328AD0
void AptNativeHash::Set(class AptNativeHash * const this /* r28 */, const class EAStringC * const pKey /* r29 */, class AptValue * const pValue /* r30 */) {
    // Local variables
    unsigned int h; // r31
}

// Range: 0x80328AD0 -> 0x80328BC4
void AptNativeHash::Unset(class AptNativeHash * const this /* r28 */, const class EAStringC * const pKey /* r29 */) {
    // Local variables
    unsigned int h; // r31
    struct AptHashItem * pHashItem; // r30
}

// Range: 0x80328BC4 -> 0x80328C94
class AptValue * AptNativeHash::Lookup(const class AptNativeHash * const this /* r29 */, const class EAStringC * const pKey /* r30 */) {
    // Local variables
    struct AptHashItem * pItem; // r0
    unsigned int h; // r31
}

// Range: 0x80328C94 -> 0x80328D3C
struct AptHashItem * AptNativeHash::GetFirstItem(class AptNativeHash * const this /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x80328D3C -> 0x80328DD0
struct AptHashItem * AptNativeHash::GetNextItem(class AptNativeHash * const this /* r30 */, struct AptHashItem * pItem /* r31 */) {}

// Range: 0x80328DD0 -> 0x80328E1C
void AptNativeHash::FirstAllocation(class AptNativeHash * const this /* r31 */) {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x80328E1C -> 0x80328F08
void AptNativeHash::Expand(class AptNativeHash * const this /* r28 */) {
    // Local variables
    class AptNativeHash TempHash; // r1+0x8
    class EAStringC * pKey; // r30
    int i; // r29
    struct AptHashItem * pOldItems; // r4
    int iTemp; // r4
}

// Range: 0x80328F08 -> 0x803291CC
void AptNativeHash::HashSet(class AptNativeHash * const this /* r27 */, const class EAStringC * const pKey /* r28 */, class AptValue * const pValue /* r29 */) {
    // Local variables
    int nBoundMin; // r24
    int nBoundMax; // r0
    int nFirstFit; // r31
    unsigned int h; // r30
    int i; // r23
    int nCurrentH; // r22
}

// Range: 0x803291CC -> 0x803293B0
struct AptHashItem * AptNativeHash::HashFindKey(const class AptNativeHash * const this /* r29 */, const class EAStringC * pKey /* r30 */) {
    // Local variables
    int nBoundMin; // r26
    int nBoundMax; // r0
    unsigned int h; // r31
    int i; // r25
    int nCurrentH; // r24
}

// Range: 0x803293B0 -> 0x80329474
void AptNativeHash::UpdateObjectMethods(class AptNativeHash * const this /* r28 */, const class EAStringC * pVar /* r29 */, int bRemove /* r30 */) {
    // Local variables
    struct SpriteMembers * pProp; // r0
    int nFlag; // r4

    // References
    // -> static int aSpriteGperfToActionFlag[19];
}

// Range: 0x80329474 -> 0x80329580
void AptNativeHash::RegisterReferences(const class AptNativeHash * const this /* r28 */, const class AptValue * pFromRef /* r29 */) {
    // Local variables
    int i; // r30

    // References
    // -> void (* sReferenceRegistrationCb)(class AptValue *, class AptValue *, char *);
}


