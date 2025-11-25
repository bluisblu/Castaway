/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\relmatrix.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800D75F0 -> 0x800D8018
*/
// Range: 0x800D75F0 -> 0x800D7620
class RelMatrix * RelMatrix::CreateInstance() {}

// Range: 0x800D7620 -> 0x800D7678
void * RelMatrixImpl::RelMatrixImpl(class RelMatrixImpl * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__13RelMatrixImpl;
}

// Range: 0x800D7678 -> 0x800D7698
void RelMatrix::DestroyInstance() {}

// Range: 0x800D7698 -> 0x800D76AC
void RelInt::DoStream(class RelInt * const this /* r0 */) {}

// Range: 0x800D76AC -> 0x800D76B4
unsigned char RelMatrixImpl::Init() {}

// Range: 0x800D76B4 -> 0x800D777C
void RelMatrixImpl::CopyTo(class RelMatrixImpl * const this /* r26 */, class RelMatrix & dest /* r27 */) {
    // Local variables
    class RelArray * * i; // r31
    int numValues; // r30
    int index; // r29
    class RelArray * currentArray; // r28
}

// Range: 0x800D777C -> 0x800D77D4
int RelMatrixImpl::GetArraySize(class RelMatrixImpl * const this /* r30 */) {
    // Local variables
    class RelArray * * array; // r0
}

// Range: 0x800D77D4 -> 0x800D785C
void RelMatrixImpl::RemoveArray(class RelMatrixImpl * const this /* r29 */, int key /* r30 */) {
    // Local variables
    class RelArray * * i; // r31
}

// Range: 0x800D785C -> 0x800D7978
void RelMatrixImpl::SetArraySize(class RelMatrixImpl * const this /* r28 */, int key /* r30 */, int numValues /* r29 */) {
    // Local variables
    class RelArray * * array; // r31
    class RelArray * r; // r30
    class RelInt fillVal; // r1+0x8
    int index; // r31
    int extraCount; // r29
}

// Range: 0x800D7978 -> 0x800D7980
void * RelInt::RelInt() {}

// Range: 0x800D7980 -> 0x800D79DC
void RelMatrixImpl::CreateNewArray(class RelMatrixImpl * const this /* r30 */, int key /* r31 */) {
    // Local variables
    class RelArray * newArray; // r1+0x8
}

// Range: 0x800D79DC -> 0x800D7A34
void * RelArray::RelArray(class RelArray * const this /* r30 */, int inKey /* r31 */) {}

// Range: 0x800D7A34 -> 0x800D7AA8
class RelArray * * RelMatrixImpl::FindArray(class RelMatrixImpl * const this /* r29 */, int key /* r30 */) {
    // Local variables
    class RelArray * * i; // r31
}

// Range: 0x800D7AA8 -> 0x800D7B14
int RelMatrixImpl::GetValue(class RelMatrixImpl * const this /* r29 */, int index /* r30 */) {
    // Local variables
    class RelArray * * array; // r0
}

// Range: 0x800D7B14 -> 0x800D7C04
void RelMatrixImpl::SetValue(class RelMatrixImpl * const this /* r27 */, int key /* r28 */, int index /* r29 */, int value /* r30 */) {
    // Local variables
    class RelArray * * array; // r31
}

// Range: 0x800D7C04 -> 0x800D7C18
void ResetRelMatrixStats() {
    // References
    // -> static int numEntries;
    // -> static int numKeys;
    // -> static int numMatricies;
}

// Range: 0x800D7C18 -> 0x800D7C30
void LogRelMatrixStats() {
    // References
    // -> static unsigned char firstRun;
}

// Range: 0x800D7C30 -> 0x800D7DF0
void RelMatrixImpl::DoStream(class RelMatrixImpl * const this /* r27 */, class ReconBuffer * rb /* r28 */, int version /* r29 */) {
    // Local variables
    int i; // r31
    int mver; // r1+0x14
    int writeHUID; // r1+0x10
    int readHUID; // r1+0xC
    int size; // r31
    int cnt; // r30
    class RelArray * newArray; // r1+0x8

    // References
    // -> static int numEntries;
    // -> static int numKeys;
    // -> static int numMatricies;
}

// Range: 0x800D7DF0 -> 0x800D7E40
void * RelArray::RelArray(class RelArray * const this /* r31 */) {}

// Range: 0x800D7E40 -> 0x800D7EB4
void RelArray::DoStream(class RelArray * const this /* r29 */, class ReconBuffer * rb /* r30 */, int version /* r31 */) {}

// Range: 0x800D7EB4 -> 0x800D7F28
void RelMatrixImpl::Clear(class RelMatrixImpl * const this /* r30 */) {
    // Local variables
    class RelArray * * i; // r4
    class RelArray * del; // r31
}

// Range: 0x800D7F28 -> 0x800D7FA8
void * RelMatrixImpl::~RelMatrixImpl(class RelMatrixImpl * const this /* r30 */) {
    // References
    // -> struct [anonymous] __vt__13RelMatrixImpl;
}

// Range: 0x800D7FA8 -> 0x800D7FB0
int RelMatrixImpl::CountKeys() {}

// Range: 0x800D7FB0 -> 0x800D8018
int RelMatrixImpl::GetNthKey(class RelMatrixImpl * const this /* r30 */, int n /* r31 */) {}


