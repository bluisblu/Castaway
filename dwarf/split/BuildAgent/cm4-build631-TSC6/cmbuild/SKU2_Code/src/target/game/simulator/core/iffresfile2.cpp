/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\iffresfile2.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801169E4 -> 0x8011A74C
*/
// Range: 0x801169E4 -> 0x801169F0
static char GetLanguage() {}

// Range: 0x801169F0 -> 0x80116A10
static void SetLanguage() {}

// Range: 0x80116A10 -> 0x80116AA8
void IFFResNode::DoStream(class IFFResNode * const this /* r30 */, class ReconBuffer * r /* r31 */) {
    // Local variables
    signed short id; // r1+0x8
}

// Range: 0x80116AA8 -> 0x80116B24
void IFFResList::DoStream(class IFFResList * const this /* r29 */, class ReconBuffer * r /* r30 */, int version /* r31 */) {
    // Local variables
    int type; // r1+0x8
}

// Range: 0x80116B24 -> 0x80116B74
void * IFFResNode::IFFResNode(class IFFResNode * const this /* r31 */) {}

// Range: 0x80116B74 -> 0x80116C20
unsigned char IFFResMap::UpdateOffset(class IFFResMap * const this /* r27 */, int offsetMoving /* r28 */, int delta /* r29 */) {
    // Local variables
    class IFFResList * i; // r31
    class IFFResNode * n; // r30
}

// Range: 0x80116C20 -> 0x80116CF0
class IFFResList * IFFResMap::GetResList(class IFFResMap * const this /* r28 */, unsigned int type /* r29 */, unsigned char makeNew /* r30 */) {
    // Local variables
    class IFFResList * i; // r31
}

// Range: 0x80116CF0 -> 0x80116D50
void * IFFResList::IFFResList(class IFFResList * const this /* r30 */, unsigned int type /* r31 */) {}

// Range: 0x80116D50 -> 0x80116DB8
class IFFResNode * IFFResMap::MakeNewNode() {
    // Local variables
    class IFFResList * i; // r30
}

// Range: 0x80116DB8 -> 0x80116E7C
class IFFResNode * IFFResMap::GetNode(class IFFResMap * const this /* r28 */, int id /* r29 */, void (* swiz)(void *, int) /* r30 */) {
    // Local variables
    class IFFResList * i; // r31
    class IFFResNode * j; // r30
}

// Range: 0x80116E7C -> 0x80116F8C
class IFFResNode * IFFResMap::GetNodeWithLanguage(class IFFResMap * const this /* r27 */, int id /* r28 */, char lang /* r31 */, void (* swiz)(void *, int) /* r29 */) {
    // Local variables
    class IFFResList * i; // r30
    class IFFResNode * j; // r29
}

// Range: 0x80116F8C -> 0x80117058
class IFFResNode * IFFResMap::GetNode(class IFFResMap * const this /* r28 */, const class StackString & name /* r29 */, void (* swiz)(void *, int) /* r30 */) {
    // Local variables
    class IFFResList * i; // r31
    class IFFResNode * j; // r30
}

// Range: 0x80117058 -> 0x8011710C
class IFFResNode * IFFResMap::GetNode(class IFFResMap * const this /* r26 */, struct HandleNode * h /* r27 */, unsigned int * type /* r28 */, void (* swiz)(void *, int) /* r29 */) {
    // Local variables
    class IFFResList * i; // r31
    class IFFResNode * j; // r30
}

// Range: 0x8011710C -> 0x801171B8
class IFFResNode * IFFResMap::GetIndNode(class IFFResMap * const this /* r28 */, int index /* r29 */, void (* swiz)(void *, int) /* r30 */) {
    // Local variables
    class IFFResList * i; // r31
}

// Range: 0x801171B8 -> 0x80117274
void IFFResMap::RemoveNode(class IFFResMap * const this /* r28 */, class IFFResNode * n /* r29 */) {
    // Local variables
    class IFFResList * i; // r31
    class IFFResNode * j; // r30
}

// Range: 0x80117274 -> 0x80117278
int IFFResMap::CountTypes() {}

// Range: 0x80117278 -> 0x801172DC
unsigned int IFFResMap::GetIndexedType(class IFFResMap * const this /* r30 */, int index /* r31 */) {
    // Local variables
    class IFFResList * i; // r3
}

