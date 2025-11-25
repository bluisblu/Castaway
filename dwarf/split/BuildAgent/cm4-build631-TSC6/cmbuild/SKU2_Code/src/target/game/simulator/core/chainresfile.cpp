/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\chainresfile.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801084AC -> 0x80109EA4
*/
// Range: 0x80108508 -> 0x8010857C
void * ChainResFile::~ChainResFile(class ChainResFile * const this /* r30 */) {}

// Range: 0x8010857C -> 0x80108610
void ChainResFile::AddFile() {
    // Local variables
    int ct; // r6
}

// Range: 0x80108610 -> 0x801086C0
void ChainResFile::RemoveFile(class ChainResFile * const this /* r25 */, const class iResFile * file /* r26 */) {
    // Local variables
    unsigned char found; // r28
    int ct; // r27
}

// Range: 0x80108714 -> 0x80108748
signed short ChainResFile::CountFiles() {
    // Local variables
    int ct; // r4
    int _ct; // r5
}

// Range: 0x80108748 -> 0x8010879C
class iResFile * ChainResFile::GetFile() {
    // Local variables
    int ct; // r6
    class iResFile * found; // r7
    int _ct; // r8
}

// Range: 0x8010879C -> 0x80108824
int ChainResFile::Close(class ChainResFile * const this /* r29 */) {
    // Local variables
    int err; // r31
    int temErr; // r3
    int _ct; // r30
}

// Range: 0x80108824 -> 0x801088AC
int ChainResFile::CloseForReopen(class ChainResFile * const this /* r29 */) {
    // Local variables
    int err; // r31
    int temErr; // r3
    int _ct; // r30
}

// Range: 0x801088AC -> 0x80108934
int ChainResFile::Reopen(class ChainResFile * const this /* r29 */) {
    // Local variables
    int err; // r31
    int temErr; // r3
    int _ct; // r30
}

// Range: 0x80108934 -> 0x801089FC
void ChainResFile::Update(class ChainResFile * const this /* r28 */) {
    // Local variables
    int err; // r30
    int temErr; // r3
    int _ct; // r29
}

// Range: 0x801089FC -> 0x80108A7C
unsigned char ChainResFile::Writable(class ChainResFile * const this /* r30 */) {
    // Local variables
    int _ct; // r31
}

// Range: 0x80108A7C -> 0x80108AFC
unsigned char ChainResFile::ValidFile(class ChainResFile * const this /* r30 */) {
    // Local variables
    int _ct; // r31
}

// Range: 0x80108AFC -> 0x80108BB0
char ChainResFile::GetLanguage(class ChainResFile * const this /* r27 */, struct HandleNode * res /* r28 */) {
    // Local variables
    char lang; // r30
    int _ct; // r29
}

// Range: 0x80108BB0 -> 0x80108C24
signed short ChainResFile::CountTypes(class ChainResFile * const this /* r31 */) {
    // Local variables
    class vector typeVector; // r1+0x10
}

// Range: 0x80108C24 -> 0x80108D3C
void ChainResFile::BuildTypeVector(class ChainResFile * const this /* r25 */, class vector & typeVec /* r26 */) {
    // Local variables
    signed short typeCount; // r30
    int type; // r1+0x8
    int * i; // r29
    unsigned char found; // r28
    int _ct; // r27
}

// Range: 0x80108D3C -> 0x80108DEC
int ChainResFile::GetIndType(class ChainResFile * const this /* r30 */, signed short index /* r31 */) {
    // Local variables
    class vector typeVec; // r1+0x10
}

// Range: 0x80108DEC -> 0x80108EA8
signed short ChainResFile::Count(class ChainResFile * const this /* r27 */, int type /* r28 */) {
    // Local variables
    int total; // r30
    int _ct; // r29
}

// Range: 0x80108EA8 -> 0x80108F80
struct HandleNode * ChainResFile::GetByIDAndLanguage(class ChainResFile * const this /* r24 */, int type /* r25 */, signed short id /* r26 */, char langCode /* r27 */, void (* Swizzler)(void *, int) /* r28 */) {
    // Local variables
    struct HandleNode * res; // r30
    int _ct; // r29
}

// Range: 0x80108F80 -> 0x80108F9C
struct HandleNode * ChainResFile::GetByID() {}

// Range: 0x80108F9C -> 0x8010906C
struct HandleNode * ChainResFile::GetByName(class ChainResFile * const this /* r25 */, int type /* r26 */, const class StringBuffer & name /* r27 */, void (* Swizzler)(void *, int) /* r28 */) {
    // Local variables
    struct HandleNode * res; // r30
    int _ct; // r29
}

