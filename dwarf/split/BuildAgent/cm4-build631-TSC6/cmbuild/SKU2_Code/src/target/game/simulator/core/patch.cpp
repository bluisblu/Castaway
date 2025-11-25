/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\core\patch.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800BB6FC -> 0x800BE764
*/
// Range: 0x800BB6FC -> 0x800BB70C
void * TrackDataReader::TrackDataReader() {}

// Range: 0x800BB70C -> 0x800BB754
void * TrackDataReader::~TrackDataReader(class TrackDataReader * const this /* r31 */) {}

// Range: 0x800BB754 -> 0x800BB768
class TrackDataReader & TrackDataReader::__as() {}

// Range: 0x800BB768 -> 0x800BB778
class TrackDataReader & TrackDataReader::__as() {}

// Range: 0x800BB778 -> 0x800BB788
class TrackDataReader & TrackDataReader::__mm() {}

// Range: 0x800BB788 -> 0x800BB798
class TrackDataReader & TrackDataReader::__apl() {}

// Range: 0x800BB798 -> 0x800BB83C
union SndInstruction & TrackDataReader::ReadCommand(class TrackDataReader * const this /* r31 */) {
    // References
    // -> static union SndInstruction nopInst;
}

// Range: 0x800BB83C -> 0x800BB840
void TrackDataReader::Trace() {}

// Range: 0x800BB840 -> 0x800BB884
void cTrack::HandleTrackFlowError(class cTrack * const this /* r31 */) {}

// Range: 0x800BB884 -> 0x800BB890
unsigned char cHitMan::RegisterSourceDataRequestHandler() {}

// Range: 0x800BB890 -> 0x800BB8AC
unsigned char cHitMan::GetSourceDataField(class cHitMan * const this /* r7 */) {
    // Local variables
    unsigned char bOk; // r0
}

// Range: 0x800BB8AC -> 0x800BB954
class cHitControlGroup * cHitMan::ControlGroup(class cHitMan * const this /* r30 */, int lControlGroupId /* r1+0x8 */) {
    // Local variables
    class cHitControlGroup * pControlGroup; // r31
    struct rbtree_iterator it; // r1+0x10
}

// Range: 0x800BB954 -> 0x800BB964
void * cHitControlGroup::cHitControlGroup() {}

// Range: 0x800BB964 -> 0x800BBA3C
unsigned char cHitControlGroup::SetVolume(class cHitControlGroup * const this /* r30 */) {
    // Local variables
    class list & listActive; // r31
    struct ListIterator itTrack; // r1+0x14
    struct ListIterator itTrackEnd; // r1+0x10
    class cTrack * track; // r31

    // References
    // -> class cHitMan * g_pHitMan;
}

// Range: 0x800BBA3C -> 0x800BBAF4
void * cHitMan::cHitMan(class cHitMan * const this /* r29 */) {}

// Range: 0x800BBB4C -> 0x800BBBBC
unsigned char cHitMan::Init(class cHitMan * const this /* r30 */) {
    // Local variables
    int i; // r31

    // References
    // -> class cHitMan * g_pHitMan;
}

// Range: 0x800BBBBC -> 0x800BBC44
void * cHitMan::~cHitMan(class cHitMan * const this /* r30 */) {}

// Range: 0x800BBC44 -> 0x800BBD28
unsigned char cHitMan::Shutdown(class cHitMan * const this /* r30 */) {
    // Local variables
    struct rbtree_iterator itBegin; // r1+0x20
    struct rbtree_iterator itEnd; // r1+0x1C
    struct rbtree_iterator it; // r1+0x18
    class cHitControlGroup * pControlGroup; // r3
}

// Range: 0x800BBD28 -> 0x800BBE04
void cHitMan::UpdateActiveTrackVolumes(class cHitMan * const this /* r28 */) {
    // Local variables
    class cTrack * tracks[64]; // r1+0x18
    int i; // r30
    int j; // r29
    struct ListIterator it; // r1+0x10
}

// Range: 0x800BBE04 -> 0x800BBE18
void cHitMan::SetSequenceGroupTrackId() {}

// Range: 0x800BBE18 -> 0x800BBE2C
class ERSoundEvent * cHitMan::SequenceGroupTrackId() {}

// Range: 0x800BBE2C -> 0x800BBF10
void cHitMan::TimerCallback(class cHitMan * const this /* r30 */) {
    // Local variables
    struct ListIterator itCopy; // r1+0x14
    class cTrack * track; // r31

    // References
    // -> class cHitMan * g_pHitMan;
}

// Range: 0x800BBF10 -> 0x800BBF50
unsigned char cHitMan::AddToUpdateList(class cHitMan * const this /* r31 */, class cTrack * pTrack /* r1+0x8 */) {}

