/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\flashpimenu.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80225E84 -> 0x802276F8
*/
// Range: 0x80225E84 -> 0x80225ED0
void * FlashPiMenu::FlashPiMenu(class FlashPiMenu * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__11FlashPiMenu;
}

// Range: 0x80225ED0 -> 0x80225F10
void * FlashPiMenu::~FlashPiMenu(class FlashPiMenu * const this /* r31 */) {}

// Range: 0x80225F10 -> 0x80225F14
void FlashPiMenu::Update() {}

// Range: 0x80225F14 -> 0x80226044
unsigned char FlashPiMenu::CreateMenuForGoHere(class FlashPiMenu * const this /* r29 */, unsigned char userRequestsGoHere /* r30 */) {
    // Local variables
    class InteractionList interactions; // r1+0x10
    class ObjTestSim testSim; // r1+0x18

    // References
    // -> int MAX_INTERACTIONS;
    // -> class EGlobal _globals;
}

// Range: 0x80226044 -> 0x802260A8
void FlashPiMenu::SwitchToNextObject(class FlashPiMenu * const this /* r30 */) {
    // Local variables
    class InteractorManager * interactorManager; // r31
    unsigned char interactorInitialized; // r0
    class DirectInteractor * dc_interactor; // r0
}

// Range: 0x802260A8 -> 0x8022610C
void FlashPiMenu::SwitchToPreviousObject(class FlashPiMenu * const this /* r30 */) {
    // Local variables
    class InteractorManager * interactorManager; // r31
    unsigned char interactorInitialized; // r0
    class DirectInteractor * dc_interactor; // r0
}

// Range: 0x8022610C -> 0x80226170
void FlashPiMenu::SwitchToExpandedMenu(class FlashPiMenu * const this /* r30 */) {
    // Local variables
    class InteractorManager * interactorManager; // r31
    unsigned char interactorInitialized; // r0
    class DirectInteractor * dc_interactor; // r0
}