// Range: 0x8010906C -> 0x801091A8
struct HandleNode * ChainResFile::GetByIndex(class ChainResFile * const this /* r24 */, int type /* r25 */, signed short index /* r26 */, void (* Swizzler)(void *, int) /* r27 */) {
    // Local variables
    struct HandleNode * res; // r29
    signed short curCount; // r0
    int _ct; // r28
}

// Range: 0x801091A8 -> 0x80109258
void ChainResFile::GetName(class ChainResFile * const this /* r27 */, struct HandleNode * res /* r28 */, class StringBuffer & name /* r29 */) {
    // Local variables
    int _ct; // r30
}

// Range: 0x80109258 -> 0x8010930C
int ChainResFile::GetResType(class ChainResFile * const this /* r27 */, struct HandleNode * res /* r28 */) {
    // Local variables
    int theType; // r30
    int _ct; // r29
}

// Range: 0x8010930C -> 0x801093BC
void ChainResFile::GetID(class ChainResFile * const this /* r27 */, struct HandleNode * res /* r28 */, signed short * id /* r29 */) {
    // Local variables
    int _ct; // r30
}

// Range: 0x801093BC -> 0x8010946C
unsigned char ChainResFile::IsLittleEndian(class ChainResFile * const this /* r27 */, struct HandleNode * res /* r28 */) {
    // Local variables
    unsigned char isLittleEndian; // r30
    int _ct; // r29
}

// Range: 0x8010946C -> 0x8010951C
void ChainResFile::GetIndex(class ChainResFile * const this /* r27 */, struct HandleNode * res /* r28 */, signed short * index /* r29 */) {
    // Local variables
    int _ct; // r30
}

// Range: 0x8010951C -> 0x801095CC
void ChainResFile::FindUniqueName(class ChainResFile * const this /* r28 */, int resType /* r29 */, class StringBuffer & name /* r30 */) {
    // Local variables
    int _ct; // r31
}

// Range: 0x801095CC -> 0x80109630
signed short ChainResFile::FindUniqueID(class ChainResFile * const this /* r30 */, int rType /* r31 */) {}

// Range: 0x80109630 -> 0x801096E8
void ChainResFile::Detach(class ChainResFile * const this /* r28 */, struct HandleNode * res /* r29 */) {
    // Local variables
    int _ct; // r30
}

// Range: 0x801096E8 -> 0x801096F0
void ChainResFile::Load() {}

// Range: 0x801096F0 -> 0x801097A0
void ChainResFile::SetID(class ChainResFile * const this /* r27 */, struct HandleNode * res /* r28 */, signed short id /* r29 */) {
    // Local variables
    int _ct; // r30
}

// Range: 0x801097A0 -> 0x801097BC
void ChainResFile::Add() {}

// Range: 0x801097BC -> 0x801099C8
void ChainResFile::AddWithLanguage(class ChainResFile * const this /* r31 */, struct HandleNode * theHandle /* r19 */, int rType /* r20 */, signed short rID /* r21 */, const class StringBuffer & rName /* r22 */, char langCode /* r23 */, unsigned char littleEndian /* r24 */) {
    // Local variables
    struct HandleNode * oldRes; // r4
    int _ct; // r28
    unsigned char allowed; // r27
    unsigned char typeFound; // r26
    unsigned int * i; // r25
}

// Range: 0x801099C8 -> 0x80109A9C
void ChainResFile::Write(class ChainResFile * const this /* r28 */, struct HandleNode * res /* r29 */) {
    // Local variables
    int _ct; // r30
}

// Range: 0x80109A9C -> 0x80109B70
void ChainResFile::Remove(class ChainResFile * const this /* r28 */, struct HandleNode * res /* r29 */) {
    // Local variables
    int _ct; // r30
}

// Range: 0x80109B70 -> 0x80109C4C
void ChainResFile::SetInfo(class ChainResFile * const this /* r25 */, struct HandleNode * res /* r26 */, signed short id /* r27 */, const class StringBuffer & name /* r28 */, char langCode /* r29 */) {
    // Local variables
    int _ct; // r30
}

// Range: 0x80109C4C -> 0x80109CF8
void ChainResFile::AddProhibitedType(class ChainResFile * const this /* r29 */, unsigned int type /* r1+0x8 */) {
    // Local variables
    int ct; // r5
}

// Range: 0x80109CF8 -> 0x80109DA4
void ChainResFile::AddExclusiveType(class ChainResFile * const this /* r29 */, unsigned int type /* r1+0x8 */) {
    // Local variables
    int ct; // r5
}

// Range: 0x80109DA4 -> 0x80109EA4
unsigned char ChainResFile::TypeWritable(unsigned int type /* r27 */) {
    // Local variables
    int ct; // r30
    unsigned char hasType; // r29
    unsigned int * i; // r28
}


