#ifndef BACONANA_DATAFORMATS_TGENEVENTINFO_HH
#define BACONANA_DATAFORMATS_TGENEVENTINFO_HH

#include <TObject.h>

namespace baconhep 
{
  class TGenEventInfo : public TObject
  {
  public:
    TGenEventInfo():
      id_1(0),   id_2(0),
      x_1(0),    x_2(0),
      xPDF_1(0), xPDF_2(0),
      scalePDF(0),
      weight(0)
    {}
    ~TGenEventInfo(){}
    
    int   id_1,  id_2;   // parton flavor PDG ID
    double x_1,   x_2;    // parton momentum fraction
    double xPDF_1,xPDF_2; // parton xF value
    double scalePDF;      // Q-scale used for PDF evaluation
    float weight;        // event weight
    std::vector<double> lheweight;  // lhe weights 
    
    ClassDef(TGenEventInfo,1)
  };
}
#endif
