/*
    Compile unit: C:\BuildAgent\cm4-build631-TSC6\cmbuild\SKU2_Code\src\target\game\simulator\utility\memfile.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801686F4 -> 0x80168FC0
*/
// Range: 0x801686F4 -> 0x80168840
int MemFile::WriteBlock(class MemFile * const this /* r28 */, void * src_buffer /* r29 */, int * blockSize /* r30 */) {
    // Local variables
    int result; // r31
    unsigned int newFilePos; // r3
    void * newBuffer; // r26
}

// Range: 0x80168840 -> 0x80168894
int MemFile::GetFileSize(class MemFile * const this /* r30 */, int * filesize /* r31 */) {}

// Range: 0x80168894 -> 0x80168918
int MemFile::SetFileSize(class MemFile * const this /* r29 */, int filesize /* r30 */) {
    // Local variables
    int result; // r31
}

// Range: 0x80168918 -> 0x801689B0
int MemFile::Create(const class StringBuffer & name /* r30 */) {}

// Range: 0x801689B0 -> 0x80168A48
int MemFile::Delete(const class StringBuffer & name /* r30 */) {}

// Range: 0x80168A48 -> 0x80168AA0
void * MemFile::MemFile(class MemFile * const this /* r31 */) {
    // References
    // -> struct [anonymous] __vt__7MemFile;
}

// Range: 0x80168AA0 -> 0x80168B0C
void * MemFile::~MemFile(class MemFile * const this /* r30 */) {
    // References
    // -> struct [anonymous] __vt__7MemFile;
}

// Range: 0x80168B0C -> 0x80168C3C
int MemFile::Open(class MemFile * const this /* r28 */, const class StringBuffer & name /* r29 */) {
    // Local variables
    class CTGFile * file; // r30
}

// Range: 0x80168C3C -> 0x80168CC0
int MemFile::Close(class MemFile * const this /* r30 */) {
    // Local variables
    int result; // r31
}

// Range: 0x80168CC0 -> 0x80168D80
int MemFile::ReadBlock(class MemFile * const this /* r28 */, void * dest_buffer /* r29 */, int * blockSize /* r30 */) {
    // Local variables
    int result; // r31
    int maxBytes; // r3
}

// Range: 0x80168D80 -> 0x80168DE0
int MemFile::SetPos(class MemFile * const this /* r30 */, int fromStart /* r31 */) {}

// Range: 0x80168DE0 -> 0x80168DF4
unsigned char MemFile::ValidFile() {}

// Range: 0x80168DF4 -> 0x80168F14
int MemFile::Flush(class MemFile * const this /* r29 */) {
    // Local variables
    class CTGFile * file; // r30
}

// Range: 0x80168F14 -> 0x80168F78
int MemFile::GetFileName(class MemFile * const this /* r30 */, class StringBuffer & name /* r31 */) {}

// Range: 0x80168F78 -> 0x80168FC0
void MemFile::SetFileName(class MemFile * const this /* r30 */, const class StringBuffer & name /* r31 */) {}


