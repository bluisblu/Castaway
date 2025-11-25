/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\wrapper\wrapper.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8009C0A8 -> 0x8009D8E8
*/
// Range: 0x8009C0A8 -> 0x8009C20C
static void DrawIcon(class ERC * prc /* r27 */, class EVec2 & rSize /* r28 */, class EVec4 & vColor /* r29 */, class ERShader * pShader /* r30 */) {
    // Local variables
    class EVec2 vPos; // r1+0x20
}

// Range: 0x8009C20C -> 0x8009C280
void TextBaseItem::Startup(class TextBaseItem * const this /* r31 */) {}

// Range: 0x8009C280 -> 0x8009C370
void TextBaseItem::Draw(class TextBaseItem * const this /* r29 */, class ERC * prc /* r30 */, float fAlpha /* f30 */) {
    // Local variables
    enum ItemStyle oldStyle; // r31
    float oldSize; // f31
}

// Range: 0x8009C370 -> 0x8009C3B4
void TextBaseItem::SetText(class TextBaseItem * const this /* r31 */) {}

// Range: 0x8009C3B4 -> 0x8009C4C4
void TextBaseItem::SetStyle(class TextBaseItem * const this /* r27 */, enum ItemStyle itemStyle /* r28 */) {
    // References
    // -> class EVec4 _ORANGE;
    // -> class EVec4 _YELLOW;
    // -> class EVec4 _LT_GREAY;
    // -> class EVec4 _DK_GREAY;
    // -> class EVec4 _BLUE;
    // -> class EVec4 _BLUEBLACK;
    // -> class EVec4 _WHITE;
    // -> static struct Style s_style[10];
    // -> static unsigned char s_bStyleInited;
}

// Range: 0x8009C4C4 -> 0x8009C50C
void TextItem::Startup(class TextItem * const this /* r31 */) {}

// Range: 0x8009C50C -> 0x8009C554
void MenuItem::Startup(class MenuItem * const this /* r31 */) {}

// Range: 0x8009C554 -> 0x8009C59C
void ButtonItem::Startup(class ButtonItem * const this /* r31 */) {}

// Range: 0x8009C59C -> 0x8009C5D0
void IconItem::Startup(class IconItem * const this /* r31 */) {}

// Range: 0x8009C5D0 -> 0x8009C5D4
void IconItem::Shutdown() {}

// Range: 0x8009C5D4 -> 0x8009C68C
void IconItem::Draw(class IconItem * const this /* r30 */, class ERC * prc /* r31 */, float fAlpha /* f31 */) {
    // Local variables
    class EVec4 tColor; // r1+0x8
}

