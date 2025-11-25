/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\manager\e_quickdataman.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802A87F0 -> 0x802A89C8
*/
// Range: 0x802A87F0 -> 0x802A87F4
class EAHeap * EQuickdataManager::GetHeap() {}

// Range: 0x802A87F4 -> 0x802A88A4
class EResource * EQuickdataManager::AllocateAndLoadResource(class EQuickdataManager * const this /* r27 */, class EFile * pFile /* r28 */, unsigned int uLength /* r29 */, unsigned int id /* r31 */) {
    // Local variables
    unsigned int uOffs; // r0

    // References
    // -> class EQuickdataManager _quickdataman;
}

// Range: 0x802A88A4 -> 0x802A89C8
void EQuickdataManager::Reload(class EQuickdataManager * const this /* r29 */, unsigned int id /* r30 */) {
    // Local variables
    class EResource * pRes; // r1+0x14
    class ERQuickdata * pResource; // r31
    unsigned int overrideLength; // r1+0x10
    class EFile * qdataFile; // r4
    unsigned int pos; // r1+0xC
    unsigned int length; // r1+0x8

    // References
    // -> class EResourceLoader * _pResLoader;
}


