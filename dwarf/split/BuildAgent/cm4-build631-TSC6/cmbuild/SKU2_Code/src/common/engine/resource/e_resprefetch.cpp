/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\resource\e_resprefetch.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802DBFA0 -> 0x802DC6B4
*/
// Range: 0x802DBFA0 -> 0x802DC044
void * EResPrefetch::~EResPrefetch(class EResPrefetch * const this /* r30 */) {
    // References
    // -> struct [anonymous] __vt__12EResPrefetch;
}

// Range: 0x802DC044 -> 0x802DC08C
void EResPrefetch::TerminateThread(class EResPrefetch * const this /* r31 */) {
    // Local variables
    struct EPrefetchMsg * pMsg; // r0
}

// Range: 0x802DC08C -> 0x802DC158
unsigned char EResPrefetch::Init(class EResPrefetch * const this /* r31 */) {
    // References
    // -> class EApp * _pApp;
    // -> class EScratchBuffMan _scratchBuffMan;
}

// Range: 0x802DC158 -> 0x802DC1A8
void EResPrefetch::Shutdown(class EResPrefetch * const this /* r31 */) {}

// Range: 0x802DC1A8 -> 0x802DC1BC
void EResPrefetch::AcquireBuffer() {}

// Range: 0x802DC1BC -> 0x802DC218
void EResPrefetch::ReleasedBuffer() {
    // References
    // -> class EScratchBuffMan _scratchBuffMan;
}

// Range: 0x802DC218 -> 0x802DC2D0
void EResPrefetch::DoBegin(class EResPrefetch * const this /* r30 */, struct EPrefetchMsg * pMsg /* r31 */) {
    // References
    // -> class EScratchBuffMan _scratchBuffMan;
}

// Range: 0x802DC2D0 -> 0x802DC490
void EResPrefetch::LoadAnotherBlock(class EResPrefetch * const this /* r31 */) {}

// Range: 0x802DC490 -> 0x802DC600
void EResPrefetch::Main(class EResPrefetch * const this /* r28 */) {
    // Local variables
    struct EPrefetchMsg * pMsg; // r29
    unsigned int msgAddr; // r1+0x8

    // References
    // -> class EScratchBuffMan _scratchBuffMan;
}

// Range: 0x802DC600 -> 0x802DC6B4
void EResPrefetch::Flush(class EResPrefetch * const this /* r30 */) {
    // Local variables
    class EEvent ev; // r1+0x20
    struct EPrefetchMsg msg; // r1+0x8
}