// Range: 0x800BBF50 -> 0x800BC058
unsigned char cHitMan::RemoveFromUpdateList(class cHitMan * const this /* r30 */, const class cTrack * pTrack /* r31 */) {
    // Local variables
    struct ListIterator it; // r1+0x24
}

// Range: 0x800BC058 -> 0x800BC0CC
void cHitMan::DuckMapSetSndobPri(class cHitMan * const this /* r30 */, class cTrack * pSndob /* r1+0x8 */, int lPri /* r31 */) {
    // Local variables
    int lNewDuckPri; // r0

    // References
    // -> static int s_activeDuckPri;
}

// Range: 0x800BC0CC -> 0x800BC15C
int cHitMan::DuckMapMaxPri(class cHitMan * const this /* r30 */) {
    // Local variables
    int lMaxPri; // r31
    struct rbtree_iterator itEnd; // r1+0x10
    struct rbtree_iterator it; // r1+0xC
    int lPri; // r0
}

// Range: 0x800BC15C -> 0x800BC1C0
void cHitMan::DuckMapRemoveAll(class cHitMan * const this /* r31 */) {
    // References
    // -> static int s_activeDuckPri;
}

// Range: 0x800BC1C0 -> 0x800BC2EC
void * cTrack::cTrack(class cTrack * const this /* r29 */, class ERSoundEvent * pEvent /* r30 */) {
    // References
    // -> struct [anonymous] __vt__6cTrack;
}

// Range: 0x800BC2EC -> 0x800BC3BC
void * cTrack::~cTrack(class cTrack * const this /* r30 */) {
    // References
    // -> class cHitMan * g_pHitMan;
    // -> struct [anonymous] __vt__6cTrack;
}

// Range: 0x800BC3BC -> 0x800BC460
unsigned char cTrack::OnStartPlaying(class cTrack * const this /* r30 */) {}

// Range: 0x800BC460 -> 0x800BC4C0
unsigned char cTrack::OnEndPlaying(class cTrack * const this /* r31 */) {}

// Range: 0x800BC4C0 -> 0x800BC4CC
class ERSoundTrackData * cTrack::StartPos() {}

// Range: 0x800BC4CC -> 0x800BC684
void cTrack::HandleTimerCallback(class cTrack * const this /* r30 */) {
    // Local variables
    int lCurrentValue; // r5
    unsigned int time; // r0
    int lNumCommands; // r28

    // References
    // -> class cHitMan * g_pHitMan;
}

// Range: 0x800BC684 -> 0x800BC868
unsigned char cTrack::PlayPause(class cTrack * const this /* r27 */, int argInstId /* r28 */, int argVol /* r29 */, int argPan /* r30 */, float timeToPlayAt /* f31 */) {
    // Local variables
    int group; // r4
    class cHitControlGroup * pGroup; // r0

    // References
    // -> class cHitMan * g_pHitMan;
}

// Range: 0x800BC868 -> 0x800BC8C4
unsigned char cTrack::Pause(class cTrack * const this /* r31 */) {
    // References
    // -> class cHitMan * g_pHitMan;
}

// Range: 0x800BC8C4 -> 0x800BC930
unsigned char cTrack::Unpause(class cTrack * const this /* r31 */) {
    // References
    // -> class cHitMan * g_pHitMan;
}

// Range: 0x800BC930 -> 0x800BC9DC
unsigned char cTrack::Stop(class cTrack * const this /* r31 */) {}

// Range: 0x800BC9DC -> 0x800BCA8C
unsigned char cTrack::Kill(class cTrack * const this /* r30 */) {
    // References
    // -> class cHitMan * g_pHitMan;
    // -> class EClock _sysclock;
}

// Range: 0x800BCA8C -> 0x800BCB10
int cTrack::RegisterVal() {
    // References
    // -> static int s_activeDuckPri;
}

// Range: 0x800BCB10 -> 0x800BCC6C
unsigned char cTrack::SetRegister(class cTrack * const this /* r28 */, int lRegisterId /* r29 */, int lValue /* r30 */) {
    // Local variables
    unsigned char bOk; // r31

    // References
    // -> class cHitMan * g_pHitMan;
}

// Range: 0x800BCC6C -> 0x800BCCE0
int cTrack::GetVHitList(class cTrack * const this /* r30 */, int list /* r31 */) {
    // Local variables
    class TArray * hpl; // r0
}

