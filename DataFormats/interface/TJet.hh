#ifndef BACONANA_DATAFORMATS_TJET_HH
#define BACONANA_DATAFORMATS_TJET_HH

#include "BaconAna/DataFormats/interface/BaconAnaDefs.hh"
#include <TObject.h>

namespace baconhep
{
  class TJet : public TObject
  {
    public:
      TJet():
      pt(0), eta(0), phi(0), mass(0), ptRaw(0),unc(0),
      area(0), d0(-999), dz(-999),
      csv(-2), csvSub1(-2), csvSub2(-2),
      mva(-2), beta(0), betaStar(0), dR2Mean(0),
      qgid(-2), qgidSub1(-2), qgidSub2(-2), ptD(0), minW(0),
      q(0), qSub1(-100), qSub2(-100),
      pullY(0), pullPhi(0), chPullY(0), chPullPhi(0), neuPullY(0), neuPullPhi(0), pullAngle(0),
      chEmFrac(0), neuEmFrac(0), chHadFrac(0), neuHadFrac(0),
      tau1(-1), tau2(-1), tau3(-1), tau4(-1),
      prunedm(0),
      genpt(0), geneta(0), genphi(0), genm(0),
      mcFlavor(0), mcFlavorPhys(0),
      nCharged(0), nNeutrals(0), nParticles(0),
      hltMatchBits(0)
      {}
      ~TJet(){}
    
      float          pt, eta, phi, mass, ptRaw, unc;              // kinematics
      float          area;                                        // jet area (from FastJet)
      float          d0, dz;                                      // impact parameter of leading charged constituent
      float          csv, csvSub1, csvSub2;                       // CSV b-tagger for the jet and subjets
      float          mva;                                         // PU discriminator MVA
      float          beta, betaStar, dR2Mean;                     // PU discriminator input variables
      float          qgid, qgidSub1, qgidSub2;                    // q/g discriminator for jet and subjets
      float          ptD, minW;                                   // q/g discrinator input variables 
      float          q, qSub1, qSub2;                             // Charge for jet and subjets
      float          pullY, pullPhi;                              // Jet pull
      float          chPullY, chPullPhi, neuPullY, neuPullPhi;
      float          pullAngle;                                   // Jet pull angle between two leading subjets
      float          chEmFrac, neuEmFrac, chHadFrac, neuHadFrac;  // fractional energy contribution by type
      float          tau1, tau2, tau3, tau4;                      // N Subjettiness variables
      float          prunedm;                                     // Pruned Jet Mass
      float          genpt, geneta, genphi, genm;                 // Matched GenJet
      int            mcFlavor, mcFlavorPhys;                      // Flavor
      unsigned int   nCharged, nNeutrals, nParticles;             // constituent multiplicity
      TriggerObjects hltMatchBits;                                // HLT matching
          
    ClassDef(TJet,3)
  };
}
#endif
