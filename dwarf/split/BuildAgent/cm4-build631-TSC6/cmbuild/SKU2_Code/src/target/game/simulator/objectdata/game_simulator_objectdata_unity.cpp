/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\objectdata\game_simulator_objectdata_unity.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8015D97C -> 0x8015D97C
*/
unsigned char g_qdBconPoolBuffer[1664]; // size: 0x680, address: 0x80493068
class FastAllocPool g_poolQdBcon; // size: 0x1C, address: 0x804936F4
class QuickDataBehaviorConstants : public ObjectDataBehaviorConstants {
    // total size: 0x20
    const struct BehaviorConstants * m_qdConsts; // offset 0x18, size 0x4
    unsigned int mRefCount; // offset 0x1C, size 0x4
};
class IFFBehaviorConstants : public ObjectDataBehaviorConstants {
    // total size: 0x64
    class StackString mResName; // offset 0x18, size 0x48
    unsigned int mRefCount; // offset 0x60, size 0x4
};
struct EdithBehaviorConstants {
    // total size: 0x4
    signed short flags; // offset 0x0, size 0x2
    signed short values[1]; // offset 0x2, size 0x2
};
class ResourceBehaviorTree : public ObjectDataBehaviorTree {
    // total size: 0x64
    class EREdithTreeSet * m_resource; // offset 0x5C, size 0x4
    unsigned int mRefCount; // offset 0x60, size 0x4
};
unsigned char g_rbTreePoolBuffer[564]; // size: 0x234, address: 0x80493710
class FastAllocPool g_poolResourceBehaviorTree; // size: 0x1C, address: 0x80493950
class IFFBehaviorTree : public ObjectDataBehaviorTree {
    // total size: 0x60
    unsigned int mRefCount; // offset 0x5C, size 0x4
};
class SmartDataFactory * gpSmartDataFactoryInstance; // size: 0x4, address: 0x805DB9F8
class ISmartDataFactory : public IConsoleUnknown {
    // total size: 0x4
};
class SmartDataFactory : public ISmartDataFactory {
    // total size: 0x24
protected:
    class map mResourceProviderMap; // offset 0x4, size 0x1C
private:
    unsigned int mRefCount; // offset 0x20, size 0x4
};
class rbtree : public rb_base {
    // total size: 0x1C
public:
    struct rbtree_node_base mAnchor; // offset 0x4, size 0x10
    unsigned long mnSize; // offset 0x14, size 0x4
    class allocator mAllocator; // offset 0x18, size 0x1
};
class map : public rbtree {
    // total size: 0x1C
};
struct rb_base {
    // total size: 0x1
    struct less mCompare; // offset 0x0, size 0x1
};
enum tDataProvider {
    kFromQuickData = 0,
    kFromIFF = 1,
    kFromDatabase = 2,
    kFromResource = 3,
    kDefaultDataProvider = 4,
};
struct pair {
    // total size: 0xC
    unsigned int first; // offset 0x0, size 0x4
    class ObjectDataID second; // offset 0x4, size 0x8
};
struct rbtree_iterator {
    // total size: 0x4
    struct rbtree_node * mpNode; // offset 0x0, size 0x4
};
struct rbtree_node : public rbtree_node_base {
    // total size: 0x20
    struct pair mValue; // offset 0x10, size 0x10
};
struct rbtree_iterator {
    // total size: 0x4
    struct rbtree_node * mpNode; // offset 0x0, size 0x4
};
struct pair {
    // total size: 0x8
    struct rbtree_iterator first; // offset 0x0, size 0x4
    unsigned char second; // offset 0x4, size 0x1
};
struct pair {
    // total size: 0x10
    struct pair first; // offset 0x0, size 0xC
    enum tDataProvider second; // offset 0xC, size 0x4
};
class ConsoleAutoRefCount {
    // total size: 0x4
public:
    class IConsoleUnknown * mpData; // offset 0x0, size 0x4
};
class TreeTableAd ZERO_AD; // size: 0x8, address: 0x805DBA00
class TreeTableAdQuickData * ZERO_AD_QD; // size: 0x4, address: 0x805DBA08
class TreeTableAdQuickData : public ITreeTableAd {
    // total size: 0xC
    const class TreeTableAd * mpTreeTableAd; // offset 0x4, size 0x4
    unsigned int mRefCount; // offset 0x8, size 0x4
};
class TreeTableEntryQuickData : public ITreeTableEntry {
    // total size: 0x1C
    const class TreeTableEntry * mpTreeTableEntry; // offset 0x4, size 0x4
    class vector mTreeTableAds; // offset 0x8, size 0x10
    unsigned int mRefCount; // offset 0x18, size 0x4
};
class vector : public VectorBase {
    // total size: 0x10
};
struct VectorBase {
    // total size: 0x10
protected:
    class ConsoleAutoRefCount * mpBegin; // offset 0x0, size 0x4
    class ConsoleAutoRefCount * mpEnd; // offset 0x4, size 0x4
    class ConsoleAutoRefCount * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
class ConsoleAutoRefCount {
    // total size: 0x4
public:
    class TreeTableAdQuickData * mpData; // offset 0x0, size 0x4
};
class TreeTableQuickData : public ITreeTable {
    // total size: 0x24
    const class TreeTable * mpTreeTable; // offset 0x4, size 0x4
    class vector mTreeTableEntries; // offset 0x8, size 0x10
    class ObjectDataID mObjectDataID; // offset 0x18, size 0x8
    unsigned int mRefCount; // offset 0x20, size 0x4
};
class vector : public VectorBase {
    // total size: 0x10
};
struct VectorBase {
    // total size: 0x10
protected:
    class ConsoleAutoRefCount * mpBegin; // offset 0x0, size 0x4
    class ConsoleAutoRefCount * mpEnd; // offset 0x4, size 0x4
    class ConsoleAutoRefCount * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
class ConsoleAutoRefCount {
    // total size: 0x4
public:
    class TreeTableEntryQuickData * mpData; // offset 0x0, size 0x4
};
struct {
    // total size: 0x90
} __vt__18TreeTableQuickData; // size: 0x90, address: 0x8042FA78
struct {
    // total size: 0x134
} __vt__23TreeTableEntryQuickData; // size: 0x134, address: 0x8042FB08
struct {
    // total size: 0x3C
} __vt__20TreeTableAdQuickData; // size: 0x3C, address: 0x8042FC3C
struct {
    // total size: 0x10
} __vt__39ObjectDataFactoryDatabase<10ITreeTable>; // size: 0x10, address: 0x8042FC78
struct {
    // total size: 0x10
} __vt__34ObjectDataFactoryIFF<10ITreeTable>; // size: 0x10, address: 0x8042FC88
struct {
    // total size: 0x10
} __vt__40ObjectDataFactoryQuickData<10ITreeTable>; // size: 0x10, address: 0x8042FC98
struct {
    // total size: 0x10
} __vt__31ObjectDataFactory<10ITreeTable>; // size: 0x10, address: 0x8042FCA8
struct {
    // total size: 0x10
} __vt__39ObjectDataFactoryDatabase<10ObjFnTable>; // size: 0x10, address: 0x8042FCB8
struct {
    // total size: 0x10
} __vt__34ObjectDataFactoryIFF<10ObjFnTable>; // size: 0x10, address: 0x8042FCC8
struct {
    // total size: 0x10
} __vt__40ObjectDataFactoryQuickData<10ObjFnTable>; // size: 0x10, address: 0x8042FCD8
struct {
    // total size: 0x10
} __vt__31ObjectDataFactory<10ObjFnTable>; // size: 0x10, address: 0x8042FCE8
struct {
    // total size: 0x10
} __vt__43ObjectDataFactoryDatabase<14FloatConstants>; // size: 0x10, address: 0x8042FCF8
struct {
    // total size: 0x10
} __vt__38ObjectDataFactoryIFF<14FloatConstants>; // size: 0x10, address: 0x8042FD08
struct {
    // total size: 0x10
} __vt__44ObjectDataFactoryQuickData<14FloatConstants>; // size: 0x10, address: 0x8042FD18
struct {
    // total size: 0x10
} __vt__35ObjectDataFactory<14FloatConstants>; // size: 0x10, address: 0x8042FD28
struct {
    // total size: 0x10
} __vt__37ObjectDataFactoryDatabase<9StringSet>; // size: 0x10, address: 0x8042FD38
struct {
    // total size: 0x10
} __vt__32ObjectDataFactoryIFF<9StringSet>; // size: 0x10, address: 0x8042FD48
struct {
    // total size: 0x10
} __vt__38ObjectDataFactoryQuickData<9StringSet>; // size: 0x10, address: 0x8042FD58
struct {
    // total size: 0x10
} __vt__29ObjectDataFactory<9StringSet>; // size: 0x10, address: 0x8042FD68
struct {
    // total size: 0x34
} __vt__9SoundInfo; // size: 0x34, address: 0x8042FD78
struct {
    // total size: 0x24
} __vt__16SmartDataFactory; // size: 0x24, address: 0x8042FDAC
struct {
    // total size: 0x3C
} __vt__15IFFBehaviorTree; // size: 0x3C, address: 0x8042FDD0
struct {
    // total size: 0x3C
} __vt__20ResourceBehaviorTree; // size: 0x3C, address: 0x8042FE0C
struct {
    // total size: 0x3C
} __vt__22ObjectDataBehaviorTree; // size: 0x3C, address: 0x8042FE48
struct {
    // total size: 0x20
} __vt__17ISmartDataFactory; // size: 0x20, address: 0x8042FE88
struct {
    // total size: 0x88
} __vt__10ITreeTable; // size: 0x88, address: 0x8042FEA8
struct {
    // total size: 0x34
} __vt__23ObjectDataObjDefinition; // size: 0x34, address: 0x8042FF30
struct {
    // total size: 0x40
} __vt__20IFFBehaviorConstants; // size: 0x40, address: 0x8042FF68
struct {
    // total size: 0x40
} __vt__26QuickDataBehaviorConstants; // size: 0x40, address: 0x8042FFA8
struct {
    // total size: 0x40
} __vt__27ObjectDataBehaviorConstants; // size: 0x40, address: 0x8042FFE8
struct {
    // total size: 0x30
} __vt__19ObjectDataInterface; // size: 0x30, address: 0x80430028
class generic_iterator {
    // total size: 0x4
protected:
    class ConsoleAutoRefCount * mIterator; // offset 0x0, size 0x4
};
class generic_iterator {
    // total size: 0x4
protected:
    class ConsoleAutoRefCount * mIterator; // offset 0x0, size 0x4
};
struct use_first {
    // total size: 0x1
};
struct binary_function {
    // total size: 0x1
};
struct less : public binary_function {
    // total size: 0x1
};