// Range: 0x800BCCE0 -> 0x800BD6F0
unsigned char cTrack::DoCommand(class cTrack * const this /* r31 */) {
    // Local variables
    union SndInstruction cmd; // r1+0x10
    int lVal; // r0
    int lVal; // r0
    int lTicks; // r27
    int lSrcVal; // r0
    int lDestVal; // r0
    int lDestValue; // r0
    int lDestValue; // r27
    int lSrcValue; // r0
    int lJumpAddr; // r0
    int lJumpAddr; // r0
    int lJumpAddr; // r0
    int lJumpAddr; // r0
    int lJumpAddr; // r5
    int lJumpAddr; // r5
    int lDestReg; // r27
    int lValue; // r0
    int lDestReg; // r27
    int lValue; // r0
    int lDestReg; // r27
    int lValue; // r0
    int lDestReg; // r27
    int lValue; // r0
    int lMinVal; // r27
    int lMaxVal; // r0
    int lRand; // r0
    int lVal; // r0
    int lVal; // r0
    int lVal; // r0
    int lDstReg; // r27
    int lSourceId; // r0
    int lParmVal; // r1+0xC
    unsigned char bOk; // r0
    int lVal; // r0
    int lHitListId; // r0
    int lDestReg; // r27
    int size; // r28
    int lValue; // r4
    int i; // r29
    struct SndEvtHitPatch * patch; // r0
    int lDestReg; // r26
    int size; // r0
    int lVal; // r0
    class TArray * list; // r25
    int genreindex; // r24
    int enabledsongcount; // r23
    unsigned int enabledsongs[16]; // r1+0x18
    unsigned char currenabled; // r0
    int patchindex; // r22
    struct SndEvtHitPatch & patch; // r0
    int lValue; // r4
    int i; // r22
    struct SndEvtHitPatch * patch; // r0
    int randomindex; // r3
    unsigned long attemptcount; // r22
    unsigned int musicid; // r22
    struct SndEvtHitPatch * patch; // r5
    int patchindex; // r23
    int lGroupId; // r22
    class ERSoundEvent * lGroupTrackId; // r23
    class cTrack * pGroupSndob; // r23
    int lDestReg; // r22
    int lSourceId; // r23
    int lParmId; // r0
    int lParmVal; // r1+0x8
    unsigned char bOk; // r0

    // References
    // -> class EGlobal _globals;
    // -> class cHitMan * g_pHitMan;
}

// Range: 0x800BD6F0 -> 0x800BD730
void cTrack::SetCompareFlags() {}

// Range: 0x800BD730 -> 0x800BD7B8
unsigned char cTrack::NoteOn(class cTrack * const this /* r30 */) {
    // Local variables
    unsigned char bOk; // r31
}

// Range: 0x800BD7B8 -> 0x800BD8A4
unsigned char cTrack::SetPatch(class cTrack * const this /* r30 */, struct SndEvtHitPatch * pSndHitPatch /* r31 */, float timeToPlayAt /* f31 */) {}

// Range: 0x800BD8A4 -> 0x800BD8BC
unsigned char cTrack::NoteOff() {}

// Range: 0x800BD8BC -> 0x800BD8C8
unsigned char cTrack::SetVolume() {}

// Range: 0x800BD8C8 -> 0x800BD8D4
unsigned char cTrack::SetPan() {}

// Range: 0x800BD8D4 -> 0x800BDA3C
int cTrack::CalculateCurrentVolume(class cTrack * const this /* r29 */) {
    // Local variables
    int baseVolume; // r31
    int lControlGroupId; // r30
    class cHitControlGroup * pControlGroup; // r0
    int minVol; // r0

    // References
    // -> unsigned char s_superDuckEnabled;
    // -> unsigned char s_maxVoxDuckPri;
    // -> unsigned char s_maxMusicDuckPri;
    // -> unsigned char s_maxSfxDuckPri;
    // -> float g_musicMinVolume;
    // -> class EGlobal _globals;
    // -> class cHitMan * g_pHitMan;
}

// Range: 0x800BDA3C -> 0x800BDA90
unsigned char cTrack::UpdateVolPan(class cTrack * const this /* r31 */) {}

// Range: 0x800BDA90 -> 0x800BDA9C
unsigned char cTrack::GetMinRange() {}

// Range: 0x800BDA9C -> 0x800BDAA8
unsigned char cTrack::GetMaxRange() {}

// Range: 0x800BDAA8 -> 0x800BDAB8
int cTrack::GetControlGroup() {}

// Range: 0x800BDAB8 -> 0x800BDAC8
int cTrack::GetArgsType() {}

// Range: 0x800BDAC8 -> 0x800BDAF4
void * cSamplePatch::cSamplePatch() {}

// Range: 0x800BDAF4 -> 0x800BDB48
void * cSamplePatch::~cSamplePatch(class cSamplePatch * const this /* r30 */) {}

// Range: 0x800BDB48 -> 0x800BDB50
void cSamplePatch::SetLooped() {}

// Range: 0x800BDB50 -> 0x800BDBDC
unsigned char cSamplePatch::CreateSnd(class cSamplePatch * const this /* r31 */) {
    // References
    // -> class cIGZSndSys * g_pSndSys;
}