// Range: 0x80226170 -> 0x80226294
unsigned char FlashPiMenu::DirectControlCreateObjectMenuFromObjList(class FlashPiMenu * const this /* r25 */, class TNodeList & objlist /* r26 */, unsigned char bShortMenu /* r27 */, unsigned char bMoveOccured /* r28 */, unsigned char dcObjectChange /* r29 */) {
    // Local variables
    class NLIteratorPtrType * nli; // r30
    unsigned char singleMenu; // r31
    class ISimInstance * pIobject; // r0
    class cXObject * pObj; // r4

    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x80226294 -> 0x802263A8
unsigned char FlashPiMenu::CreateObjectMenuFromObjList(class FlashPiMenu * const this /* r27 */, class TNodeList & objlist /* r28 */) {
    // Local variables
    unsigned char userRequestsGoHere; // r30
    unsigned char singleMenu; // r29
    class NLIteratorPtrType * nli; // r31
    class ISimInstance * pIobject; // r0
    class cXObject * pObj; // r4

    // References
    // -> class GameData _gd;
    // -> class EGlobal _globals;
}

// Range: 0x802263A8 -> 0x80226694
void FlashPiMenu::AddObjectInteractionsToMenu(class FlashPiMenu * const this /* r29 */, class cXObject * pObj /* r30 */, unsigned char singleMenu /* r31 */, unsigned char shortMenu /* r24 */) {
    // Local variables
    class InteractionList iList; // r1+0x28
    int useCount; // [invalid]
    class BString2 uniqueStrings[2]; // r1+0x20
    int uniqueStringsIndex; // r26
    int uniqueFound; // r25
    class iterator it; // r1+0x18
    class Interaction * pAction; // r0
    const class BString2 & name; // r27
    int tagSeparator; // r3
    class BString2 tagString; // r1+0x14
    class ERShader * pShader; // r1+0x10
    unsigned int shaderId; // r25
    class BString2 name; // r1+0xC

    // References
    // -> class GameData _gd;
    // -> int MAX_INTERACTIONS;
}

// Range: 0x80226694 -> 0x802267F4
void ColorStringForFlash(class BString2 & text /* r31 */) {
    // Local variables
    const char * pColorFormatString; // r0
    char prefixBuffer[17]; // r1+0x18
    unsigned char interactionColors[4][3]; // r1+0xC
    const unsigned char * pColors; // r26
    int textLength; // r0
    int i; // r26
    class BString2 newText; // r1+0x8
}

// Range: 0x802267F4 -> 0x8022685C
unsigned char ColorIsHigherPriority() {}

// Range: 0x8022685C -> 0x80226FCC
unsigned char FlashPiMenu::CreateInteractionMenu(class cXObject * pLeadObj /* r30 */, class InteractionList & interactions /* r31 */) {
    // Local variables
    class BString2 tag; // r1+0x8C
    class BString2 currentTag; // r1+0x88
    class BString2 interactionText; // r1+0x84
    class ERShader * pShader; // r1+0x80
    int shaderID; // r26
    class iterator it; // r1+0x7C
    class Interaction * pAction; // r29
    const class BString2 & currentName; // r25
    int currentTagEnd; // r24
    enum tColor menuColor; // r25
    enum tColor interactionColor; // r23
    class Interaction * pAction; // r29
    const class BString2 & name; // r29
    int tagSeparator; // r22
    class BString2 menuTag; // r1+0x78
    class Interaction * pAction; // r22
    const class BString2 & name; // r23
    int tagSeparator; // r25
    int secondSeparator; // r0
    class BString2 firstTag; // r1+0x74
    class BString2 secondTag; // r1+0x70
    class BString2 combinedTag; // r1+0x6C
    class ERShader * pItemShader; // r1+0x68
    int shaderID; // r23
    class BString2 useName; // r1+0x64
    class Interaction * pAction; // r22
    const class BString2 & name; // r23
    int ttagSeparator; // r21
    int tsecondSeparator; // r0
    class BString2 tfirstTag; // r1+0x60
    class BString2 tsecondTag; // r1+0x5C
    class ERShader * pItemShader; // r1+0x58
    int shaderID; // r21
    class iterator removeIt; // r1+0x54
    class ERShader * pItemShader; // r1+0x50
    int shaderID; // r21
    class iterator removeIt; // r1+0x4C

    // References
    // -> class GameData _gd;
}

// Range: 0x80226FCC -> 0x80227060
void FlashPiMenu::CleanupGoHereObject(class FlashPiMenu * const this /* r30 */) {
    // Local variables
    unsigned char found; // r31
    class cXObject * srch; // r3
    signed short id; // r0
}

// Range: 0x80227060 -> 0x802270B4
void FlashPiMenu::Die(class FlashPiMenu * const this /* r31 */) {
    // References
    // -> class GameData _gd;
}

// Range: 0x802270B4 -> 0x80227314
void FlashPiMenu::CreateGoHereObjectForMenu(class FlashPiMenu * const this /* r28 */) {
    // Local variables
    signed short objectID; // r31
    class Interactor * pInteractor; // r30
    class ObjSelector * destSel; // r29
    class cXObject * mTarget; // r29
    const class EVec3 * pvcurspos; // r3
    float fy; // f4
    float fx; // f5
    int xint; // r4
    int yint; // r5
    class FTilePt fp; // r1+0x8
    class FindGoodLocationParams fglp; // r1+0x10

    // References
    // -> class EGlobal _globals;
    // -> class RayInteractor * m_SingletonRayInteractor;
}

// Range: 0x80227314 -> 0x802274CC
unsigned char FlashPiMenu::ChooseAction(class FlashPiMenu * const this /* r24 */, class cXObject * pObj /* r25 */, class Interaction * pAction /* r26 */, unsigned char calledFromMenu /* r27 */) {
    // Local variables
    class ObjectModule * objMod; // r29
    class cXObject * pStack; // r0
    class cXObject * pPerson; // r0
    unsigned char bStackObjFound; // r29
    unsigned char bPersonFound; // r28
    class cXObject * srch; // r3
    unsigned char bAddedAction; // r28
    class Interactor * pInteractor; // r0
}

// Range: 0x802274CC -> 0x8022751C
void FlashPiMenu::BackedOutOfMenu() {
    // Local variables
    class Interactor * pInteractor; // r0
}

// Range: 0x8022751C -> 0x80227584
unsigned short * GetObjectMenuName(class cXObject * pObj /* r30 */) {
    // Local variables
    const unsigned short * longstr; // r3
    class ObjSelector * pSelector; // r31
}

// Range: 0x80227584 -> 0x802276F8
int GetShaderForObject(class cXObject * pStackOb /* r29 */, class ERShader * * ppShader /* r31 */) {
    // Local variables
    unsigned int shaderId; // r30
    class cXMTObject * mtobj; // r0
}


