/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\manager\e_resourceman.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802A89C8 -> 0x802AB590
*/
// Range: 0x802A89C8 -> 0x802A8A5C
void * EResourceManager::EResourceManager(class EResourceManager * const this /* r30 */) {
    // References
    // -> struct [anonymous] __vt__16EResourceManager;
}

// Range: 0x802A8A5C -> 0x802A8B34
void * EResourceManager::~EResourceManager(class EResourceManager * const this /* r30 */) {
    // References
    // -> struct [anonymous] __vt__16EResourceManager;
}

// Range: 0x802A8B34 -> 0x802A8B9C
void EResourceManager::Shutdown(class EResourceManager * const this /* r31 */) {
    // References
    // -> class EResourceLoader * _pResLoader;
}

// Range: 0x802A8B9C -> 0x802A9098
void EResourceManager::Init(class EResourceManager * const this /* r31 */) {
    // References
    // -> class EResourceLoader * _pResLoader;
}

// Range: 0x802A9098 -> 0x802A9170
void EResourceManager::CalcPath(class EResourceManager * const this /* r31 */) {
    // Local variables
    class EString m_pathPrefix; // r1+0x14
}

// Range: 0x802A9170 -> 0x802A9294
class EFile * EResourceManager::GetArchiveFile(class EResourceManager * const this /* r27 */) {
    // References
    // -> class HDDThread g_hddThread;
    // -> class ENgcFileSystem _eorFileSys;
}

// Range: 0x802A9294 -> 0x802A9314
void EResourceManager::CloseArchiveFile(class EResourceManager * const this /* r31 */) {
    // Local variables
    class EFile * pArchiveFile; // r1+0x8

    // References
    // -> class ENgcFileSystem _eorFileSys;
}

// Range: 0x802A9314 -> 0x802A9388
int EResourceManager::BinarySearch() {
    // Local variables
    int left; // r6
    int right; // r7
    int mid; // r5
}

// Range: 0x802A9388 -> 0x802A9470
unsigned char EResourceManager::LookupId(class EResourceManager * const this /* r29 */, unsigned int & posOut /* r30 */, unsigned int & lengthOut /* r31 */) {}

// Range: 0x802A9470 -> 0x802A9610
void EResourceManager::AddRefAll(class EResourceManager * const this /* r27 */) {
    // Local variables
    class vector tempArray; // r1+0x18
    int cur; // r28
    struct ResourceIndexRecord rec; // r1+0x8
    int cur; // r30
}

// Range: 0x802A9610 -> 0x802A97C4
void EResourceManager::AddDelRefAll(class EResourceManager * const this /* r27 */) {
    // Local variables
    class vector tempArray; // r1+0x18
    int cur; // r28
    struct ResourceIndexRecord rec; // r1+0x8
    int cur; // r30
}

// Range: 0x802A97C4 -> 0x802A986C
void EResourceManager::DelRefAll(class EResourceManager * const this /* r28 */) {
    // Local variables
    int cur; // r29
}

// Range: 0x802A986C -> 0x802A992C
class EResource * EResourceManager::GetRef(class EResourceManager * const this /* r29 */, unsigned int id /* r30 */) {
    // Local variables
    class EResource * pResource; // r1+0x8
    unsigned char isLoaded; // r0
    class EAutoMutex mutex'43; // r31
}

// Range: 0x802A992C -> 0x802A996C
class EResource * EResourceManager::GetRef(class EResourceManager * const this /* r31 */) {
    // Local variables
    unsigned int id; // r0
}

// Range: 0x802A996C -> 0x802A99A4
unsigned long EResourceManager::ReadData(class EResourceManager * const this /* r9 */, void * pBuffer /* r8 */, unsigned int pos /* r0 */) {
    // References
    // -> class EResourceLoader * _pResLoader;
}

// Range: 0x802A99A4 -> 0x802A9A50
unsigned char EResourceManager::PreloadResource(class EResourceManager * const this /* r30 */, unsigned int id /* r31 */) {
    // References
    // -> class EResourceLoader * _pResLoader;
}

// Range: 0x802A9A50 -> 0x802A9B10
unsigned char EResourceManager::PreloadResource(class EResourceManager * const this /* r30 */) {
    // Local variables
    unsigned int id; // r31

    // References
    // -> class EResourceLoader * _pResLoader;
}

// Range: 0x802A9B10 -> 0x802A9C5C
class EResource * EResourceManager::addRef(class EResourceManager * const this /* r28 */, unsigned int id /* r1+0x8 */, class EFile * pSourceFile /* r29 */, unsigned int length /* r30 */, unsigned char bWait /* r31 */) {
    // Local variables
    struct rbtree_iterator iter; // r1+0x14
    class EResource * pResource; // r1+0x10

