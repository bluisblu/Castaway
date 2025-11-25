/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\_Apt.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802FE0FC -> 0x802FE1F4
*/
// Range: 0x802FE0FC -> 0x802FE108
void * AptAnimationPoolData::__nw() {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x802FE138 -> 0x802FE1AC
void * AptCharacterInst::~AptCharacterInst(struct AptCharacterInst * const this /* r30 */) {
    // References
    // -> struct [anonymous] __vt__16AptCharacterInst;
}

// Range: 0x802FE1AC -> 0x802FE1F0
void AptCharacterInst::DestroyGCPointers(struct AptCharacterInst * const this /* r31 */) {}

// Range: 0x802FE1F0 -> 0x802FE1F4
void AptCharacterInst::PreDestroy() {}


/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\_Apt.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8030CB50 -> 0x8030D3A8
*/
// Range: 0x8030CB50 -> 0x8030CB58
int AptAnimationPoolData::GetMaxIntervalTimers() {}

// Range: 0x8030CB58 -> 0x8030CBB8
void AptIntervalTimer::cleanParams(struct AptIntervalTimer * const this /* r29 */) {
    // Local variables
    int i; // r30
    int nP; // r0
}

// Range: 0x8030CBB8 -> 0x8030CBC0
class AptNativeHash * AptCharacterInst::GetNativeHash() {}

// Range: 0x8030CBC0 -> 0x8030CC1C
void * AptError::AptError(class AptError * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__8AptError;
}

// Range: 0x8030CC1C -> 0x8030CC84
void * AptError::AptError(class AptError * const this /* r30 */, class EAStringC & sMessage /* r31 */) {
    // References
    // -> struct [anonymous] __vt__8AptError;
}

// Range: 0x8030CC84 -> 0x8030CCD0
void * AptLoadVars::AptLoadVars(class AptLoadVars * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__11AptLoadVars;
}

// Range: 0x8030CCD0 -> 0x8030CD94
void * AptTextFormat::AptTextFormat(class AptTextFormat * const this /* r19 */, class AptValue * pFName /* r20 */, float fFonstSize /* f31 */, unsigned int nFontColor /* r21 */, int isBold /* r22 */, int isItalic /* r23 */, int isUnderline /* r24 */, int nUrl /* r25 */, int nTarget /* r26 */, class AptValue * pStringAlignment /* r27 */, int nLMargin /* r28 */, int nRMargin /* r29 */, int nIndentation /* r30 */, int nLeading /* r31 */) {
    // References
    // -> struct [anonymous] __vt__13AptTextFormat;
}

// Range: 0x8030CDF0 -> 0x8030CE04
void TextFormat::__dl(void * p /* r0 */) {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x8030CE04 -> 0x8030CFDC
void * TextFormat::TextFormat(struct TextFormat * const this /* r26 */, class AptValue * pFName /* r27 */, float fFonstSize /* f31 */, unsigned int nFontColor /* r22 */, int isBold /* r23 */, int isItalic /* r24 */, int isUnderline /* r25 */, class AptValue * pStringAlignment /* r28 */, int nLMargin /* r29 */, int nRMargin /* r30 */, int nIndentation /* r31 */) {
    // Local variables
    class EAStringC szBuf; // r1+0x8
}

// Range: 0x8030CFDC -> 0x8030CFE8
void * AptTextFormat::__nw() {
    // References
    // -> class AptValueGC_PoolManager * gpGCPoolManager;
}

// Range: 0x8030CFE8 -> 0x8030D1B0
void * AptDate::AptDate(class AptDate * const this /* r24 */, int year /* r25 */, int month /* r26 */, int date /* r27 */, int hour /* r28 */, int minute /* r29 */, int second /* r30 */, int millisecond /* r31 */) {
    // References
    // -> struct AptUserFunctions gAptFuncs;
    // -> struct [anonymous] __vt__7AptDate;
}

// Range: 0x8030D1B0 -> 0x8030D20C
void * AptStringObject::AptStringObject(class AptStringObject * const this /* r30 */, class AptString * pString /* r31 */) {
    // References
    // -> struct [anonymous] __vt__15AptStringObject;
}

// Range: 0x8030D20C -> 0x8030D268
void AptStringObject::setString(class AptStringObject * const this /* r30 */, class AptString * pString /* r31 */) {
    // References
    // -> static char __PRETTY_FUNCTION__[40];
}

// Range: 0x8030D268 -> 0x8030D280
int isascii() {}

// Range: 0x8030D280 -> 0x8030D290
class AptValue * AptArray::GetAt() {}

// Range: 0x8030D290 -> 0x8030D298
int AptArray::length() {}

// Range: 0x8030D298 -> 0x8030D33C
void * AptStringObject::~AptStringObject(class AptStringObject * const this /* r30 */) {
    // References
    // -> static char __PRETTY_FUNCTION__[36];
    // -> struct [anonymous] __vt__15AptStringObject;
}

// Range: 0x8030D33C -> 0x8030D3A8
class AptValue * AptStringObject::objectMemberLookup(const class AptStringObject * const this /* r29 */, class AptValue * const pContext /* r30 */, const class EAStringC * const pName /* r31 */) {
    // Local variables
    class AptValue * pValue; // r3
}


/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\_Apt.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8030FF94 -> 0x80310230
*/
// Range: 0x8030FF94 -> 0x8030FFA8
void AptCharacterAnimationInst::__dl(void * p /* r0 */) {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x8030FFA8 -> 0x8031000C
void * AptIntervalTimer::~AptIntervalTimer(struct AptIntervalTimer * const this /* r30 */) {}

// Range: 0x8031000C -> 0x80310020
void AptIntervalTimer::__dl(void * p /* r0 */) {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x80310020 -> 0x80310070
void * AptIntervalTimer::AptIntervalTimer(struct AptIntervalTimer * const this /* r31 */) {}

// Range: 0x80310070 -> 0x80310074
void * AptIntervalTimer::__nwa() {}

// Range: 0x80310074 -> 0x80310078
void * ButtonHitTestRecord::__nwa() {}

// Range: 0x80310078 -> 0x803100C4
void * AptActionQueueC::AptActionQueueC(class AptActionQueueC * const this /* r31 */) {}

// Range: 0x803100C4 -> 0x803100C8
void * AptActionPool::__nwa() {}

// Range: 0x803100C8 -> 0x803100D4
void * AptActionQueueC::__nw() {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x803100D4 -> 0x803100E8
void AptAnimationPoolData::__dl(void * p /* r0 */) {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x803100E8 -> 0x80310144
void * AptActionQueueC::~AptActionQueueC(class AptActionQueueC * const this /* r30 */) {}

// Range: 0x80310144 -> 0x80310158
void AptActionQueueC::__dl(void * p /* r0 */) {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x80310158 -> 0x8031015C
void AptActionPool::__dla() {}

// Range: 0x8031015C -> 0x80310160
void ButtonHitTestRecord::__dla() {}

// Range: 0x80310160 -> 0x80310164
void AptIntervalTimer::__dla() {}

// Range: 0x80310164 -> 0x80310178
unsigned char AptActionQueueC::IsLastItem() {}

// Range: 0x80310178 -> 0x8031017C
struct AptActionPool * AptActionQueueC::GetNextItem() {}

// Range: 0x8031017C -> 0x803101A4
struct AptActionPool * AptActionQueueC::IncrementDequeLocation() {
    // Local variables
    struct AptActionPool * ret; // r4
}

// Range: 0x803101A4 -> 0x803101E8
unsigned char AptActionQueueC::IsLastItemOrBeyond() {}

// Range: 0x803101E8 -> 0x803101F0
void AptActionQueueC::SetCurItem() {}

// Range: 0x803101F0 -> 0x803101F8
struct AptActionPool * AptActionQueueC::GetFirstItem() {}

// Range: 0x803101F8 -> 0x80310200
class AptActionQueueC * AptAnimationPoolData::GetActionPool() {}

// Range: 0x80310200 -> 0x80310228
struct AptActionPool * AptActionQueueC::DecrementDequeLocation() {
    // Local variables
    struct AptActionPool * ret; // r0
}

// Range: 0x80310228 -> 0x80310230
struct AptActionPool * AptActionQueueC::GetCurItem() {}


/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\_Apt.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80312294 -> 0x8031232C
*/
// Range: 0x80312294 -> 0x80312328
void AptArray::SetAt(class AptArray * const this /* r27 */, class AptValue * const pNewValue /* r28 */) {
    // Local variables
    class AptValue * pOldValue; // r29

    // References
    // -> static char __PRETTY_FUNCTION__[45];
}

// Range: 0x80312328 -> 0x8031232C
class AptValue * AptArray::ConvertAptValue() {}


/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\_Apt.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803174AC -> 0x803176A4
*/
// Range: 0x803174AC -> 0x803174B4
void AptCharacterInst::SetNativeHash() {}

// Range: 0x803174B4 -> 0x803174DC
void * AptCharacterInst::AptCharacterInst() {
    // References
    // -> struct [anonymous] __vt__16AptCharacterInst;
}

// Range: 0x803174DC -> 0x803174F0
void AptCharacterTextInst::__dl(void * p /* r0 */) {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x803174F0 -> 0x803175B8
void TextFormat::copyTextFormatObj(struct TextFormat * const this /* r30 */, const struct TextFormat * pNewTextObj /* r31 */) {}

// Range: 0x803175B8 -> 0x80317630
void * TextFormat::TextFormat(struct TextFormat * const this /* r30 */, const struct TextFormat * pNewTextObj /* r31 */) {}

// Range: 0x80317630 -> 0x8031763C
void * TextFormat::__nw() {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x8031763C -> 0x803176A4
void * AptTextFormat::AptTextFormat(class AptTextFormat * const this /* r30 */, const struct TextFormat * pNewTextObj /* r31 */) {
    // References
    // -> struct [anonymous] __vt__13AptTextFormat;
}


/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\_Apt.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803178E8 -> 0x803178FC
*/
// Range: 0x803178E8 -> 0x803178FC
void AptCharacterButtonInst::__dl(void * p /* r0 */) {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}


/*
    Compile unit: C:\dev\TSC5\src\target\external\apt\source\Apt\_Apt.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8031A208 -> 0x8031A388
*/
// Range: 0x8031A208 -> 0x8031A218
int AptCharacterSpriteInstBase::HasClipAction() {}

// Range: 0x8031A218 -> 0x8031A27C
void AptAnimationPoolData::addFunctionFront(class AptCIH * pContext /* r28 */, class AptValue * pFuncDef /* r29 */, int nParams /* r30 */, unsigned int input /* r31 */) {}

// Range: 0x8031A27C -> 0x8031A2E0
void AptAnimationPoolData::addFunctionBack(class AptCIH * pContext /* r28 */, class AptValue * pFuncDef /* r29 */, int nParams /* r30 */, unsigned int input /* r31 */) {}

// Range: 0x8031A2E0 -> 0x8031A334
void AptAnimationPoolData::addActionBack(struct AptActionBlock * pActionBlock /* r29 */, class AptCIH * pCIH /* r30 */, unsigned int input /* r31 */) {}

// Range: 0x8031A334 -> 0x8031A388
void AptAnimationPoolData::addActionFront(struct AptActionBlock * pActionBlock /* r29 */, class AptCIH * pCIH /* r30 */, unsigned int input /* r31 */) {}


/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\_Apt.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8031D96C -> 0x8031D9C8
*/
// Range: 0x8031D96C -> 0x8031D9C8
void * AptDate::~AptDate(class AptDate * const this /* r30 */) {}


/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\_Apt.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80320080 -> 0x8032037C
*/
// Range: 0x80320080 -> 0x8032008C
void * AptCharacterMorphInst::__nw() {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x803200C8 -> 0x803200D4
void * AptCharacterShapeInst::__nw() {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x80320110 -> 0x8032011C
void * AptCharacterStaticTextInst::__nw() {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x8032011C -> 0x80320128
void * AptCharacterTextInst::__nw() {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x80320128 -> 0x80320194
void * AptCharacterButtonInst::AptCharacterButtonInst(struct AptCharacterButtonInst * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__22AptCharacterButtonInst;
}

// Range: 0x80320194 -> 0x803201A0
void * AptCharacterButtonInst::__nw() {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x803201DC -> 0x803201E8
void * AptCharacterSpriteInst::__nw() {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x803201E8 -> 0x80320200
void AptCharacterSpriteInstBase::RemoveClipAction() {}

// Range: 0x80320200 -> 0x80320218
void AptCharacterSpriteInstBase::SetClipAction() {}

// Range: 0x80320218 -> 0x8032022C
void AptCharacterSpriteInst::__dl(void * p /* r0 */) {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x80320288 -> 0x8032029C
void AptCharacterMorphInst::__dl(void * p /* r0 */) {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x803202F8 -> 0x8032030C
void AptCharacterStaticTextInst::__dl(void * p /* r0 */) {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}

// Range: 0x80320368 -> 0x8032037C
void AptCharacterShapeInst::__dl(void * p /* r0 */) {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}


/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\_Apt.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803247E4 -> 0x803247F0
*/
// Range: 0x803247E4 -> 0x803247F0
void * AptCharacterAnimationInst::__nw() {
    // References
    // -> class DOGMA_PoolManager * gpNonGCPoolManager;
}


/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\_Apt.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80327BAC -> 0x80327CC0
*/
// Range: 0x80327BAC -> 0x80327C08
void * AptMathObj::~AptMathObj(class AptMathObj * const this /* r30 */) {}

// Range: 0x80327C08 -> 0x80327C64
void * AptKey::~AptKey(class AptKey * const this /* r30 */) {}

// Range: 0x80327C64 -> 0x80327CC0
void * AptStage::~AptStage(class AptStage * const this /* r30 */) {}


/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\_Apt.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8032A5F8 -> 0x8032A654
*/
// Range: 0x8032A5F8 -> 0x8032A654
void * AptSound::~AptSound(class AptSound * const this /* r30 */) {}


/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\_Apt.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8032C8C4 -> 0x8032C944
*/
// Range: 0x8032C8C4 -> 0x8032C930
void * AptTextFormat::~AptTextFormat(class AptTextFormat * const this /* r30 */) {}

// Range: 0x8032C930 -> 0x8032C944
void AptTextFormat::__dl(void * p /* r0 */) {
    // References
    // -> class AptValueGC_PoolManager * gpGCPoolManager;
}


/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\_Apt.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8032F2D0 -> 0x8032F5BC
*/
// Range: 0x8032F2D0 -> 0x8032F320
void * AptStage::AptStage(class AptStage * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__8AptStage;
}

// Range: 0x8032F320 -> 0x8032F370
void * AptKey::AptKey(class AptKey * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__6AptKey;
}

// Range: 0x8032F370 -> 0x8032F3C0
void * AptMathObj::AptMathObj(class AptMathObj * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__10AptMathObj;
}

// Range: 0x8032F3C0 -> 0x8032F418
void * AptExtern::AptExtern(class AptExtern * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__9AptExtern;
}

// Range: 0x8032F418 -> 0x8032F470
void * AptNone::AptNone(class AptNone * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__7AptNone;
}

// Range: 0x8032F470 -> 0x8032F474
void AptNone::AddRef() {}

// Range: 0x8032F474 -> 0x8032F478
void AptNone::Release() {}

// Range: 0x8032F478 -> 0x8032F4D4
void * AptNone::~AptNone(class AptNone * const this /* r30 */) {}

// Range: 0x8032F4D4 -> 0x8032F558
unsigned char AptExtern::objectMemberSet(const class EAStringC * const pName /* r30 */, class AptValue * const pValue /* r31 */) {
    // Local variables
    class EAStringC sBuf; // r1+0x8

    // References
    // -> struct AptUserFunctions gAptFuncs;
}

// Range: 0x8032F558 -> 0x8032F55C
void AptExtern::AddRef() {}

// Range: 0x8032F55C -> 0x8032F560
void AptExtern::Release() {}

// Range: 0x8032F560 -> 0x8032F5BC
void * AptExtern::~AptExtern(class AptExtern * const this /* r30 */) {}


