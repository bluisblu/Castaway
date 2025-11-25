/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\family.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8010C144 -> 0x8010CE44
*/
// Range: 0x8010C144 -> 0x8010C164
void Family::DestroyInstance() {}

// Range: 0x8010C164 -> 0x8010C1A4
void * Family::~Family(class Family * const this /* r31 */) {}

// Range: 0x8010C1A4 -> 0x8010C264
void * FamilyImpl::FamilyImpl(class FamilyImpl * const this /* r30 */, int number /* r31 */) {
    // References
    // -> struct [anonymous] __vt__10FamilyImpl;
}

// Range: 0x8010C264 -> 0x8010C328
void * FamilyImpl::FamilyImpl(class FamilyImpl * const this /* r30 */, class FamilyImpl * inFam /* r31 */) {
    // References
    // -> struct [anonymous] __vt__10FamilyImpl;
}

// Range: 0x8010C328 -> 0x8010C3A8
void * FamilyImpl::~FamilyImpl(class FamilyImpl * const this /* r30 */) {}

// Range: 0x8010C3A8 -> 0x8010C448
void FamilyImpl::CreateFamilyInLot(class FamilyImpl * const this /* r28 */) {
    // Local variables
    class ObjectModule * pObjMod; // r30
    const class FamilyMember * member; // r0
    class Neighbor * neighbor; // r0
    int j; // r29
}

// Range: 0x8010C448 -> 0x8010C4F8
void FamilyImpl::RemoveFamilyFromLot(class FamilyImpl * const this /* r28 */) {
    // Local variables
    class ObjectModule * pObjMod; // r30
    const class FamilyMember * member; // r0
    class Neighbor * neighbor; // r0
    int j; // r29
    class cXPerson * oldPerson; // r0
}

// Range: 0x8010C4F8 -> 0x8010C544
unsigned char FamilyImpl::TestMember(const class FamilyImpl * const this /* r31 */) {
    // Local variables
    int guid; // r0
}

// Range: 0x8010C544 -> 0x8010C5C0
class FamilyMember * FamilyImpl::GetMemberByGUID(class FamilyImpl * const this /* r29 */, int guid /* r30 */) {
    // Local variables
    const class FamilyMember * i; // r31
}

// Range: 0x8010C5C0 -> 0x8010C63C
unsigned char FamilyImpl::TestMember(const class FamilyImpl * const this /* r29 */, int guid /* r30 */) {
    // Local variables
    const class FamilyMember * i; // r31
}

// Range: 0x8010C63C -> 0x8010C6A0
class FamilyMember * FamilyImpl::GetIndexedMember(class FamilyImpl * const this /* r30 */, int index /* r31 */) {}

// Range: 0x8010C6A0 -> 0x8010C6DC
void FamilyImpl::GetName(class StringBuffer2 * name /* r31 */) {}

// Range: 0x8010C6DC -> 0x8010C6E4
int FamilyImpl::CountMembers() {}

// Range: 0x8010C6E4 -> 0x8010C718
int FamilyImpl::GetFriendCount(class FamilyImpl * const this /* r31 */) {}

// Range: 0x8010C718 -> 0x8010C738
void FamilyImpl::SetFunds() {}

// Range: 0x8010C738 -> 0x8010C758
void FamilyImpl::SetPetPoints() {}

// Range: 0x8010C758 -> 0x8010C78C
int FamilyImpl::GetNetWorth(class FamilyImpl * const this /* r31 */) {}

// Range: 0x8010C78C -> 0x8010C820
unsigned char FamilyImpl::LoadFamily(class FamilyImpl * const this /* r30 */, class iResFile * file /* r31 */) {
    // Local variables
    int version; // r1+0x8
    signed short storedSectionId; // r0
    unsigned char success; // r0
}

// Range: 0x8010C820 -> 0x8010C870
void FamilyImpl::ClearFamily(class FamilyImpl * const this /* r31 */) {}

// Range: 0x8010C870 -> 0x8010CA04
void FamilyImpl::DoStream(class FamilyImpl * const this /* r29 */, class ReconBuffer * rb /* r30 */, int version /* r31 */) {}

// Range: 0x8010CA04 -> 0x8010CAA8
unsigned char FamilyImpl::LoadByResID(class FamilyImpl * const this /* r28 */, class iResFile * file /* r29 */, signed short id /* r30 */, int * version /* r31 */) {
    // Local variables
    class vector temp; // r1+0x10
    int err; // r0
}

// Range: 0x8010CAA8 -> 0x8010CB38
unsigned char FamilyImpl::SaveFamily(class FamilyImpl * const this /* r29 */, class iResFile * file /* r30 */, int version /* r31 */) {
    // Local variables
    signed short storedSectionId; // r0
    int err; // r0
}

// Range: 0x8010CB38 -> 0x8010CB74
void FamilyImpl::SetName(class FamilyImpl * const this /* r31 */) {}

// Range: 0x8010CB74 -> 0x8010CB7C
unsigned char FamilyImpl::MyDoCommand() {}

// Range: 0x8010CB7C -> 0x8010CC04
void FamilyImpl::AddMember(class FamilyImpl * const this /* r29 */, int guid /* r30 */) {
    // Local variables
    class FamilyMember * i; // r31
}

// Range: 0x8010CC04 -> 0x8010CC84
void FamilyImpl::RemoveMember(class FamilyImpl * const this /* r29 */, int guid /* r30 */) {
    // Local variables
    class FamilyMember * i; // r31
}

// Range: 0x8010CC84 -> 0x8010CD28
void FamilyImpl::RemoveAllMembers(class FamilyImpl * const this /* r29 */) {
    // Local variables
    int nNumMembers; // r0
    int i; // r30
    class FamilyMember * pFamilyMember; // r0
}

// Range: 0x8010CD28 -> 0x8010CD3C
void FamilyMember::DoStream(class FamilyMember * const this /* r0 */) {}

// Range: 0x8010CD3C -> 0x8010CD9C
void FamilyImpl::GetExportName(class FamilyImpl * const this /* r30 */, class StringBuffer2 * name /* r31 */) {}

// Range: 0x8010CD9C -> 0x8010CE44
signed short FamilyImpl::FindInstancedFamilyMember(class FamilyImpl * const this /* r28 */) {
    // Local variables
    int count; // r0
    int i; // r30
    const class FamilyMember * member; // r0
    int guid; // r29
    class cXObject * obj; // r0
}


