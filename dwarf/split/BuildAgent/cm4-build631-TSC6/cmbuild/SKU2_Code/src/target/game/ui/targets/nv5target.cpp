/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\ui\targets\nv5target.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801D30A4 -> 0x801D78FC
*/
// Range: 0x801D30A4 -> 0x801D30BC
void * UIInventoryItem::UIInventoryItem() {}

// Range: 0x801D30BC -> 0x801D3134
void * UIInventoryItem::~UIInventoryItem(class UIInventoryItem * const this /* r30 */) {}

// Range: 0x801D3134 -> 0x801D3294
void UIInventoryItem::Initialize(class UIInventoryItem * const this /* r28 */, class InventoryItem * pItem /* r29 */, int index /* r30 */) {}

// Range: 0x801D3294 -> 0x801D329C
int UIInventoryItem::GetSimulatorIndex() {}

// Range: 0x801D329C -> 0x801D32A4
class UICatalogItemBase * UIInventoryItem::GetItem() {}

// Range: 0x801D32A4 -> 0x801D3318
int UIInventoryItem::GetCount(class UIInventoryItem * const this /* r31 */) {}

// Range: 0x801D3318 -> 0x801D337C
int UIInventoryItem::GetNumInfoLines(class UIInventoryItem * const this /* r30 */) {
    // Local variables
    int ret; // r31
}

// Range: 0x801D337C -> 0x801D33EC
void UIInventoryItem::GetInfoLine(class UIInventoryItem * const this /* r30 */, unsigned short * output /* r31 */) {}

