/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\objectdata\smartdatafactory.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80160784 -> 0x801611F4
*/
// Range: 0x80160784 -> 0x801607C8
class ISmartDataFactory & GetSmartDataFactory() {
    // References
    // -> class SmartDataFactory * gpSmartDataFactoryInstance;
}

// Range: 0x801607C8 -> 0x80160828
void * SmartDataFactory::SmartDataFactory(class SmartDataFactory * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__16SmartDataFactory;
}

// Range: 0x80160880 -> 0x801608DC
void * SmartDataFactory::~SmartDataFactory(class SmartDataFactory * const this /* r30 */) {}

// Range: 0x801608DC -> 0x8016097C
unsigned char SmartDataFactory::QueryInterface(class SmartDataFactory * const this /* r30 */, void * ppvObject /* r31 */) {}

// Range: 0x8016097C -> 0x80160990
unsigned int SmartDataFactory::AddRef() {}

// Range: 0x80160990 -> 0x801609E4
unsigned int SmartDataFactory::Release() {}

// Range: 0x801609E4 -> 0x80160AC8
enum tDataProvider SmartDataFactory::GetDataProvider(const class SmartDataFactory * const this /* r30 */, unsigned int riid /* r1+0x8 */, const class ObjectDataID & dataID /* r31 */) {
    // Local variables
    struct pair resourceID; // r1+0x20
    struct rbtree_iterator it; // r1+0x14
    class ObjectDataID resID; // r1+0x18
}

// Range: 0x80160AC8 -> 0x80160B7C
void SmartDataFactory::SetDataProvider(class SmartDataFactory * const this /* r31 */, unsigned int riid /* r1+0x8 */, enum tDataProvider dataProvider /* r1+0xC */) {
    // Local variables
    struct pair resourceID; // r1+0x38
    struct rbtree_iterator it; // r1+0x18
}

// Range: 0x80160B7C -> 0x80160BEC
unsigned char SmartDataFactory::CreateObject(class SmartDataFactory * const this /* r29 */, unsigned int riid /* r30 */, void * ppvObject /* r31 */) {}

// Range: 0x80160BEC -> 0x80160C90
unsigned char SmartDataFactory::CreateObject(class SmartDataFactory * const this /* r29 */, unsigned int riid /* r30 */, void * ppvObject /* r31 */) {
    // Local variables
    enum tDataProvider dataProvider; // r5
}

// Range: 0x80160C90 -> 0x801611F4
unsigned char SmartDataFactory::CreateObjectFromProvider(unsigned int riid /* r29 */, enum tDataProvider dataProvider /* r30 */, void * ppvObject /* r31 */) {
    // Local variables
    class ConsoleAutoRefCount pNewObject; // r1+0x38
    class ObjectDataFactoryQuickData alloc; // r1+0x34
    class ObjectDataFactoryIFF alloc; // r1+0x30
    class ObjectDataFactoryDatabase alloc; // r1+0x2C
    class ObjectDataFactoryQuickData alloc; // r1+0x28
    class ObjectDataFactoryIFF alloc; // r1+0x24
    class ObjectDataFactoryDatabase alloc; // r1+0x20
    class ObjectDataFactoryQuickData alloc; // r1+0x1C
    class ObjectDataFactoryIFF alloc; // r1+0x18
    class ObjectDataFactoryDatabase alloc; // r1+0x14
    class ObjectDataFactoryQuickData alloc; // r1+0x10
    class ObjectDataFactoryIFF alloc; // r1+0xC
    class ObjectDataFactoryDatabase alloc; // r1+0x8
}


