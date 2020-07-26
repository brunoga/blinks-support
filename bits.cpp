#include "bits.h"

namespace support {

void SetBit(byte *b, byte n) { *b |= (1 << n); };
void UnsetBit(byte *b, byte n) { *b &= ~(1 << n); };
bool IsBitSet(byte b, byte n) { return ((b >> n) & 1); };

}  // namespace support

