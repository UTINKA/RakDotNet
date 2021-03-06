#ifndef __N_BITSTREAM_H__
#define __N_BITSTREAM_H__

#include "RakNet/BitStream.h"
#include "Defines.h"

using namespace RakNet;

extern "C"
{
    EXPORT BitStream* InitializeBitStream1();
    EXPORT BitStream* InitializeBitStream2(const unsigned int);
    EXPORT BitStream* InitializeBitStream3(unsigned char*, const unsigned int, bool);
    EXPORT void DisposeBitStream(BitStream*);

    EXPORT unsigned int BitStreamGetNumberOfUnreadBits(BitStream*);
    EXPORT unsigned int BitStreamGetNumberOfBytesUsed(BitStream*);
    EXPORT unsigned char* BitStreamGetData(BitStream*);
    EXPORT unsigned int BitStreamGetReadOffset(BitStream*);
    EXPORT void BitStreamSetReadOffset(BitStream*, unsigned int);
    EXPORT unsigned int BitStreamGetWriteOffset(BitStream*);
    EXPORT void BitStreamSetWriteOffset(BitStream*, unsigned int);

    EXPORT unsigned char* BitStreamReadBits(BitStream*, unsigned int, bool);
    EXPORT signed char BitStreamReadInt8(BitStream*);
    EXPORT unsigned char BitStreamReadUInt8(BitStream*);
    EXPORT signed short BitStreamReadInt16(BitStream*);
    EXPORT unsigned short BitStreamReadUInt16(BitStream*);
    EXPORT signed int BitStreamReadInt32(BitStream*);
    EXPORT unsigned int BitStreamReadUInt32(BitStream*);
    EXPORT signed long long BitStreamReadInt64(BitStream*);
    EXPORT unsigned long long int BitStreamReadUInt64(BitStream*);
    EXPORT bool BitStreamReadBit(BitStream*);
    EXPORT bool BitStreamReadBool(BitStream*);
    EXPORT float BitStreamReadFloat(BitStream*);

    EXPORT void BitStreamWriteInt8(BitStream*, signed char);
    EXPORT void BitStreamWriteUInt8(BitStream*, unsigned char);
    EXPORT void BitStreamWriteInt16(BitStream*, signed short);
    EXPORT void BitStreamWriteUInt16(BitStream*, unsigned short);
    EXPORT void BitStreamWriteInt32(BitStream*, signed int);
    EXPORT void BitStreamWriteUInt32(BitStream*, unsigned int);
    EXPORT void BitStreamWriteInt64(BitStream*, signed long long);
    EXPORT void BitStreamWriteUInt64(BitStream*, unsigned long long int);
    EXPORT void BitStreamWriteBit(BitStream*, bool);
    EXPORT void BitStreamWriteBool(BitStream*, bool);
    EXPORT void BitStreamWriteFloat(BitStream*, float);

    EXPORT signed char BitStreamReadInt8Compressed(BitStream*);
    EXPORT unsigned char BitStreamReadUInt8Compressed(BitStream*);
    EXPORT signed short BitStreamReadInt16Compressed(BitStream*);
    EXPORT unsigned short BitStreamReadUInt16Compressed(BitStream*);
    EXPORT signed int BitStreamReadInt32Compressed(BitStream*);
    EXPORT unsigned int BitStreamReadUInt32Compressed(BitStream*);
    EXPORT signed long long BitStreamReadInt64Compressed(BitStream*);
    EXPORT unsigned long long int BitStreamReadUInt64Compressed(BitStream*);
    EXPORT bool BitStreamReadBitCompressed(BitStream*);

    EXPORT void BitStreamWriteInt8Compressed(BitStream*, signed char);
    EXPORT void BitStreamWriteUInt8Compressed(BitStream*, unsigned char);
    EXPORT void BitStreamWriteInt16Compressed(BitStream*, signed short);
    EXPORT void BitStreamWriteUInt16Compressed(BitStream*, unsigned short);
    EXPORT void BitStreamWriteInt32Compressed(BitStream*, signed int);
    EXPORT void BitStreamWriteUInt32Compressed(BitStream*, unsigned int);
    EXPORT void BitStreamWriteInt64Compressed(BitStream*, signed long long);
    EXPORT void BitStreamWriteUInt64Compressed(BitStream*, unsigned long long int);
    EXPORT void BitStreamWriteBitCompressed(BitStream*, bool);
}

#endif
