/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\treetab.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800E6128 -> 0x800E685C
*/
// Range: 0x800E6128 -> 0x800E61E0
float CalculateAttenuationValue() {
    // References
    // -> float gHighAttenuation;
    // -> float gModerateAttenuation;
    // -> float gLowAttenuation;
    // -> float gVisHighAttenuation;
    // -> float gVisModerateAttenuation;
    // -> float gVisLowAttenuation;
}

// Range: 0x800E61E0 -> 0x800E623C
class TreeTableEntry * TreeTable::GetNthEntry(const class TreeTable * const this /* r30 */, int index /* r31 */) {}

// Range: 0x800E623C -> 0x800E6250
float TreeTableEntry::GetAttenuationValue(const class TreeTableEntry * const this /* r5 */) {}

// Range: 0x800E6250 -> 0x800E62D8
void * TTabScratchEntry::TTabScratchEntry(class TTabScratchEntry * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__16TTabScratchEntry;
}

// Range: 0x800E62D8 -> 0x800E6340
void * TTabScratchEntry::~TTabScratchEntry(class TTabScratchEntry * const this /* r30 */) {}

// Range: 0x800E6340 -> 0x800E64C0
void TTabScratchEntry::CopyFrom(class TTabScratchEntry * const this /* r28 */, const class ITreeTableEntry * other /* r29 */) {
    // Local variables
    int adsToCopy; // r31
    int i; // r30
}

// Range: 0x800E64C0 -> 0x800E64D4
float TTabScratchEntry::GetAttenuationValue(const class TTabScratchEntry * const this /* r5 */) {}

// Range: 0x800E64D4 -> 0x800E6574
unsigned char TreeTableAdScratch::QueryInterface(class TreeTableAdScratch * const this /* r30 */, void * ppvObject /* r31 */) {}

// Range: 0x800E6574 -> 0x800E6588
unsigned int TreeTableAdScratch::AddRef() {}

// Range: 0x800E6588 -> 0x800E65DC
unsigned int TreeTableAdScratch::Release() {}

// Range: 0x800E65DC -> 0x800E667C
unsigned char TTabScratchEntry::QueryInterface(class TTabScratchEntry * const this /* r30 */, void * ppvObject /* r31 */) {}

// Range: 0x800E667C -> 0x800E6690
unsigned int TTabScratchEntry::AddRef() {}

// Range: 0x800E6690 -> 0x800E66E4
unsigned int TTabScratchEntry::Release() {}

// Range: 0x800E66E4 -> 0x800E6774
int TreeTable::GetIndexOfResource(const class TreeTable * const this /* r29 */, signed short resID /* r30 */) {
    // Local variables
    const class TreeTableEntry * pEntry; // r0
}

// Range: 0x800E6774 -> 0x800E67FC
int TreeTable::GetIndexByTreeID(const class TreeTable * const this /* r27 */, signed short checkTreeID /* r28 */, signed short actionTreeID /* r29 */) {
    // Local variables
    int iNumEntries; // r0
    signed short cnt; // r30
    const class TreeTableEntry * srch; // r0
}

// Range: 0x800E67FC -> 0x800E685C
int TreeTable::GetIndexOfNthOrderedEntry(const class TreeTable * const this /* r30 */, int num /* r31 */) {
    // Local variables
    int iNumEntries; // r0
    const class TreeTableEntry * srch; // r0
}


