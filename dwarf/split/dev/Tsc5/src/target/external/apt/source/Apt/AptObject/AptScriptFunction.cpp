/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\AptObject\AptScriptFunction.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803312D4 -> 0x80331F84
*/
class AptValue * * spRegBlockBase; // size: 0x4, address: 0x805DC4B8
class AptValue * * spRegBlockCurrentFrameBase; // size: 0x4, address: 0x805DC4BC
int snRegBlockCurrentFrameCount; // size: 0x4, address: 0x805DC4C0
int snRegisterBlockSize; // size: 0x4, address: 0x805DC4C4
class AptFrameStack * spFrameStack; // size: 0x4, address: 0x805DC4C8
// Range: 0x803312D4 -> 0x8033133C
void AptScriptFunctionBase::InitializeStaticData() {
    // Local variables
    int i; // r5

    // References
    // -> int snRegBlockCurrentFrameCount;
    // -> class AptNone * gpUndefinedValue;
    // -> class AptValue * * spRegBlockCurrentFrameBase;
    // -> class AptValue * * spRegBlockBase;
    // -> int snRegisterBlockSize;
}

// Range: 0x8033133C -> 0x8033136C
void AptScriptFunctionBase::ShutdownStaticData() {
    // References
    // -> class AptValue * * spRegBlockCurrentFrameBase;
    // -> class AptValue * * spRegBlockBase;
}

// Range: 0x8033136C -> 0x8033138C
void * AptScriptFunctionBase::PushStaticData() {
    // Local variables
    class AptValue * * pSaveBase; // r0

    // References
    // -> class AptValue * * spRegBlockCurrentFrameBase;
    // -> int snRegBlockCurrentFrameCount;
}

static char __PRETTY_FUNCTION__[45]; // size: 0x2D, address: 0x8045F538
// Range: 0x8033138C -> 0x80331428
void AptScriptFunctionBase::PopStaticData(void * pPushValue /* r27 */) {
    // Local variables
    class AptValue * * pSaveBase; // r0
    int i; // r28
    class AptValue * pValue; // r0

    // References
    // -> int snRegBlockCurrentFrameCount;
    // -> class AptNone * gpUndefinedValue;
    // -> class AptValue * * spRegBlockCurrentFrameBase;
    // -> static char __PRETTY_FUNCTION__[45];
}

static char __PRETTY_FUNCTION__[119]; // size: 0x77, address: 0x8045F580
// Range: 0x80331428 -> 0x803315BC
void * AptScriptFunctionBase::AptScriptFunctionBase(class AptScriptFunctionBase * const this /* r28 */, class AptScriptFunctionBase * pCreatorFunction /* r31 */, class AptCIH * pCurCIH /* r30 */, unsigned char bNeedsPrototype /* r29 */) {
    // References
    // -> class AptPrototype * gpObjectPrototype;
    // -> static char __PRETTY_FUNCTION__[119];
    // -> class AptFrameStack * spFrameStack;
    // -> struct [anonymous] __vt__21AptScriptFunctionBase;
}

static char __PRETTY_FUNCTION__[113]; // size: 0x71, address: 0x8045F5F8
// Range: 0x803315BC -> 0x8033170C
void * AptScriptFunctionBase::AptScriptFunctionBase(class AptScriptFunctionBase * const this /* r28 */, class AptScriptFunctionBase * pOrigFunc /* r29 */, class AptCIH * pCurCIH /* r30 */) {
    // Local variables
    class AptValue * pTemp; // r0

    // References
    // -> static char __PRETTY_FUNCTION__[113];
    // -> struct [anonymous] __vt__21AptScriptFunctionBase;
}

// Range: 0x8033170C -> 0x80331768
void * AptScriptFunctionBase::~AptScriptFunctionBase(class AptScriptFunctionBase * const this /* r30 */) {}

class AptScriptFunction1 : public AptScriptFunctionBase {
    // total size: 0x38
protected:
    const struct AptAction_DefineFunction * mpFunction; // offset 0x34, size 0x4
};
// Range: 0x80331768 -> 0x803317C4
void * AptScriptFunction1::AptScriptFunction1(class AptScriptFunction1 * const this /* r30 */, class AptScriptFunctionBase * pCreatorFunction /* r0 */, const struct AptAction_DefineFunction * _pFunction /* r31 */) {
    // References
    // -> struct [anonymous] __vt__18AptScriptFunction1;
}

// Range: 0x803317C4 -> 0x80331820
void * AptScriptFunction1::AptScriptFunction1(class AptScriptFunction1 * const this /* r30 */, class AptScriptFunction1 * pOrigFunc /* r31 */) {
    // References
    // -> struct [anonymous] __vt__18AptScriptFunction1;
}

class AptScriptFunction2 : public AptScriptFunctionBase {
    // total size: 0x38
protected:
    const struct AptAction_DefineFunction2 * mpFunction; // offset 0x34, size 0x4
};
// Range: 0x80331820 -> 0x8033187C
void * AptScriptFunction2::AptScriptFunction2(class AptScriptFunction2 * const this /* r30 */, class AptScriptFunctionBase * pCreatorFunction /* r0 */, const struct AptAction_DefineFunction2 * _pFunction /* r31 */) {
    // References
    // -> struct [anonymous] __vt__18AptScriptFunction2;
}