// Range: 0x801172DC -> 0x80117338
int IFFResMap::CountNodes(class IFFResMap * const this /* r30 */) {
    // Local variables
    class IFFResList * i; // r31
}

// Range: 0x80117338 -> 0x801173C4
void IFFResMap::FreeAllHandles(class IFFResMap * const this /* r29 */) {
    // Local variables
    class IFFResList * i; // r31
    class IFFResNode * j; // r30
}

// Range: 0x801173C4 -> 0x801173C8
void IFFResMap::RemoveAllNodes() {}

// Range: 0x801173C8 -> 0x80117420
void IFFResMap::RemoveAllNodesOfType(class IFFResMap * const this /* r30 */) {
    // Local variables
    class IFFResList * i; // r31
}

// Range: 0x80117420 -> 0x801174B0
signed short IFFResMap::GetHighestID(class IFFResMap * const this /* r29 */) {
    // Local variables
    signed short highest; // r31
    class IFFResList * i; // r30
    class IFFResNode * j; // r29
}

// Range: 0x801174B0 -> 0x8011751C
void IFFResMap::DoStream(class IFFResMap * const this /* r29 */, class ReconBuffer * r /* r30 */, int version /* r31 */) {}

// Range: 0x8011751C -> 0x80117570
void * IFFResList::IFFResList(class IFFResList * const this /* r31 */) {}

// Range: 0x80117570 -> 0x801175DC
void * IFFResFile2::IFFResFile2(class IFFResFile2 * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__11IFFResFile2;
}

// Range: 0x801175DC -> 0x8011766C
void * IFFResFile2::~IFFResFile2(class IFFResFile2 * const this /* r30 */) {
    // References
    // -> struct [anonymous] __vt__11IFFResFile2;
}

// Range: 0x8011766C -> 0x80117A80
int IFFResFile2::Open(class IFFResFile2 * const this /* r29 */, const class StringBuffer & path /* r26 */) {
    // Local variables
    struct IFFHeader temheader; // r1+0xE0
    class IFFResNode * newspot; // r27
    int theoffset; // r27
    int err; // r31
    int mapOffset; // r30
    unsigned char header[64]; // r1+0x10
    int size; // r1+0x8
    int i; // r6
    signed short version; // r0
    int err; // r0
    struct HandleNode * h; // r26

    // References
    // -> static unsigned char sUniqueHeader[64];
}

// Range: 0x80117A80 -> 0x80117A90
void IFFResMap::AddToFragSize() {}

// Range: 0x80117A90 -> 0x80117AE0
void * IFFResMap::IFFResMap(class IFFResMap * const this /* r31 */) {}

// Range: 0x80117AE0 -> 0x80117B8C
int IFFResFile2::Create(class IFFResFile2 * const this /* r30 */, const class StringBuffer & name /* r31 */) {
    // Local variables
    int err; // r0
    class MemFile temp; // r1+0x8
}

// Range: 0x80117B8C -> 0x80117D38
int IFFResFile2::WriteHeader(class IFFResFile2 * const this /* r29 */, class MemFile * file /* r30 */, int mapOffset /* r31 */) {
    // Local variables
    int err; // r0
    unsigned char header[64]; // r1+0x10
    int i; // r0
    int size; // r1+0x8

    // References
    // -> static unsigned char sUniqueHeader[64];
}

// Range: 0x80117D38 -> 0x80117D98
int IFFResFile2::Delete(class IFFResFile2 * const this /* r30 */, const class StringBuffer & name /* r31 */) {}

// Range: 0x80117D98 -> 0x80118024
int IFFResFile2::Close(class IFFResFile2 * const this /* r29 */) {
    // Local variables
    int err; // r31
    struct HandleNode * h; // r30
    class StackString n; // r1+0x8
    class IFFResNode * node; // r0
}

// Range: 0x80118024 -> 0x8011802C
int IFFResMap::GetFragSize() {}

// Range: 0x8011802C -> 0x8011808C
int IFFResFile2::CloseForReopen(class IFFResFile2 * const this /* r31 */) {
    // Local variables
    int err; // r0
}

