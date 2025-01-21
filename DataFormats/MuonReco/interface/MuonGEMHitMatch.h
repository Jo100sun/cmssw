#ifndef MuonReco_MuonGEMHitMatch_h
#define MuonReco_MuonGEMHitMatch_h

#include <cmath>

namespace reco {
  class MuonGEMHitMatch {
  public:
    float x;            // X position of the matched segment
    unsigned int mask;  // arbitration mask
    int bx;             // bunch crossing
    uint8_t ieta;

    MuonGEMHitMatch() : x(0), mask(0), bx(0), ieta(0) {}
  };
}  // namespace reco

#endif
