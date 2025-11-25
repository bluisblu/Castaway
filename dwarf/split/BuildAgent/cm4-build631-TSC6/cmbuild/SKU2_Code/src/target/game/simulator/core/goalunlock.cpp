/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\goalunlock.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8010FE2C -> 0x801114A8
*/
// Range: 0x8010FE2C -> 0x8010FE84
void * GoalUnlock::GoalUnlock(class GoalUnlock * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__10GoalUnlock;
}

// Range: 0x8010FE94 -> 0x8010FED4
void * GoalUnlock::~GoalUnlock(class GoalUnlock * const this /* r31 */) {}

// Range: 0x8010FED4 -> 0x8010FFC0
void GoalUnlock::DoStream(class GoalUnlock * const this /* r30 */, class ReconBuffer * rb /* r31 */) {}

// Range: 0x8010FFC0 -> 0x801103E8
void GoalUnlock::ClearGoalsAndUnlocks(class GoalUnlock * const this /* r30 */) {
    // Local variables
    int i; // r5
    unsigned int fileID; // r31
    class NamespaceSelector * ns; // r0
    class ConsoleAutoRefCount goalTuningValues; // r1+0x8
}

// Range: 0x801103E8 -> 0x8011042C
int GoalUnlock::GetUnlockCount() {}

// Range: 0x8011042C -> 0x801105D4
int GoalUnlock::GetUnlockIndex() {
    // Local variables
    int ID; // r0
    int bookID; // r3
    int pageID; // r4
    int bookID; // r6
    int pageID; // r5
    int goalID; // r4
}

// Range: 0x801105D4 -> 0x80110650
int GoalUnlock::GetUnlockIndex() {}

// Range: 0x80110650 -> 0x801106CC
unsigned char GoalUnlock::IsUsed(class GoalUnlock * const this /* r30 */, enum UnlockType type /* r31 */) {
    // Local variables
    int index; // r0
}

// Range: 0x801106CC -> 0x80110730
unsigned char GoalUnlock::IsUsed(class GoalUnlock * const this /* r31 */) {
    // Local variables
    int index; // r0
}

// Range: 0x80110730 -> 0x801107E4
unsigned char GoalUnlock::IsLocked(class GoalUnlock * const this /* r29 */, enum UnlockType type /* r30 */, signed short ID /* r31 */) {
    // Local variables
    int index; // r0
}

// Range: 0x801107E4 -> 0x801108A0
unsigned char GoalUnlock::IsUnlocked(class GoalUnlock * const this /* r29 */, enum UnlockType type /* r30 */, signed short ID /* r31 */) {
    // Local variables
    int index; // r0
}

// Range: 0x801108A0 -> 0x80110900
unsigned char GoalUnlock::IsUnlocked(class GoalUnlock * const this /* r31 */) {
    // Local variables
    int index; // r0
}

// Range: 0x80110900 -> 0x801109B8
unsigned char GoalUnlock::IsCompleted(class GoalUnlock * const this /* r29 */, enum UnlockType type /* r30 */, signed short ID /* r31 */) {
    // Local variables
    int index; // r0
}

// Range: 0x801109B8 -> 0x80110A18
unsigned char GoalUnlock::IsCompleted(class GoalUnlock * const this /* r31 */) {
    // Local variables
    int index; // r0
}

// Range: 0x80110A18 -> 0x80110A84
signed short GoalUnlock::GetStatus(class GoalUnlock * const this /* r31 */) {
    // Local variables
    int index; // r0
}

// Range: 0x80110A84 -> 0x80110AF8
void GoalUnlock::SetStatus(class GoalUnlock * const this /* r30 */, signed short status /* r31 */) {
    // Local variables
    int index; // r0
}

// Range: 0x80110AF8 -> 0x80110BC4
void GoalUnlock::GrantUnlock(class GoalUnlock * const this /* r29 */, enum UnlockType type /* r30 */, signed short ID /* r31 */) {
    // Local variables
    int index; // r0
}

// Range: 0x80110BC4 -> 0x80110BCC
unsigned char GoalUnlock::IsRecentlyUnlocked() {}

// Range: 0x80110BCC -> 0x80110BD0
void GoalUnlock::SetRecentlyUnlocked() {}

// Range: 0x80110BD0 -> 0x80110C20
unsigned char GoalUnlock::AreAnyMotivesLocked(class GoalUnlock * const this /* r31 */) {
    // Local variables
    int index; // r0
}

// Range: 0x80110C20 -> 0x80110D18
unsigned char GoalUnlock::IsMotiveUnlocked() {
    // Local variables
    signed short motiveID[16]; // r1+0x8
}

// Range: 0x80110D18 -> 0x80110E38
signed short GoalUnlock::TryEvaluateGoals(class GoalUnlock * const this /* r30 */, signed short book /* r31 */) {
    // Local variables
    int bookIndex; // r0
}

// Range: 0x80110E38 -> 0x80111108
void GoalUnlock::PlanMade(class GoalUnlock * const this /* r30 */, signed short planID /* r31 */) {
    // Local variables
    const struct Plan * plan; // r0
    signed short tokenID; // r0
    const struct ClothingItems * pClothingItemLookup; // r0
    enum eBodyPart bodyPart; // r0
}

// Range: 0x80111108 -> 0x80111270
void GoalUnlock::ResourceHarvested(class GoalUnlock * const this /* r30 */, signed short id /* r31 */) {}

// Range: 0x80111270 -> 0x801114A8
void GoalUnlock::OpenAllBooksAndPages(class GoalUnlock * const this /* r31 */) {}


