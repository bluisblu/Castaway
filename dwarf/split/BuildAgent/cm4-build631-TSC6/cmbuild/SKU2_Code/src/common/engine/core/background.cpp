/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\core\background.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8027B0DC -> 0x8027B634
*/
// Range: 0x8027B0DC -> 0x8027B11C
void * Background::~Background(class Background * const this /* r31 */) {}

// Range: 0x8027B11C -> 0x8027B190
void * BackgroundImpl::~BackgroundImpl(class BackgroundImpl * const this /* r30 */) {}

// Range: 0x8027B190 -> 0x8027B1F0
void BackgroundImpl::Shutdown(class BackgroundImpl * const this /* r31 */) {
    // References
    // -> class Background * _pBackground;
}

// Range: 0x8027B1F0 -> 0x8027B244
void BackgroundImpl::TerminateThread(class BackgroundImpl * const this /* r31 */) {}

// Range: 0x8027B244 -> 0x8027B2AC
void BackgroundImpl::Init(class BackgroundImpl * const this /* r31 */) {}

// Range: 0x8027B2AC -> 0x8027B2B0
void BackgroundImpl::Update() {}

// Range: 0x8027B2B0 -> 0x8027B314
void BackgroundImpl::ExecuteRoutine(class BackgroundImpl * const this /* r30 */, void (* pRoutine)() /* r31 */) {}

// Range: 0x8027B314 -> 0x8027B388
void BackgroundImpl::ExecuteArgRoutine(class BackgroundImpl * const this /* r29 */, void (* pArgRoutine)(void *) /* r30 */, void * data /* r31 */) {}

// Range: 0x8027B388 -> 0x8027B394
void BackgroundImpl::SendCommand() {}

// Range: 0x8027B394 -> 0x8027B458
void BackgroundImpl::Flush(class BackgroundImpl * const this /* r30 */) {
    // Local variables
    class EEvent flushEvent; // r1+0x8
}

// Range: 0x8027B458 -> 0x8027B460
unsigned char BackgroundImpl::IsCallingThread() {}

// Range: 0x8027B460 -> 0x8027B550
void BackgroundImpl::Main(class BackgroundImpl * const this /* r30 */) {
    // Local variables
    unsigned int msg; // r1+0x8
    class BackgroundCmd * pCmd; // r31
}

// Range: 0x8027B550 -> 0x8027B634
static void __sinit_\engine_core_unity_cpp() {
    // References
    // -> class EScene _scene;
    // -> class EThread _idleThread;
    // -> class EVec3 _vAxes[3];
    // -> class Background * _pBackground;
    // -> struct [anonymous] __vt__14BackgroundImpl;
    // -> static class BackgroundImpl _background;
    // -> struct [anonymous] __vt__10Background;
}


