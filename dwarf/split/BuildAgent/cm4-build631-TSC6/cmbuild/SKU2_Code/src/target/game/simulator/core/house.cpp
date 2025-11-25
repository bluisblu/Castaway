/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\house.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80115E38 -> 0x801166D4
*/
// Range: 0x80115E38 -> 0x80115E84
void * House::House(class House * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__5House;
}

// Range: 0x80115E84 -> 0x80115EFC
void * House::~House(class House * const this /* r30 */) {
    // References
    // -> struct [anonymous] __vt__5House;
}

// Range: 0x80115EFC -> 0x80115F80
void House::Initialize(class House * const this /* r31 */) {
    // References
    // -> class RoomManager * pRoomManager;
    // -> class ObjectModule * pObjectModule;
    // -> class cSimulator * pSimulator;
}

// Range: 0x80115F80 -> 0x80116024
void House::Destroy(class House * const this /* r31 */) {
    // References
    // -> class cSimulator * pSimulator;
    // -> class ObjectModule * pObjectModule;
    // -> class RoomManager * pRoomManager;
}

// Range: 0x80116024 -> 0x80116070
void House::RefreshHouse() {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x80116070 -> 0x80116118
void House::SetLotSize(class House * const this /* r29 */, int xSize /* r30 */, int ySize /* r31 */) {}

// Range: 0x80116118 -> 0x80116254
int House::LoadFile(class House * const this /* r27 */, class iResFile * file /* r28 */, int * pVersion /* r29 */) {
    // Local variables
    int version; // r1+0xC
    signed short gameEdition; // r0
    int err; // r0
    int houseVersion; // r1+0x8

    // References
    // -> signed short kHouseResourceID;
    // -> signed short kSimulatorResourceID;
}

// Range: 0x80116254 -> 0x80116308
void House::ComputeAndStoreLotData(class House * const this /* r30 */) {
    // Local variables
    unsigned char hasPhone; // r1+0xB
    unsigned char hasBaby; // r1+0xA
    unsigned char hasHouse; // r1+0x9
    unsigned char hasUserPlacedObjects; // r1+0x8
    int familyObjectsValue; // r1+0x10
    int lotObjectsValue; // r1+0xC
    int archValue; // r0
}

// Range: 0x80116308 -> 0x801163AC
int House::SaveFile(class House * const this /* r29 */, class iResFile * pFile /* r30 */) {
    // Local variables
    int version; // r31

    // References
    // -> signed short kHouseResourceID;
    // -> signed short kSimulatorResourceID;
}

// Range: 0x801163AC -> 0x801164D0
unsigned char House::DoCommand(class House * const this /* r29 */, signed short command /* r30 */, int info /* r31 */) {
    // Local variables
    class cXObject * obj; // r0
}

// Range: 0x801164D0 -> 0x8011653C
unsigned char House::IsNative(class cXPerson * person /* r31 */) {
    // Local variables
    class Family * family; // r0
}

// Range: 0x8011653C -> 0x801165A8
unsigned char House::IsResident(class cXPerson * person /* r31 */) {
    // Local variables
    class Family * family; // r0
}

// Range: 0x801165A8 -> 0x801165F8
void House::EnterLiveMode(class House * const this /* r31 */) {}

// Range: 0x801165F8 -> 0x80116638
void House::PrepareForBudgetWindow(class House * const this /* r31 */) {}

// Range: 0x80116638 -> 0x801166D4
void House::DoStream(class House * const this /* r6 */, class ReconBuffer * r /* r30 */, int version /* r31 */) {
    // Local variables
    int junkValue; // r1+0x8
    int i; // r31
}


