/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\memorycardcache.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012DC34 -> 0x8012EAE0
*/
// Range: 0x8012DC34 -> 0x8012DD58
enum EMC_OpStatus MemoryCardCache::Init(class MemoryCardCache * const this /* r29 */, class NghLayout * pLayout /* r30 */) {
    // Local variables
    unsigned int size; // r31
}

// Range: 0x8012DD58 -> 0x8012DDBC
void MemoryCardCache::Destroy(class MemoryCardCache * const this /* r30 */) {}

// Range: 0x8012DDBC -> 0x8012DE78
void MemoryCardCache::DestroySubsectionCache(class MemoryCardCache * const this /* r27 */) {
    // Local variables
    unsigned int i; // r28
}

// Range: 0x8012DE78 -> 0x8012DF70
enum EMC_OpStatus MemoryCardCache::GetSection(class MemoryCardCache * const this /* r24 */, const class NghLayout * pLayout /* r25 */, char * buff /* r26 */, unsigned int offset /* r27 */, unsigned int size /* r28 */) {
    // Local variables
    int subSection; // r0
    class NghResFileSectionHeader * header; // r30
    unsigned int copySize; // r29
}

// Range: 0x8012DF70 -> 0x8012E12C
enum EMC_OpStatus MemoryCardCache::PutSection(class MemoryCardCache * const this /* r28 */, const class NghLayout * pLayout /* r27 */, const char * buff /* r29 */, unsigned int offset /* r26 */, unsigned int size /* r30 */) {
    // Local variables
    int subSection; // r0
    unsigned int nNewAllocationSize; // r26
    int nSection; // r0
}

// Range: 0x8012E12C -> 0x8012E250
enum EMC_OpStatus MemoryCardCache::CacheNghSection(class MemoryCardCache * const this /* r26 */, class NghLayout * pLayout /* r27 */, char * buff /* r28 */, unsigned int offset /* r29 */, unsigned int bufsize /* r30 */, unsigned char bIgnoreEndian /* r31 */) {
    // Local variables
    class NghResFileSectionHeader * pSecHeader; // [invalid]
    unsigned int datasize; // r31
    enum EMC_OpStatus verified; // r0
}

// Range: 0x8012E250 -> 0x8012E298
enum EMC_OpStatus MemoryCardCache::LoadCacheFromMemoryCard(class MemoryCardCache * const this /* r30 */, const class MemoryDevicePort_t & port /* r31 */) {}

// Range: 0x8012E298 -> 0x8012E48C
enum EMC_OpStatus MemoryCardCache::LoadCacheFromMemoryCard(class MemoryCardCache * const this /* r24 */, const class MemoryDevicePort_t & port /* r25 */, class NghResFile * pFile /* r26 */) {
    // Local variables
    enum EMC_OpStatus errReturn; // r31
    unsigned char fileOpened; // r30
    unsigned int uMaxWriteSize; // r29
    void * pWriteBuf; // r29
    class NghSubSectionIterator iter; // r1+0x18
    unsigned int offset; // r28
    unsigned int loadSize; // r27
    enum RegistryID registryId; // r1+0xC
    enum SectionID sectionId; // r1+0x8
    class SaveRecord saveRec; // r1+0x10

    // References
    // -> const char * s_saveFileName;
    // -> class EMemoryCard * _pMemoryCard;
}

// Range: 0x8012E48C -> 0x8012E570
enum EMC_OpStatus MemoryCardCache::LoadConfigFromMemoryCard(class MemoryCardCache * const this /* r28 */, const class MemoryDevicePort_t & port /* r29 */) {
    // Local variables
    enum EMC_OpStatus errReturn; // r31
    unsigned char fileOpened; // r30

    // References
    // -> const char * s_configFileName;
    // -> class EMemoryCard * _pMemoryCard;
}

// Range: 0x8012E570 -> 0x8012E8AC
enum EMC_OpStatus MemoryCardCache::SaveAllToMemoryCard(class MemoryCardCache * const this /* r22 */, const class MemoryDevicePort_t & port /* r23 */) {
    // Local variables
    enum EMC_OpStatus errReturn; // r31
    unsigned char fileOpened; // r30
    unsigned int uMaxWriteSize; // r29
    void * pWriteBuf; // r29
    class NghSubSectionIterator iter; // r1+0x18
    unsigned int offset; // r28
    unsigned int readSize; // r27
    unsigned int cardWriteSize; // r26
    void * cardWriteBuff; // r25
    unsigned char usingRegistry; // r24
    enum RegistryID registryId; // r1+0xC
    enum SectionID sectionId; // r1+0x8
    class SaveRecord saveRec; // r1+0x10

    // References
    // -> const char * s_configFileName;
    // -> const char * s_saveFileName;
    // -> class EMemoryCard * _pMemoryCard;
}

// Range: 0x8012E8AC -> 0x8012E97C
enum EMC_OpStatus MemoryCardCache::GetConfig(class MemoryCardCache * const this /* r28 */, char * buff /* r29 */, unsigned int size /* r30 */, const class MemoryDevicePort_t & port /* r31 */) {}

// Range: 0x8012E97C -> 0x8012EA30
enum EMC_OpStatus MemoryCardCache::PutConfig(class MemoryCardCache * const this /* r29 */, const char * buff /* r30 */, unsigned int size /* r31 */) {}

// Range: 0x8012EA30 -> 0x8012EA48
unsigned int MemoryCardCache::GetCurrentBuildVerNum() {}

// Range: 0x8012EA48 -> 0x8012EA80
enum EMC_OpStatus MemoryCardCache::LoadMemoryCardToCache(const class MemoryDevicePort_t & port_ /* r31 */) {}

// Range: 0x8012EA80 -> 0x8012EAB8
enum EMC_OpStatus MemoryCardCache::SaveMemoryCardCacheToCard(const class MemoryDevicePort_t & port_ /* r31 */) {}

// Range: 0x8012EAB8 -> 0x8012EAE0
unsigned int MemoryCardCache::GetTotalSaveGameSize() {}


