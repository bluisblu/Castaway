/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\common\engine\manager\engine_manager_unity.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802A6F30 -> 0x802A6F30
*/
class EffectsAttachmentManager g_effectsAttachmentMan; // size: 0xD44, address: 0x80510964
class EffectsEmitterManager g_effectsEmitterMan; // size: 0xD44, address: 0x805116B4
class REffectsSequencer : public EResource {
    // total size: 0x14
};
class EffectsSequencerManager g_effectsSequencerMan; // size: 0xD44, address: 0x80512404
class EAmbientScoreManager g_ambientscoreman; // size: 0xD44, address: 0x80513154
class EAnimManager _animman; // size: 0xD44, address: 0x80513EA4
class EAudioStreamManager _audiostreamman; // size: 0xD44, address: 0x80514BF4
class EBinaryManager _binaryman; // size: 0xD44, address: 0x80515944
class ECharacterManager _characterman; // size: 0xD44, address: 0x80516694
int _lastCtrlUpdate; // size: 0x4, address: 0x805DBF78
class EController * _ctrlPads[4]; // size: 0x10, address: 0x805173D8
class QTimer _ctrlLastActivetime[4]; // size: 0x20, address: 0x805173F8
class EDatasetManager _datasetman; // size: 0xD54, address: 0x80517424
unsigned char m_loadEnabled; // size: 0x1, address: 0x805DA390
class EEdithTreeSetMan _edithtreesetman; // size: 0xD44, address: 0x80518184
class EEnvironman {
    // total size: 0x10
    class EVec3 m_vWind; // offset 0x0, size 0xC
    unsigned char m_bIsWindy; // offset 0xC, size 0x1
};
class EEnvironman _environman; // size: 0x10, address: 0x80518EC8
class EFlashManager _flashman; // size: 0xD44, address: 0x80518EE4
class EFontManager _fontman; // size: 0xD44, address: 0x80519C34
class EModelManager _modelman; // size: 0xD44, address: 0x8051A984
class EMovieMan _movieman; // size: 0xD48, address: 0x8051B6D8
class EQuickdataManager _quickdataman; // size: 0xD48, address: 0x8051C430
class vector : public VectorBase {
    // total size: 0x10
};
struct VectorBase {
    // total size: 0x10
protected:
    struct ResourceIndexRecord * mpBegin; // offset 0x0, size 0x4
    struct ResourceIndexRecord * mpEnd; // offset 0x4, size 0x4
    struct ResourceIndexRecord * mpCapacity; // offset 0x8, size 0x4
    class allocator mAllocator; // offset 0xC, size 0x1
};
struct rbtree_node : public rbtree_node_base {
    // total size: 0x18
    struct pair mValue; // offset 0x10, size 0x8
};
struct rbtree_iterator {
    // total size: 0x4
    struct rbtree_node * mpNode; // offset 0x0, size 0x4
};
class EScratchBuffMan _scratchBuffMan; // size: 0x14, address: 0x8051D184
class EShaderManager _shaderman; // size: 0xD44, address: 0x8051D1A4
class ESocialAnimationSetManager g_socialanimationsetman; // size: 0xD44, address: 0x8051DEF4
class ESoundEventManager g_soundeventman; // size: 0xD44, address: 0x8051EC44
class ESoundTrackDataManager g_soundtrackdataman; // size: 0xD44, address: 0x8051F994
class ETextureManager _textureman; // size: 0xD44, address: 0x805206E4
unsigned int gUnsafeToFreeResourceEncountered; // size: 0x4, address: 0x805DBF7C
class RParticle : public EResource {
    // total size: 0x3C
protected:
    void * m_pData; // offset 0x14, size 0x4
    int m_iResource; // offset 0x18, size 0x4
    class EResource * m_pResource[8]; // offset 0x1C, size 0x20
};
class ParticleManager : public EResourceManager {
    // total size: 0xD44
};
class ParticleManager _particleman; // size: 0xD44, address: 0x80521434
struct {
    // total size: 0x34
} __vt__15ParticleManager; // size: 0x34, address: 0x804545FC
struct {
    // total size: 0x34
} __vt__22ESoundTrackDataManager; // size: 0x34, address: 0x80454630
struct {
    // total size: 0x34
} __vt__26ESocialAnimationSetManager; // size: 0x34, address: 0x80454664
struct {
    // total size: 0x34
} __vt__18ESoundEventManager; // size: 0x34, address: 0x80454698
struct {
    // total size: 0x34
} __vt__17EQuickdataManager; // size: 0x34, address: 0x804546CC
struct {
    // total size: 0x34
} __vt__9EMovieMan; // size: 0x34, address: 0x80454700
struct {
    // total size: 0x34
} __vt__14EShaderManager; // size: 0x34, address: 0x80454734
struct {
    // total size: 0x34
} __vt__15ETextureManager; // size: 0x34, address: 0x80454768
struct {
    // total size: 0x34
} __vt__13EModelManager; // size: 0x34, address: 0x8045479C
struct {
    // total size: 0x34
} __vt__12EFontManager; // size: 0x34, address: 0x804547D0
struct {
    // total size: 0x34
} __vt__13EFlashManager; // size: 0x34, address: 0x80454804
struct {
    // total size: 0x34
} __vt__16EEdithTreeSetMan; // size: 0x34, address: 0x80454838
struct {
    // total size: 0x34
} __vt__15EDatasetManager; // size: 0x34, address: 0x8045486C
struct {
    // total size: 0x24
} __vt__18EControllerManager; // size: 0x24, address: 0x804548A0
struct {
    // total size: 0x34
} __vt__17ECharacterManager; // size: 0x34, address: 0x804548C4
struct {
    // total size: 0x34
} __vt__14EBinaryManager; // size: 0x34, address: 0x804548F8
struct {
    // total size: 0x34
} __vt__19EAudioStreamManager; // size: 0x34, address: 0x8045492C
struct {
    // total size: 0x48
} __vt__13ERAudioStream; // size: 0x48, address: 0x80454960
struct {
    // total size: 0x34
} __vt__12EAnimManager; // size: 0x34, address: 0x804549A8
struct {
    // total size: 0x34
} __vt__20EAmbientScoreManager; // size: 0x34, address: 0x804549DC
struct {
    // total size: 0x34
} __vt__23EffectsSequencerManager; // size: 0x34, address: 0x80454A10
struct {
    // total size: 0x34
} __vt__21EffectsEmitterManager; // size: 0x34, address: 0x80454A44
struct {
    // total size: 0x34
} __vt__24EffectsAttachmentManager; // size: 0x34, address: 0x80454A78
struct {
    // total size: 0x34
} __vt__16EResourceManager; // size: 0x34, address: 0x80454AAC
struct pair {
    // total size: 0x8
    struct rbtree_iterator first; // offset 0x0, size 0x4
    unsigned char second; // offset 0x4, size 0x1
};

