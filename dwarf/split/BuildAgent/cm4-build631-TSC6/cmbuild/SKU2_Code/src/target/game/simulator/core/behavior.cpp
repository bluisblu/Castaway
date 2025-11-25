/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\behavior.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800FC314 -> 0x800FDB78
*/
// Range: 0x800FC314 -> 0x800FC354
void * Language::~Language(class Language * const this /* r31 */) {}

// Range: 0x800FC354 -> 0x800FC390
void * Behavior::Behavior(class Behavior * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__8Behavior;
}

// Range: 0x800FC390 -> 0x800FC4B4
void * Behavior::~Behavior(class Behavior * const this /* r27 */) {
    // Local variables
    int i; // r29
    class vector temp; // r1+0x10

    // References
    // -> class vector s_cachedTrees;
    // -> int s_cacheTreesRefCount;
    // -> struct [anonymous] __vt__8Behavior;
}

// Range: 0x800FC4B4 -> 0x800FC4BC
unsigned int Behavior::GetNamespaceID() {}

// Range: 0x800FC4BC -> 0x800FC4C4
unsigned int Behavior::GetSemiGlobalNamespaceID() {}

// Range: 0x800FC4C4 -> 0x800FC4C8
unsigned int Behavior::GetGlobNamespaceID() {}

// Range: 0x800FC4C8 -> 0x800FC52C
unsigned char Behavior::GetNode(struct BehaviorNode * nodeSpace /* r30 */) {
    // Local variables
    struct BehaviorNode * pNode; // r1+0x8
    unsigned char bSuccess; // r31
}

// Range: 0x800FC568 -> 0x800FC76C
unsigned char Behavior::GetNodeRef(class Behavior * const this /* r25 */, signed short treeID /* r26 */, signed short nodeNum /* r27 */, struct BehaviorNode * * ppNode /* r28 */) {
    // Local variables
    class ObjectDataBehaviorTree * tree; // r1+0x8
    int currentNamespace; // r0
    class ObjectDataID currentID; // r1+0x10
    unsigned int i; // r29
    struct BehaviorNode * pNode; // r0

    // References
    // -> class vector s_cachedTrees;
}

// Range: 0x800FC76C -> 0x800FC8AC
unsigned char Behavior::IsNodeReachable(class Behavior * const this /* r31 */, signed short treeID /* r30 */, int nodeNum /* r29 */) {
    // Local variables
    class ConsoleAutoRefCount tree; // r1+0x8
    int iNumNodes; // r31
    int i; // r30
}

// Range: 0x800FC8AC -> 0x800FC8F4
unsigned int Behavior::GetResFileID() {}

// Range: 0x800FC8F4 -> 0x800FC944
signed short Behavior::GetBaseID() {
    // Local variables
    signed short baseID; // r0
}

// Range: 0x800FC944 -> 0x800FC9AC
signed short Behavior::GetTreeClass() {}

// Range: 0x800FC9AC -> 0x800FCC08
int Behavior::GetCumulativeTreeVersion(class Behavior * const this /* r28 */, signed short inTreeID /* r1+0x8 */) {
    // Local variables
    class vector open; // r1+0x30
    class vector closed; // r1+0x20
    class ConsoleAutoRefCount tree; // r1+0x18
    signed short treeID; // r1+0x16
    int iNumNodes; // r30
    int n; // r31
    const struct BehaviorNode * node; // r29
    int version; // r29
    signed short * i; // r30
}

// Range: 0x800FCC08 -> 0x800FCCF4
unsigned char Behavior::GetTree(signed short treeID /* r29 */, class ObjectDataBehaviorTree * * ppTree /* r30 */, unsigned char doLoad /* r31 */) {
    // Local variables
    unsigned int fileID; // r3
    class ObjectDataID objID; // r1+0x8
    unsigned char retcode; // r0
    unsigned char retcode; // r0
}

// Range: 0x800FCCF4 -> 0x800FCD04
signed short Behavior::GetTreeIDByNameFast() {}

// Range: 0x800FCD04 -> 0x800FCD94
unsigned char Behavior::GetConstants(signed short id /* r29 */, class ObjectDataBehaviorConstants * * bc /* r30 */) {
    // Local variables
    unsigned int fileID; // r31
}

// Range: 0x800FCD94 -> 0x800FCE48
void Behavior::Init(class Behavior * const this /* r30 */) {
    // Local variables
    int i; // r30
    class ObjectDataBehaviorTree * tree; // r1+0x8

    // References
    // -> int s_cacheTreesRefCount;
    // -> class vector s_cachedTrees;
}

// Range: 0x800FCE48 -> 0x800FCE98
void * ResourceBehavior::ResourceBehavior(class ResourceBehavior * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__16ResourceBehavior;
}

