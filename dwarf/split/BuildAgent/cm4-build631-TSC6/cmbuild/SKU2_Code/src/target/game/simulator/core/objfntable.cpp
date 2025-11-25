/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\objfntable.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800A1268 -> 0x800A176C
*/
// Range: 0x800A1268 -> 0x800A1298
class ObjFnTableQuickData * ObjFnTableQuickData::CreateInstance() {}

// Range: 0x800A1298 -> 0x800A12C8
class ObjFnTable * ObjFnTable::CreateInstance() {}

// Range: 0x800A12C8 -> 0x800A1324
void * ObjFnTableQuickData::ObjFnTableQuickData(class ObjFnTableQuickData * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__19ObjFnTableQuickData;
}

// Range: 0x800A1324 -> 0x800A1394
void * ObjFnTableQuickData::~ObjFnTableQuickData(class ObjFnTableQuickData * const this /* r30 */) {
    // References
    // -> struct [anonymous] __vt__19ObjFnTableQuickData;
}

// Range: 0x800A1394 -> 0x800A139C
enum tObjectDataType ObjFnTableQuickData::GetDataSourceType() {}

// Range: 0x800A139C -> 0x800A13EC
signed short ObjFnTableQuickData::GetTreeID() {
    // Local variables
    signed short result; // r0
    int i; // r0
}

// Range: 0x800A13EC -> 0x800A143C
signed short ObjFnTableQuickData::GetCheckTreeID() {
    // Local variables
    signed short result; // r0
    int i; // r0
}

// Range: 0x800A143C -> 0x800A1440
void ObjFnTableQuickData::SetTreeID() {}

// Range: 0x800A1440 -> 0x800A1444
void ObjFnTableQuickData::SetCheckTreeID() {}

// Range: 0x800A1444 -> 0x800A14D0
int ObjFnTableQuickData::Load(class ObjFnTableQuickData * const this /* r28 */, unsigned int fileID /* r29 */, signed short id /* r30 */) {
    // Local variables
    class iResFile * pFile; // r0
    int err; // r31
}

// Range: 0x800A14D0 -> 0x800A1568
int ObjFnTableQuickData::Load(class ObjFnTableQuickData * const this /* r28 */, signed short id /* r29 */) {
    // Local variables
    const struct ResFile * pResFile; // r0
}

// Range: 0x800A1568 -> 0x800A15D0
void ObjFnTableQuickData::BuildFromOldEntries(class ObjFnTableQuickData * const this /* r31 */) {}

// Range: 0x800A15D0 -> 0x800A15D8
class ObjectDataID ObjFnTableQuickData::GetDataID() {}

// Range: 0x800A15D8 -> 0x800A164C
unsigned char ObjFnTableQuickData::LoadFromDataID(class ObjFnTableQuickData * const this /* r29 */, const class ObjectDataID & id /* r30 */) {}

// Range: 0x800A164C -> 0x800A1654
unsigned char ObjFnTableQuickData::SaveDataByID() {}

// Range: 0x800A1654 -> 0x800A165C
unsigned char ObjFnTableQuickData::GetResourceName() {}

// Range: 0x800A165C -> 0x800A1664
unsigned char ObjFnTableQuickData::SetResourceName() {}

// Range: 0x800A1664 -> 0x800A1704
unsigned char ObjFnTableQuickData::QueryInterface(class ObjFnTableQuickData * const this /* r30 */, void * ppvObject /* r31 */) {}

// Range: 0x800A1704 -> 0x800A1718
unsigned int ObjFnTableQuickData::AddRef() {}

// Range: 0x800A1718 -> 0x800A176C
unsigned int ObjFnTableQuickData::Release() {}


