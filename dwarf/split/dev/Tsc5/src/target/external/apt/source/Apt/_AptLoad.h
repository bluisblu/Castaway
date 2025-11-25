/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\_AptLoad.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802FF454 -> 0x802FF8C4
*/
// Range: 0x802FF454 -> 0x802FF48C
void * AptFileSavedInputState::AptFileSavedInputState(struct AptFileSavedInputState * const this /* r31 */) {}

// Range: 0x802FF48C -> 0x802FF498
void * AptSavedInputCheckpoints::__nw() {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x802FF498 -> 0x802FF4D0
void * AptLinker::AptLinker(struct AptLinker * const this /* r31 */) {}

// Range: 0x802FF4D0 -> 0x802FF4E4
void Allocator::Free(void * ptr /* r0 */) {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x802FF4E4 -> 0x802FF4F0
void * AptLinker::__nw() {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x802FF520 -> 0x802FF52C
void * AptLoader::__nw() {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x802FF52C -> 0x802FF540
void AptSavedInputCheckpoints::__dl(void * p /* r0 */) {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x802FF5AC -> 0x802FF5C0
void AptLinker::__dl(void * p /* r0 */) {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x802FF5C0 -> 0x802FF5C8
enum State AptFile::GetState() {}

// Range: 0x802FF5C8 -> 0x802FF704
void AptSavedInputCheckpoints::Checkpoint(struct AptSavedInputCheckpoints * const this /* r29 */, const class EAStringC & s /* r30 */) {
    // Local variables
    struct DbgIterator i; // r1+0x2C

    // References
    // -> struct AptLoader * gpLoader;
}

// Range: 0x802FF704 -> 0x802FF744
void * AptFileSavedInputState::AptFileSavedInputState(struct AptFileSavedInputState * const this /* r30 */, enum State state /* r31 */) {}

// Range: 0x802FF744 -> 0x802FF74C
void AptFileSavedInputState::SetState() {}

// Range: 0x802FF74C -> 0x802FF754
enum State AptFileSavedInputState::GetState() {}

// Range: 0x802FF754 -> 0x802FF758
class EAStringC & AptFileSavedInputState::GetName() {}

// Range: 0x802FF758 -> 0x802FF764
unsigned char AptSavedInputCheckpoints::CanContinueSavedInputs() {}

// Range: 0x802FF764 -> 0x802FF810
unsigned char AptSavedInputCheckpoints::allStatesAre2(struct AptSavedInputCheckpoints * const this /* r29 */, enum State state0 /* r30 */, enum State state1 /* r31 */) {
    // Local variables
    struct DbgIterator i; // r1+0x14
}

// Range: 0x802FF810 -> 0x802FF8BC
void AptLoader::GetFileVector(struct AptLoader * const this /* r29 */, class AptSharedPtr * aFilePtrs /* r30 */) {
    // Local variables
    int j; // r0
    class Iterator i; // r1+0x10
}

// Range: 0x802FF8BC -> 0x802FF8C4
void AptFile::setState() {}


/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\_AptLoad.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8030FEF8 -> 0x8030FF94
*/
// Range: 0x8030FEF8 -> 0x8030FF00
struct AptCharacter * AptFile::GetMainCharacter() {}

// Range: 0x8030FF00 -> 0x8030FF08
void * AptFile::GetAptData() {}

// Range: 0x8030FF08 -> 0x8030FF94
struct AptCharacter * AptFile::FindExport(const char * szName /* r26 */) {
    // Local variables
    int i; // r27
}


/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\_AptLoad.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803177C8 -> 0x803177D0
*/
// Range: 0x803177C8 -> 0x803177D0
class EAStringC & AptFile::GetName() {}


/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\_AptLoad.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80323598 -> 0x80323B28
*/
// Range: 0x80323598 -> 0x803235AC
void AptLoader::__dl(void * p /* r0 */) {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x803235AC -> 0x803235B8
void * Allocator::Alloc() {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x803235B8 -> 0x80323618
void * AptFile::AptFile(struct AptFile * const this /* r30 */, const class EAStringC & name /* r31 */) {}

// Range: 0x80323618 -> 0x80323624
void * AptSharedPtrRefCount::AptSharedPtrRefCount() {}

// Range: 0x80323624 -> 0x80323630
void * AptFile::__nw() {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x80323630 -> 0x80323638
void * AptFile::GetUserData() {}

// Range: 0x80323638 -> 0x80323648
void AptFile::setDataPointers() {}

// Range: 0x80323648 -> 0x80323708
int AptLinker::isFileImported(struct AptLinker * const this /* r29 */, class AptSharedPtr & pFile /* r30 */) {
    // Local variables
    class Iterator i; // r1+0x10
}

// Range: 0x80323708 -> 0x803237B8
int AptFile::isFileImported(struct AptFile * const this /* r27 */, class AptSharedPtr & pFile /* r28 */) {
    // Local variables
    int j; // r29
}

// Range: 0x803237B8 -> 0x80323818
void * AptLinkerThingy::AptLinkerThingy(struct AptLinkerThingy * const this /* r29 */, class AptSharedPtr & file /* r30 */, class AptCIH * target /* r31 */) {}

// Range: 0x80323818 -> 0x80323824
void * AptLinkerThingy::__nw() {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x80323824 -> 0x803238CC
class Iterator AptLinker::findThingy(struct AptLinker * const this /* r30 */, class AptCIH * pCIH /* r31 */) {
    // Local variables
    class Iterator i; // r1+0xC
}

// Range: 0x803238CC -> 0x803238D4
class AptCIH * AptLinkerThingy::GetTarget() {}

// Range: 0x803238D4 -> 0x8032391C
void AptSavedInputCheckpoints::AllLinked(struct AptSavedInputCheckpoints * const this /* r31 */) {
    // Local variables
    class BasicString x; // r1+0x8
}

// Range: 0x8032391C -> 0x80323924
void AptLinkerThingy::SetAttachedToMovie() {}

// Range: 0x80323924 -> 0x8032392C
unsigned char AptLinkerThingy::IsAttachedToMovie() {}

// Range: 0x8032392C -> 0x80323934
class AptSharedPtr AptLinkerThingy::GetFile() {}

// Range: 0x80323934 -> 0x80323940
unsigned char AptSavedInputCheckpoints::CanLinkPendingFiles() {}

// Range: 0x80323940 -> 0x80323954
int AptSharedPtrRefCount::IncRef() {}

// Range: 0x80323954 -> 0x80323968
int AptSharedPtrRefCount::DecRef() {}

// Range: 0x80323968 -> 0x80323A0C
void * AptFile::~AptFile(struct AptFile * const this /* r30 */) {
    // References
    // -> struct AptUserFunctions gAptFuncs;
    // -> struct AptLoader * gpLoader;
}

// Range: 0x80323A0C -> 0x80323A20
void AptFile::__dl(void * p /* r0 */) {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x80323A20 -> 0x80323A34
void AptLinkerThingy::__dl(void * p /* r0 */) {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x80323A34 -> 0x80323A44
void AptSavedInputCheckpoints::FileLoaded() {}

// Range: 0x80323A44 -> 0x80323B28
void AptSavedInputCheckpoints::updateState(struct AptSavedInputCheckpoints * const this /* r27 */, const class EAStringC & name /* r28 */, enum State lookFor /* r29 */, enum State setTo /* r30 */, enum State ifNotFound /* r31 */) {
    // Local variables
    struct DbgIterator i; // r1+0x1C
}