    // References
    // -> class EResourceLoader * _pResLoader;
    // -> class EApp * _pApp;
}

// Range: 0x802A9C5C -> 0x802A9E38
unsigned char EResourceManager::TryIncrementResource(class EResourceManager * const this /* r29 */, unsigned int id /* r28 */, class EResource * * pResource /* r30 */) {
    // Local variables
    unsigned char isFound; // r0
    unsigned char result; // r31
    unsigned char bWasInFreeList; // r0

    // References
    // -> class EResourceLoader * _pResLoader;
}

// Range: 0x802A9E38 -> 0x802A9E40
void EResourceManager::AddResource() {}

// Range: 0x802A9E40 -> 0x802A9E44
void EResourceManager::LogResourceLoad() {}

// Range: 0x802A9E44 -> 0x802A9F24
void EResourceManager::AddResource(class EResourceManager * const this /* r27 */, class EResource * pResource /* r28 */, unsigned int id /* r29 */, unsigned char loadable /* r30 */) {
    // Local variables
    unsigned char ok; // r0
    class EResource * pAlreadyThere; // r1+0x8
    unsigned char ok2; // r0
    class EAutoMutex mutex'46; // r31
}

// Range: 0x802A9F24 -> 0x802A9F2C
class EResource * EResourceManager::AddRef() {}

// Range: 0x802A9F2C -> 0x802A9F90
class EResource * EResourceManager::AddRef(class EResourceManager * const this /* r29 */, class EFile * pSourceFile /* r30 */, int length /* r31 */) {
    // Local variables
    unsigned int id; // r0
    class EResource * res; // r0
}

// Range: 0x802A9F90 -> 0x802A9FDC
class EResource * EResourceManager::AddRefAsync(class EResourceManager * const this /* r31 */) {
    // Local variables
    unsigned int id; // r0
}

// Range: 0x802A9FDC -> 0x802A9FEC
class EResource * EResourceManager::AddRefAsync() {}

// Range: 0x802A9FEC -> 0x802AA054
void EResourceManager::AddRef(class EResource * pResource /* r30 */) {
    // Local variables
    class EAutoMutex mutex'39; // r31
}

// Range: 0x802AA054 -> 0x802AA148
void EResourceManager::DelRef(class EResourceManager * const this /* r29 */, unsigned int id /* r1+0x8 */, enum DelRefMode allowCaching /* r30 */) {
    // Local variables
    class EResource * pResource; // r1+0x14
    struct rbtree_iterator iter; // r1+0x10
}

// Range: 0x802AA148 -> 0x802AA198
void EResourceManager::DelRef(class EResourceManager * const this /* r30 */, enum DelRefMode allowCaching /* r31 */) {
    // Local variables
    unsigned int id; // r0
}

// Range: 0x802AA198 -> 0x802AA1E8
void EResourceManager::DelRefAsync(class EResourceManager * const this /* r30 */, enum DelRefMode allowCaching /* r31 */) {}

// Range: 0x802AA1E8 -> 0x802AA30C
void EResourceManager::DelRefAsync(class EResourceManager * const this /* r28 */, unsigned int id /* r29 */, enum DelRefMode allowCaching /* r30 */) {
    // Local variables
    class EResource * pResource; // r1+0x8
    class EAutoMutex mutex'47; // r31

    // References
    // -> class EResourceLoader * _pResLoader;
}

// Range: 0x802AA30C -> 0x802AA4A0
void EResourceManager::DelRef(class EResourceManager * const this /* r29 */, class EResource * pResource /* r30 */, enum DelRefMode allowCaching /* r31 */) {
    // References
    // -> class EResourceLoader * _pResLoader;
}

// Range: 0x802AA4A0 -> 0x802AA514
void EResourceManager::Detach(class EResourceManager * const this /* r30 */, class EResource * pResource /* r31 */) {}

// Range: 0x802AA514 -> 0x802AA5DC
unsigned int EResourceManager::GetPos(class EResourceManager * const this /* r30 */) {
    // Local variables
    unsigned int pos; // r31
}

// Range: 0x802AA5DC -> 0x802AA6A8
unsigned int EResourceManager::GetSize(class EResourceManager * const this /* r30 */) {
    // Local variables
    unsigned int length; // r31
}

// Range: 0x802AA6A8 -> 0x802AA72C
unsigned char EResourceManager::IsLoaded(class EResourceManager * const this /* r29 */, unsigned int id /* r30 */) {
    // Local variables
    unsigned char isFound; // r30
}

// Range: 0x802AA72C -> 0x802AA730
void EResourceManager::ResourceDestructing() {}