// Range: 0x8011808C -> 0x8011810C
int IFFResFile2::Reopen(class IFFResFile2 * const this /* r30 */) {
    // Local variables
    class StackString name; // r1+0x8
    int err; // r0
}

// Range: 0x8011810C -> 0x80118244
void IFFResFile2::Update(class IFFResFile2 * const this /* r26 */) {
    // Local variables
    int err; // r31
    class IFFResMap * c; // r30
    int numtypes; // r29
    unsigned int type; // r28
    int numres; // r27
    class IFFResNode * res; // r0
}

// Range: 0x80118244 -> 0x8011824C
unsigned char IFFResFile2::Writable() {}

// Range: 0x8011824C -> 0x80118254
void IFFResFile2::GetFileName() {}

// Range: 0x80118254 -> 0x8011825C
unsigned char IFFResFile2::ValidFile() {}

// Range: 0x8011825C -> 0x801182DC
signed short IFFResFile2::CountTypes(class IFFResFile2 * const this /* r31 */) {}

// Range: 0x801182DC -> 0x80118384
int IFFResFile2::GetIndType(class IFFResFile2 * const this /* r30 */, signed short index /* r31 */) {
    // Local variables
    int type; // r31
}

// Range: 0x80118384 -> 0x80118414
signed short IFFResFile2::Count(class IFFResFile2 * const this /* r30 */, int type /* r31 */) {}

// Range: 0x80118414 -> 0x80118528
struct HandleNode * IFFResFile2::GetByIDAndLanguage(class IFFResFile2 * const this /* r27 */, int type /* r28 */, signed short id /* r29 */, char langCode /* r31 */, void (* Swizzler)(void *, int) /* r30 */) {
    // Local variables
    class IFFResNode * rc; // r31
}

// Range: 0x80118528 -> 0x80118544
struct HandleNode * IFFResFile2::GetByID() {}

// Range: 0x80118544 -> 0x80118664
struct HandleNode * IFFResFile2::GetByName(class IFFResFile2 * const this /* r28 */, int type /* r29 */, const class StringBuffer & name /* r31 */, void (* Swizzler)(void *, int) /* r30 */) {
    // Local variables
    class IFFResNode * spot; // r31
}

// Range: 0x80118664 -> 0x80118780
struct HandleNode * IFFResFile2::GetByIndex(class IFFResFile2 * const this /* r28 */, int type /* r29 */, signed short index /* r31 */, void (* Swizzler)(void *, int) /* r30 */) {
    // Local variables
    class IFFResNode * rc; // r31
}

// Range: 0x80118780 -> 0x80118848
void IFFResFile2::GetName(class IFFResFile2 * const this /* r29 */, struct HandleNode * res /* r30 */, class StringBuffer & name /* r31 */) {
    // Local variables
    unsigned int type; // r1+0x8
    class IFFResNode * rc; // r0
}

// Range: 0x80118848 -> 0x80118900
char IFFResFile2::GetLanguage(class IFFResFile2 * const this /* r30 */, struct HandleNode * res /* r31 */) {
    // Local variables
    unsigned int type; // r1+0x8
    class IFFResNode * rc; // r0
}

// Range: 0x80118900 -> 0x801189B4
int IFFResFile2::GetResType(class IFFResFile2 * const this /* r30 */, struct HandleNode * res /* r31 */) {
    // Local variables
    unsigned int type; // r1+0x8
    class IFFResNode * rc; // r0
}

// Range: 0x801189B4 -> 0x80118A6C
void IFFResFile2::GetID(class IFFResFile2 * const this /* r29 */, struct HandleNode * res /* r30 */, signed short * id /* r31 */) {
    // Local variables
    unsigned int type; // r1+0x8
    class IFFResNode * rc; // r0
}

// Range: 0x80118A6C -> 0x80118AF8
void IFFResFile2::GetIndex(class IFFResFile2 * const this /* r30 */, signed short * index /* r31 */) {}

// Range: 0x80118AF8 -> 0x80118BE8
void IFFResFile2::FindUniqueName(class IFFResFile2 * const this /* r27 */, int resType /* r28 */, class StringBuffer & name /* r29 */) {
    // Local variables
    class StackString startname; // r1+0x50
    int modifier; // r31
    unsigned char unique; // r30
    class IFFResNode * spot; // r0
}