// Range: 0x800FCE98 -> 0x800FCF4C
void * ResourceBehavior::~ResourceBehavior(class ResourceBehavior * const this /* r30 */) {
    // References
    // -> struct [anonymous] __vt__16ResourceBehavior;
}

// Range: 0x800FCF4C -> 0x800FD024
void ResourceBehavior::Init(class ResourceBehavior * const this /* r30 */, class ObjSelector * pOwner /* r31 */) {
    // Local variables
    int edithTreeSetId; // r4
    const struct ResFile * semiGlobFile; // r4
    class iResFile * globFile; // r0

    // References
    // -> class EEdithTreeSetMan _edithtreesetman;
}

// Range: 0x800FD024 -> 0x800FD07C
int ResourceBehavior::CountTrees() {
    // Local variables
    class EREdithTreeSet * pResource; // r0
}

// Range: 0x800FD07C -> 0x800FD0F0
signed short ResourceBehavior::GetTreeIDByName(class ResourceBehavior * const this /* r30 */, const char * treeName /* r31 */) {
    // Local variables
    int treeId; // r3
}

// Range: 0x800FD0F0 -> 0x800FD1A0
unsigned char ResourceBehavior::GetTreeByIndex(class ResourceBehavior * const this /* r30 */, class ObjectDataBehaviorTree * * ppTree /* r31 */) {
    // Local variables
    class EREdithTreeSet * pResource; // r0
    int treeId; // r0
}

// Range: 0x800FD1A0 -> 0x800FD240
unsigned char ResourceBehavior::QueryInterface(class ResourceBehavior * const this /* r30 */, void * ppvObject /* r31 */) {}

// Range: 0x800FD240 -> 0x800FD254
unsigned int ResourceBehavior::AddRef() {}

// Range: 0x800FD254 -> 0x800FD2A8
unsigned int ResourceBehavior::Release() {}

// Range: 0x800FD2A8 -> 0x800FD2EC
void * IFFBehavior::IFFBehavior(class IFFBehavior * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__11IFFBehavior;
}

// Range: 0x800FD2EC -> 0x800FD344
void * IFFBehavior::~IFFBehavior(class IFFBehavior * const this /* r30 */) {}

// Range: 0x800FD344 -> 0x800FD3EC
int IFFBehavior::CountTrees() {
    // Local variables
    unsigned int fileID; // r31
    class iResFile * file; // r0
}

// Range: 0x800FD3EC -> 0x800FD524
unsigned char IFFBehavior::GetTreeByIndex(class IFFBehavior * const this /* r28 */, int index /* r30 */, class ObjectDataBehaviorTree * * ppTree /* r29 */) {
    // Local variables
    unsigned int fileID; // r31
    class iResFile * file; // r31
    struct HandleNode * handle; // r30
    signed short treeID; // r1+0x8
}

// Range: 0x800FD524 -> 0x800FD638
signed short IFFBehavior::GetTreeIDByName(class IFFBehavior * const this /* r27 */) {
    // Local variables
    int classes[3]; // r1+0xC
    class StackString treeName; // r1+0x18
    int i; // r29
    unsigned int fileID; // r28
    class iResFile * file; // r28
    struct HandleNode * handle; // r4
    signed short resID; // r1+0x8
}

// Range: 0x800FD638 -> 0x800FD6D8
unsigned char IFFBehavior::QueryInterface(class IFFBehavior * const this /* r30 */, void * ppvObject /* r31 */) {}

// Range: 0x800FD6D8 -> 0x800FD6EC
unsigned int IFFBehavior::AddRef() {}

// Range: 0x800FD6EC -> 0x800FD740
unsigned int IFFBehavior::Release() {}

// Range: 0x800FD740 -> 0x800FDB78
static void __sinit_\game_simulator_core_unity_cpp() {
    // References
    // -> class vector JobControlNameList;
    // -> class vector JobNameList;
    // -> class byte_key_map s_CategoryVariableMapSet;
    // -> const char * s_configFileName;
    // -> class BString2 sLastUserTypedName;
    // -> const char * s_saveFileName;
    // -> class NghSection s_nghSectionLayout10[7];
    // -> class NghLayout s_nghLayout10;
    // -> class NghSection s_nghSectionLayout11[7];
    // -> class NghLayout s_nghLayout11;
    // -> static class NeighborhoodConstants NeighborhoodConstants_sTheClient;
    // -> static class IPoint fLotPos[10];
    // -> static class MotiveConstantsClient MotiveConstants_sTheClient;
    // -> static class LightingParameters sLightingParameters;
    // -> class CTilePt sDirections[8];
    // -> static class EThreadMutex g_eventMutex;
    // -> class vector s_cachedTrees;
}