// Range: 0x8009C68C -> 0x8009C6CC
void IconItem::SetShader(class IconItem * const this /* r31 */) {
    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x8009C6CC -> 0x8009C710
void IconItem::ReleaseShader(class IconItem * const this /* r31 */) {}

// Range: 0x8009C710 -> 0x8009C760
void WrapperPaneBase::Startup(class WrapperPaneBase * const this /* r31 */) {}

// Range: 0x8009C760 -> 0x8009C8AC
void WrapperPaneBase::Shutdown(class WrapperPaneBase * const this /* r24 */) {
    // Local variables
    int i; // r25

    // References
    // -> static char * s_pButtonName[7];
    // -> class EGlobal _globals;
}

// Range: 0x8009C8AC -> 0x8009CAFC
void WrapperPaneBase::DrawBackground(class WrapperPaneBase * const this /* r23 */, class ERC * prc /* r24 */) {
    // Local variables
    int i; // r26
    class ButtonItem * pButton; // r25
    float fAlpha; // f31

    // References
    // -> static char * s_pButtonName[7];
    // -> class EGlobal _globals;
}

// Range: 0x8009CAFC -> 0x8009CBA8
void WrapperPaneBase::DrawItems(class WrapperPaneBase * const this /* r27 */, class ERC * prc /* r28 */, unsigned char bDrawBeforeApt /* r29 */) {
    // Local variables
    class PaneItem * * itemIter; // r31
    class PaneItem * pItem; // r30
}

// Range: 0x8009CBA8 -> 0x8009CC4C
void WrapperPaneBase::SetSelected(class WrapperPaneBase * const this /* r26 */, enum ItemType type /* r27 */, int enabledItemIndex /* r28 */) {
    // Local variables
    class PaneItem * * itemIter; // r31
    int iEnabledItemIndex; // r30
    class PaneItem * pItem; // r29
}

// Range: 0x8009CC4C -> 0x8009CCE8
class PaneItem * WrapperPaneBase::GetSelectedItem(class WrapperPaneBase * const this /* r28 */, enum ItemType type /* r29 */) {
    // Local variables
    class PaneItem * * itemIter; // r31
    class PaneItem * pItem; // r30
}

// Range: 0x8009CCE8 -> 0x8009CD78
class PaneItem * WrapperPaneBase::GetItem(class WrapperPaneBase * const this /* r26 */, enum ItemType type /* r27 */, int index /* r28 */) {
    // Local variables
    class PaneItem * * itemIter; // r31
    int iItemIndex; // r30
    class PaneItem * pItem; // r29
}

// Range: 0x8009CD78 -> 0x8009CDAC
void WrapperPaneBase::SetItemText(const unsigned short * text /* r31 */) {
    // Local variables
    class PaneItem * pItem; // r0
}

// Range: 0x8009CDAC -> 0x8009CDE0
void WrapperPaneBase::SetItemFontSize(float fValue /* f31 */) {
    // Local variables
    class PaneItem * pItem; // r0
}

// Range: 0x8009CDE0 -> 0x8009CE14
void WrapperPaneBase::SetItemStyle(enum ItemStyle itemStyle /* r31 */) {
    // Local variables
    class PaneItem * pItem; // r0
}

// Range: 0x8009CE14 -> 0x8009CE54
void WrapperPaneBase::SetItemPos(class EVec2 & vPos /* r31 */) {
    // Local variables
    class PaneItem * pItem; // r0
}

// Range: 0x8009CE54 -> 0x8009CF44
int WrapperPaneBase::CalculateMenuWidthPixels(class WrapperPaneBase * const this /* r29 */) {
    // Local variables
    float fWidestWidthFound; // f31
    class PaneItem * * itemIter; // r31
    class PaneItem * pItem; // r30
    class EVec2 vSize; // r1+0x8
    float fScreenX; // f0
    int iWidestPixels; // r0

    // References
    // -> class EGraphics * _pGfx;
}

// Range: 0x8009CF44 -> 0x8009CF84
void WrapperPaneBase::SetBackgroundShader(class WrapperPaneBase * const this /* r31 */) {
    // References
    // -> class EShaderManager _shaderman;
}

// Range: 0x8009CF84 -> 0x8009CFC8
void WrapperPaneBase::ReleaseBackgroundShader(class WrapperPaneBase * const this /* r31 */) {}

// Range: 0x8009CFC8 -> 0x8009D090
void WrapperPaneBase::DeleteItemList(class WrapperPaneBase * const this /* r29 */) {
    // Local variables
    class PaneItem * * itemIter; // r31
    class PaneItem * pItem; // r30
    class vector temp; // r1+0x10
}

// Range: 0x8009D090 -> 0x8009D1C8
void WrapperPaneBase::ShowEnabledButtons(class WrapperPaneBase * const this /* r25 */) {
    // Local variables
    int i; // r26
    class ButtonItem * pButton; // r3

    // References
    // -> static char * s_pButtonName[7];
    // -> class EGlobal _globals;
}

// Range: 0x8009D1C8 -> 0x8009D300
void WrapperPaneBase::HideEnabledButtons(class WrapperPaneBase * const this /* r25 */) {
    // Local variables
    int i; // r26
    class ButtonItem * pButton; // r3

    // References
    // -> static char * s_pButtonName[7];
    // -> class EGlobal _globals;
}

// Range: 0x8009D300 -> 0x8009D384
void DialogPaneBase::Startup(class DialogPaneBase * const this /* r31 */) {}

// Range: 0x8009D384 -> 0x8009D388
void DialogPaneBase::Shutdown() {}

// Range: 0x8009D388 -> 0x8009D3C0
int MenuPane::GetSelectedMenuItemValue() {
    // Local variables
    class PaneItem * pItem; // r0
}

// Range: 0x8009D3C0 -> 0x8009D3C8
void Wrapper::WrapperStartup() {}

// Range: 0x8009D3C8 -> 0x8009D4AC
void Wrapper::WrapperShutdown(class Wrapper * const this /* r29 */) {
    // Local variables
    class WrapperPaneBase * * paneIter; // r31
    class WrapperPaneBase * pPane; // r30
    class vector temp; // r1+0x10

    // References
    // -> class EGlobal _globals;
}

// Range: 0x8009D4AC -> 0x8009D4B0
void Wrapper::WrapperRestoreMessageHandler() {}

// Range: 0x8009D4B0 -> 0x8009D4B4
void Wrapper::WrapperRemoveMessageHandler() {}

// Range: 0x8009D4B4 -> 0x8009D4B8
void Wrapper::WrapperReset() {}

// Range: 0x8009D4B8 -> 0x8009D4BC
void Wrapper::WrapperUpdate() {}

// Range: 0x8009D4BC -> 0x8009D60C
void Wrapper::WrapperDraw(class Wrapper * const this /* r27 */, class ERC * prc /* r28 */) {
    // Local variables
    class WrapperPaneBase * * paneIter; // r31
    unsigned char bAnyVisiblePanes; // r30
    class WrapperPaneBase * pPane; // r29
    class WrapperPaneBase * pPane; // r29
}

// Range: 0x8009D60C -> 0x8009D654
class WrapperPaneBase * Wrapper::AddPane(class Wrapper * const this /* r31 */, class WrapperPaneBase * pPane /* r1+0x8 */) {}

// Range: 0x8009D654 -> 0x8009D6C8
class WrapperPaneBase * Wrapper::FindPane(class Wrapper * const this /* r29 */, class WrapperPaneBase * pState /* r30 */) {
    // Local variables
    class WrapperPaneBase * * paneIter; // r31
    class WrapperPaneBase * pPane; // r3
}

// Range: 0x8009D6C8 -> 0x8009D7B8
static void __sinit_\game_misc_unity_cpp() {
    // References
    // -> class CTGFileManager sTheMgr;
    // -> class EVec4 _ORANGE;
    // -> class EVec4 _YELLOW;
    // -> class EVec4 _LT_GREAY;
    // -> class EVec4 _DK_GREAY;
    // -> class EVec4 _BLUE;
    // -> class EVec4 _BLUEBLACK;
    // -> class EVec4 _WHITE;
    // -> static struct Style s_style[10];
}