// Range: 0x800BDBDC -> 0x800BDC30
unsigned char cSamplePatch::FreeSnd(class cSamplePatch * const this /* r31 */) {}

// Range: 0x800BDC30 -> 0x800BDC70
class cSampleChannel * cSamplePatch::CreateChannel(class cSamplePatch * const this /* r31 */) {}

// Range: 0x800BDC70 -> 0x800BDCAC
void * cSampleChannel::cSampleChannel(class cSampleChannel * const this /* r31 */) {}

// Range: 0x800BDCAC -> 0x800BDD0C
void * cSampleChannel::~cSampleChannel(class cSampleChannel * const this /* r30 */) {}

// Range: 0x800BDD0C -> 0x800BDD30
unsigned char cSampleChannel::SetVolume() {}

// Range: 0x800BDD30 -> 0x800BDD54
unsigned char cSampleChannel::Shutdown() {}

// Range: 0x800BDD54 -> 0x800BDE0C
unsigned char cSampleChannel::SetChannelPatch(class cSampleChannel * const this /* r30 */, class cSamplePatch * pPatch /* r31 */) {}

// Range: 0x800BDE0C -> 0x800BDE6C
unsigned char cSampleChannel::SetPan(class cSampleChannel * const this /* r30 */, int lPanPos /* r31 */) {}

// Range: 0x800BDE6C -> 0x800BDEF4
unsigned char cSampleChannel::NoteOn(class cSampleChannel * const this /* r31 */) {
    // Local variables
    float time; // f31

    // References
    // -> class EClock _sysclock;
}

// Range: 0x800BDEF4 -> 0x800BDF48
unsigned char cSampleChannel::NoteOff(class cSampleChannel * const this /* r31 */) {}

// Range: 0x800BDF48 -> 0x800BDF6C
unsigned char cSampleChannel::IsPlaying() {}

// Range: 0x800BDF6C -> 0x800BDFB4
unsigned char cSampleChannel::Pause() {
    // Local variables
    class cIGZSnd * pSnd; // r0
}

// Range: 0x800BDFB4 -> 0x800BDFFC
unsigned char cSampleChannel::Unpause() {
    // Local variables
    class cIGZSnd * pSnd; // r0
}

// Range: 0x800BDFFC -> 0x800BE03C
void * cSoundCache::cSoundCache(class cSoundCache * const this /* r31 */) {}

// Range: 0x800BE03C -> 0x800BE090
void * cSoundCache::~cSoundCache(class cSoundCache * const this /* r30 */) {}

// Range: 0x800BE090 -> 0x800BE0CC
void cSoundCache::onTrackDelete() {
    // Local variables
    int i; // r6
}

// Range: 0x800BE0CC -> 0x800BE144
void cSoundCache::Shutdown() {
    // Local variables
    int i; // r29
}

// Range: 0x800BE144 -> 0x800BE284
void cSoundCache::CleanupIdleTracks(class cSoundCache * const this /* r31 */) {
    // Local variables
    int i; // r28
    int iNumActiveTracks; // r27
    int j; // r28

    // References
    // -> class cBoxX * g_pBoxX;
}

// Range: 0x800BE284 -> 0x800BE3A0
void cSoundCache::UpdateDuckingPriorities() {
    // Local variables
    int i; // r30
    class ERSoundEvent * pEvent; // r4
    signed char duckSelect; // r5

    // References
    // -> unsigned char s_duckAmbient;
    // -> unsigned char s_superDuckEnabled;
    // -> unsigned char s_maxVoxDuckPri;
    // -> unsigned char s_maxMusicDuckPri;
    // -> unsigned char s_maxSfxDuckPri;
}

// Range: 0x800BE3A0 -> 0x800BE3F4
void cSoundCache::KillAll() {
    // Local variables
    int i; // r30
}

// Range: 0x800BE3F4 -> 0x800BE478
void cSoundCache::PauseGroup(int group /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x800BE478 -> 0x800BE4FC
void cSoundCache::UnpauseGroup(int group /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x800BE4FC -> 0x800BE638
class cTrack * cSoundCache::GetTrackObject(class cSoundCache * const this /* r31 */, class ERSoundEvent * id /* r30 */) {
    // Local variables
    class cTrack * pResult; // r0
    int i; // r8
}

// Range: 0x800BE638 -> 0x800BE640
unsigned char cSoundCache::IsInMemory() {}

// Range: 0x800BE640 -> 0x800BE760
unsigned char cSoundCache::IsInMemory() {
    // Local variables
    int i; // r6
}

// Range: 0x800BE760 -> 0x800BE764
void cSoundCache::printTrackList() {}