// Range: 0x80118BE8 -> 0x80118C80
signed short IFFResFile2::FindUniqueID(class IFFResFile2 * const this /* r30 */, int rType /* r31 */) {
    // Local variables
    signed short highestid; // r0
}

// Range: 0x80118C80 -> 0x80118D70
void IFFResFile2::Detach(class IFFResFile2 * const this /* r29 */, struct HandleNode * res /* r30 */) {
    // Local variables
    class IFFResNode * rc; // r0
    unsigned int type; // r1+0x8
}

// Range: 0x80118D70 -> 0x80118DE8
void IFFResFile2::Load(class IFFResFile2 * const this /* r31 */) {}

// Range: 0x80118DE8 -> 0x80118EB0
unsigned char IFFResFile2::IsLittleEndian(class IFFResFile2 * const this /* r30 */, struct HandleNode * res /* r31 */) {
    // Local variables
    unsigned int type; // r1+0x8
    class IFFResNode * rc; // r0
}

// Range: 0x80118EB0 -> 0x80118F60
void IFFResFile2::SetID(class IFFResFile2 * const this /* r29 */, struct HandleNode * res /* r30 */, signed short id /* r31 */) {
    // Local variables
    class StackString oldName; // r1+0x8
    char lang; // r0
}

// Range: 0x80118F60 -> 0x80119108
void IFFResFile2::AddWithLanguage(class IFFResFile2 * const this /* r24 */, struct HandleNode * theHandle /* r25 */, int rType /* r26 */, signed short rID /* r27 */, const class StringBuffer & rName /* r28 */, char langCode /* r29 */, unsigned char littleEndian /* r30 */) {
    // Local variables
    class IFFResNode * spot; // r31
    int err; // r4
}

// Range: 0x80119108 -> 0x80119124
void IFFResFile2::Add() {}

// Range: 0x80119124 -> 0x80119378
void IFFResFile2::Write(class IFFResFile2 * const this /* r28 */, struct HandleNode * res /* r29 */) {
    // Local variables
    int size; // r1+0xC
    unsigned int type; // r1+0x8
    class IFFResNode * rc; // r30
    struct IFFHeader newheader; // r1+0x10
    unsigned char * data; // r0
    int err; // r4
}

// Range: 0x80119378 -> 0x801193D4
void IFFHeader::SetName(struct IFFHeader * const this /* r30 */, const class StackString & name /* r31 */) {}

// Range: 0x801193D4 -> 0x801194E0
void IFFResFile2::Remove(class IFFResFile2 * const this /* r30 */, struct HandleNode * res /* r31 */) {
    // Local variables
    unsigned int type; // r1+0x8
    class IFFResNode * spot; // r31
    int err; // r4
}

// Range: 0x801194E0 -> 0x80119630
void IFFResFile2::SetInfo(class IFFResFile2 * const this /* r27 */, struct HandleNode * res /* r30 */, signed short id /* r28 */, const class StringBuffer & name /* r29 */) {
    // Local variables
    unsigned int type; // r1+0x8
    class IFFResNode * spot; // r0
    unsigned char changed; // r30
    struct IFFHeader header; // r1+0xC
    int err; // r30
}

// Range: 0x80119630 -> 0x8011979C
int IFFResFile2::LoadNode(class IFFResFile2 * const this /* r31 */, class IFFResNode * rc /* r28 */, void (* Swizzle)(void *, int) /* r29 */, int type /* r30 */) {
    // Local variables
    struct IFFHeader header; // r1+0xC
    unsigned char * data; // r30
    int size; // r1+0x8
    int err; // r0
}

// Range: 0x8011979C -> 0x80119800
int IFFResFile2::LowLevelRemove(class IFFResNode * spot /* r31 */) {
    // Local variables
    int err; // r0
}

// Range: 0x80119800 -> 0x80119880
int IFFResFile2::InvalBlockHeader(class IFFResFile2 * const this /* r30 */, int fileoffset /* r31 */) {
    // Local variables
    struct IFFHeader header; // r1+0x8
    int err; // r0
}

