#ifndef BACONANA_DATAFORMATS_TGENPARTICLE_HH
#define BACONANA_DATAFORMATS_TGENPARTICLE_HH

#include <TObject.h>

namespace baconhep 
{
  class TGenParticle : public TObject
  {
  public:
    TGenParticle():
      parent(-1), pdgId(0),status(0),
      pt(0), eta(0), phi(0), mass(0), y(0),
      decx(0), decy(0), decz(0)
    {}
    ~TGenParticle(){}
    
    int   parent;
    int   pdgId;
    int   status;
    float pt, eta, phi, mass, y;
    float decx, decy, decz;

    ClassDef(TGenParticle,1)
  };
}
#endif
