/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\level\wallpost.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800955F4 -> 0x80095AB0
*/
// Range: 0x800955F4 -> 0x80095660
void * WallPostCollection::~WallPostCollection(class WallPostCollection * const this /* r30 */) {
    // References
    // -> struct [anonymous] __vt__18WallPostCollection;
}

// Range: 0x80095660 -> 0x800956C0
void * WallPostStorage::~WallPostStorage(class WallPostStorage * const this /* r30 */) {
    // References
    // -> struct [anonymous] __vt__15WallPostStorage;
}

// Range: 0x800956C0 -> 0x8009571C
void WallPostStorage::Deallocate(class WallPostStorage * const this /* r31 */) {}

// Range: 0x8009571C -> 0x80095764
void * WallPostCollection::WallPostCollection(class WallPostCollection * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__18WallPostCollection;
}

// Range: 0x80095764 -> 0x80095790
void * WallPostStorage::WallPostStorage() {
    // References
    // -> struct [anonymous] __vt__15WallPostStorage;
}

// Range: 0x80095790 -> 0x80095830
void WallPostStorage::Allocate(class WallPostStorage * const this /* r31 */) {
    // Local variables
    unsigned int i; // r6
}

// Range: 0x80095830 -> 0x80095838
enum PostHeight WallPostInstance::GetHeight() {}

// Range: 0x80095838 -> 0x80095840
enum PostStyle WallPostInstance::GetStyle() {}

// Range: 0x80095840 -> 0x800958E4
void WallPostStorage::Set(class WallPostStorage * const this /* r28 */, unsigned char x /* r29 */, unsigned char y /* r30 */, class WallPostInstance * value /* r31 */) {}

// Range: 0x800958E4 -> 0x8009590C
unsigned int WallPostStorage::Index(unsigned char x /* r3 */, unsigned char y /* r5 */) {}

// Range: 0x8009590C -> 0x80095920
unsigned char WallPostStorage::GetYSize() {}

// Range: 0x80095920 -> 0x80095934
unsigned char WallPostStorage::GetXSize() {}

// Range: 0x80095934 -> 0x800959B0
void * WallPostInstance::WallPostInstance(class WallPostInstance * const this /* r28 */, enum PostHeight height /* r29 */, enum PostStyle style /* r30 */, class ERLevel * pLevel /* r31 */) {
    // References
    // -> struct [anonymous] __vt__16WallPostInstance;
}

// Range: 0x800959B0 -> 0x80095A50
class WallPostInstance * WallPostStorage::Get(const class WallPostStorage * const this /* r29 */, unsigned char x /* r30 */, unsigned char y /* r31 */) {}

// Range: 0x80095A50 -> 0x80095A58
void WallPostInstance::SetStyle() {}

// Range: 0x80095A58 -> 0x80095AB0
void * WallPostInstance::~WallPostInstance(class WallPostInstance * const this /* r30 */) {}


