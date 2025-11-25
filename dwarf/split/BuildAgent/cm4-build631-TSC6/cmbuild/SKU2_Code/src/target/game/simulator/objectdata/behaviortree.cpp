/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\objectdata\behaviortree.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8015ED38 -> 0x8015FC08
*/
// Range: 0x8015ED38 -> 0x8015EDA8
void * ObjectDataBehaviorTree::ObjectDataBehaviorTree(class ObjectDataBehaviorTree * const this /* r30 */) {
    // References
    // -> struct [anonymous] __vt__22ObjectDataBehaviorTree;
}

// Range: 0x8015EDA8 -> 0x8015EDE8
void * ObjectDataBehaviorTree::~ObjectDataBehaviorTree(class ObjectDataBehaviorTree * const this /* r31 */) {}

// Range: 0x8015EDE8 -> 0x8015EE44
unsigned char ObjectDataBehaviorTree::GetResourceName(const class ObjectDataBehaviorTree * const this /* r30 */, class StringBuffer & name /* r31 */) {}

// Range: 0x8015EE44 -> 0x8015EE6C
unsigned char ObjectDataBehaviorTree::SetResourceName() {}

// Range: 0x8015EE6C -> 0x8015EE78
signed short ObjectDataBehaviorTree::GetStructVersion() {}

// Range: 0x8015EE78 -> 0x8015EE84
signed short ObjectDataBehaviorTree::GetNumNodes() {}

// Range: 0x8015EE84 -> 0x8015EE90
unsigned char ObjectDataBehaviorTree::GetType() {}

// Range: 0x8015EE90 -> 0x8015EF08
unsigned char ObjectDataBehaviorTree::GetNumParams(const class ObjectDataBehaviorTree * const this /* r31 */) {}

// Range: 0x8015EF08 -> 0x8015EF80
unsigned char ObjectDataBehaviorTree::GetNumLocals(const class ObjectDataBehaviorTree * const this /* r31 */) {}

// Range: 0x8015EF80 -> 0x8015EF90
unsigned char ObjectDataBehaviorTree::GetTreeVersion() {}

// Range: 0x8015EF90 -> 0x8015EFA4
struct BehaviorNode * ObjectDataBehaviorTree::GetNode() {}

// Range: 0x8015EFA4 -> 0x8015EFAC
void ObjectDataBehaviorTree::SetResID() {}

// Range: 0x8015EFAC -> 0x8015EFF4
void * ResourceBehaviorTree::ResourceBehaviorTree(class ResourceBehaviorTree * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__20ResourceBehaviorTree;
}

// Range: 0x8015EFF4 -> 0x8015F140
unsigned char ResourceBehaviorTree::LoadFromIndex(class ResourceBehaviorTree * const this /* r29 */, unsigned int id /* r30 */, int index /* r31 */) {
    // Local variables
    class iResFile * file; // r0
    int edithTreeSetId; // r0
    int treeNumber; // r31

    // References
    // -> class EEdithTreeSetMan _edithtreesetman;
}

// Range: 0x8015F140 -> 0x8015F150
unsigned char ResourceBehaviorTree::LoadOnlyNameAndIDFromIndex() {}

// Range: 0x8015F150 -> 0x8015F2AC
unsigned char ResourceBehaviorTree::LoadFromDataID(class ResourceBehaviorTree * const this /* r29 */, const class ObjectDataID & id /* r30 */) {
    // Local variables
    int treeNumber; // r31
    class iResFile * file; // r0
    int edithTreeSetId; // r0
    int treeNumber; // r0

    // References
    // -> class EEdithTreeSetMan _edithtreesetman;
}

// Range: 0x8015F2AC -> 0x8015F3E8
unsigned char ResourceBehaviorTree::GetFromDataID(class ResourceBehaviorTree * const this /* r28 */, const class ObjectDataID & id /* r29 */) {
    // Local variables
    class NamespaceSelector * ns; // r30
    class iResFile * file; // r0
    int edithTreeSetId; // r0
    int treeNumber; // r0

    // References
    // -> class EEdithTreeSetMan _edithtreesetman;
}

