#ifndef BITS_H_
#define BITS_H_

#include <blinklib.h>

namespace support {

void SetBit(byte *b, byte n);
void UnsetBit(byte *b, byte n);
bool IsBitSet(byte b, byte n);

}  // namespace support

#endif
