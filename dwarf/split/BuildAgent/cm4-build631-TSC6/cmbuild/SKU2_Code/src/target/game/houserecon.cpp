/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\houserecon.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8022F768 -> 0x8022FE98
*/
// Range: 0x8022F768 -> 0x8022F978
void ObjectSaveTypeTable3::DoStream(class ReconBuffer * r /* r25 */, int version /* r26 */) {
    // Local variables
    struct HRSelector * const pHRSel; // r29
    int & iNumSelectors; // r28
    class ObjectFolder * const fFolder; // r27
}

// Range: 0x8022F978 -> 0x8022FA6C
void ObjectSaveIDTable::DoStream(class ObjectSaveIDTable * const this /* r28 */, class ReconBuffer * r /* r29 */) {
    // Local variables
    struct HRObject * const pHRObj; // r0
    int & iNumObjects; // r30
    unsigned char compress; // r1+0x8
    signed short id; // r1+0xC
    signed short selID; // r1+0xA
}

// Range: 0x8022FA6C -> 0x8022FAC0
struct HRSelector * ObjectSaveIDTable::findHRSel() {
    // Local variables
    struct HRSelector * result; // r3
    struct HRSelector * const pHRSel; // r6
    int i; // r7
}

// Range: 0x8022FAC0 -> 0x8022FB2C
void * HouseRecon::HouseRecon(class HouseRecon * const this /* r30 */) {}

// Range: 0x8022FBBC -> 0x8022FC28
void * HouseRecon::~HouseRecon(class HouseRecon * const this /* r30 */) {}

// Range: 0x8022FC28 -> 0x8022FC6C
int HouseRecon::findHRSelector() {
    // Local variables
    int iNumSelectors; // r0
    int i; // r6
}

// Range: 0x8022FC6C -> 0x8022FD84
void HouseRecon::LoadHouseData(class HouseRecon * const this /* r26 */, class iResFile * pFile /* r27 */) {
    // Local variables
    class ObjectSaveTypeTable3 saveTable; // r1+0xC
    class ObjectSaveIDTable saveIDTable; // r1+0x8
    struct HandleNode * handle; // r30
    int * pGuid; // r29
    int iSize; // r28
    int i; // r27
    int iIndex; // r0
}

// Range: 0x8022FD84 -> 0x8022FD8C
void * ObjectSaveIDTable::ObjectSaveIDTable() {}

// Range: 0x8022FD8C -> 0x8022FD94
void * ObjectSaveTypeTable3::ObjectSaveTypeTable3() {}

// Range: 0x8022FD94 -> 0x8022FE98
void HouseRecon::SaveHouseData(const class HouseRecon * const this /* r28 */, class iResFile * pFile /* r29 */) {
    // Local variables
    int iNumSelectors; // r31
    int i; // r0
    int iNumDiscards; // r5
    struct HandleNode * handle; // r30
    int * pGuid; // r3
    class StackString dummy; // r1+0x8
}


