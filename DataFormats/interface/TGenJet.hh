#ifndef BACONANA_DATAFORMATS_TGENJet_HH
#define BACONANA_DATAFORMATS_TGENJet_HH

#include <TObject.h>

namespace baconhep 
{
  class TGenJet : public TObject
  {
    public:
      TGenJet():
	mcFlavor(-999), mcFlavorPhys(-999),
	pt(0), eta(0), phi(0), mass(0), y(0)
      {}
      ~TGenJet(){}

      int   mcFlavor;
      int   mcFlavorPhys;
      float pt, eta, phi, mass, y;

    ClassDef(TGenJet,2)
  };
}
#endif
