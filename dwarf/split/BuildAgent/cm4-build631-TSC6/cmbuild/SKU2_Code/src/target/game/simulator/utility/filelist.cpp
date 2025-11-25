/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\utility\filelist.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80167804 -> 0x801679E4
*/
// Range: 0x80167804 -> 0x80167874
class iResFile * FileList::Find(class FileList * const this /* r31 */, const struct ResFile * pResFile /* r1+0x8 */) {
    // Local variables
    struct rbtree_iterator i; // r1+0x10
}

// Range: 0x80167874 -> 0x80167924
void FileList::AddRef(class FileList * const this /* r30 */, class iResFile * file /* r31 */) {
    // Local variables
    const struct ResFile * pResFile; // r1+0x10
    struct rbtree_iterator i; // r1+0xC
    struct FileRec newRec; // r1+0x18
}

// Range: 0x80167938 -> 0x801679E4
unsigned char FileList::ReleaseRef(class FileList * const this /* r31 */) {
    // Local variables
    const struct ResFile * pResFile; // r1+0x18
    struct rbtree_iterator i; // r1+0x14
}


