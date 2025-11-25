/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\animtable.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800FB500 -> 0x800FB724
*/
// Range: 0x800FB500 -> 0x800FB530
class AnimTable * AnimTable::CreateInstance() {}

// Range: 0x800FB530 -> 0x800FB550
void AnimTable::DestroyInstance() {}

// Range: 0x800FB550 -> 0x800FB594
void * AnimTableImpl::AnimTableImpl(class AnimTableImpl * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__13AnimTableImpl;
}

// Range: 0x800FB594 -> 0x800FB5EC
void * AnimTableImpl::~AnimTableImpl(class AnimTableImpl * const this /* r30 */) {}

// Range: 0x800FB5EC -> 0x800FB680
int AnimTableImpl::Load(class AnimTableImpl * const this /* r28 */, unsigned int fileID /* r30 */, signed short resID /* r29 */) {
    // Local variables
    class iResFile * pFile; // r0
    const struct ResFile * pData; // r0
    const struct AnimRefTable * pAnim; // r0
}

// Range: 0x800FB680 -> 0x800FB6F8
struct AnimRef * AnimTableImpl::GetEntry(class AnimTableImpl * const this /* r30 */, int entryNum /* r31 */) {
    // Local variables
    struct AnimRef * aref; // r0
}

// Range: 0x800FB6F8 -> 0x800FB704
signed short AnimTableImpl::GetID() {}

// Range: 0x800FB704 -> 0x800FB71C
int AnimTableImpl::CountEntries() {}

// Range: 0x800FB71C -> 0x800FB724
char * AnimTableImpl::GetEntryName() {}