// Range: 0x8033187C -> 0x803318D8
void * AptScriptFunction2::AptScriptFunction2(class AptScriptFunction2 * const this /* r30 */, class AptScriptFunction2 * pOrigFunc /* r31 */) {
    // References
    // -> struct [anonymous] __vt__18AptScriptFunction2;
}

// Range: 0x803318D8 -> 0x80331934
void * AptScriptFunction1::~AptScriptFunction1(class AptScriptFunction1 * const this /* r30 */) {}

// Range: 0x80331934 -> 0x80331990
void * AptScriptFunction2::~AptScriptFunction2(class AptScriptFunction2 * const this /* r30 */) {}

// Range: 0x80331990 -> 0x80331994
void AptScriptFunctionBase::PreDestroy() {}

// Range: 0x80331994 -> 0x80331A28
void AptScriptFunctionBase::RegisterReferences(const class AptScriptFunctionBase * const this /* r31 */) {
    // References
    // -> void (* sReferenceRegistrationCb)(class AptValue *, class AptValue *, char *);
}

static char __PRETTY_FUNCTION__[43]; // size: 0x2B, address: 0x8045F684
// Range: 0x80331A28 -> 0x80331B04
void AptScriptFunctionBase::DestroyGCPointers(class AptScriptFunctionBase * const this /* r28 */) {
    // References
    // -> static char __PRETTY_FUNCTION__[43];
}

// Range: 0x80331B04 -> 0x80331B18
void AptScriptFunctionBase::SetupBeforeExecution() {
    // References
    // -> class AptFrameStack * spFrameStack;
}

static char __PRETTY_FUNCTION__[72]; // size: 0x48, address: 0x8045F6B0
// Range: 0x80331B18 -> 0x80331BA4
void AptScriptFunctionBase::CleanupAfterExecution(class AptScriptFunctionBase * const this /* r30 */, struct _AptScriptFunctionState * pState /* r31 */) {
    // References
    // -> static char __PRETTY_FUNCTION__[72];
    // -> class AptFrameStack * spFrameStack;
}

// Range: 0x80331BA4 -> 0x80331BB4
class AptValue * AptScriptFunctionBase::GetRegisterValue() {
    // References
    // -> class AptValue * * spRegBlockCurrentFrameBase;
}

static char __PRETTY_FUNCTION__[57]; // size: 0x39, address: 0x8045F6F8
// Range: 0x80331BB4 -> 0x80331C54
void AptScriptFunctionBase::SetRegisterValue() {
    // Local variables
    class AptValue * pOldValue; // r29

    // References
    // -> static char __PRETTY_FUNCTION__[57];
    // -> class AptValue * * spRegBlockCurrentFrameBase;
    // -> int snRegBlockCurrentFrameCount;
}

// Range: 0x80331C54 -> 0x80331E5C
void AptScriptFunction2::SetupBeforeExecution(class AptScriptFunction2 * const this /* r28 */, struct _AptScriptFunctionState * pState /* r29 */, class AptValue * pContext /* r31 */) {
    // Local variables
    class AptValue * pTemp; // r0
    int nStartReg; // r30
    class EAStringC pTmpStr; // r1+0xC
    class EAStringC pTmpStr; // r1+0x8

    // References
    // -> class AptGlobal * gpGlobalGlobalObject;
    // -> class AptNone * gpUndefinedValue;
    // -> int snRegBlockCurrentFrameCount;
    // -> class AptValue * * spRegBlockCurrentFrameBase;
}

static char __PRETTY_FUNCTION__[69]; // size: 0x45, address: 0x8045F734
// Range: 0x80331E5C -> 0x80331F04
void AptScriptFunction2::CleanupAfterExecution(struct _AptScriptFunctionState * pState /* r27 */) {
    // Local variables
    int i; // r28
    class AptValue * pValue; // r0

    // References
    // -> int snRegBlockCurrentFrameCount;
    // -> class AptNone * gpUndefinedValue;
    // -> class AptValue * * spRegBlockCurrentFrameBase;
    // -> static char __PRETTY_FUNCTION__[69];
}

class AptScriptFunctionByteCodeBlock : public AptScriptFunctionBase {
    // total size: 0x48
protected:
    const unsigned char * mpByteCodeBase; // offset 0x34, size 0x4
    int mnByteCodeSize; // offset 0x38, size 0x4
    const char * mpName; // offset 0x3C, size 0x4
    struct AptConstantPool mConstantPool; // offset 0x40, size 0x8
};
// Range: 0x80331F04 -> 0x80331F84
void * AptScriptFunctionByteCodeBlock::AptScriptFunctionByteCodeBlock(class AptScriptFunctionByteCodeBlock * const this /* r27 */, const unsigned char * pBytecodeBase /* r28 */, int blockSize /* r29 */, struct AptConstantPool & constantPool /* r30 */, const char * pName /* r31 */) {
    // References
    // -> struct [anonymous] __vt__30AptScriptFunctionByteCodeBlock;
}

struct {
    // total size: 0x6C
} __vt__30AptScriptFunctionByteCodeBlock; // size: 0x6C, address: 0x8045F77C
struct {
    // total size: 0x6C
} __vt__18AptScriptFunction2; // size: 0x6C, address: 0x8045F7E8
struct {
    // total size: 0x6C
} __vt__18AptScriptFunction1; // size: 0x6C, address: 0x8045F854
struct {
    // total size: 0x6C
} __vt__21AptScriptFunctionBase; // size: 0x6C, address: 0x8045F8C0