// Range: 0x8015F3E8 -> 0x8015F3F0
unsigned char ResourceBehaviorTree::SaveDataByID() {}

// Range: 0x8015F3F0 -> 0x8015F488
void * ResourceBehaviorTree::~ResourceBehaviorTree(class ResourceBehaviorTree * const this /* r30 */) {
    // References
    // -> struct [anonymous] __vt__20ResourceBehaviorTree;
}

// Range: 0x8015F488 -> 0x8015F4E0
void * ResourceBehaviorTree::__nw(unsigned long size /* r31 */) {
    // Local variables
    void * p; // r0

    // References
    // -> class FastAllocPool g_poolResourceBehaviorTree;
}

// Range: 0x8015F4E0 -> 0x8015F544
void ResourceBehaviorTree::__dl(void * p /* r30 */) {
    // References
    // -> class FastAllocPool g_poolResourceBehaviorTree;
}

// Range: 0x8015F544 -> 0x8015F5E4
unsigned char ResourceBehaviorTree::QueryInterface(class ResourceBehaviorTree * const this /* r30 */, void * ppvObject /* r31 */) {}

// Range: 0x8015F5E4 -> 0x8015F5F8
unsigned int ResourceBehaviorTree::AddRef() {}

// Range: 0x8015F5F8 -> 0x8015F64C
unsigned int ResourceBehaviorTree::Release() {}

// Range: 0x8015F64C -> 0x8015F690
void * IFFBehaviorTree::IFFBehaviorTree(class IFFBehaviorTree * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__15IFFBehaviorTree;
}

// Range: 0x8015F690 -> 0x8015F714
void * IFFBehaviorTree::~IFFBehaviorTree(class IFFBehaviorTree * const this /* r30 */) {
    // References
    // -> struct [anonymous] __vt__15IFFBehaviorTree;
}

// Range: 0x8015F714 -> 0x8015F81C
unsigned char IFFBehaviorTree::LoadFromIndex(class IFFBehaviorTree * const this /* r27 */, unsigned int id /* r28 */, int index /* r29 */) {
    // Local variables
    class iResFile * file; // r30
    struct HandleNode * handle; // r29
    signed short resID; // r1+0x8
}

// Range: 0x8015F81C -> 0x8015F82C
unsigned char IFFBehaviorTree::LoadOnlyNameAndIDFromIndex() {}

// Range: 0x8015F82C -> 0x8015F948
unsigned char IFFBehaviorTree::LoadFromDataID(class IFFBehaviorTree * const this /* r28 */, const class ObjectDataID & id /* r29 */) {
    // Local variables
    class iResFile * file; // r30
    struct HandleNode * handle; // r29
    signed short resID; // r1+0x8
}

// Range: 0x8015F948 -> 0x8015F958
unsigned char IFFBehaviorTree::GetFromDataID() {}

// Range: 0x8015F958 -> 0x8015FB00
unsigned char IFFBehaviorTree::SaveDataByID(class IFFBehaviorTree * const this /* r25 */, const class ObjectDataID & id /* r26 */) {
    // Local variables
    class iResFile * file; // r29
    struct HandleNode * btHand; // r28
    int err; // r0
    struct EdithBehaviorTree * bt; // r0
    int i; // r27
}

// Range: 0x8015FB00 -> 0x8015FBA0
unsigned char IFFBehaviorTree::QueryInterface(class IFFBehaviorTree * const this /* r30 */, void * ppvObject /* r31 */) {}

// Range: 0x8015FBA0 -> 0x8015FBB4
unsigned int IFFBehaviorTree::AddRef() {}

// Range: 0x8015FBB4 -> 0x8015FC08
unsigned int IFFBehaviorTree::Release() {}


