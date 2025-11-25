/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\core\e_app.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8027B634 -> 0x8027BD84
*/
// Range: 0x8027B634 -> 0x8027B6B8
void * EApp::EApp(class EApp * const this /* r31 */) {
    // References
    // -> class EApp * _pApp;
    // -> struct [anonymous] __vt__4EApp;
}

// Range: 0x8027B6B8 -> 0x8027B718
void * EApp::~EApp(class EApp * const this /* r30 */) {
    // References
    // -> class EApp * _pApp;
}

// Range: 0x8027B718 -> 0x8027B7A8
void EApp::SetupPaths(class EApp * const this /* r30 */) {
    // Local variables
    const char * pPath; // r4
}

// Range: 0x8027B7A8 -> 0x8027B8F0
void EApp::Main(class EApp * const this /* r30 */) {
    // References
    // -> class EEngine * _pEngine;
    // -> class EApp * _pApp;
}

// Range: 0x8027B8F0 -> 0x8027B900
void EApp::SystemInit() {}

// Range: 0x8027B900 -> 0x8027B904
void EApp::SetupForMovie() {}

// Range: 0x8027B904 -> 0x8027B908
void EApp::CleanupAfterMovie() {}

// Range: 0x8027B908 -> 0x8027BB28
void EApp::SystemUpdate(class EApp * const this /* r31 */) {
    // Local variables
    int status; // r0

    // References
    // -> class EAudio * _pActualAudio;
    // -> class EMovieMan _movieman;
    // -> class EEngine * _pEngine;
    // -> class EGraphics * _pGfx;
    // -> static unsigned char bWasInError;
}

// Range: 0x8027BB28 -> 0x8027BB48
void EApp::PlayMovie() {}

// Range: 0x8027BB48 -> 0x8027BB54
void EApp::StopMovie() {}

// Range: 0x8027BB54 -> 0x8027BB78
unsigned char EApp::IsMovieStarting() {}

// Range: 0x8027BB78 -> 0x8027BB9C
unsigned char EApp::IsMoviePlaying() {}

// Range: 0x8027BB9C -> 0x8027BBA0
class EAHeap * EApp::GetMovieHeap() {}

// Range: 0x8027BBA0 -> 0x8027BCA4
void EApp::SetArgs(class EApp * const this /* r26 */, int nArgc /* r27 */, char * * ppszArgv /* r28 */) {
    // Local variables
    int c; // r29
    class TString strArg; // r1+0x210
}

// Range: 0x8027BCA4 -> 0x8027BD84
char * EApp::GetArg(const class EApp * const this /* r26 */, const char * pszFlag /* r27 */) {
    // Local variables
    int iArg; // r29
    const char * pszArg; // r28
    class TString strArg; // r1+0x8
}


