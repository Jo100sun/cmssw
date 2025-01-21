#ifndef MuonReco_MuonGEMHitMatch_h
#define MuonReco_MuonGEMHitMatch_h

#include <cmath>

namespace reco {
  class MuonGEMHitMatch {
  public:
    float x;            // X position of the matched segment
    unsigned int mask;  // arbitration mask
    int bx;             // bunch crossing
    uint32_t theGEMId;     // gem raw id

    MuonGEMHitMatch() : x(0), mask(0), bx(0), theGEMId(0) {}
  };
}  // namespace reco

#endif
