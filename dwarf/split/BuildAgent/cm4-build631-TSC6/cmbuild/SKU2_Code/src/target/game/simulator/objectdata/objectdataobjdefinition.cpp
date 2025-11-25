/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\objectdata\objectdataobjdefinition.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8015FCC0 -> 0x80160330
*/
// Range: 0x8015FCC0 -> 0x8015FD3C
void * ObjectDataObjDefinition::ObjectDataObjDefinition(class ObjectDataObjDefinition * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__23ObjectDataObjDefinition;
}

// Range: 0x8015FD3C -> 0x8015FDA8
void * ObjectDataObjDefinition::~ObjectDataObjDefinition(class ObjectDataObjDefinition * const this /* r30 */) {
    // References
    // -> struct [anonymous] __vt__23ObjectDataObjDefinition;
}

// Range: 0x8015FDA8 -> 0x8015FDB4
void ObjectDataObjDefinition::Detach() {}

// Range: 0x8015FDB4 -> 0x8015FDFC
void ObjectDataObjDefinition::Reset(class ObjectDataObjDefinition * const this /* r31 */) {}

// Range: 0x8015FDFC -> 0x8015FE64
class ObjectDataObjDefinition & ObjectDataObjDefinition::__as(class ObjectDataObjDefinition * const this /* r30 */, const struct ObjDefinition & from /* r31 */) {
    // Local variables
    class StackString name; // r1+0x8
}

// Range: 0x8015FE64 -> 0x8015FED4
void ObjectDataObjDefinition::SetOwnDefinition(class ObjectDataObjDefinition * const this /* r30 */, struct ObjDefinition * from /* r31 */) {
    // Local variables
    class StackString name; // r1+0x8
}

// Range: 0x8015FED4 -> 0x8015FF38
unsigned char ObjectDataObjDefinition::GetResourceName(const class ObjectDataObjDefinition * const this /* r30 */, class StringBuffer * name /* r31 */) {}

// Range: 0x8015FF38 -> 0x8015FF44
unsigned int ObjectDataObjDefinition::GetResourceType() {}

// Range: 0x8015FF44 -> 0x8015FFD0
unsigned char ObjectDataObjDefinition::LoadFromQDataByID(class ObjectDataObjDefinition * const this /* r28 */, unsigned int fileID /* r30 */, signed short id /* r29 */) {
    // Local variables
    class iResFile * file; // r0
    const struct ResFile * pResFile; // r30
    const struct ObjDefinition * objDef; // r0
}

// Range: 0x8015FFD0 -> 0x801600DC
unsigned char ObjectDataObjDefinition::LoadFromIFFByID(class ObjectDataObjDefinition * const this /* r29 */, unsigned int fileID /* r30 */, signed short id /* r31 */) {
    // Local variables
    struct HandleNode * handle; // r31
    class iResFile * file; // r30
    struct ObjDefinition * objDef; // r0
    class StackString tempName; // r1+0x10
    signed short resID; // r1+0x8
}

// Range: 0x801600DC -> 0x801601D4
unsigned char ObjectDataObjDefinition::SaveToIFFFile(class ObjectDataObjDefinition * const this /* r27 */, unsigned int fileID /* r30 */, signed short id /* r28 */, class StringBuffer & name /* r29 */) {
    // Local variables
    class iResFile * file; // r31
    struct HandleNode * btHand; // r30
    int err; // r0
    struct ObjDefinition * objDef; // r0
}

// Range: 0x801601D4 -> 0x801601DC
unsigned char ObjectDataObjDefinition::LoadFromDBByID() {}

// Range: 0x801601DC -> 0x801601E4
unsigned char ObjectDataObjDefinition::SaveToDB() {}

// Range: 0x801601E4 -> 0x80160284
unsigned char ObjectDataObjDefinition::QueryInterface(class ObjectDataObjDefinition * const this /* r30 */, void * ppvObject /* r31 */) {}

// Range: 0x80160284 -> 0x80160298
unsigned int ObjectDataObjDefinition::AddRef() {}

// Range: 0x80160298 -> 0x801602EC
unsigned int ObjectDataObjDefinition::Release() {}

// Range: 0x801602EC -> 0x80160328
void ObjectDataObjDefinition::SetResourceName(class ObjectDataObjDefinition * const this /* r31 */) {}

// Range: 0x80160328 -> 0x80160330
void ObjectDataObjDefinition::SetResID() {}