// Range: 0x80119880 -> 0x80119AC4
int IFFResFile2::NewBlockHeader(class IFFResFile2 * const this /* r28 */, struct IFFHeader * header /* r29 */, unsigned int datasize /* r27 */, int * fileoffset /* r30 */) {
    // Local variables
    int err; // r0
    int newsize; // r31
    struct IFFHeader nextheader; // r1+0x58
    unsigned char diff; // r27
    int filesize; // r1+0x8
}

// Range: 0x80119AC4 -> 0x80119B40
int IFFResFile2::GetBlockHeader(class IFFResFile2 * const this /* r30 */, struct IFFHeader * header /* r31 */) {
    // Local variables
    int err; // r0
    int size; // r1+0x8
}

// Range: 0x80119B40 -> 0x80119B44
void IFFHeader::Swizzle() {}

// Range: 0x80119B44 -> 0x80119C08
int IFFResFile2::SetBlockHeader(class IFFResFile2 * const this /* r29 */, struct IFFHeader * header /* r30 */, int fileoffset /* r31 */) {
    // Local variables
    int err; // r0
    int size; // r1+0x8
}

// Range: 0x80119C08 -> 0x80119CF8
int IFFResFile2::MoveBlock(class IFFResFile2 * const this /* r26 */, unsigned char * temBuffer /* r27 */) {
    // Local variables
    int src; // r30
    int dest; // r29
    int err; // r0
    int currentSize; // r1+0x8
    int remainingSize; // r28
}

// Range: 0x80119CF8 -> 0x80119E18
int IFFResFile2::Defrag(class IFFResFile2 * const this /* r28 */) {
    // Local variables
    struct IFFHeader header; // r1+0x8
    unsigned int theoffset; // r31
    unsigned int vacSize; // r30
    int err; // r0
    unsigned char * temBuffer; // r29
}

// Range: 0x80119E18 -> 0x80119E20
void IFFResMap::SetFragSize() {}

// Range: 0x80119E20 -> 0x8011A27C
int IFFBehResFile::Open(class IFFBehResFile * const this /* r28 */, const class StringBuffer & path /* r25 */) {
    // Local variables
    unsigned char isBehaviorFilePresent; // r31
    struct IFFHeader temheader; // r1+0xF0
    class IFFResNode * newspot; // r26
    int theoffset; // r26
    int err; // r30
    int mapOffset; // r29
    class StackString nameOnly; // r1+0x13C
    class StackString ext; // r1+0xC
    unsigned char header[64]; // r1+0x20
    int size; // r1+0x8
    int i; // r6
    signed short version; // r0
    int err; // r0
    struct HandleNode * h; // r25

    // References
    // -> static unsigned char sUniqueHeader[64];
}

// Range: 0x8011A27C -> 0x8011A310
unsigned int IFFBehResFile::IFFNodeSize(class IFFBehResFile * const this /* r27 */, unsigned short nodes /* r28 */, unsigned int resType /* r29 */) {
    // Local variables
    unsigned int treeSize; // r31
    struct IFFHeader header; // r1+0x8
    unsigned short i; // r30
    class IFFResNode * rc; // r0
}

// Range: 0x8011A310 -> 0x8011A74C
void IFFBehResFile::RefreshBufferWithBehavior(class IFFBehResFile * const this /* r26 */) {
    // Local variables
    unsigned int resTypeArray[4]; // r1+0x28
    int resTypeCount; // r0
    class vector removeResTypes; // r1+0x18
    int i; // r27
    unsigned int resType; // r1+0x10
    unsigned char matchType; // r4
    int j; // r0
    unsigned int * removeIter; // r25
    unsigned int behBuffSize; // r27
    int i; // r28
    unsigned int res; // r29
    unsigned short nodeCount; // r0
    unsigned char * buff; // r30
    unsigned char fileheader[64]; // r1+0x50
    int i; // r0
    int offset; // r1+0xC
    struct IFFHeader header; // r1+0x90
    int i; // r29
    unsigned int res; // r28
    int nodeCount; // r0
    unsigned short j; // r27
    class IFFResNode * rc; // r24
    class StackString name; // r1+0x1E8
    class StackString nameOnly; // r1+0xDC
    class StackString ext; // r1+0x38

    // References
    // -> static unsigned char sUniqueHeader[64];
}


