/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\objectdata\objectdatafactory.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80007D60 -> 0x80007DDC
*/
class TreeTableAd {
    // total size: 0x8
public:
    signed short fPersonalityAd; // offset 0x0, size 0x2
    signed short fMin; // offset 0x2, size 0x2
    signed short fRange; // offset 0x4, size 0x2
    signed short fAdID; // offset 0x6, size 0x2
};
class TreeTableAd ZERO_AD; // size: 0x8, address: 0x805DB678
class BString2 {
    // total size: 0x4
    class basic_string_ref2 * reference; // offset 0x0, size 0x4
};
class BString2 s; // size: 0x4, address: 0x805DB684
class StringSet : public IObjectDataResource {
    // total size: 0x4
};
class ObjectDataFactory {
    // total size: 0x4
public:
    void * __vptr$; // offset 0x0, size 0x4
};
class ObjectDataFactoryQuickData : public ObjectDataFactory {
    // total size: 0x4
};
// Range: 0x80007D60 -> 0x80007D64
class StringSet * ObjectDataFactoryQuickData::__cl() {}

class ObjectDataFactoryIFF : public ObjectDataFactory {
    // total size: 0x4
};
// Range: 0x80007D64 -> 0x80007D6C
class StringSet * ObjectDataFactoryIFF::__cl() {}

class ObjectDataFactoryDatabase : public ObjectDataFactory {
    // total size: 0x4
};
// Range: 0x80007D6C -> 0x80007D74
class StringSet * ObjectDataFactoryDatabase::__cl() {}

class ObjectDataFactory {
    // total size: 0x4
public:
    void * __vptr$; // offset 0x0, size 0x4
};
class ObjectDataFactoryQuickData : public ObjectDataFactory {
    // total size: 0x4
};
// Range: 0x80007D74 -> 0x80007D78
class ObjFnTable * ObjectDataFactoryQuickData::__cl() {}

class ObjectDataFactoryIFF : public ObjectDataFactory {
    // total size: 0x4
};
// Range: 0x80007D78 -> 0x80007D80
class ObjFnTable * ObjectDataFactoryIFF::__cl() {}

class ObjectDataFactoryDatabase : public ObjectDataFactory {
    // total size: 0x4
};
// Range: 0x80007D80 -> 0x80007D88
class ObjFnTable * ObjectDataFactoryDatabase::__cl() {}

class FloatConstants : public IObjectDataResource {
    // total size: 0x4
};
class ObjectDataFactory {
    // total size: 0x4
public:
    void * __vptr$; // offset 0x0, size 0x4
};
class ObjectDataFactoryQuickData : public ObjectDataFactory {
    // total size: 0x4
};
// Range: 0x80007D88 -> 0x80007D8C
class FloatConstants * ObjectDataFactoryQuickData::__cl() {}

class ObjectDataFactoryIFF : public ObjectDataFactory {
    // total size: 0x4
};
// Range: 0x80007D8C -> 0x80007D94
class FloatConstants * ObjectDataFactoryIFF::__cl() {}

class ObjectDataFactoryDatabase : public ObjectDataFactory {
    // total size: 0x4
};
// Range: 0x80007D94 -> 0x80007D9C
class FloatConstants * ObjectDataFactoryDatabase::__cl() {}

enum Attenuation {
    kCustom = 0,
    kNone = 1,
    kLow = 2,
    kModerate = 3,
    kHigh = 4,
};
class ITreeTableAd : public IConsoleUnknown {
    // total size: 0x4
};
class ITreeTableEntry : public IConsoleUnknown {
    // total size: 0x4
};
class ITreeTable : public IObjectDataResource {
    // total size: 0x4
};
class ObjectDataFactory {
    // total size: 0x4
public:
    void * __vptr$; // offset 0x0, size 0x4
};
class ObjectDataFactoryQuickData : public ObjectDataFactory {
    // total size: 0x4
};
// Range: 0x80007D9C -> 0x80007DCC
class ITreeTable * ObjectDataFactoryQuickData::__cl() {}

class ObjectDataFactoryIFF : public ObjectDataFactory {
    // total size: 0x4
};
// Range: 0x80007DCC -> 0x80007DD4
class ITreeTable * ObjectDataFactoryIFF::__cl() {}

class ObjectDataFactoryDatabase : public ObjectDataFactory {
    // total size: 0x4
};
// Range: 0x80007DD4 -> 0x80007DDC
class ITreeTable * ObjectDataFactoryDatabase::__cl() {}


