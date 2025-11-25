/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\influencemap.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80231424 -> 0x80231EAC
*/
// Range: 0x80231424 -> 0x8023146C
void * IObjectList::IObjectList(class IObjectList * const this /* r31 */) {}

// Range: 0x8023146C -> 0x802314DC
void IObjectList::AddObject(class IObjectList * const this /* r30 */, class cXObject * obj /* r1+0x8 */) {
    // Local variables
    class cXObject * * iter; // r31
}

// Range: 0x802314DC -> 0x80231554
void IObjectList::RemoveObject(class IObjectList * const this /* r29 */, const class cXObject * obj /* r30 */) {
    // Local variables
    class cXObject * * iter; // r31
}

// Range: 0x80231554 -> 0x802315B0
void IObjectList::RemoveAll(class IObjectList * const this /* r31 */) {
    // Local variables
    class vector temp; // r1+0x10
}

// Range: 0x802315B0 -> 0x8023161C
void * InfluenceMap::InfluenceMap(class InfluenceMap * const this /* r30 */) {}

// Range: 0x80231674 -> 0x802316E0
void * InfluenceMap::~InfluenceMap(class InfluenceMap * const this /* r30 */) {}

// Range: 0x802316E0 -> 0x80231760
void InfluenceMap::RemoveAll(class InfluenceMap * const this /* r29 */) {
    // Local variables
    int x; // r31
    int y; // r30
}

// Range: 0x80231760 -> 0x8023197C
void InfluenceMap::CalculateAffectedArea(const class InfluenceMap * const this /* r29 */, class cXObject * obj /* r30 */, const class ITreeTableEntry * entry /* r28 */, class FTileRect & activationArea /* r31 */) {
    // Local variables
    unsigned char subTileX; // r1+0xD
    unsigned char subTileY; // r1+0xC
    unsigned char north; // r1+0xB
    unsigned char east; // r1+0xA
    unsigned char south; // r1+0x9
    unsigned char west; // r1+0x8
    int numXTiles; // r1+0x14
    int numYTiles; // r1+0x10
    class FTilePt subTileOffset; // r1+0x18
    const class FTilePt & location; // r0
}

// Range: 0x8023197C -> 0x80231A94
void InfluenceMap::AddObjectToMap(class InfluenceMap * const this /* r24 */, class cXObject * baseObj /* r25 */) {
    // Local variables
    class cXObject * interactionObj; // r30
    const class ITreeTable * treeTab; // r29
    unsigned char haveProcessedDefaultActivation; // r28
    unsigned char needToAdd; // r27
    int count; // r0
    int cnt; // r26
    const class ITreeTableEntry * entry; // r25
}

// Range: 0x80231A94 -> 0x80231C6C
void InfluenceMap::AddObjectEntry(class InfluenceMap * const this /* r29 */, class cXObject * obj /* r30 */, const class ITreeTableEntry * entry /* r27 */) {
    // Local variables
    class FTileRect activationArea; // r1+0x20
    const class FTilePt & entryOrigin; // r0
    class EVec2 gameWorldLocation; // r1+0x18
    class EVec2 affectedTile; // r1+0x10
    class EVec2 junkResult; // r1+0x8
    int x; // r31
    int y; // r27
}

// Range: 0x80231C6C -> 0x80231D84
void InfluenceMap::RemoveObjectFromMap(class InfluenceMap * const this /* r24 */, class cXObject * baseObj /* r25 */) {
    // Local variables
    class cXObject * interactionObj; // r30
    const class ITreeTable * treeTab; // r29
    unsigned char haveProcessedDefaultActivation; // r28
    unsigned char needToRemove; // r27
    int count; // r0
    int cnt; // r26
    const class ITreeTableEntry * entry; // r25
}

// Range: 0x80231D84 -> 0x80231E60
void InfluenceMap::RemoveObjectEntry(class InfluenceMap * const this /* r29 */, class cXObject * obj /* r30 */, const class ITreeTableEntry * entry /* r28 */) {
    // Local variables
    class FTileRect activationArea; // r1+0x8
    int x; // r31
    int y; // r28
}

// Range: 0x80231E60 -> 0x80231EAC
class vector * InfluenceMap::GetObjectList() {}