// Range: 0x801D33EC -> 0x801D34E4
unsigned char UIInventoryItem::GetOwnerInfo(class UIInventoryItem * const this /* r31 */, unsigned short * output /* r30 */) {
    // Local variables
    class Neighbor * neighbor; // r31
    class BString2 fullname; // r1+0xC

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801D34E4 -> 0x801D3598
unsigned char UIInventoryItem::GetStatusInfo(class UIInventoryItem * const this /* r30 */, unsigned short * output /* r31 */) {
    // Local variables
    const char * data; // r0

    // References
    // -> class EGlobal _globals;
    // -> char * ItemStatusArray[4];
}

// Range: 0x801D3598 -> 0x801D361C
unsigned char UIInventoryItem::IsItemFoodIngredient(class InventoryItem * pItem /* r31 */) {}

// Range: 0x801D361C -> 0x801D36A0
unsigned char UIInventoryItem::IsItemFastFood(class InventoryItem * pItem /* r31 */) {}

// Range: 0x801D36A0 -> 0x801D3720
unsigned char UIInventoryItem::IsItemAnyFood(class InventoryItem * pItem /* r31 */) {}

// Range: 0x801D3720 -> 0x801D3768
unsigned char UIInventoryItem::IsItemTool() {}

// Range: 0x801D3768 -> 0x801D37B0
unsigned char UIInventoryItem::IsItemFastTool() {}

// Range: 0x801D37B0 -> 0x801D3800
unsigned char UIInventoryItem::IsItemAnyTool(class InventoryItem * pItem /* r31 */) {}

// Range: 0x801D3800 -> 0x801D3928
unsigned char UIInventoryItem::IsItemResource(class InventoryItem * pItem /* r31 */) {}

// Range: 0x801D3928 -> 0x801D3A40
unsigned char UIInventoryItem::IsItemObject(class InventoryItem * pItem /* r31 */) {}

// Range: 0x801D3A40 -> 0x801D3A88
unsigned char UIInventoryItem::IsItemClothing() {}

// Range: 0x801D3A88 -> 0x801D3B5C
unsigned char UIInventoryItem::IsItemFruit(class InventoryItem * pItem /* r29 */) {
    // Local variables
    unsigned char rc; // r31
    class IngredientManager * pIngredientManager; // r30
    const struct InventoryTokens * pToken; // r0
    const struct IngredientToken * pIngredient; // r0
}

// Range: 0x801D3B5C -> 0x801D3C30
unsigned char UIInventoryItem::IsItemVeggieNutsGrains(class InventoryItem * pItem /* r29 */) {
    // Local variables
    unsigned char rc; // r31
    class IngredientManager * pIngredientManager; // r30
    const struct InventoryTokens * pToken; // r0
    const struct IngredientToken * pIngredient; // r0
}

// Range: 0x801D3C30 -> 0x801D3CFC
unsigned char UIInventoryItem::IsItemSmallFish(class InventoryItem * pItem /* r29 */) {
    // Local variables
    unsigned char rc; // r31
    class IngredientManager * pIngredientManager; // r30
    const struct InventoryTokens * pToken; // r0
    const struct IngredientToken * pIngredient; // r0
}

// Range: 0x801D3CFC -> 0x801D3DC8
unsigned char UIInventoryItem::IsItemMediumFish(class InventoryItem * pItem /* r29 */) {
    // Local variables
    unsigned char rc; // r31
    class IngredientManager * pIngredientManager; // r30
    const struct InventoryTokens * pToken; // r0
    const struct IngredientToken * pIngredient; // r0
}

// Range: 0x801D3DC8 -> 0x801D3E94
unsigned char UIInventoryItem::IsItemLargeFish(class InventoryItem * pItem /* r29 */) {
    // Local variables
    unsigned char rc; // r31
    class IngredientManager * pIngredientManager; // r30
    const struct InventoryTokens * pToken; // r0
    const struct IngredientToken * pIngredient; // r0
}

// Range: 0x801D3E94 -> 0x801D3F60
unsigned char UIInventoryItem::IsItemMeat(class InventoryItem * pItem /* r29 */) {
    // Local variables
    unsigned char rc; // r31
    class IngredientManager * pIngredientManager; // r30
    const struct InventoryTokens * pToken; // r0
    const struct IngredientToken * pIngredient; // r0
}

// Range: 0x801D3F60 -> 0x801D402C
unsigned char UIInventoryItem::IsItemSpice(class InventoryItem * pItem /* r29 */) {
    // Local variables
    unsigned char rc; // r31
    class IngredientManager * pIngredientManager; // r30
    const struct InventoryTokens * pToken; // r0
    const struct IngredientToken * pIngredient; // r0
}

// Range: 0x801D402C -> 0x801D4040
void * UIInventoryTab::UIInventoryTab() {}

// Range: 0x801D4040 -> 0x801D4094
void * UIInventoryTab::~UIInventoryTab(class UIInventoryTab * const this /* r30 */) {}

// Range: 0x801D4094 -> 0x801D40F8
void UIInventoryTab::Initialize(class UIInventoryTab * const this /* r29 */, class InventoryItems * pFamilyInventory /* r30 */, unsigned char (* filterFcn)(class InventoryItem *) /* r31 */) {
    // References
    // -> class GameData _gd;
}

// Range: 0x801D40F8 -> 0x801D4100
int UIInventoryTab::GetCount() {}

// Range: 0x801D4100 -> 0x801D412C
class UIInventoryItem * UIInventoryTab::GetItem() {}

// Range: 0x801D412C -> 0x801D426C
void UIInventoryTab::Rebuild(class UIInventoryTab * const this /* r28 */) {
    // Local variables
    int numItems; // r0
    int i; // r29

    // References
    // -> class GameData _gd;
}

// Range: 0x801D426C -> 0x801D42B8
void UIInventoryTab::ClearArray(class UIInventoryTab * const this /* r31 */) {}

// Range: 0x801D42B8 -> 0x801D4464
void * UIInventoryManager::UIInventoryManager(class UIInventoryManager * const this /* r30 */, int mode /* r31 */) {
    // References
    // -> class GameData _gd;
}

// Range: 0x801D4464 -> 0x801D4474
int UIInventoryManager::GetCount() {}

// Range: 0x801D4474 -> 0x801D448C
class UIInventoryItem * UIInventoryManager::GetItem(enum NV5_InventoryTabEnum tabNum /* r0 */) {}

// Range: 0x801D448C -> 0x801D44D4
void UIInventoryManager::RemoveItem(class UIInventoryManager * const this /* r31 */) {
    // Local variables
    class UIInventoryItem * item; // r0
}

// Range: 0x801D44D4 -> 0x801D454C
unsigned char UIInventoryManager::AddObject(class UIInventoryManager * const this /* r30 */, class cXObject * obj /* r31 */) {}

// Range: 0x801D454C -> 0x801D4598
void UIInventoryManager::RebuildAll() {
    // Local variables
    int i; // r30
}

// Range: 0x801D4598 -> 0x801D45DC
void * NV5InteractorManager::NV5InteractorManager(class NV5InteractorManager * const this /* r31 */) {}

// Range: 0x801D45DC -> 0x801D466C
void * NV5InteractorManager::~NV5InteractorManager(class NV5InteractorManager * const this /* r30 */) {}

// Range: 0x801D466C -> 0x801D46BC
void NV5InteractorManager::Initialize(class NV5InteractorManager * const this /* r31 */) {}

// Range: 0x801D46BC -> 0x801D4754
void NV5InteractorManager::EnterToolMode(class NV5InteractorManager * const this /* r29 */, enum NV5ToolMode mode /* r30 */, class UIInventoryItem * item /* r31 */) {}

// Range: 0x801D4754 -> 0x801D47AC
void NV5InteractorManager::ExitInteractionMode(class NV5InteractorManager * const this /* r31 */) {
    // References
    // -> class GameData _gd;
}

// Range: 0x801D47AC -> 0x801D47F8
void NV5InteractorManager::Update(class NV5InteractorManager * const this /* r31 */) {}

// Range: 0x801D47F8 -> 0x801D494C
void NV5InteractorManager::EnterPlaceMode(class NV5InteractorManager * const this /* r28 */) {
    // Local variables
    struct BBHPriceInfo priceInfo; // r1+0x8
    class ObjSelector * pObjSelector; // r29
    struct ObjDefinition * pObjDefinition; // r0
    struct PlaceManipulatorParams params; // r1+0x18
}

// Range: 0x801D494C -> 0x801D4968
void NV5InteractorManager::static_PlaceManipulatorCallback() {
    // Local variables
    class NV5InteractorManager * pThis; // r0
}

// Range: 0x801D4968 -> 0x801D4A70
unsigned char NV5InteractorManager::PlaceModeCallback(class NV5InteractorManager * const this /* r29 */, const struct CallbackData * pData /* r30 */) {
    // Local variables
    const struct CallbackData * pPlaceData; // r0

    // References
    // -> class GameData _gd;
}

// Range: 0x801D4A70 -> 0x801D4B20
void NV5InteractorManager::EnterGrabMode(class NV5InteractorManager * const this /* r30 */) {
    // Local variables
    struct GrabManipulatorParams params; // r1+0x8
    class Interactor * pInteractor; // r0
}

// Range: 0x801D4B20 -> 0x801D4B94
void NV5InteractorManager::UpdateBBHState(class NV5InteractorManager * const this /* r28 */, struct BBHPriceInfo * info /* r29 */, unsigned int shaderId /* r30 */, int mode /* r31 */) {}

// Range: 0x801D4B94 -> 0x801D4BB0
void NV5InteractorManager::static_GrabManipulatorCallback() {
    // Local variables
    class NV5InteractorManager * pThis; // r0
}

// Range: 0x801D4BB0 -> 0x801D4CE8
unsigned char NV5InteractorManager::GrabModeCallback(class NV5InteractorManager * const this /* r28 */, const struct CallbackData * pData /* r29 */) {
    // Local variables
    const struct CallbackData * pGrabData; // r0
    unsigned int shaderID; // r30
    struct BBHPriceInfo priceInfo; // r1+0x8

    // References
    // -> class GameData _gd;
}

// Range: 0x801D4CE8 -> 0x801D4F0C
void NV5InteractorManager::CreateSellDialog(class NV5InteractorManager * const this /* r27 */, class cXObject * pObj /* r28 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801D4F0C -> 0x801D4F30
void NV5InteractorManager::CreateInvErrorDialog() {}

// Range: 0x801D4F30 -> 0x801D500C
void NV5InteractorManager::Sell_DialogSelectionCallback(class NV5InteractorManager * const this /* r30 */) {
    // Local variables
    class GrabManipulator * pGrabManipulator; // r31
    class cXObject * sellingObj; // r4
}

// Range: 0x801D500C -> 0x801D5618
void * NV5Target::NV5Target(class NV5Target * const this /* r30 */, enum NV5_InventoryMode mode /* r27 */) {
    // References
    // -> class AptViewer * _gpAptViewer;
    // -> static const char * const CAT_XCallout;
    // -> int m_restoreVisualTab[4];
    // -> class GameData _gd;
    // -> static const char * const NV5TargetName;
    // -> enum NV5_InventoryMode m_Mode;
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9NV5Target;
}

// Range: 0x801D5680 -> 0x801D57F0
void * NV5Target::~NV5Target(class NV5Target * const this /* r29 */) {
    // References
    // -> class AptViewer * _gpAptViewer;
    // -> enum NV5_InventoryMode m_Mode;
    // -> class EGlobal _globals;
    // -> struct [anonymous] __vt__9NV5Target;
}

// Range: 0x801D57F0 -> 0x801D5804
void NV5Target::EnterToolMode() {}

// Range: 0x801D5804 -> 0x801D5820
void NV5Target::ExitToolMode() {}

// Range: 0x801D5820 -> 0x801D5828
unsigned char NV5Target::InToolMode() {}

// Range: 0x801D5828 -> 0x801D5F18
void NV5Target::SetVariable(class NV5Target * const this /* r31 */, const char * zVarName /* r28 */, const char * zValue /* r29 */) {
    // Local variables
    int visualTab; // r1+0x18
    class UIInventoryItem * pUIItem; // r30
    unsigned char playErrorSound; // r29
    class ClothingItem * pClothingItem; // r0
    unsigned char gender; // r0
    int tabNum; // r1+0x14
    int numCellsNeeded; // r1+0x10
    int shaderIndex; // r1+0xC
    int itemIndex; // r1+0x8
    int resID; // r29
    class UIInventoryItem * pUIInventoryItem; // r0

    // References
    // -> class EGlobal _globals;
    // -> static int NV5VisibilityTable[4][12];
    // -> class GameData _gd;
    // -> int m_restoreVisualTab[4];
    // -> enum NV5_InventoryMode m_Mode;
}

// Range: 0x801D5F18 -> 0x801D65FC
char * NV5Target::GetVariable(class NV5Target * const this /* r30 */, const char * zVarName /* r28 */) {
    // Local variables
    char * pResultString; // r31
    int numTabs; // r0
    int visualTab; // r29
    int count; // r5
    int i; // r0
    unsigned int index; // r1+0x8
    int scanresult; // r0
    char * unavString; // r29
    char * unavString; // r29
    class UIInventoryItem * item; // r0
    unsigned char bFound; // r29

    // References
    // -> int m_restoreVisualTab[4];
    // -> enum NV5_InventoryMode m_Mode;
}

// Range: 0x801D65FC -> 0x801D6B58
unsigned short * NV5Target::GetLocalizable(class NV5Target * const this /* r29 */, const char * zVarName /* r30 */) {
    // Local variables
    unsigned short widestring[4096]; // r1+0x30
    class UIInventoryItem * pItem; // r0
    class UIInventoryItem * pItem; // r0
    unsigned int index; // r1+0x28
    int scanresult; // r0
    unsigned short * pResultString; // r31

    // References
    // -> enum NV5_InventoryMode m_Mode;
    // -> static const char * const CAT_XCallout;
    // -> class EGlobal _globals;
    // -> static struct NV5TabInfo NV5Tabs[12];
}

// Range: 0x801D6B58 -> 0x801D6BEC
void NV5Target::Update(class NV5Target * const this /* r31 */) {
    // Local variables
    class EVec2 dummy; // r1+0x8

    // References
    // -> class EControllerManager * _pCtrlMan;
    // -> class EGlobal _globals;
}

// Range: 0x801D6BEC -> 0x801D6DB0
unsigned char NV5Target::end_dialog(class NV5Target * const this /* r29 */, unsigned char bAccepted /* r31 */, unsigned char skipBackToGame /* r30 */) {
    // References
    // -> class GameData _gd;
    // -> enum NV5_InventoryMode m_Mode;
    // -> signed short m_ReturnInventoryTokenId;
    // -> signed short m_ReturnInventoryIndex;
    // -> int m_ReturnGUID;
}

// Range: 0x801D6DB0 -> 0x801D6F74
void NV5Target::UpdatedSelectedItemInfo(class NV5Target * const this /* r27 */) {
    // Local variables
    class UICatalogItemBase * pItem; // r29
    unsigned int resid; // r1+0x8
    struct ObjectDefinition info; // r1+0x10
    int i; // r28

    // References
    // -> unsigned int MotiveShaderIDs[18];
    // -> static const char * const CAT_ObjDisp2D;
}

// Range: 0x801D6F74 -> 0x801D7068
void NV5Target::NV5VisibilityCallFunction(class NV5Target * const this /* r31 */) {
    // References
    // -> class EGlobal _globals;
}

// Range: 0x801D7068 -> 0x801D70B4
void NV5Target::ExitBBHMode(class NV5Target * const this /* r31 */) {}

// Range: 0x801D70B4 -> 0x801D71B8
char * NV5Target::GetUnavailableList(class NV5Target * const this /* r27 */) {
    // Local variables
    int tabSize; // r0
    char * retData; // r30
    char * retInsert; // r29
    int i; // r28
    class UIInventoryItem * item; // r0

    // References
    // -> enum NV5_InventoryMode m_Mode;
}

// Range: 0x801D71B8 -> 0x801D7298
char * NV5Target::GetCountList(class NV5Target * const this /* r27 */) {
    // Local variables
    int tabSize; // r0
    char * retData; // r30
    char * retInsert; // r29
    int i; // r28
    class UIInventoryItem * item; // r0
    int count; // r5
}

// Range: 0x801D7298 -> 0x801D72F0
void NV5Target::RemoveItem(class NV5Target * const this /* r30 */, class UIInventoryItem * item /* r31 */) {
    // Local variables
    class UIInventoryItem * test; // r0
}

// Range: 0x801D72F0 -> 0x801D7300
class UIInventoryItem * NV5Target::GetCurrentItem() {}

// Range: 0x801D7300 -> 0x801D7324
void NV5Target::SetCurrentTab() {
    // References
    // -> static int NV5VisibilityTable[4][12];
    // -> enum NV5_InventoryMode m_Mode;
}

// Range: 0x801D7324 -> 0x801D73CC
unsigned char NV5Target::IsItemChoosable() {
    // References
    // -> enum NV5_InventoryMode m_Mode;
}

// Range: 0x801D73CC -> 0x801D73FC
int NV5Target::GetNumTabs() {
    // References
    // -> static int NV5NumTabs[4];
}

// Range: 0x801D73FC -> 0x801D74F8
void NV5Target::InstallCurrentTabShaders(class NV5Target * const this /* r26 */) {
    // Local variables
    int i; // r27
    int shaderIndex; // r31

    // References
    // -> enum NV5_InventoryMode m_Mode;
    // -> static int NV5VisibilityTable[4][12];
    // -> static struct NV5TabInfo NV5Tabs[12];
}

// Range: 0x801D74F8 -> 0x801D75F4
void NV5Target::HighlightTab(class NV5Target * const this /* r25 */, enum NV5_InventoryTabEnum pHighlightedTab /* r26 */) {
    // Local variables
    int i; // r27
    int shaderIndex; // r31

    // References
    // -> enum NV5_InventoryMode m_Mode;
    // -> static int NV5VisibilityTable[4][12];
    // -> static struct NV5TabInfo NV5Tabs[12];
}

// Range: 0x801D75F4 -> 0x801D7640
unsigned char NV5Target::AddObject(class NV5Target * const this /* r31 */) {}

// Range: 0x801D7640 -> 0x801D76A0
unsigned char NV5Target::FlashScreenReady() {
    // Local variables
    class UIScreenManager * pUISM; // r31

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801D76A0 -> 0x801D7768
void NV5Target::DoEatFromInventory(class UIInventoryItem * pUIInventoryItem /* r29 */) {
    // Local variables
    class Behavior * beh; // r30
    signed short params[4]; // r1+0x8

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801D7768 -> 0x801D781C
void NV5Target::DoPutInHand(class UIInventoryItem * pUIInventoryItem /* r29 */) {
    // Local variables
    class Behavior * beh; // r30
    signed short params[4]; // r1+0x8

    // References
    // -> class EGlobal _globals;
}

// Range: 0x801D781C -> 0x801D78FC
unsigned char NV5Target::DoWearFromInventory(class UIInventoryItem * pUIInventoryItem /* r28 */) {
    // Local variables
    unsigned char rc; // r30
    class ClothingItem * pClothingItem; // r29
    class InventoryItems * pInventory; // r28
    unsigned char occured; // r0

    // References
    // -> class EGlobal _globals;
}


