/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\base\ppmalloc\eageneralallocator.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8025C738 -> 0x8025EC24
*/
// Range: 0x8025C738 -> 0x8025C768
int PPMMutexLock(void * pMutex /* r31 */) {}

// Range: 0x8025C768 -> 0x8025C79C
int PPMMutexUnlock() {
    // Local variables
    int nReturnValue; // r31
}

// Range: 0x8025C79C -> 0x8025C968
void * GeneralAllocator::GeneralAllocator(class GeneralAllocator * const this /* r24 */, void * pInitialCore /* r25 */, unsigned long nInitialCoreSize /* r26 */, unsigned char bShouldFreeInitialCore /* r27 */, unsigned char bShouldTrimInitialCore /* r28 */, unsigned long (* pInitialCoreFreeFunction)(class GeneralAllocator *, void *, unsigned long, void *) /* r29 */, void * pInitialCoreFreeFunctionContext /* r30 */) {}

// Range: 0x8025C968 -> 0x8025C9BC
void * GeneralAllocator::~GeneralAllocator(class GeneralAllocator * const this /* r30 */) {}

// Range: 0x8025C9BC -> 0x8025CD04
unsigned char GeneralAllocator::Init(class GeneralAllocator * const this /* r24 */, void * pInitialCore /* r25 */, unsigned long nInitialCoreSize /* r26 */, unsigned char bShouldFreeInitialCore /* r27 */, unsigned char bShouldTrimInitialCore /* r28 */, unsigned long (* pInitialCoreFreeFunction)(class GeneralAllocator *, void *, unsigned long, void *) /* r29 */, void * pInitialCoreFreeFunctionContext /* r30 */) {
    // Local variables
    int i; // r3
    struct Chunk * const pBin; // r6
    volatile struct InitCallbackNode * pCurrent; // r22

    // References
    // -> volatile struct InitCallbackNode * mpInitCallbackNode;
}

// Range: 0x8025CD04 -> 0x8025CE14
unsigned char GeneralAllocator::Shutdown(class GeneralAllocator * const this /* r29 */) {
    // Local variables
    volatile struct InitCallbackNode * pCurrent; // r30
    struct CoreBlock * const pCoreBlock; // r0

    // References
    // -> volatile struct InitCallbackNode * mpInitCallbackNode;
}

// Range: 0x8025CE14 -> 0x8025D0D0
void GeneralAllocator::SetOption(class GeneralAllocator * const this /* r31 */, int nValue /* r29 */) {
    // Local variables
    void * pMutex; // r0
}

// Range: 0x8025D0D0 -> 0x8025D0DC
void GeneralAllocator::SetMallocFailureFunction() {}

// Range: 0x8025D0DC -> 0x8025D0E4
unsigned int GeneralAllocator::GetPageSize() {}

// Range: 0x8025D0E4 -> 0x8025D19C
struct Chunk * GeneralAllocator::FindAndSetNewTopChunk() {
    // Local variables
    struct Chunk * pBestFit; // r7
    unsigned int nBestFitChunkSize; // r8
    struct CoreBlock * pCoreBlock; // r9
    struct Chunk * pChunk; // r10
    struct Chunk * pFenceChunk; // r11
    struct Chunk * const pNextChunk; // r12
}

// Range: 0x8025D19C -> 0x8025D1A0
void GeneralAllocator::AdjustHighFence() {}

// Range: 0x8025D1A0 -> 0x8025D1A4
void GeneralAllocator::AssertionFailureFunctionDefault() {}

// Range: 0x8025D1A4 -> 0x8025D1B0
void GeneralAllocator::SetAssertionFailureFunction() {}

// Range: 0x8025D1B0 -> 0x8025D1B4
void GeneralAllocator::TraceFunctionDefault() {}

// Range: 0x8025D1B4 -> 0x8025D238
void * GeneralAllocator::Malloc(class GeneralAllocator * const this /* r28 */, unsigned long nSize /* r29 */, int nAllocationFlags /* r30 */) {
    // Local variables
    void * pReturnValue; // r30
}

// Range: 0x8025D238 -> 0x8025D868
void * GeneralAllocator::MallocInternal(class GeneralAllocator * const this /* r22 */, unsigned long nSize /* r23 */) {
    // Local variables
    void * pData; // r26
    struct Chunk * pResultChunk; // r6
    int nResultBinIndex; // r7
    unsigned int nRemainderChunkSize; // r7
    struct Chunk * pBin; // r3
    int nBinIndex; // r25
    struct Chunk * pNextChunk; // r8
    struct Chunk * pPrevChunk; // r3
    unsigned int nBinBitmapWordIndex; // r7
    unsigned int nBinBitmapBitIndex; // r8
    unsigned int nBinBitmapWordValue; // r9
    unsigned int nMallocFailureCount; // r24
    struct Chunk * * const ppFastBin; // r0
    struct Chunk * const pUnsortedBin; // r0
    int i; // r25
    unsigned char bResult; // r0
}

// Range: 0x8025D868 -> 0x8025D8D4
void GeneralAllocator::Free(class GeneralAllocator * const this /* r29 */, void * pData /* r30 */) {}

// Range: 0x8025D8D4 -> 0x8025DAC8
void GeneralAllocator::FreeInternal(class GeneralAllocator * const this /* r30 */) {
    // Local variables
    struct Chunk * pChunk; // r4
    unsigned int nChunkSize; // r31
    struct Chunk * * ppFastBin; // r0
    unsigned int nPrevChunkSizeContig; // r0
    struct Chunk * const pUnsortedBinHeadChunk; // r5
    struct Chunk * const pNextChunk; // r29
}