// Range: 0x802AA730 -> 0x802AA790
unsigned int EResourceManager::CalcId(const char * szName /* r31 */) {
    // Local variables
    unsigned int nID; // r0
}

// Range: 0x802AA790 -> 0x802AA794
class EAHeap * EResourceManager::GetHeap() {}

// Range: 0x802AA794 -> 0x802AA7E0
unsigned int EResourceManager::MakeSpace(class EResourceManager * const this /* r31 */) {
    // Local variables
    unsigned int nBytesFreed; // r0
}

// Range: 0x802AA7E0 -> 0x802AA838
unsigned char EResourceManager::FreeOverFlowUnreferencedResources(class EResourceManager * const this /* r31 */) {
    // Local variables
    unsigned int nBytesFreed; // r0
}

// Range: 0x802AA838 -> 0x802AA870
unsigned char EResourceManager::FreeUnreferencedResources() {
    // Local variables
    unsigned int nBytesFreed; // r0
}

// Range: 0x802AA870 -> 0x802AA878
int EResourceManager::GetUnreferencedResourceCount() {}

// Range: 0x802AA878 -> 0x802AA900
void * EResourceManager::Alloc(class EResourceManager * const this /* r28 */, unsigned long bytes /* r29 */, unsigned int align /* r30 */) {
    // Local variables
    void * mem; // r0
    class EAHeap * heap; // r31
}

// Range: 0x802AA900 -> 0x802AA948
void EResourceManager::Free(void * ptr /* r31 */) {}

// Range: 0x802AA948 -> 0x802AA950
class EFile * EResourceManager::GetOverriddenFile() {}

// Range: 0x802AA950 -> 0x802AA9A8
unsigned char ResourceHeapFreeMemory() {
    // References
    // -> class EGraphics * _pGfx;
    // -> class EResourceLoader * _pResLoader;
}

// Range: 0x802AA9A8 -> 0x802AAA30
unsigned char AudioHeapFreeMemory(unsigned long failSize /* r29 */) {
    // Local variables
    unsigned int totalFreed; // r30

    // References
    // -> class ESoundEventManager g_soundeventman;
}

// Range: 0x802AAA30 -> 0x802AAAD0
unsigned char ShaderHeapFreeMemory(unsigned long failSize /* r29 */) {
    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x802AAAD0 -> 0x802AAB98
unsigned char TextureHeapFreeMemory(unsigned long failSize /* r29 */) {
    // References
    // -> class EGraphics * _pGfx;
    // -> class ETextureManager _textureman;
}

// Range: 0x802AAB98 -> 0x802AAC38
unsigned char AnimationHeapFreeMemory(unsigned long failSize /* r29 */) {
    // References
    // -> class EAnimManager _animman;
}

// Range: 0x802AAC38 -> 0x802AAD00
unsigned char ModelHeapFreeMemory(unsigned long failSize /* r29 */) {
    // References
    // -> class EGraphics * _pGfx;
    // -> class EModelManager _modelman;
}

// Range: 0x802AAD00 -> 0x802AADA0
unsigned char FlashesHeapFreeMemory(unsigned long failSize /* r29 */) {
    // References
    // -> class EFlashManager _flashman;
}

// Range: 0x802AADA0 -> 0x802AAE40
unsigned char AptHeapFreeMemory(unsigned long failSize /* r29 */) {
    // References
    // -> class EFlashManager _flashman;
}

// Range: 0x802AAE40 -> 0x802AAE5C
void * EResourceMap::EResourceMap() {}

// Range: 0x802AAE5C -> 0x802AAEB0
void * EResourceMap::~EResourceMap(class EResourceMap * const this /* r30 */) {}

// Range: 0x802AAEB0 -> 0x802AAF40
unsigned char EResourceMap::Find() {}

// Range: 0x802AAF40 -> 0x802AAFC8
void EResourceMap::SetCapacity(class EResourceMap * const this /* r29 */, int capacity /* r30 */) {
    // Local variables
    struct MapEntry * newEntries; // r31
}

// Range: 0x802AAFC8 -> 0x802AB44C
unsigned char EResourceMap::Insert(class EResourceMap * const this /* r28 */, class EResourceManager * manager /* r29 */, unsigned int id /* r30 */, class EResource * res /* r31 */) {
    // Local variables
    int ix; // r4
    int i; // r5
}

// Range: 0x802AB44C -> 0x802AB530
unsigned char EResourceMap::Remove() {
    // Local variables
    int i; // r9
}

// Range: 0x802AB530 -> 0x802AB590
void EResourceMap::RemoveAll(class EResourceMap * const this /* r30 */) {}


