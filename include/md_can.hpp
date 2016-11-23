#pragma once

#include <stdint.h>

namespace devio {

class CANService {
public:
    CANService();
    ~CANService();

};



} // namespace devio


namespace beeoo {

using byte = uint8_t;
using word = uint16_t;
using dword = uint32_t;

class frame {
public:
    byte head[2];
    byte tag;
    byte sn[2];
    byte cmd;
    byte len[2];

};
}