// Range: 0x8025DAC8 -> 0x8025DB4C
void * GeneralAllocator::MallocAligned(class GeneralAllocator * const this /* r26 */, unsigned long nSize /* r27 */, unsigned long nAlignment /* r28 */, unsigned long nAlignmentOffset /* r29 */, int nAllocationFlags /* r30 */) {
    // Local variables
    void * pReturnValue; // r30
}

// Range: 0x8025DB4C -> 0x8025DF50
void * GeneralAllocator::MallocAlignedInternal(class GeneralAllocator * const this /* r27 */, unsigned long nAlignment /* r28 */, unsigned long nAlignmentOffset /* r29 */) {
    // Local variables
    void * pMallocValue; // r0
    void * pReturnValue; // r0
    struct Chunk * pChunk; // r6
    unsigned int nChunkSize; // r0
    struct Chunk * pReturnChunk; // r0
    unsigned int nNewChunkSize; // r7
    unsigned int nLeadingSize; // r8
    unsigned int nRemainderChunkSize; // r6
    struct Chunk * const pUnsortedBin; // r8
    struct Chunk * const pBin; // r6
    char * pAlignedChunk; // r29
    enum HeapValidationLevel hvlSaved; // r28
    struct Chunk * const pNextChunk; // r7
    enum HeapValidationLevel hvlSaved; // r28
    struct Chunk * const pUnsortedBinHeadChunk; // r5
}

// Range: 0x8025DF50 -> 0x8025E210
void * GeneralAllocator::ReallocInternal(class GeneralAllocator * const this /* r26 */, void * pData /* r27 */) {
    // Local variables
    void * pReturnValue; // r0
    struct Chunk * pNewChunk; // r28
    unsigned int nNewChunkSize; // r4
    unsigned int nRemainderChunkSize; // r8
    unsigned long * pDataDestN; // r5
    unsigned long * pDataSrcN; // r6
    enum HeapValidationLevel hvlSaved; // r25
}

// Range: 0x8025E210 -> 0x8025E28C
void * GeneralAllocator::Calloc(class GeneralAllocator * const this /* r27 */, unsigned long nElementCount /* r28 */, unsigned long nElementSize /* r29 */, int nAllocationFlags /* r30 */) {
    // Local variables
    void * pReturnValue; // r30
}

// Range: 0x8025E28C -> 0x8025E374
void * GeneralAllocator::CallocInternal(unsigned long nElementSize /* r0 */) {
    // Local variables
    void * pReturnValue; // r31
    unsigned long * pDataDestN; // r5
}

// Range: 0x8025E374 -> 0x8025E528
void GeneralAllocator::ClearFastBins() {
    // Local variables
    struct Chunk * * ppFastBin; // r7
    struct Chunk * * ppFastBinLast; // r8
    struct Chunk * pChunk; // r9
    struct Chunk * pNextChunkClear; // r10
    struct Chunk * pBinUnsorted; // r11
    unsigned int nChunkSize; // r12
    unsigned int nPrevChunkSizeContig; // r29
}

// Range: 0x8025E528 -> 0x8025E56C
void GeneralAllocator::SetAllocatorName(class GeneralAllocator * const this /* r31 */) {}

// Range: 0x8025E56C -> 0x8025E588
void GeneralAllocator::UnlinkCoreBlock() {}

// Range: 0x8025E588 -> 0x8025E5C8
struct CoreBlock * GeneralAllocator::FindCoreBlockForAddress() {
    // Local variables
    struct CoreBlock * pCoreBlock; // r5
}

// Range: 0x8025E5C8 -> 0x8025E7E0
unsigned char GeneralAllocator::AddCore(class GeneralAllocator * const this /* r24 */, void * pCore /* r25 */, unsigned long nCoreSize /* r26 */, unsigned char bShouldFreeCore /* r27 */, unsigned char bShouldTrimCore /* r28 */, unsigned long (* pCoreFreeFunction)(class GeneralAllocator *, void *, unsigned long, void *) /* r29 */, void * pCoreFreeFunctionContext /* r30 */) {
    // Local variables
    struct CoreBlock * const pCoreBlock; // r0
    struct Chunk * const pChunk; // r0
}

// Range: 0x8025E7E0 -> 0x8025E8F0
struct Chunk * GeneralAllocator::ExtendCoreInternal(class GeneralAllocator * const this /* r28 */, unsigned long nMinSize /* r29 */) {
    // Local variables
    unsigned char bShouldSetNewTopChunk; // r31
    struct Chunk * pChunk; // r7
    unsigned int nNewChunkSize; // r30
    struct Chunk * const pRemainderChunk; // r4
    unsigned int nRemainderChunkSize; // r0
    struct Chunk * const pUnsortedBinHeadChunk; // r5
}

// Range: 0x8025E8F0 -> 0x8025EA40
struct Chunk * GeneralAllocator::AddCoreInternal(class GeneralAllocator * const this /* r30 */) {
    // Local variables
    void * pCore; // r0
    unsigned long nCoreSize; // r31
    struct CoreBlock * const pCoreBlock; // r0
}

// Range: 0x8025EA40 -> 0x8025EAA4
unsigned char GeneralAllocator::FreeCore() {
    // Local variables
    unsigned char bReturnValue; // r6
}

// Range: 0x8025EAA4 -> 0x8025EC24
unsigned long GeneralAllocator::TrimCore(class GeneralAllocator * const this /* r23 */) {
    // Local variables
    unsigned long nCoreTrimmed; // r29
    struct CoreBlock * pCoreBlock; // r28
    const struct Chunk * const pFenceChunk; // r4
    struct Chunk * const pHighestChunk; // r27
    struct Chunk * const pListPrevSaved; // r26
    struct Chunk * const pListNextSaved; // r25
    struct CoreBlock * const pCoreBlockSaved; // r24
    unsigned long nCoreBlockSize; // r21
}


