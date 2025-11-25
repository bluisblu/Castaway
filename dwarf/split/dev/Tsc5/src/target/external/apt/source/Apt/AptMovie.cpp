/*
    Compile unit: C:\dev\Tsc5\src\target\external\apt\source\Apt\AptMovie.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80327CC0 -> 0x803287FC
*/
// Range: 0x80327CC0 -> 0x80327F74
void AptMovie::resolve(struct AptMovie * const this /* r22 */, unsigned char * pBase /* r23 */, struct AptConstFile * aConstantFile /* r24 */, int * pnCurrentConstantIndex /* r25 */) {
    // Local variables
    int i; // r29
    int j; // r28
    struct AptEventActionSet * pActions; // r27
    int k; // r26
    class EAStringC strLabel; // r1+0x8
}

// Range: 0x80327F74 -> 0x803281FC
void AptMovie::unresolve(struct AptMovie * const this /* r24 */, unsigned char * pBase /* r25 */, int * pnCurrentConstantIndex /* r26 */) {
    // Local variables
    int i; // r29
    int j; // r28
    struct AptEventActionSet * pActions; // r27
    int k; // r22
}

// Range: 0x803281FC -> 0x80328484
void AptMovie::DoTemporaryFrameControls(struct AptMovie * const this /* r24 */, class AptPseudoDisplayList * pPseudoDisplayList /* r25 */, int nFrame /* r26 */) {
    // Local variables
    class AptCIH * pSprInst; // r0
    int i; // r28
    struct AptControl * pControl; // r27
    struct AptCharacter * pCharacter; // r22
    struct AptPseudoCIH_t * pPrev; // r1+0xC
    struct AptPseudoCIH_t * pItem; // r1+0x8
    struct AptControlPlaceObject2 * pPlaceObject2; // r0

    // References
    // -> struct AptUserFunctions gAptFuncs;
}

// Range: 0x80328484 -> 0x80328670
void AptMovie::doFrameControls(struct AptMovie * const this /* r24 */, struct AptDisplayList * pDisplayList /* r25 */, class AptCIH * pInst /* r26 */) {
    // Local variables
    int i; // r30
    struct AptControl * pControl; // r31
    struct AptActionSetup oActionSetup; // r1+0x8
    void * pSavedValue; // r23
    int i; // r27
    struct AptControl * pControl; // r23

    // References
    // -> unsigned char gbBackgroundColorSet;
    // -> struct AptUserFunctions gAptFuncs;
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

// Range: 0x80328670 -> 0x8032873C
void AptMovie::runFrameActions(struct AptMovie * const this /* r24 */, class AptCIH * pInst /* r25 */) {
    // Local variables
    int i; // r28
    struct AptControl * pControl; // r27
    struct AptActionSetup oActionSetup; // r1+0x8
    void * pSavedValue; // r26

    // References
    // -> struct AptActionInterpreter gAptActionInterpreter;
}

// Range: 0x8032873C -> 0x803287C4
void AptMovie::queueFrameActions(struct AptMovie * const this /* r27 */, class AptCIH * pInst /* r28 */) {
    // Local variables
    int i; // r29
    struct AptControl * pControl; // r4

    // References
    // -> unsigned int gNullInput;
    // -> struct AptAnimationPoolData * gpPool;
}

// Range: 0x803287C4 -> 0x803287FC
int AptMovie::labelToFrame() {
    // Local variables
    class AptValue * pFrame; // r0
}


