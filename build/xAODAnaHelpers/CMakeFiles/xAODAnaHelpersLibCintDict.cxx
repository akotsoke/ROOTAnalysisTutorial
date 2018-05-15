// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME xAODAnaHelpersLibCintDict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "xAODAnaHelpers/Algorithm.h"
#include "xAODAnaHelpers/BJetEfficiencyCorrector.h"
#include "xAODAnaHelpers/BasicEventSelection.h"
#include "xAODAnaHelpers/Cluster.h"
#include "xAODAnaHelpers/ClusterContainer.h"
#include "xAODAnaHelpers/ClusterHists.h"
#include "xAODAnaHelpers/ClusterHistsAlgo.h"
#include "xAODAnaHelpers/DebugTool.h"
#include "xAODAnaHelpers/Electron.h"
#include "xAODAnaHelpers/ElectronCalibrator.h"
#include "xAODAnaHelpers/ElectronContainer.h"
#include "xAODAnaHelpers/ElectronEfficiencyCorrector.h"
#include "xAODAnaHelpers/ElectronHists.h"
#include "xAODAnaHelpers/ElectronHistsAlgo.h"
#include "xAODAnaHelpers/ElectronSelector.h"
#include "xAODAnaHelpers/EventInfo.h"
#include "xAODAnaHelpers/FatJet.h"
#include "xAODAnaHelpers/FatJetContainer.h"
#include "xAODAnaHelpers/HLTJetGetter.h"
#include "xAODAnaHelpers/HLTJetRoIBuilder.h"
#include "xAODAnaHelpers/HelpTreeBase.h"
#include "xAODAnaHelpers/HelperClasses.h"
#include "xAODAnaHelpers/HelperFunctions.h"
#include "xAODAnaHelpers/HistogramManager.h"
#include "xAODAnaHelpers/IParticleHists.h"
#include "xAODAnaHelpers/IParticleHistsAlgo.h"
#include "xAODAnaHelpers/Jet.h"
#include "xAODAnaHelpers/JetCalibrator.h"
#include "xAODAnaHelpers/JetContainer.h"
#include "xAODAnaHelpers/JetHists.h"
#include "xAODAnaHelpers/JetHistsAlgo.h"
#include "xAODAnaHelpers/JetSelector.h"
#include "xAODAnaHelpers/METConstructor.h"
#include "xAODAnaHelpers/MessagePrinterAlgo.h"
#include "xAODAnaHelpers/MetContainer.h"
#include "xAODAnaHelpers/MetHists.h"
#include "xAODAnaHelpers/MetHistsAlgo.h"
#include "xAODAnaHelpers/MinixAOD.h"
#include "xAODAnaHelpers/Muon.h"
#include "xAODAnaHelpers/MuonCalibrator.h"
#include "xAODAnaHelpers/MuonContainer.h"
#include "xAODAnaHelpers/MuonEfficiencyCorrector.h"
#include "xAODAnaHelpers/MuonHists.h"
#include "xAODAnaHelpers/MuonHistsAlgo.h"
#include "xAODAnaHelpers/MuonSelector.h"
#include "xAODAnaHelpers/OnlineBeamSpotTool.h"
#include "xAODAnaHelpers/OverlapRemover.h"
#include "xAODAnaHelpers/Particle.h"
#include "xAODAnaHelpers/ParticleContainer.h"
#include "xAODAnaHelpers/ParticlePIDManager.h"
#include "xAODAnaHelpers/Photon.h"
#include "xAODAnaHelpers/PhotonCalibrator.h"
#include "xAODAnaHelpers/PhotonContainer.h"
#include "xAODAnaHelpers/PhotonHists.h"
#include "xAODAnaHelpers/PhotonHistsAlgo.h"
#include "xAODAnaHelpers/PhotonSelector.h"
#include "xAODAnaHelpers/Tau.h"
#include "xAODAnaHelpers/TauCalibrator.h"
#include "xAODAnaHelpers/TauContainer.h"
#include "xAODAnaHelpers/TauEfficiencyCorrector.h"
#include "xAODAnaHelpers/TauSelector.h"
#include "xAODAnaHelpers/TrackContainer.h"
#include "xAODAnaHelpers/TrackHists.h"
#include "xAODAnaHelpers/TrackHistsAlgo.h"
#include "xAODAnaHelpers/TrackPart.h"
#include "xAODAnaHelpers/TrackSelector.h"
#include "xAODAnaHelpers/TracksInJetHists.h"
#include "xAODAnaHelpers/TreeAlgo.h"
#include "xAODAnaHelpers/TrigMatcher.h"
#include "xAODAnaHelpers/TruthContainer.h"
#include "xAODAnaHelpers/TruthPart.h"
#include "xAODAnaHelpers/TruthSelector.h"
#include "xAODAnaHelpers/VtxHists.h"
#include "xAODAnaHelpers/Writer.h"

// Header files passed via #pragma extra_include

namespace xAH {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *xAH_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("xAH", 0 /*version*/, "xAODAnaHelpers/Algorithm.h", 28,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &xAH_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *xAH_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static void *new_xAHcLcLAlgorithm(void *p = 0);
   static void *newArray_xAHcLcLAlgorithm(Long_t size, void *p);
   static void delete_xAHcLcLAlgorithm(void *p);
   static void deleteArray_xAHcLcLAlgorithm(void *p);
   static void destruct_xAHcLcLAlgorithm(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::xAH::Algorithm*)
   {
      ::xAH::Algorithm *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::xAH::Algorithm >(0);
      static ::ROOT::TGenericClassInfo 
         instance("xAH::Algorithm", ::xAH::Algorithm::Class_Version(), "xAODAnaHelpers/Algorithm.h", 64,
                  typeid(::xAH::Algorithm), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::xAH::Algorithm::Dictionary, isa_proxy, 4,
                  sizeof(::xAH::Algorithm) );
      instance.SetNew(&new_xAHcLcLAlgorithm);
      instance.SetNewArray(&newArray_xAHcLcLAlgorithm);
      instance.SetDelete(&delete_xAHcLcLAlgorithm);
      instance.SetDeleteArray(&deleteArray_xAHcLcLAlgorithm);
      instance.SetDestructor(&destruct_xAHcLcLAlgorithm);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::xAH::Algorithm*)
   {
      return GenerateInitInstanceLocal((::xAH::Algorithm*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::xAH::Algorithm*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BasicEventSelection(void *p = 0);
   static void *newArray_BasicEventSelection(Long_t size, void *p);
   static void delete_BasicEventSelection(void *p);
   static void deleteArray_BasicEventSelection(void *p);
   static void destruct_BasicEventSelection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BasicEventSelection*)
   {
      ::BasicEventSelection *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BasicEventSelection >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BasicEventSelection", ::BasicEventSelection::Class_Version(), "xAODAnaHelpers/BasicEventSelection.h", 48,
                  typeid(::BasicEventSelection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BasicEventSelection::Dictionary, isa_proxy, 4,
                  sizeof(::BasicEventSelection) );
      instance.SetNew(&new_BasicEventSelection);
      instance.SetNewArray(&newArray_BasicEventSelection);
      instance.SetDelete(&delete_BasicEventSelection);
      instance.SetDeleteArray(&deleteArray_BasicEventSelection);
      instance.SetDestructor(&destruct_BasicEventSelection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BasicEventSelection*)
   {
      return GenerateInitInstanceLocal((::BasicEventSelection*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::BasicEventSelection*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ElectronSelector(void *p = 0);
   static void *newArray_ElectronSelector(Long_t size, void *p);
   static void delete_ElectronSelector(void *p);
   static void deleteArray_ElectronSelector(void *p);
   static void destruct_ElectronSelector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ElectronSelector*)
   {
      ::ElectronSelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ElectronSelector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ElectronSelector", ::ElectronSelector::Class_Version(), "xAODAnaHelpers/ElectronSelector.h", 47,
                  typeid(::ElectronSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ElectronSelector::Dictionary, isa_proxy, 4,
                  sizeof(::ElectronSelector) );
      instance.SetNew(&new_ElectronSelector);
      instance.SetNewArray(&newArray_ElectronSelector);
      instance.SetDelete(&delete_ElectronSelector);
      instance.SetDeleteArray(&deleteArray_ElectronSelector);
      instance.SetDestructor(&destruct_ElectronSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ElectronSelector*)
   {
      return GenerateInitInstanceLocal((::ElectronSelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::ElectronSelector*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_PhotonSelector(void *p = 0);
   static void *newArray_PhotonSelector(Long_t size, void *p);
   static void delete_PhotonSelector(void *p);
   static void deleteArray_PhotonSelector(void *p);
   static void destruct_PhotonSelector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PhotonSelector*)
   {
      ::PhotonSelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PhotonSelector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("PhotonSelector", ::PhotonSelector::Class_Version(), "xAODAnaHelpers/PhotonSelector.h", 15,
                  typeid(::PhotonSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::PhotonSelector::Dictionary, isa_proxy, 4,
                  sizeof(::PhotonSelector) );
      instance.SetNew(&new_PhotonSelector);
      instance.SetNewArray(&newArray_PhotonSelector);
      instance.SetDelete(&delete_PhotonSelector);
      instance.SetDeleteArray(&deleteArray_PhotonSelector);
      instance.SetDestructor(&destruct_PhotonSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PhotonSelector*)
   {
      return GenerateInitInstanceLocal((::PhotonSelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::PhotonSelector*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TauSelector(void *p = 0);
   static void *newArray_TauSelector(Long_t size, void *p);
   static void delete_TauSelector(void *p);
   static void deleteArray_TauSelector(void *p);
   static void destruct_TauSelector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TauSelector*)
   {
      ::TauSelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TauSelector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TauSelector", ::TauSelector::Class_Version(), "xAODAnaHelpers/TauSelector.h", 23,
                  typeid(::TauSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TauSelector::Dictionary, isa_proxy, 4,
                  sizeof(::TauSelector) );
      instance.SetNew(&new_TauSelector);
      instance.SetNewArray(&newArray_TauSelector);
      instance.SetDelete(&delete_TauSelector);
      instance.SetDeleteArray(&deleteArray_TauSelector);
      instance.SetDestructor(&destruct_TauSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TauSelector*)
   {
      return GenerateInitInstanceLocal((::TauSelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::TauSelector*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_JetSelector(void *p = 0);
   static void *newArray_JetSelector(Long_t size, void *p);
   static void delete_JetSelector(void *p);
   static void deleteArray_JetSelector(void *p);
   static void destruct_JetSelector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::JetSelector*)
   {
      ::JetSelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::JetSelector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("JetSelector", ::JetSelector::Class_Version(), "xAODAnaHelpers/JetSelector.h", 34,
                  typeid(::JetSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::JetSelector::Dictionary, isa_proxy, 4,
                  sizeof(::JetSelector) );
      instance.SetNew(&new_JetSelector);
      instance.SetNewArray(&newArray_JetSelector);
      instance.SetDelete(&delete_JetSelector);
      instance.SetDeleteArray(&deleteArray_JetSelector);
      instance.SetDestructor(&destruct_JetSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::JetSelector*)
   {
      return GenerateInitInstanceLocal((::JetSelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::JetSelector*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DebugTool(void *p = 0);
   static void *newArray_DebugTool(Long_t size, void *p);
   static void delete_DebugTool(void *p);
   static void deleteArray_DebugTool(void *p);
   static void destruct_DebugTool(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DebugTool*)
   {
      ::DebugTool *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DebugTool >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DebugTool", ::DebugTool::Class_Version(), "xAODAnaHelpers/DebugTool.h", 8,
                  typeid(::DebugTool), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DebugTool::Dictionary, isa_proxy, 4,
                  sizeof(::DebugTool) );
      instance.SetNew(&new_DebugTool);
      instance.SetNewArray(&newArray_DebugTool);
      instance.SetDelete(&delete_DebugTool);
      instance.SetDeleteArray(&deleteArray_DebugTool);
      instance.SetDestructor(&destruct_DebugTool);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DebugTool*)
   {
      return GenerateInitInstanceLocal((::DebugTool*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::DebugTool*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TruthSelector(void *p = 0);
   static void *newArray_TruthSelector(Long_t size, void *p);
   static void delete_TruthSelector(void *p);
   static void deleteArray_TruthSelector(void *p);
   static void destruct_TruthSelector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TruthSelector*)
   {
      ::TruthSelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TruthSelector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TruthSelector", ::TruthSelector::Class_Version(), "xAODAnaHelpers/TruthSelector.h", 17,
                  typeid(::TruthSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TruthSelector::Dictionary, isa_proxy, 4,
                  sizeof(::TruthSelector) );
      instance.SetNew(&new_TruthSelector);
      instance.SetNewArray(&newArray_TruthSelector);
      instance.SetDelete(&delete_TruthSelector);
      instance.SetDeleteArray(&deleteArray_TruthSelector);
      instance.SetDestructor(&destruct_TruthSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TruthSelector*)
   {
      return GenerateInitInstanceLocal((::TruthSelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::TruthSelector*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TrackSelector(void *p = 0);
   static void *newArray_TrackSelector(Long_t size, void *p);
   static void delete_TrackSelector(void *p);
   static void deleteArray_TrackSelector(void *p);
   static void destruct_TrackSelector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TrackSelector*)
   {
      ::TrackSelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TrackSelector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TrackSelector", ::TrackSelector::Class_Version(), "xAODAnaHelpers/TrackSelector.h", 13,
                  typeid(::TrackSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TrackSelector::Dictionary, isa_proxy, 4,
                  sizeof(::TrackSelector) );
      instance.SetNew(&new_TrackSelector);
      instance.SetNewArray(&newArray_TrackSelector);
      instance.SetDelete(&delete_TrackSelector);
      instance.SetDeleteArray(&deleteArray_TrackSelector);
      instance.SetDestructor(&destruct_TrackSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TrackSelector*)
   {
      return GenerateInitInstanceLocal((::TrackSelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::TrackSelector*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MuonSelector(void *p = 0);
   static void *newArray_MuonSelector(Long_t size, void *p);
   static void delete_MuonSelector(void *p);
   static void deleteArray_MuonSelector(void *p);
   static void destruct_MuonSelector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MuonSelector*)
   {
      ::MuonSelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MuonSelector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MuonSelector", ::MuonSelector::Class_Version(), "xAODAnaHelpers/MuonSelector.h", 33,
                  typeid(::MuonSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MuonSelector::Dictionary, isa_proxy, 4,
                  sizeof(::MuonSelector) );
      instance.SetNew(&new_MuonSelector);
      instance.SetNewArray(&newArray_MuonSelector);
      instance.SetDelete(&delete_MuonSelector);
      instance.SetDeleteArray(&deleteArray_MuonSelector);
      instance.SetDestructor(&destruct_MuonSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MuonSelector*)
   {
      return GenerateInitInstanceLocal((::MuonSelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::MuonSelector*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ElectronCalibrator(void *p = 0);
   static void *newArray_ElectronCalibrator(Long_t size, void *p);
   static void delete_ElectronCalibrator(void *p);
   static void deleteArray_ElectronCalibrator(void *p);
   static void destruct_ElectronCalibrator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ElectronCalibrator*)
   {
      ::ElectronCalibrator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ElectronCalibrator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ElectronCalibrator", ::ElectronCalibrator::Class_Version(), "xAODAnaHelpers/ElectronCalibrator.h", 30,
                  typeid(::ElectronCalibrator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ElectronCalibrator::Dictionary, isa_proxy, 4,
                  sizeof(::ElectronCalibrator) );
      instance.SetNew(&new_ElectronCalibrator);
      instance.SetNewArray(&newArray_ElectronCalibrator);
      instance.SetDelete(&delete_ElectronCalibrator);
      instance.SetDeleteArray(&deleteArray_ElectronCalibrator);
      instance.SetDestructor(&destruct_ElectronCalibrator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ElectronCalibrator*)
   {
      return GenerateInitInstanceLocal((::ElectronCalibrator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::ElectronCalibrator*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_PhotonCalibrator(void *p = 0);
   static void *newArray_PhotonCalibrator(Long_t size, void *p);
   static void delete_PhotonCalibrator(void *p);
   static void deleteArray_PhotonCalibrator(void *p);
   static void destruct_PhotonCalibrator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PhotonCalibrator*)
   {
      ::PhotonCalibrator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PhotonCalibrator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("PhotonCalibrator", ::PhotonCalibrator::Class_Version(), "xAODAnaHelpers/PhotonCalibrator.h", 28,
                  typeid(::PhotonCalibrator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::PhotonCalibrator::Dictionary, isa_proxy, 4,
                  sizeof(::PhotonCalibrator) );
      instance.SetNew(&new_PhotonCalibrator);
      instance.SetNewArray(&newArray_PhotonCalibrator);
      instance.SetDelete(&delete_PhotonCalibrator);
      instance.SetDeleteArray(&deleteArray_PhotonCalibrator);
      instance.SetDestructor(&destruct_PhotonCalibrator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PhotonCalibrator*)
   {
      return GenerateInitInstanceLocal((::PhotonCalibrator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::PhotonCalibrator*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_JetCalibrator(void *p = 0);
   static void *newArray_JetCalibrator(Long_t size, void *p);
   static void delete_JetCalibrator(void *p);
   static void deleteArray_JetCalibrator(void *p);
   static void destruct_JetCalibrator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::JetCalibrator*)
   {
      ::JetCalibrator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::JetCalibrator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("JetCalibrator", ::JetCalibrator::Class_Version(), "xAODAnaHelpers/JetCalibrator.h", 42,
                  typeid(::JetCalibrator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::JetCalibrator::Dictionary, isa_proxy, 4,
                  sizeof(::JetCalibrator) );
      instance.SetNew(&new_JetCalibrator);
      instance.SetNewArray(&newArray_JetCalibrator);
      instance.SetDelete(&delete_JetCalibrator);
      instance.SetDeleteArray(&deleteArray_JetCalibrator);
      instance.SetDestructor(&destruct_JetCalibrator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::JetCalibrator*)
   {
      return GenerateInitInstanceLocal((::JetCalibrator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::JetCalibrator*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MuonCalibrator(void *p = 0);
   static void *newArray_MuonCalibrator(Long_t size, void *p);
   static void delete_MuonCalibrator(void *p);
   static void deleteArray_MuonCalibrator(void *p);
   static void destruct_MuonCalibrator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MuonCalibrator*)
   {
      ::MuonCalibrator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MuonCalibrator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MuonCalibrator", ::MuonCalibrator::Class_Version(), "xAODAnaHelpers/MuonCalibrator.h", 13,
                  typeid(::MuonCalibrator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MuonCalibrator::Dictionary, isa_proxy, 4,
                  sizeof(::MuonCalibrator) );
      instance.SetNew(&new_MuonCalibrator);
      instance.SetNewArray(&newArray_MuonCalibrator);
      instance.SetDelete(&delete_MuonCalibrator);
      instance.SetDeleteArray(&deleteArray_MuonCalibrator);
      instance.SetDestructor(&destruct_MuonCalibrator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MuonCalibrator*)
   {
      return GenerateInitInstanceLocal((::MuonCalibrator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::MuonCalibrator*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TauCalibrator(void *p = 0);
   static void *newArray_TauCalibrator(Long_t size, void *p);
   static void delete_TauCalibrator(void *p);
   static void deleteArray_TauCalibrator(void *p);
   static void destruct_TauCalibrator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TauCalibrator*)
   {
      ::TauCalibrator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TauCalibrator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TauCalibrator", ::TauCalibrator::Class_Version(), "xAODAnaHelpers/TauCalibrator.h", 11,
                  typeid(::TauCalibrator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TauCalibrator::Dictionary, isa_proxy, 4,
                  sizeof(::TauCalibrator) );
      instance.SetNew(&new_TauCalibrator);
      instance.SetNewArray(&newArray_TauCalibrator);
      instance.SetDelete(&delete_TauCalibrator);
      instance.SetDeleteArray(&deleteArray_TauCalibrator);
      instance.SetDestructor(&destruct_TauCalibrator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TauCalibrator*)
   {
      return GenerateInitInstanceLocal((::TauCalibrator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::TauCalibrator*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_HLTJetRoIBuilder(void *p = 0);
   static void *newArray_HLTJetRoIBuilder(Long_t size, void *p);
   static void delete_HLTJetRoIBuilder(void *p);
   static void deleteArray_HLTJetRoIBuilder(void *p);
   static void destruct_HLTJetRoIBuilder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::HLTJetRoIBuilder*)
   {
      ::HLTJetRoIBuilder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::HLTJetRoIBuilder >(0);
      static ::ROOT::TGenericClassInfo 
         instance("HLTJetRoIBuilder", ::HLTJetRoIBuilder::Class_Version(), "xAODAnaHelpers/HLTJetRoIBuilder.h", 20,
                  typeid(::HLTJetRoIBuilder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::HLTJetRoIBuilder::Dictionary, isa_proxy, 4,
                  sizeof(::HLTJetRoIBuilder) );
      instance.SetNew(&new_HLTJetRoIBuilder);
      instance.SetNewArray(&newArray_HLTJetRoIBuilder);
      instance.SetDelete(&delete_HLTJetRoIBuilder);
      instance.SetDeleteArray(&deleteArray_HLTJetRoIBuilder);
      instance.SetDestructor(&destruct_HLTJetRoIBuilder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::HLTJetRoIBuilder*)
   {
      return GenerateInitInstanceLocal((::HLTJetRoIBuilder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::HLTJetRoIBuilder*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_HLTJetGetter(void *p = 0);
   static void *newArray_HLTJetGetter(Long_t size, void *p);
   static void delete_HLTJetGetter(void *p);
   static void deleteArray_HLTJetGetter(void *p);
   static void destruct_HLTJetGetter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::HLTJetGetter*)
   {
      ::HLTJetGetter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::HLTJetGetter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("HLTJetGetter", ::HLTJetGetter::Class_Version(), "xAODAnaHelpers/HLTJetGetter.h", 29,
                  typeid(::HLTJetGetter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::HLTJetGetter::Dictionary, isa_proxy, 4,
                  sizeof(::HLTJetGetter) );
      instance.SetNew(&new_HLTJetGetter);
      instance.SetNewArray(&newArray_HLTJetGetter);
      instance.SetDelete(&delete_HLTJetGetter);
      instance.SetDeleteArray(&deleteArray_HLTJetGetter);
      instance.SetDestructor(&destruct_HLTJetGetter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::HLTJetGetter*)
   {
      return GenerateInitInstanceLocal((::HLTJetGetter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::HLTJetGetter*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_METConstructor(void *p = 0);
   static void *newArray_METConstructor(Long_t size, void *p);
   static void delete_METConstructor(void *p);
   static void deleteArray_METConstructor(void *p);
   static void destruct_METConstructor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::METConstructor*)
   {
      ::METConstructor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::METConstructor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("METConstructor", ::METConstructor::Class_Version(), "xAODAnaHelpers/METConstructor.h", 24,
                  typeid(::METConstructor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::METConstructor::Dictionary, isa_proxy, 4,
                  sizeof(::METConstructor) );
      instance.SetNew(&new_METConstructor);
      instance.SetNewArray(&newArray_METConstructor);
      instance.SetDelete(&delete_METConstructor);
      instance.SetDeleteArray(&deleteArray_METConstructor);
      instance.SetDestructor(&destruct_METConstructor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::METConstructor*)
   {
      return GenerateInitInstanceLocal((::METConstructor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::METConstructor*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ElectronEfficiencyCorrector(void *p = 0);
   static void *newArray_ElectronEfficiencyCorrector(Long_t size, void *p);
   static void delete_ElectronEfficiencyCorrector(void *p);
   static void deleteArray_ElectronEfficiencyCorrector(void *p);
   static void destruct_ElectronEfficiencyCorrector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ElectronEfficiencyCorrector*)
   {
      ::ElectronEfficiencyCorrector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ElectronEfficiencyCorrector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ElectronEfficiencyCorrector", ::ElectronEfficiencyCorrector::Class_Version(), "xAODAnaHelpers/ElectronEfficiencyCorrector.h", 40,
                  typeid(::ElectronEfficiencyCorrector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ElectronEfficiencyCorrector::Dictionary, isa_proxy, 4,
                  sizeof(::ElectronEfficiencyCorrector) );
      instance.SetNew(&new_ElectronEfficiencyCorrector);
      instance.SetNewArray(&newArray_ElectronEfficiencyCorrector);
      instance.SetDelete(&delete_ElectronEfficiencyCorrector);
      instance.SetDeleteArray(&deleteArray_ElectronEfficiencyCorrector);
      instance.SetDestructor(&destruct_ElectronEfficiencyCorrector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ElectronEfficiencyCorrector*)
   {
      return GenerateInitInstanceLocal((::ElectronEfficiencyCorrector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::ElectronEfficiencyCorrector*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MuonEfficiencyCorrector(void *p = 0);
   static void *newArray_MuonEfficiencyCorrector(Long_t size, void *p);
   static void delete_MuonEfficiencyCorrector(void *p);
   static void deleteArray_MuonEfficiencyCorrector(void *p);
   static void destruct_MuonEfficiencyCorrector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MuonEfficiencyCorrector*)
   {
      ::MuonEfficiencyCorrector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MuonEfficiencyCorrector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MuonEfficiencyCorrector", ::MuonEfficiencyCorrector::Class_Version(), "xAODAnaHelpers/MuonEfficiencyCorrector.h", 30,
                  typeid(::MuonEfficiencyCorrector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MuonEfficiencyCorrector::Dictionary, isa_proxy, 4,
                  sizeof(::MuonEfficiencyCorrector) );
      instance.SetNew(&new_MuonEfficiencyCorrector);
      instance.SetNewArray(&newArray_MuonEfficiencyCorrector);
      instance.SetDelete(&delete_MuonEfficiencyCorrector);
      instance.SetDeleteArray(&deleteArray_MuonEfficiencyCorrector);
      instance.SetDestructor(&destruct_MuonEfficiencyCorrector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MuonEfficiencyCorrector*)
   {
      return GenerateInitInstanceLocal((::MuonEfficiencyCorrector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::MuonEfficiencyCorrector*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TauEfficiencyCorrector(void *p = 0);
   static void *newArray_TauEfficiencyCorrector(Long_t size, void *p);
   static void delete_TauEfficiencyCorrector(void *p);
   static void deleteArray_TauEfficiencyCorrector(void *p);
   static void destruct_TauEfficiencyCorrector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TauEfficiencyCorrector*)
   {
      ::TauEfficiencyCorrector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TauEfficiencyCorrector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TauEfficiencyCorrector", ::TauEfficiencyCorrector::Class_Version(), "xAODAnaHelpers/TauEfficiencyCorrector.h", 27,
                  typeid(::TauEfficiencyCorrector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TauEfficiencyCorrector::Dictionary, isa_proxy, 4,
                  sizeof(::TauEfficiencyCorrector) );
      instance.SetNew(&new_TauEfficiencyCorrector);
      instance.SetNewArray(&newArray_TauEfficiencyCorrector);
      instance.SetDelete(&delete_TauEfficiencyCorrector);
      instance.SetDeleteArray(&deleteArray_TauEfficiencyCorrector);
      instance.SetDestructor(&destruct_TauEfficiencyCorrector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TauEfficiencyCorrector*)
   {
      return GenerateInitInstanceLocal((::TauEfficiencyCorrector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::TauEfficiencyCorrector*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BJetEfficiencyCorrector(void *p = 0);
   static void *newArray_BJetEfficiencyCorrector(Long_t size, void *p);
   static void delete_BJetEfficiencyCorrector(void *p);
   static void deleteArray_BJetEfficiencyCorrector(void *p);
   static void destruct_BJetEfficiencyCorrector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BJetEfficiencyCorrector*)
   {
      ::BJetEfficiencyCorrector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BJetEfficiencyCorrector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BJetEfficiencyCorrector", ::BJetEfficiencyCorrector::Class_Version(), "xAODAnaHelpers/BJetEfficiencyCorrector.h", 21,
                  typeid(::BJetEfficiencyCorrector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BJetEfficiencyCorrector::Dictionary, isa_proxy, 4,
                  sizeof(::BJetEfficiencyCorrector) );
      instance.SetNew(&new_BJetEfficiencyCorrector);
      instance.SetNewArray(&newArray_BJetEfficiencyCorrector);
      instance.SetDelete(&delete_BJetEfficiencyCorrector);
      instance.SetDeleteArray(&deleteArray_BJetEfficiencyCorrector);
      instance.SetDestructor(&destruct_BJetEfficiencyCorrector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BJetEfficiencyCorrector*)
   {
      return GenerateInitInstanceLocal((::BJetEfficiencyCorrector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::BJetEfficiencyCorrector*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_IParticleHistsAlgo(void *p = 0);
   static void *newArray_IParticleHistsAlgo(Long_t size, void *p);
   static void delete_IParticleHistsAlgo(void *p);
   static void deleteArray_IParticleHistsAlgo(void *p);
   static void destruct_IParticleHistsAlgo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::IParticleHistsAlgo*)
   {
      ::IParticleHistsAlgo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::IParticleHistsAlgo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("IParticleHistsAlgo", ::IParticleHistsAlgo::Class_Version(), "xAODAnaHelpers/IParticleHistsAlgo.h", 13,
                  typeid(::IParticleHistsAlgo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::IParticleHistsAlgo::Dictionary, isa_proxy, 4,
                  sizeof(::IParticleHistsAlgo) );
      instance.SetNew(&new_IParticleHistsAlgo);
      instance.SetNewArray(&newArray_IParticleHistsAlgo);
      instance.SetDelete(&delete_IParticleHistsAlgo);
      instance.SetDeleteArray(&deleteArray_IParticleHistsAlgo);
      instance.SetDestructor(&destruct_IParticleHistsAlgo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::IParticleHistsAlgo*)
   {
      return GenerateInitInstanceLocal((::IParticleHistsAlgo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::IParticleHistsAlgo*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_JetHistsAlgo(void *p = 0);
   static void *newArray_JetHistsAlgo(Long_t size, void *p);
   static void delete_JetHistsAlgo(void *p);
   static void deleteArray_JetHistsAlgo(void *p);
   static void destruct_JetHistsAlgo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::JetHistsAlgo*)
   {
      ::JetHistsAlgo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::JetHistsAlgo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("JetHistsAlgo", ::JetHistsAlgo::Class_Version(), "xAODAnaHelpers/JetHistsAlgo.h", 9,
                  typeid(::JetHistsAlgo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::JetHistsAlgo::Dictionary, isa_proxy, 4,
                  sizeof(::JetHistsAlgo) );
      instance.SetNew(&new_JetHistsAlgo);
      instance.SetNewArray(&newArray_JetHistsAlgo);
      instance.SetDelete(&delete_JetHistsAlgo);
      instance.SetDeleteArray(&deleteArray_JetHistsAlgo);
      instance.SetDestructor(&destruct_JetHistsAlgo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::JetHistsAlgo*)
   {
      return GenerateInitInstanceLocal((::JetHistsAlgo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::JetHistsAlgo*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MuonHistsAlgo(void *p = 0);
   static void *newArray_MuonHistsAlgo(Long_t size, void *p);
   static void delete_MuonHistsAlgo(void *p);
   static void deleteArray_MuonHistsAlgo(void *p);
   static void destruct_MuonHistsAlgo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MuonHistsAlgo*)
   {
      ::MuonHistsAlgo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MuonHistsAlgo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MuonHistsAlgo", ::MuonHistsAlgo::Class_Version(), "xAODAnaHelpers/MuonHistsAlgo.h", 6,
                  typeid(::MuonHistsAlgo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MuonHistsAlgo::Dictionary, isa_proxy, 4,
                  sizeof(::MuonHistsAlgo) );
      instance.SetNew(&new_MuonHistsAlgo);
      instance.SetNewArray(&newArray_MuonHistsAlgo);
      instance.SetDelete(&delete_MuonHistsAlgo);
      instance.SetDeleteArray(&deleteArray_MuonHistsAlgo);
      instance.SetDestructor(&destruct_MuonHistsAlgo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MuonHistsAlgo*)
   {
      return GenerateInitInstanceLocal((::MuonHistsAlgo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::MuonHistsAlgo*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_PhotonHistsAlgo(void *p = 0);
   static void *newArray_PhotonHistsAlgo(Long_t size, void *p);
   static void delete_PhotonHistsAlgo(void *p);
   static void deleteArray_PhotonHistsAlgo(void *p);
   static void destruct_PhotonHistsAlgo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PhotonHistsAlgo*)
   {
      ::PhotonHistsAlgo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PhotonHistsAlgo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("PhotonHistsAlgo", ::PhotonHistsAlgo::Class_Version(), "xAODAnaHelpers/PhotonHistsAlgo.h", 6,
                  typeid(::PhotonHistsAlgo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::PhotonHistsAlgo::Dictionary, isa_proxy, 4,
                  sizeof(::PhotonHistsAlgo) );
      instance.SetNew(&new_PhotonHistsAlgo);
      instance.SetNewArray(&newArray_PhotonHistsAlgo);
      instance.SetDelete(&delete_PhotonHistsAlgo);
      instance.SetDeleteArray(&deleteArray_PhotonHistsAlgo);
      instance.SetDestructor(&destruct_PhotonHistsAlgo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PhotonHistsAlgo*)
   {
      return GenerateInitInstanceLocal((::PhotonHistsAlgo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::PhotonHistsAlgo*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ElectronHistsAlgo(void *p = 0);
   static void *newArray_ElectronHistsAlgo(Long_t size, void *p);
   static void delete_ElectronHistsAlgo(void *p);
   static void deleteArray_ElectronHistsAlgo(void *p);
   static void destruct_ElectronHistsAlgo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ElectronHistsAlgo*)
   {
      ::ElectronHistsAlgo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ElectronHistsAlgo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ElectronHistsAlgo", ::ElectronHistsAlgo::Class_Version(), "xAODAnaHelpers/ElectronHistsAlgo.h", 6,
                  typeid(::ElectronHistsAlgo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ElectronHistsAlgo::Dictionary, isa_proxy, 4,
                  sizeof(::ElectronHistsAlgo) );
      instance.SetNew(&new_ElectronHistsAlgo);
      instance.SetNewArray(&newArray_ElectronHistsAlgo);
      instance.SetDelete(&delete_ElectronHistsAlgo);
      instance.SetDeleteArray(&deleteArray_ElectronHistsAlgo);
      instance.SetDestructor(&destruct_ElectronHistsAlgo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ElectronHistsAlgo*)
   {
      return GenerateInitInstanceLocal((::ElectronHistsAlgo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::ElectronHistsAlgo*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MetHistsAlgo(void *p = 0);
   static void *newArray_MetHistsAlgo(Long_t size, void *p);
   static void delete_MetHistsAlgo(void *p);
   static void deleteArray_MetHistsAlgo(void *p);
   static void destruct_MetHistsAlgo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MetHistsAlgo*)
   {
      ::MetHistsAlgo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MetHistsAlgo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MetHistsAlgo", ::MetHistsAlgo::Class_Version(), "xAODAnaHelpers/MetHistsAlgo.h", 9,
                  typeid(::MetHistsAlgo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MetHistsAlgo::Dictionary, isa_proxy, 4,
                  sizeof(::MetHistsAlgo) );
      instance.SetNew(&new_MetHistsAlgo);
      instance.SetNewArray(&newArray_MetHistsAlgo);
      instance.SetDelete(&delete_MetHistsAlgo);
      instance.SetDeleteArray(&deleteArray_MetHistsAlgo);
      instance.SetDestructor(&destruct_MetHistsAlgo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MetHistsAlgo*)
   {
      return GenerateInitInstanceLocal((::MetHistsAlgo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::MetHistsAlgo*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TrackHistsAlgo(void *p = 0);
   static void *newArray_TrackHistsAlgo(Long_t size, void *p);
   static void delete_TrackHistsAlgo(void *p);
   static void deleteArray_TrackHistsAlgo(void *p);
   static void destruct_TrackHistsAlgo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TrackHistsAlgo*)
   {
      ::TrackHistsAlgo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TrackHistsAlgo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TrackHistsAlgo", ::TrackHistsAlgo::Class_Version(), "xAODAnaHelpers/TrackHistsAlgo.h", 9,
                  typeid(::TrackHistsAlgo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TrackHistsAlgo::Dictionary, isa_proxy, 4,
                  sizeof(::TrackHistsAlgo) );
      instance.SetNew(&new_TrackHistsAlgo);
      instance.SetNewArray(&newArray_TrackHistsAlgo);
      instance.SetDelete(&delete_TrackHistsAlgo);
      instance.SetDeleteArray(&deleteArray_TrackHistsAlgo);
      instance.SetDestructor(&destruct_TrackHistsAlgo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TrackHistsAlgo*)
   {
      return GenerateInitInstanceLocal((::TrackHistsAlgo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::TrackHistsAlgo*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ClusterHistsAlgo(void *p = 0);
   static void *newArray_ClusterHistsAlgo(Long_t size, void *p);
   static void delete_ClusterHistsAlgo(void *p);
   static void deleteArray_ClusterHistsAlgo(void *p);
   static void destruct_ClusterHistsAlgo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ClusterHistsAlgo*)
   {
      ::ClusterHistsAlgo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ClusterHistsAlgo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ClusterHistsAlgo", ::ClusterHistsAlgo::Class_Version(), "xAODAnaHelpers/ClusterHistsAlgo.h", 9,
                  typeid(::ClusterHistsAlgo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ClusterHistsAlgo::Dictionary, isa_proxy, 4,
                  sizeof(::ClusterHistsAlgo) );
      instance.SetNew(&new_ClusterHistsAlgo);
      instance.SetNewArray(&newArray_ClusterHistsAlgo);
      instance.SetDelete(&delete_ClusterHistsAlgo);
      instance.SetDeleteArray(&deleteArray_ClusterHistsAlgo);
      instance.SetDestructor(&destruct_ClusterHistsAlgo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ClusterHistsAlgo*)
   {
      return GenerateInitInstanceLocal((::ClusterHistsAlgo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::ClusterHistsAlgo*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TreeAlgo(void *p = 0);
   static void *newArray_TreeAlgo(Long_t size, void *p);
   static void delete_TreeAlgo(void *p);
   static void deleteArray_TreeAlgo(void *p);
   static void destruct_TreeAlgo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TreeAlgo*)
   {
      ::TreeAlgo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TreeAlgo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TreeAlgo", ::TreeAlgo::Class_Version(), "xAODAnaHelpers/TreeAlgo.h", 11,
                  typeid(::TreeAlgo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TreeAlgo::Dictionary, isa_proxy, 4,
                  sizeof(::TreeAlgo) );
      instance.SetNew(&new_TreeAlgo);
      instance.SetNewArray(&newArray_TreeAlgo);
      instance.SetDelete(&delete_TreeAlgo);
      instance.SetDeleteArray(&deleteArray_TreeAlgo);
      instance.SetDestructor(&destruct_TreeAlgo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TreeAlgo*)
   {
      return GenerateInitInstanceLocal((::TreeAlgo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::TreeAlgo*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MinixAOD(void *p = 0);
   static void *newArray_MinixAOD(Long_t size, void *p);
   static void delete_MinixAOD(void *p);
   static void deleteArray_MinixAOD(void *p);
   static void destruct_MinixAOD(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MinixAOD*)
   {
      ::MinixAOD *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MinixAOD >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MinixAOD", ::MinixAOD::Class_Version(), "xAODAnaHelpers/MinixAOD.h", 44,
                  typeid(::MinixAOD), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MinixAOD::Dictionary, isa_proxy, 4,
                  sizeof(::MinixAOD) );
      instance.SetNew(&new_MinixAOD);
      instance.SetNewArray(&newArray_MinixAOD);
      instance.SetDelete(&delete_MinixAOD);
      instance.SetDeleteArray(&deleteArray_MinixAOD);
      instance.SetDestructor(&destruct_MinixAOD);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MinixAOD*)
   {
      return GenerateInitInstanceLocal((::MinixAOD*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::MinixAOD*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_OverlapRemover(void *p = 0);
   static void *newArray_OverlapRemover(Long_t size, void *p);
   static void delete_OverlapRemover(void *p);
   static void deleteArray_OverlapRemover(void *p);
   static void destruct_OverlapRemover(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::OverlapRemover*)
   {
      ::OverlapRemover *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::OverlapRemover >(0);
      static ::ROOT::TGenericClassInfo 
         instance("OverlapRemover", ::OverlapRemover::Class_Version(), "xAODAnaHelpers/OverlapRemover.h", 83,
                  typeid(::OverlapRemover), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::OverlapRemover::Dictionary, isa_proxy, 4,
                  sizeof(::OverlapRemover) );
      instance.SetNew(&new_OverlapRemover);
      instance.SetNewArray(&newArray_OverlapRemover);
      instance.SetDelete(&delete_OverlapRemover);
      instance.SetDeleteArray(&deleteArray_OverlapRemover);
      instance.SetDestructor(&destruct_OverlapRemover);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::OverlapRemover*)
   {
      return GenerateInitInstanceLocal((::OverlapRemover*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::OverlapRemover*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TrigMatcher(void *p = 0);
   static void *newArray_TrigMatcher(Long_t size, void *p);
   static void delete_TrigMatcher(void *p);
   static void deleteArray_TrigMatcher(void *p);
   static void destruct_TrigMatcher(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TrigMatcher*)
   {
      ::TrigMatcher *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TrigMatcher >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TrigMatcher", ::TrigMatcher::Class_Version(), "xAODAnaHelpers/TrigMatcher.h", 58,
                  typeid(::TrigMatcher), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TrigMatcher::Dictionary, isa_proxy, 4,
                  sizeof(::TrigMatcher) );
      instance.SetNew(&new_TrigMatcher);
      instance.SetNewArray(&newArray_TrigMatcher);
      instance.SetDelete(&delete_TrigMatcher);
      instance.SetDeleteArray(&deleteArray_TrigMatcher);
      instance.SetDestructor(&destruct_TrigMatcher);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TrigMatcher*)
   {
      return GenerateInitInstanceLocal((::TrigMatcher*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::TrigMatcher*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Writer(void *p = 0);
   static void *newArray_Writer(Long_t size, void *p);
   static void delete_Writer(void *p);
   static void deleteArray_Writer(void *p);
   static void destruct_Writer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Writer*)
   {
      ::Writer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Writer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Writer", ::Writer::Class_Version(), "xAODAnaHelpers/Writer.h", 7,
                  typeid(::Writer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Writer::Dictionary, isa_proxy, 4,
                  sizeof(::Writer) );
      instance.SetNew(&new_Writer);
      instance.SetNewArray(&newArray_Writer);
      instance.SetDelete(&delete_Writer);
      instance.SetDeleteArray(&deleteArray_Writer);
      instance.SetDestructor(&destruct_Writer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Writer*)
   {
      return GenerateInitInstanceLocal((::Writer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Writer*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MessagePrinterAlgo(void *p = 0);
   static void *newArray_MessagePrinterAlgo(Long_t size, void *p);
   static void delete_MessagePrinterAlgo(void *p);
   static void deleteArray_MessagePrinterAlgo(void *p);
   static void destruct_MessagePrinterAlgo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MessagePrinterAlgo*)
   {
      ::MessagePrinterAlgo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MessagePrinterAlgo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MessagePrinterAlgo", ::MessagePrinterAlgo::Class_Version(), "xAODAnaHelpers/MessagePrinterAlgo.h", 20,
                  typeid(::MessagePrinterAlgo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MessagePrinterAlgo::Dictionary, isa_proxy, 4,
                  sizeof(::MessagePrinterAlgo) );
      instance.SetNew(&new_MessagePrinterAlgo);
      instance.SetNewArray(&newArray_MessagePrinterAlgo);
      instance.SetDelete(&delete_MessagePrinterAlgo);
      instance.SetDeleteArray(&deleteArray_MessagePrinterAlgo);
      instance.SetDestructor(&destruct_MessagePrinterAlgo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MessagePrinterAlgo*)
   {
      return GenerateInitInstanceLocal((::MessagePrinterAlgo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::MessagePrinterAlgo*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace xAH {
//______________________________________________________________________________
atomic_TClass_ptr Algorithm::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Algorithm::Class_Name()
{
   return "xAH::Algorithm";
}

//______________________________________________________________________________
const char *Algorithm::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::xAH::Algorithm*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Algorithm::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::xAH::Algorithm*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Algorithm::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::xAH::Algorithm*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Algorithm::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::xAH::Algorithm*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace xAH
//______________________________________________________________________________
atomic_TClass_ptr BasicEventSelection::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BasicEventSelection::Class_Name()
{
   return "BasicEventSelection";
}

//______________________________________________________________________________
const char *BasicEventSelection::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BasicEventSelection*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BasicEventSelection::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BasicEventSelection*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BasicEventSelection::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BasicEventSelection*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BasicEventSelection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BasicEventSelection*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ElectronSelector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ElectronSelector::Class_Name()
{
   return "ElectronSelector";
}

//______________________________________________________________________________
const char *ElectronSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElectronSelector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ElectronSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElectronSelector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ElectronSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElectronSelector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ElectronSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElectronSelector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr PhotonSelector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PhotonSelector::Class_Name()
{
   return "PhotonSelector";
}

//______________________________________________________________________________
const char *PhotonSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PhotonSelector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PhotonSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PhotonSelector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PhotonSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PhotonSelector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PhotonSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PhotonSelector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TauSelector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TauSelector::Class_Name()
{
   return "TauSelector";
}

//______________________________________________________________________________
const char *TauSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TauSelector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TauSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TauSelector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TauSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TauSelector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TauSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TauSelector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr JetSelector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *JetSelector::Class_Name()
{
   return "JetSelector";
}

//______________________________________________________________________________
const char *JetSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::JetSelector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int JetSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::JetSelector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *JetSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::JetSelector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *JetSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::JetSelector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DebugTool::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DebugTool::Class_Name()
{
   return "DebugTool";
}

//______________________________________________________________________________
const char *DebugTool::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DebugTool*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DebugTool::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DebugTool*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DebugTool::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DebugTool*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DebugTool::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DebugTool*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TruthSelector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TruthSelector::Class_Name()
{
   return "TruthSelector";
}

//______________________________________________________________________________
const char *TruthSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TruthSelector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TruthSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TruthSelector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TruthSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TruthSelector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TruthSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TruthSelector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TrackSelector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TrackSelector::Class_Name()
{
   return "TrackSelector";
}

//______________________________________________________________________________
const char *TrackSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TrackSelector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TrackSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TrackSelector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TrackSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TrackSelector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TrackSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TrackSelector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MuonSelector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MuonSelector::Class_Name()
{
   return "MuonSelector";
}

//______________________________________________________________________________
const char *MuonSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MuonSelector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MuonSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MuonSelector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MuonSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MuonSelector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MuonSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MuonSelector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ElectronCalibrator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ElectronCalibrator::Class_Name()
{
   return "ElectronCalibrator";
}

//______________________________________________________________________________
const char *ElectronCalibrator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElectronCalibrator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ElectronCalibrator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElectronCalibrator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ElectronCalibrator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElectronCalibrator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ElectronCalibrator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElectronCalibrator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr PhotonCalibrator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PhotonCalibrator::Class_Name()
{
   return "PhotonCalibrator";
}

//______________________________________________________________________________
const char *PhotonCalibrator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PhotonCalibrator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PhotonCalibrator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PhotonCalibrator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PhotonCalibrator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PhotonCalibrator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PhotonCalibrator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PhotonCalibrator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr JetCalibrator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *JetCalibrator::Class_Name()
{
   return "JetCalibrator";
}

//______________________________________________________________________________
const char *JetCalibrator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::JetCalibrator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int JetCalibrator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::JetCalibrator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *JetCalibrator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::JetCalibrator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *JetCalibrator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::JetCalibrator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MuonCalibrator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MuonCalibrator::Class_Name()
{
   return "MuonCalibrator";
}

//______________________________________________________________________________
const char *MuonCalibrator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MuonCalibrator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MuonCalibrator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MuonCalibrator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MuonCalibrator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MuonCalibrator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MuonCalibrator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MuonCalibrator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TauCalibrator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TauCalibrator::Class_Name()
{
   return "TauCalibrator";
}

//______________________________________________________________________________
const char *TauCalibrator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TauCalibrator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TauCalibrator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TauCalibrator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TauCalibrator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TauCalibrator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TauCalibrator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TauCalibrator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr HLTJetRoIBuilder::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *HLTJetRoIBuilder::Class_Name()
{
   return "HLTJetRoIBuilder";
}

//______________________________________________________________________________
const char *HLTJetRoIBuilder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::HLTJetRoIBuilder*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int HLTJetRoIBuilder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::HLTJetRoIBuilder*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HLTJetRoIBuilder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::HLTJetRoIBuilder*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HLTJetRoIBuilder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::HLTJetRoIBuilder*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr HLTJetGetter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *HLTJetGetter::Class_Name()
{
   return "HLTJetGetter";
}

//______________________________________________________________________________
const char *HLTJetGetter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::HLTJetGetter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int HLTJetGetter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::HLTJetGetter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HLTJetGetter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::HLTJetGetter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HLTJetGetter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::HLTJetGetter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr METConstructor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *METConstructor::Class_Name()
{
   return "METConstructor";
}

//______________________________________________________________________________
const char *METConstructor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::METConstructor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int METConstructor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::METConstructor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *METConstructor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::METConstructor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *METConstructor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::METConstructor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ElectronEfficiencyCorrector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ElectronEfficiencyCorrector::Class_Name()
{
   return "ElectronEfficiencyCorrector";
}

//______________________________________________________________________________
const char *ElectronEfficiencyCorrector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElectronEfficiencyCorrector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ElectronEfficiencyCorrector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElectronEfficiencyCorrector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ElectronEfficiencyCorrector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElectronEfficiencyCorrector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ElectronEfficiencyCorrector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElectronEfficiencyCorrector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MuonEfficiencyCorrector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MuonEfficiencyCorrector::Class_Name()
{
   return "MuonEfficiencyCorrector";
}

//______________________________________________________________________________
const char *MuonEfficiencyCorrector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MuonEfficiencyCorrector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MuonEfficiencyCorrector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MuonEfficiencyCorrector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MuonEfficiencyCorrector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MuonEfficiencyCorrector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MuonEfficiencyCorrector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MuonEfficiencyCorrector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TauEfficiencyCorrector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TauEfficiencyCorrector::Class_Name()
{
   return "TauEfficiencyCorrector";
}

//______________________________________________________________________________
const char *TauEfficiencyCorrector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TauEfficiencyCorrector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TauEfficiencyCorrector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TauEfficiencyCorrector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TauEfficiencyCorrector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TauEfficiencyCorrector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TauEfficiencyCorrector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TauEfficiencyCorrector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BJetEfficiencyCorrector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BJetEfficiencyCorrector::Class_Name()
{
   return "BJetEfficiencyCorrector";
}

//______________________________________________________________________________
const char *BJetEfficiencyCorrector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BJetEfficiencyCorrector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BJetEfficiencyCorrector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BJetEfficiencyCorrector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BJetEfficiencyCorrector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BJetEfficiencyCorrector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BJetEfficiencyCorrector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BJetEfficiencyCorrector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr IParticleHistsAlgo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *IParticleHistsAlgo::Class_Name()
{
   return "IParticleHistsAlgo";
}

//______________________________________________________________________________
const char *IParticleHistsAlgo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::IParticleHistsAlgo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int IParticleHistsAlgo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::IParticleHistsAlgo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *IParticleHistsAlgo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::IParticleHistsAlgo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *IParticleHistsAlgo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::IParticleHistsAlgo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr JetHistsAlgo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *JetHistsAlgo::Class_Name()
{
   return "JetHistsAlgo";
}

//______________________________________________________________________________
const char *JetHistsAlgo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::JetHistsAlgo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int JetHistsAlgo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::JetHistsAlgo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *JetHistsAlgo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::JetHistsAlgo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *JetHistsAlgo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::JetHistsAlgo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MuonHistsAlgo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MuonHistsAlgo::Class_Name()
{
   return "MuonHistsAlgo";
}

//______________________________________________________________________________
const char *MuonHistsAlgo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MuonHistsAlgo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MuonHistsAlgo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MuonHistsAlgo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MuonHistsAlgo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MuonHistsAlgo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MuonHistsAlgo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MuonHistsAlgo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr PhotonHistsAlgo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PhotonHistsAlgo::Class_Name()
{
   return "PhotonHistsAlgo";
}

//______________________________________________________________________________
const char *PhotonHistsAlgo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PhotonHistsAlgo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PhotonHistsAlgo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PhotonHistsAlgo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PhotonHistsAlgo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PhotonHistsAlgo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PhotonHistsAlgo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PhotonHistsAlgo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ElectronHistsAlgo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ElectronHistsAlgo::Class_Name()
{
   return "ElectronHistsAlgo";
}

//______________________________________________________________________________
const char *ElectronHistsAlgo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElectronHistsAlgo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ElectronHistsAlgo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElectronHistsAlgo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ElectronHistsAlgo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElectronHistsAlgo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ElectronHistsAlgo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElectronHistsAlgo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MetHistsAlgo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MetHistsAlgo::Class_Name()
{
   return "MetHistsAlgo";
}

//______________________________________________________________________________
const char *MetHistsAlgo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MetHistsAlgo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MetHistsAlgo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MetHistsAlgo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MetHistsAlgo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MetHistsAlgo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MetHistsAlgo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MetHistsAlgo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TrackHistsAlgo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TrackHistsAlgo::Class_Name()
{
   return "TrackHistsAlgo";
}

//______________________________________________________________________________
const char *TrackHistsAlgo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TrackHistsAlgo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TrackHistsAlgo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TrackHistsAlgo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TrackHistsAlgo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TrackHistsAlgo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TrackHistsAlgo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TrackHistsAlgo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ClusterHistsAlgo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ClusterHistsAlgo::Class_Name()
{
   return "ClusterHistsAlgo";
}

//______________________________________________________________________________
const char *ClusterHistsAlgo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ClusterHistsAlgo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ClusterHistsAlgo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ClusterHistsAlgo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ClusterHistsAlgo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ClusterHistsAlgo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ClusterHistsAlgo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ClusterHistsAlgo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TreeAlgo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TreeAlgo::Class_Name()
{
   return "TreeAlgo";
}

//______________________________________________________________________________
const char *TreeAlgo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TreeAlgo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TreeAlgo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TreeAlgo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TreeAlgo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TreeAlgo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TreeAlgo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TreeAlgo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MinixAOD::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MinixAOD::Class_Name()
{
   return "MinixAOD";
}

//______________________________________________________________________________
const char *MinixAOD::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MinixAOD*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MinixAOD::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MinixAOD*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MinixAOD::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MinixAOD*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MinixAOD::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MinixAOD*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr OverlapRemover::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *OverlapRemover::Class_Name()
{
   return "OverlapRemover";
}

//______________________________________________________________________________
const char *OverlapRemover::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::OverlapRemover*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int OverlapRemover::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::OverlapRemover*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *OverlapRemover::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::OverlapRemover*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *OverlapRemover::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::OverlapRemover*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TrigMatcher::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TrigMatcher::Class_Name()
{
   return "TrigMatcher";
}

//______________________________________________________________________________
const char *TrigMatcher::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TrigMatcher*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TrigMatcher::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TrigMatcher*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TrigMatcher::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TrigMatcher*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TrigMatcher::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TrigMatcher*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Writer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Writer::Class_Name()
{
   return "Writer";
}

//______________________________________________________________________________
const char *Writer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Writer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Writer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Writer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Writer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Writer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Writer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Writer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MessagePrinterAlgo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MessagePrinterAlgo::Class_Name()
{
   return "MessagePrinterAlgo";
}

//______________________________________________________________________________
const char *MessagePrinterAlgo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MessagePrinterAlgo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MessagePrinterAlgo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MessagePrinterAlgo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MessagePrinterAlgo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MessagePrinterAlgo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MessagePrinterAlgo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MessagePrinterAlgo*)0x0)->GetClass(); }
   return fgIsA;
}

namespace xAH {
//______________________________________________________________________________
void Algorithm::Streamer(TBuffer &R__b)
{
   // Stream an object of class xAH::Algorithm.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(xAH::Algorithm::Class(),this);
   } else {
      R__b.WriteClassBuffer(xAH::Algorithm::Class(),this);
   }
}

} // namespace xAH
namespace ROOT {
   // Wrappers around operator new
   static void *new_xAHcLcLAlgorithm(void *p) {
      return  p ? new(p) ::xAH::Algorithm : new ::xAH::Algorithm;
   }
   static void *newArray_xAHcLcLAlgorithm(Long_t nElements, void *p) {
      return p ? new(p) ::xAH::Algorithm[nElements] : new ::xAH::Algorithm[nElements];
   }
   // Wrapper around operator delete
   static void delete_xAHcLcLAlgorithm(void *p) {
      delete ((::xAH::Algorithm*)p);
   }
   static void deleteArray_xAHcLcLAlgorithm(void *p) {
      delete [] ((::xAH::Algorithm*)p);
   }
   static void destruct_xAHcLcLAlgorithm(void *p) {
      typedef ::xAH::Algorithm current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::xAH::Algorithm

//______________________________________________________________________________
void BasicEventSelection::Streamer(TBuffer &R__b)
{
   // Stream an object of class BasicEventSelection.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BasicEventSelection::Class(),this);
   } else {
      R__b.WriteClassBuffer(BasicEventSelection::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BasicEventSelection(void *p) {
      return  p ? new(p) ::BasicEventSelection : new ::BasicEventSelection;
   }
   static void *newArray_BasicEventSelection(Long_t nElements, void *p) {
      return p ? new(p) ::BasicEventSelection[nElements] : new ::BasicEventSelection[nElements];
   }
   // Wrapper around operator delete
   static void delete_BasicEventSelection(void *p) {
      delete ((::BasicEventSelection*)p);
   }
   static void deleteArray_BasicEventSelection(void *p) {
      delete [] ((::BasicEventSelection*)p);
   }
   static void destruct_BasicEventSelection(void *p) {
      typedef ::BasicEventSelection current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BasicEventSelection

//______________________________________________________________________________
void ElectronSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class ElectronSelector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ElectronSelector::Class(),this);
   } else {
      R__b.WriteClassBuffer(ElectronSelector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ElectronSelector(void *p) {
      return  p ? new(p) ::ElectronSelector : new ::ElectronSelector;
   }
   static void *newArray_ElectronSelector(Long_t nElements, void *p) {
      return p ? new(p) ::ElectronSelector[nElements] : new ::ElectronSelector[nElements];
   }
   // Wrapper around operator delete
   static void delete_ElectronSelector(void *p) {
      delete ((::ElectronSelector*)p);
   }
   static void deleteArray_ElectronSelector(void *p) {
      delete [] ((::ElectronSelector*)p);
   }
   static void destruct_ElectronSelector(void *p) {
      typedef ::ElectronSelector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ElectronSelector

//______________________________________________________________________________
void PhotonSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class PhotonSelector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(PhotonSelector::Class(),this);
   } else {
      R__b.WriteClassBuffer(PhotonSelector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_PhotonSelector(void *p) {
      return  p ? new(p) ::PhotonSelector : new ::PhotonSelector;
   }
   static void *newArray_PhotonSelector(Long_t nElements, void *p) {
      return p ? new(p) ::PhotonSelector[nElements] : new ::PhotonSelector[nElements];
   }
   // Wrapper around operator delete
   static void delete_PhotonSelector(void *p) {
      delete ((::PhotonSelector*)p);
   }
   static void deleteArray_PhotonSelector(void *p) {
      delete [] ((::PhotonSelector*)p);
   }
   static void destruct_PhotonSelector(void *p) {
      typedef ::PhotonSelector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::PhotonSelector

//______________________________________________________________________________
void TauSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class TauSelector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TauSelector::Class(),this);
   } else {
      R__b.WriteClassBuffer(TauSelector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TauSelector(void *p) {
      return  p ? new(p) ::TauSelector : new ::TauSelector;
   }
   static void *newArray_TauSelector(Long_t nElements, void *p) {
      return p ? new(p) ::TauSelector[nElements] : new ::TauSelector[nElements];
   }
   // Wrapper around operator delete
   static void delete_TauSelector(void *p) {
      delete ((::TauSelector*)p);
   }
   static void deleteArray_TauSelector(void *p) {
      delete [] ((::TauSelector*)p);
   }
   static void destruct_TauSelector(void *p) {
      typedef ::TauSelector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TauSelector

//______________________________________________________________________________
void JetSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class JetSelector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(JetSelector::Class(),this);
   } else {
      R__b.WriteClassBuffer(JetSelector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_JetSelector(void *p) {
      return  p ? new(p) ::JetSelector : new ::JetSelector;
   }
   static void *newArray_JetSelector(Long_t nElements, void *p) {
      return p ? new(p) ::JetSelector[nElements] : new ::JetSelector[nElements];
   }
   // Wrapper around operator delete
   static void delete_JetSelector(void *p) {
      delete ((::JetSelector*)p);
   }
   static void deleteArray_JetSelector(void *p) {
      delete [] ((::JetSelector*)p);
   }
   static void destruct_JetSelector(void *p) {
      typedef ::JetSelector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::JetSelector

//______________________________________________________________________________
void DebugTool::Streamer(TBuffer &R__b)
{
   // Stream an object of class DebugTool.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DebugTool::Class(),this);
   } else {
      R__b.WriteClassBuffer(DebugTool::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DebugTool(void *p) {
      return  p ? new(p) ::DebugTool : new ::DebugTool;
   }
   static void *newArray_DebugTool(Long_t nElements, void *p) {
      return p ? new(p) ::DebugTool[nElements] : new ::DebugTool[nElements];
   }
   // Wrapper around operator delete
   static void delete_DebugTool(void *p) {
      delete ((::DebugTool*)p);
   }
   static void deleteArray_DebugTool(void *p) {
      delete [] ((::DebugTool*)p);
   }
   static void destruct_DebugTool(void *p) {
      typedef ::DebugTool current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DebugTool

//______________________________________________________________________________
void TruthSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class TruthSelector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TruthSelector::Class(),this);
   } else {
      R__b.WriteClassBuffer(TruthSelector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TruthSelector(void *p) {
      return  p ? new(p) ::TruthSelector : new ::TruthSelector;
   }
   static void *newArray_TruthSelector(Long_t nElements, void *p) {
      return p ? new(p) ::TruthSelector[nElements] : new ::TruthSelector[nElements];
   }
   // Wrapper around operator delete
   static void delete_TruthSelector(void *p) {
      delete ((::TruthSelector*)p);
   }
   static void deleteArray_TruthSelector(void *p) {
      delete [] ((::TruthSelector*)p);
   }
   static void destruct_TruthSelector(void *p) {
      typedef ::TruthSelector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TruthSelector

//______________________________________________________________________________
void TrackSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class TrackSelector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TrackSelector::Class(),this);
   } else {
      R__b.WriteClassBuffer(TrackSelector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TrackSelector(void *p) {
      return  p ? new(p) ::TrackSelector : new ::TrackSelector;
   }
   static void *newArray_TrackSelector(Long_t nElements, void *p) {
      return p ? new(p) ::TrackSelector[nElements] : new ::TrackSelector[nElements];
   }
   // Wrapper around operator delete
   static void delete_TrackSelector(void *p) {
      delete ((::TrackSelector*)p);
   }
   static void deleteArray_TrackSelector(void *p) {
      delete [] ((::TrackSelector*)p);
   }
   static void destruct_TrackSelector(void *p) {
      typedef ::TrackSelector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TrackSelector

//______________________________________________________________________________
void MuonSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class MuonSelector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MuonSelector::Class(),this);
   } else {
      R__b.WriteClassBuffer(MuonSelector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MuonSelector(void *p) {
      return  p ? new(p) ::MuonSelector : new ::MuonSelector;
   }
   static void *newArray_MuonSelector(Long_t nElements, void *p) {
      return p ? new(p) ::MuonSelector[nElements] : new ::MuonSelector[nElements];
   }
   // Wrapper around operator delete
   static void delete_MuonSelector(void *p) {
      delete ((::MuonSelector*)p);
   }
   static void deleteArray_MuonSelector(void *p) {
      delete [] ((::MuonSelector*)p);
   }
   static void destruct_MuonSelector(void *p) {
      typedef ::MuonSelector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MuonSelector

//______________________________________________________________________________
void ElectronCalibrator::Streamer(TBuffer &R__b)
{
   // Stream an object of class ElectronCalibrator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ElectronCalibrator::Class(),this);
   } else {
      R__b.WriteClassBuffer(ElectronCalibrator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ElectronCalibrator(void *p) {
      return  p ? new(p) ::ElectronCalibrator : new ::ElectronCalibrator;
   }
   static void *newArray_ElectronCalibrator(Long_t nElements, void *p) {
      return p ? new(p) ::ElectronCalibrator[nElements] : new ::ElectronCalibrator[nElements];
   }
   // Wrapper around operator delete
   static void delete_ElectronCalibrator(void *p) {
      delete ((::ElectronCalibrator*)p);
   }
   static void deleteArray_ElectronCalibrator(void *p) {
      delete [] ((::ElectronCalibrator*)p);
   }
   static void destruct_ElectronCalibrator(void *p) {
      typedef ::ElectronCalibrator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ElectronCalibrator

//______________________________________________________________________________
void PhotonCalibrator::Streamer(TBuffer &R__b)
{
   // Stream an object of class PhotonCalibrator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(PhotonCalibrator::Class(),this);
   } else {
      R__b.WriteClassBuffer(PhotonCalibrator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_PhotonCalibrator(void *p) {
      return  p ? new(p) ::PhotonCalibrator : new ::PhotonCalibrator;
   }
   static void *newArray_PhotonCalibrator(Long_t nElements, void *p) {
      return p ? new(p) ::PhotonCalibrator[nElements] : new ::PhotonCalibrator[nElements];
   }
   // Wrapper around operator delete
   static void delete_PhotonCalibrator(void *p) {
      delete ((::PhotonCalibrator*)p);
   }
   static void deleteArray_PhotonCalibrator(void *p) {
      delete [] ((::PhotonCalibrator*)p);
   }
   static void destruct_PhotonCalibrator(void *p) {
      typedef ::PhotonCalibrator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::PhotonCalibrator

//______________________________________________________________________________
void JetCalibrator::Streamer(TBuffer &R__b)
{
   // Stream an object of class JetCalibrator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(JetCalibrator::Class(),this);
   } else {
      R__b.WriteClassBuffer(JetCalibrator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_JetCalibrator(void *p) {
      return  p ? new(p) ::JetCalibrator : new ::JetCalibrator;
   }
   static void *newArray_JetCalibrator(Long_t nElements, void *p) {
      return p ? new(p) ::JetCalibrator[nElements] : new ::JetCalibrator[nElements];
   }
   // Wrapper around operator delete
   static void delete_JetCalibrator(void *p) {
      delete ((::JetCalibrator*)p);
   }
   static void deleteArray_JetCalibrator(void *p) {
      delete [] ((::JetCalibrator*)p);
   }
   static void destruct_JetCalibrator(void *p) {
      typedef ::JetCalibrator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::JetCalibrator

//______________________________________________________________________________
void MuonCalibrator::Streamer(TBuffer &R__b)
{
   // Stream an object of class MuonCalibrator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MuonCalibrator::Class(),this);
   } else {
      R__b.WriteClassBuffer(MuonCalibrator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MuonCalibrator(void *p) {
      return  p ? new(p) ::MuonCalibrator : new ::MuonCalibrator;
   }
   static void *newArray_MuonCalibrator(Long_t nElements, void *p) {
      return p ? new(p) ::MuonCalibrator[nElements] : new ::MuonCalibrator[nElements];
   }
   // Wrapper around operator delete
   static void delete_MuonCalibrator(void *p) {
      delete ((::MuonCalibrator*)p);
   }
   static void deleteArray_MuonCalibrator(void *p) {
      delete [] ((::MuonCalibrator*)p);
   }
   static void destruct_MuonCalibrator(void *p) {
      typedef ::MuonCalibrator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MuonCalibrator

//______________________________________________________________________________
void TauCalibrator::Streamer(TBuffer &R__b)
{
   // Stream an object of class TauCalibrator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TauCalibrator::Class(),this);
   } else {
      R__b.WriteClassBuffer(TauCalibrator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TauCalibrator(void *p) {
      return  p ? new(p) ::TauCalibrator : new ::TauCalibrator;
   }
   static void *newArray_TauCalibrator(Long_t nElements, void *p) {
      return p ? new(p) ::TauCalibrator[nElements] : new ::TauCalibrator[nElements];
   }
   // Wrapper around operator delete
   static void delete_TauCalibrator(void *p) {
      delete ((::TauCalibrator*)p);
   }
   static void deleteArray_TauCalibrator(void *p) {
      delete [] ((::TauCalibrator*)p);
   }
   static void destruct_TauCalibrator(void *p) {
      typedef ::TauCalibrator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TauCalibrator

//______________________________________________________________________________
void HLTJetRoIBuilder::Streamer(TBuffer &R__b)
{
   // Stream an object of class HLTJetRoIBuilder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(HLTJetRoIBuilder::Class(),this);
   } else {
      R__b.WriteClassBuffer(HLTJetRoIBuilder::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_HLTJetRoIBuilder(void *p) {
      return  p ? new(p) ::HLTJetRoIBuilder : new ::HLTJetRoIBuilder;
   }
   static void *newArray_HLTJetRoIBuilder(Long_t nElements, void *p) {
      return p ? new(p) ::HLTJetRoIBuilder[nElements] : new ::HLTJetRoIBuilder[nElements];
   }
   // Wrapper around operator delete
   static void delete_HLTJetRoIBuilder(void *p) {
      delete ((::HLTJetRoIBuilder*)p);
   }
   static void deleteArray_HLTJetRoIBuilder(void *p) {
      delete [] ((::HLTJetRoIBuilder*)p);
   }
   static void destruct_HLTJetRoIBuilder(void *p) {
      typedef ::HLTJetRoIBuilder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::HLTJetRoIBuilder

//______________________________________________________________________________
void HLTJetGetter::Streamer(TBuffer &R__b)
{
   // Stream an object of class HLTJetGetter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(HLTJetGetter::Class(),this);
   } else {
      R__b.WriteClassBuffer(HLTJetGetter::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_HLTJetGetter(void *p) {
      return  p ? new(p) ::HLTJetGetter : new ::HLTJetGetter;
   }
   static void *newArray_HLTJetGetter(Long_t nElements, void *p) {
      return p ? new(p) ::HLTJetGetter[nElements] : new ::HLTJetGetter[nElements];
   }
   // Wrapper around operator delete
   static void delete_HLTJetGetter(void *p) {
      delete ((::HLTJetGetter*)p);
   }
   static void deleteArray_HLTJetGetter(void *p) {
      delete [] ((::HLTJetGetter*)p);
   }
   static void destruct_HLTJetGetter(void *p) {
      typedef ::HLTJetGetter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::HLTJetGetter

//______________________________________________________________________________
void METConstructor::Streamer(TBuffer &R__b)
{
   // Stream an object of class METConstructor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(METConstructor::Class(),this);
   } else {
      R__b.WriteClassBuffer(METConstructor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_METConstructor(void *p) {
      return  p ? new(p) ::METConstructor : new ::METConstructor;
   }
   static void *newArray_METConstructor(Long_t nElements, void *p) {
      return p ? new(p) ::METConstructor[nElements] : new ::METConstructor[nElements];
   }
   // Wrapper around operator delete
   static void delete_METConstructor(void *p) {
      delete ((::METConstructor*)p);
   }
   static void deleteArray_METConstructor(void *p) {
      delete [] ((::METConstructor*)p);
   }
   static void destruct_METConstructor(void *p) {
      typedef ::METConstructor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::METConstructor

//______________________________________________________________________________
void ElectronEfficiencyCorrector::Streamer(TBuffer &R__b)
{
   // Stream an object of class ElectronEfficiencyCorrector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ElectronEfficiencyCorrector::Class(),this);
   } else {
      R__b.WriteClassBuffer(ElectronEfficiencyCorrector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ElectronEfficiencyCorrector(void *p) {
      return  p ? new(p) ::ElectronEfficiencyCorrector : new ::ElectronEfficiencyCorrector;
   }
   static void *newArray_ElectronEfficiencyCorrector(Long_t nElements, void *p) {
      return p ? new(p) ::ElectronEfficiencyCorrector[nElements] : new ::ElectronEfficiencyCorrector[nElements];
   }
   // Wrapper around operator delete
   static void delete_ElectronEfficiencyCorrector(void *p) {
      delete ((::ElectronEfficiencyCorrector*)p);
   }
   static void deleteArray_ElectronEfficiencyCorrector(void *p) {
      delete [] ((::ElectronEfficiencyCorrector*)p);
   }
   static void destruct_ElectronEfficiencyCorrector(void *p) {
      typedef ::ElectronEfficiencyCorrector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ElectronEfficiencyCorrector

//______________________________________________________________________________
void MuonEfficiencyCorrector::Streamer(TBuffer &R__b)
{
   // Stream an object of class MuonEfficiencyCorrector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MuonEfficiencyCorrector::Class(),this);
   } else {
      R__b.WriteClassBuffer(MuonEfficiencyCorrector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MuonEfficiencyCorrector(void *p) {
      return  p ? new(p) ::MuonEfficiencyCorrector : new ::MuonEfficiencyCorrector;
   }
   static void *newArray_MuonEfficiencyCorrector(Long_t nElements, void *p) {
      return p ? new(p) ::MuonEfficiencyCorrector[nElements] : new ::MuonEfficiencyCorrector[nElements];
   }
   // Wrapper around operator delete
   static void delete_MuonEfficiencyCorrector(void *p) {
      delete ((::MuonEfficiencyCorrector*)p);
   }
   static void deleteArray_MuonEfficiencyCorrector(void *p) {
      delete [] ((::MuonEfficiencyCorrector*)p);
   }
   static void destruct_MuonEfficiencyCorrector(void *p) {
      typedef ::MuonEfficiencyCorrector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MuonEfficiencyCorrector

//______________________________________________________________________________
void TauEfficiencyCorrector::Streamer(TBuffer &R__b)
{
   // Stream an object of class TauEfficiencyCorrector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TauEfficiencyCorrector::Class(),this);
   } else {
      R__b.WriteClassBuffer(TauEfficiencyCorrector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TauEfficiencyCorrector(void *p) {
      return  p ? new(p) ::TauEfficiencyCorrector : new ::TauEfficiencyCorrector;
   }
   static void *newArray_TauEfficiencyCorrector(Long_t nElements, void *p) {
      return p ? new(p) ::TauEfficiencyCorrector[nElements] : new ::TauEfficiencyCorrector[nElements];
   }
   // Wrapper around operator delete
   static void delete_TauEfficiencyCorrector(void *p) {
      delete ((::TauEfficiencyCorrector*)p);
   }
   static void deleteArray_TauEfficiencyCorrector(void *p) {
      delete [] ((::TauEfficiencyCorrector*)p);
   }
   static void destruct_TauEfficiencyCorrector(void *p) {
      typedef ::TauEfficiencyCorrector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TauEfficiencyCorrector

//______________________________________________________________________________
void BJetEfficiencyCorrector::Streamer(TBuffer &R__b)
{
   // Stream an object of class BJetEfficiencyCorrector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BJetEfficiencyCorrector::Class(),this);
   } else {
      R__b.WriteClassBuffer(BJetEfficiencyCorrector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BJetEfficiencyCorrector(void *p) {
      return  p ? new(p) ::BJetEfficiencyCorrector : new ::BJetEfficiencyCorrector;
   }
   static void *newArray_BJetEfficiencyCorrector(Long_t nElements, void *p) {
      return p ? new(p) ::BJetEfficiencyCorrector[nElements] : new ::BJetEfficiencyCorrector[nElements];
   }
   // Wrapper around operator delete
   static void delete_BJetEfficiencyCorrector(void *p) {
      delete ((::BJetEfficiencyCorrector*)p);
   }
   static void deleteArray_BJetEfficiencyCorrector(void *p) {
      delete [] ((::BJetEfficiencyCorrector*)p);
   }
   static void destruct_BJetEfficiencyCorrector(void *p) {
      typedef ::BJetEfficiencyCorrector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BJetEfficiencyCorrector

//______________________________________________________________________________
void IParticleHistsAlgo::Streamer(TBuffer &R__b)
{
   // Stream an object of class IParticleHistsAlgo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(IParticleHistsAlgo::Class(),this);
   } else {
      R__b.WriteClassBuffer(IParticleHistsAlgo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_IParticleHistsAlgo(void *p) {
      return  p ? new(p) ::IParticleHistsAlgo : new ::IParticleHistsAlgo;
   }
   static void *newArray_IParticleHistsAlgo(Long_t nElements, void *p) {
      return p ? new(p) ::IParticleHistsAlgo[nElements] : new ::IParticleHistsAlgo[nElements];
   }
   // Wrapper around operator delete
   static void delete_IParticleHistsAlgo(void *p) {
      delete ((::IParticleHistsAlgo*)p);
   }
   static void deleteArray_IParticleHistsAlgo(void *p) {
      delete [] ((::IParticleHistsAlgo*)p);
   }
   static void destruct_IParticleHistsAlgo(void *p) {
      typedef ::IParticleHistsAlgo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::IParticleHistsAlgo

//______________________________________________________________________________
void JetHistsAlgo::Streamer(TBuffer &R__b)
{
   // Stream an object of class JetHistsAlgo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(JetHistsAlgo::Class(),this);
   } else {
      R__b.WriteClassBuffer(JetHistsAlgo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_JetHistsAlgo(void *p) {
      return  p ? new(p) ::JetHistsAlgo : new ::JetHistsAlgo;
   }
   static void *newArray_JetHistsAlgo(Long_t nElements, void *p) {
      return p ? new(p) ::JetHistsAlgo[nElements] : new ::JetHistsAlgo[nElements];
   }
   // Wrapper around operator delete
   static void delete_JetHistsAlgo(void *p) {
      delete ((::JetHistsAlgo*)p);
   }
   static void deleteArray_JetHistsAlgo(void *p) {
      delete [] ((::JetHistsAlgo*)p);
   }
   static void destruct_JetHistsAlgo(void *p) {
      typedef ::JetHistsAlgo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::JetHistsAlgo

//______________________________________________________________________________
void MuonHistsAlgo::Streamer(TBuffer &R__b)
{
   // Stream an object of class MuonHistsAlgo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MuonHistsAlgo::Class(),this);
   } else {
      R__b.WriteClassBuffer(MuonHistsAlgo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MuonHistsAlgo(void *p) {
      return  p ? new(p) ::MuonHistsAlgo : new ::MuonHistsAlgo;
   }
   static void *newArray_MuonHistsAlgo(Long_t nElements, void *p) {
      return p ? new(p) ::MuonHistsAlgo[nElements] : new ::MuonHistsAlgo[nElements];
   }
   // Wrapper around operator delete
   static void delete_MuonHistsAlgo(void *p) {
      delete ((::MuonHistsAlgo*)p);
   }
   static void deleteArray_MuonHistsAlgo(void *p) {
      delete [] ((::MuonHistsAlgo*)p);
   }
   static void destruct_MuonHistsAlgo(void *p) {
      typedef ::MuonHistsAlgo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MuonHistsAlgo

//______________________________________________________________________________
void PhotonHistsAlgo::Streamer(TBuffer &R__b)
{
   // Stream an object of class PhotonHistsAlgo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(PhotonHistsAlgo::Class(),this);
   } else {
      R__b.WriteClassBuffer(PhotonHistsAlgo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_PhotonHistsAlgo(void *p) {
      return  p ? new(p) ::PhotonHistsAlgo : new ::PhotonHistsAlgo;
   }
   static void *newArray_PhotonHistsAlgo(Long_t nElements, void *p) {
      return p ? new(p) ::PhotonHistsAlgo[nElements] : new ::PhotonHistsAlgo[nElements];
   }
   // Wrapper around operator delete
   static void delete_PhotonHistsAlgo(void *p) {
      delete ((::PhotonHistsAlgo*)p);
   }
   static void deleteArray_PhotonHistsAlgo(void *p) {
      delete [] ((::PhotonHistsAlgo*)p);
   }
   static void destruct_PhotonHistsAlgo(void *p) {
      typedef ::PhotonHistsAlgo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::PhotonHistsAlgo

//______________________________________________________________________________
void ElectronHistsAlgo::Streamer(TBuffer &R__b)
{
   // Stream an object of class ElectronHistsAlgo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ElectronHistsAlgo::Class(),this);
   } else {
      R__b.WriteClassBuffer(ElectronHistsAlgo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ElectronHistsAlgo(void *p) {
      return  p ? new(p) ::ElectronHistsAlgo : new ::ElectronHistsAlgo;
   }
   static void *newArray_ElectronHistsAlgo(Long_t nElements, void *p) {
      return p ? new(p) ::ElectronHistsAlgo[nElements] : new ::ElectronHistsAlgo[nElements];
   }
   // Wrapper around operator delete
   static void delete_ElectronHistsAlgo(void *p) {
      delete ((::ElectronHistsAlgo*)p);
   }
   static void deleteArray_ElectronHistsAlgo(void *p) {
      delete [] ((::ElectronHistsAlgo*)p);
   }
   static void destruct_ElectronHistsAlgo(void *p) {
      typedef ::ElectronHistsAlgo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ElectronHistsAlgo

//______________________________________________________________________________
void MetHistsAlgo::Streamer(TBuffer &R__b)
{
   // Stream an object of class MetHistsAlgo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MetHistsAlgo::Class(),this);
   } else {
      R__b.WriteClassBuffer(MetHistsAlgo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MetHistsAlgo(void *p) {
      return  p ? new(p) ::MetHistsAlgo : new ::MetHistsAlgo;
   }
   static void *newArray_MetHistsAlgo(Long_t nElements, void *p) {
      return p ? new(p) ::MetHistsAlgo[nElements] : new ::MetHistsAlgo[nElements];
   }
   // Wrapper around operator delete
   static void delete_MetHistsAlgo(void *p) {
      delete ((::MetHistsAlgo*)p);
   }
   static void deleteArray_MetHistsAlgo(void *p) {
      delete [] ((::MetHistsAlgo*)p);
   }
   static void destruct_MetHistsAlgo(void *p) {
      typedef ::MetHistsAlgo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MetHistsAlgo

//______________________________________________________________________________
void TrackHistsAlgo::Streamer(TBuffer &R__b)
{
   // Stream an object of class TrackHistsAlgo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TrackHistsAlgo::Class(),this);
   } else {
      R__b.WriteClassBuffer(TrackHistsAlgo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TrackHistsAlgo(void *p) {
      return  p ? new(p) ::TrackHistsAlgo : new ::TrackHistsAlgo;
   }
   static void *newArray_TrackHistsAlgo(Long_t nElements, void *p) {
      return p ? new(p) ::TrackHistsAlgo[nElements] : new ::TrackHistsAlgo[nElements];
   }
   // Wrapper around operator delete
   static void delete_TrackHistsAlgo(void *p) {
      delete ((::TrackHistsAlgo*)p);
   }
   static void deleteArray_TrackHistsAlgo(void *p) {
      delete [] ((::TrackHistsAlgo*)p);
   }
   static void destruct_TrackHistsAlgo(void *p) {
      typedef ::TrackHistsAlgo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TrackHistsAlgo

//______________________________________________________________________________
void ClusterHistsAlgo::Streamer(TBuffer &R__b)
{
   // Stream an object of class ClusterHistsAlgo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ClusterHistsAlgo::Class(),this);
   } else {
      R__b.WriteClassBuffer(ClusterHistsAlgo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ClusterHistsAlgo(void *p) {
      return  p ? new(p) ::ClusterHistsAlgo : new ::ClusterHistsAlgo;
   }
   static void *newArray_ClusterHistsAlgo(Long_t nElements, void *p) {
      return p ? new(p) ::ClusterHistsAlgo[nElements] : new ::ClusterHistsAlgo[nElements];
   }
   // Wrapper around operator delete
   static void delete_ClusterHistsAlgo(void *p) {
      delete ((::ClusterHistsAlgo*)p);
   }
   static void deleteArray_ClusterHistsAlgo(void *p) {
      delete [] ((::ClusterHistsAlgo*)p);
   }
   static void destruct_ClusterHistsAlgo(void *p) {
      typedef ::ClusterHistsAlgo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ClusterHistsAlgo

//______________________________________________________________________________
void TreeAlgo::Streamer(TBuffer &R__b)
{
   // Stream an object of class TreeAlgo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TreeAlgo::Class(),this);
   } else {
      R__b.WriteClassBuffer(TreeAlgo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TreeAlgo(void *p) {
      return  p ? new(p) ::TreeAlgo : new ::TreeAlgo;
   }
   static void *newArray_TreeAlgo(Long_t nElements, void *p) {
      return p ? new(p) ::TreeAlgo[nElements] : new ::TreeAlgo[nElements];
   }
   // Wrapper around operator delete
   static void delete_TreeAlgo(void *p) {
      delete ((::TreeAlgo*)p);
   }
   static void deleteArray_TreeAlgo(void *p) {
      delete [] ((::TreeAlgo*)p);
   }
   static void destruct_TreeAlgo(void *p) {
      typedef ::TreeAlgo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TreeAlgo

//______________________________________________________________________________
void MinixAOD::Streamer(TBuffer &R__b)
{
   // Stream an object of class MinixAOD.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MinixAOD::Class(),this);
   } else {
      R__b.WriteClassBuffer(MinixAOD::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MinixAOD(void *p) {
      return  p ? new(p) ::MinixAOD : new ::MinixAOD;
   }
   static void *newArray_MinixAOD(Long_t nElements, void *p) {
      return p ? new(p) ::MinixAOD[nElements] : new ::MinixAOD[nElements];
   }
   // Wrapper around operator delete
   static void delete_MinixAOD(void *p) {
      delete ((::MinixAOD*)p);
   }
   static void deleteArray_MinixAOD(void *p) {
      delete [] ((::MinixAOD*)p);
   }
   static void destruct_MinixAOD(void *p) {
      typedef ::MinixAOD current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MinixAOD

//______________________________________________________________________________
void OverlapRemover::Streamer(TBuffer &R__b)
{
   // Stream an object of class OverlapRemover.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(OverlapRemover::Class(),this);
   } else {
      R__b.WriteClassBuffer(OverlapRemover::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_OverlapRemover(void *p) {
      return  p ? new(p) ::OverlapRemover : new ::OverlapRemover;
   }
   static void *newArray_OverlapRemover(Long_t nElements, void *p) {
      return p ? new(p) ::OverlapRemover[nElements] : new ::OverlapRemover[nElements];
   }
   // Wrapper around operator delete
   static void delete_OverlapRemover(void *p) {
      delete ((::OverlapRemover*)p);
   }
   static void deleteArray_OverlapRemover(void *p) {
      delete [] ((::OverlapRemover*)p);
   }
   static void destruct_OverlapRemover(void *p) {
      typedef ::OverlapRemover current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::OverlapRemover

//______________________________________________________________________________
void TrigMatcher::Streamer(TBuffer &R__b)
{
   // Stream an object of class TrigMatcher.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TrigMatcher::Class(),this);
   } else {
      R__b.WriteClassBuffer(TrigMatcher::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TrigMatcher(void *p) {
      return  p ? new(p) ::TrigMatcher : new ::TrigMatcher;
   }
   static void *newArray_TrigMatcher(Long_t nElements, void *p) {
      return p ? new(p) ::TrigMatcher[nElements] : new ::TrigMatcher[nElements];
   }
   // Wrapper around operator delete
   static void delete_TrigMatcher(void *p) {
      delete ((::TrigMatcher*)p);
   }
   static void deleteArray_TrigMatcher(void *p) {
      delete [] ((::TrigMatcher*)p);
   }
   static void destruct_TrigMatcher(void *p) {
      typedef ::TrigMatcher current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TrigMatcher

//______________________________________________________________________________
void Writer::Streamer(TBuffer &R__b)
{
   // Stream an object of class Writer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Writer::Class(),this);
   } else {
      R__b.WriteClassBuffer(Writer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Writer(void *p) {
      return  p ? new(p) ::Writer : new ::Writer;
   }
   static void *newArray_Writer(Long_t nElements, void *p) {
      return p ? new(p) ::Writer[nElements] : new ::Writer[nElements];
   }
   // Wrapper around operator delete
   static void delete_Writer(void *p) {
      delete ((::Writer*)p);
   }
   static void deleteArray_Writer(void *p) {
      delete [] ((::Writer*)p);
   }
   static void destruct_Writer(void *p) {
      typedef ::Writer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Writer

//______________________________________________________________________________
void MessagePrinterAlgo::Streamer(TBuffer &R__b)
{
   // Stream an object of class MessagePrinterAlgo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MessagePrinterAlgo::Class(),this);
   } else {
      R__b.WriteClassBuffer(MessagePrinterAlgo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MessagePrinterAlgo(void *p) {
      return  p ? new(p) ::MessagePrinterAlgo : new ::MessagePrinterAlgo;
   }
   static void *newArray_MessagePrinterAlgo(Long_t nElements, void *p) {
      return p ? new(p) ::MessagePrinterAlgo[nElements] : new ::MessagePrinterAlgo[nElements];
   }
   // Wrapper around operator delete
   static void delete_MessagePrinterAlgo(void *p) {
      delete ((::MessagePrinterAlgo*)p);
   }
   static void deleteArray_MessagePrinterAlgo(void *p) {
      delete [] ((::MessagePrinterAlgo*)p);
   }
   static void destruct_MessagePrinterAlgo(void *p) {
      typedef ::MessagePrinterAlgo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MessagePrinterAlgo

namespace ROOT {
   static TClass *vectorlEstringgR_Dictionary();
   static void vectorlEstringgR_TClassManip(TClass*);
   static void *new_vectorlEstringgR(void *p = 0);
   static void *newArray_vectorlEstringgR(Long_t size, void *p);
   static void delete_vectorlEstringgR(void *p);
   static void deleteArray_vectorlEstringgR(void *p);
   static void destruct_vectorlEstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<string>*)
   {
      vector<string> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<string>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<string>", -2, "vector", 214,
                  typeid(vector<string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEstringgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<string>) );
      instance.SetNew(&new_vectorlEstringgR);
      instance.SetNewArray(&newArray_vectorlEstringgR);
      instance.SetDelete(&delete_vectorlEstringgR);
      instance.SetDeleteArray(&deleteArray_vectorlEstringgR);
      instance.SetDestructor(&destruct_vectorlEstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<string> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<string>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<string>*)0x0)->GetClass();
      vectorlEstringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEstringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<string> : new vector<string>;
   }
   static void *newArray_vectorlEstringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<string>[nElements] : new vector<string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEstringgR(void *p) {
      delete ((vector<string>*)p);
   }
   static void deleteArray_vectorlEstringgR(void *p) {
      delete [] ((vector<string>*)p);
   }
   static void destruct_vectorlEstringgR(void *p) {
      typedef vector<string> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<string>

namespace ROOT {
   static TClass *vectorlEfloatgR_Dictionary();
   static void vectorlEfloatgR_TClassManip(TClass*);
   static void *new_vectorlEfloatgR(void *p = 0);
   static void *newArray_vectorlEfloatgR(Long_t size, void *p);
   static void delete_vectorlEfloatgR(void *p);
   static void deleteArray_vectorlEfloatgR(void *p);
   static void destruct_vectorlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<float>*)
   {
      vector<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<float>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<float>", -2, "vector", 214,
                  typeid(vector<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEfloatgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<float>) );
      instance.SetNew(&new_vectorlEfloatgR);
      instance.SetNewArray(&newArray_vectorlEfloatgR);
      instance.SetDelete(&delete_vectorlEfloatgR);
      instance.SetDeleteArray(&deleteArray_vectorlEfloatgR);
      instance.SetDestructor(&destruct_vectorlEfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<float> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<float>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<float>*)0x0)->GetClass();
      vectorlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float> : new vector<float>;
   }
   static void *newArray_vectorlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float>[nElements] : new vector<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEfloatgR(void *p) {
      delete ((vector<float>*)p);
   }
   static void deleteArray_vectorlEfloatgR(void *p) {
      delete [] ((vector<float>*)p);
   }
   static void destruct_vectorlEfloatgR(void *p) {
      typedef vector<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<float>

namespace ROOT {
   static TClass *vectorlETStringgR_Dictionary();
   static void vectorlETStringgR_TClassManip(TClass*);
   static void *new_vectorlETStringgR(void *p = 0);
   static void *newArray_vectorlETStringgR(Long_t size, void *p);
   static void delete_vectorlETStringgR(void *p);
   static void deleteArray_vectorlETStringgR(void *p);
   static void destruct_vectorlETStringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TString>*)
   {
      vector<TString> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TString>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TString>", -2, "vector", 214,
                  typeid(vector<TString>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETStringgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TString>) );
      instance.SetNew(&new_vectorlETStringgR);
      instance.SetNewArray(&newArray_vectorlETStringgR);
      instance.SetDelete(&delete_vectorlETStringgR);
      instance.SetDeleteArray(&deleteArray_vectorlETStringgR);
      instance.SetDestructor(&destruct_vectorlETStringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TString> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<TString>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETStringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TString>*)0x0)->GetClass();
      vectorlETStringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETStringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETStringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TString> : new vector<TString>;
   }
   static void *newArray_vectorlETStringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TString>[nElements] : new vector<TString>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETStringgR(void *p) {
      delete ((vector<TString>*)p);
   }
   static void deleteArray_vectorlETStringgR(void *p) {
      delete [] ((vector<TString>*)p);
   }
   static void destruct_vectorlETStringgR(void *p) {
      typedef vector<TString> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TString>

namespace {
  void TriggerDictionaryInitialization_libxAODAnaHelpersLib_Impl() {
    static const char* headers[] = {
"xAODAnaHelpers/Algorithm.h",
"xAODAnaHelpers/BJetEfficiencyCorrector.h",
"xAODAnaHelpers/BasicEventSelection.h",
"xAODAnaHelpers/Cluster.h",
"xAODAnaHelpers/ClusterContainer.h",
"xAODAnaHelpers/ClusterHists.h",
"xAODAnaHelpers/ClusterHistsAlgo.h",
"xAODAnaHelpers/DebugTool.h",
"xAODAnaHelpers/Electron.h",
"xAODAnaHelpers/ElectronCalibrator.h",
"xAODAnaHelpers/ElectronContainer.h",
"xAODAnaHelpers/ElectronEfficiencyCorrector.h",
"xAODAnaHelpers/ElectronHists.h",
"xAODAnaHelpers/ElectronHistsAlgo.h",
"xAODAnaHelpers/ElectronSelector.h",
"xAODAnaHelpers/EventInfo.h",
"xAODAnaHelpers/FatJet.h",
"xAODAnaHelpers/FatJetContainer.h",
"xAODAnaHelpers/HLTJetGetter.h",
"xAODAnaHelpers/HLTJetRoIBuilder.h",
"xAODAnaHelpers/HelpTreeBase.h",
"xAODAnaHelpers/HelperClasses.h",
"xAODAnaHelpers/HelperFunctions.h",
"xAODAnaHelpers/HistogramManager.h",
"xAODAnaHelpers/IParticleHists.h",
"xAODAnaHelpers/IParticleHistsAlgo.h",
"xAODAnaHelpers/Jet.h",
"xAODAnaHelpers/JetCalibrator.h",
"xAODAnaHelpers/JetContainer.h",
"xAODAnaHelpers/JetHists.h",
"xAODAnaHelpers/JetHistsAlgo.h",
"xAODAnaHelpers/JetSelector.h",
"xAODAnaHelpers/METConstructor.h",
"xAODAnaHelpers/MessagePrinterAlgo.h",
"xAODAnaHelpers/MetContainer.h",
"xAODAnaHelpers/MetHists.h",
"xAODAnaHelpers/MetHistsAlgo.h",
"xAODAnaHelpers/MinixAOD.h",
"xAODAnaHelpers/Muon.h",
"xAODAnaHelpers/MuonCalibrator.h",
"xAODAnaHelpers/MuonContainer.h",
"xAODAnaHelpers/MuonEfficiencyCorrector.h",
"xAODAnaHelpers/MuonHists.h",
"xAODAnaHelpers/MuonHistsAlgo.h",
"xAODAnaHelpers/MuonSelector.h",
"xAODAnaHelpers/OnlineBeamSpotTool.h",
"xAODAnaHelpers/OverlapRemover.h",
"xAODAnaHelpers/Particle.h",
"xAODAnaHelpers/ParticleContainer.h",
"xAODAnaHelpers/ParticlePIDManager.h",
"xAODAnaHelpers/Photon.h",
"xAODAnaHelpers/PhotonCalibrator.h",
"xAODAnaHelpers/PhotonContainer.h",
"xAODAnaHelpers/PhotonHists.h",
"xAODAnaHelpers/PhotonHistsAlgo.h",
"xAODAnaHelpers/PhotonSelector.h",
"xAODAnaHelpers/Tau.h",
"xAODAnaHelpers/TauCalibrator.h",
"xAODAnaHelpers/TauContainer.h",
"xAODAnaHelpers/TauEfficiencyCorrector.h",
"xAODAnaHelpers/TauSelector.h",
"xAODAnaHelpers/TrackContainer.h",
"xAODAnaHelpers/TrackHists.h",
"xAODAnaHelpers/TrackHistsAlgo.h",
"xAODAnaHelpers/TrackPart.h",
"xAODAnaHelpers/TrackSelector.h",
"xAODAnaHelpers/TracksInJetHists.h",
"xAODAnaHelpers/TreeAlgo.h",
"xAODAnaHelpers/TrigMatcher.h",
"xAODAnaHelpers/TruthContainer.h",
"xAODAnaHelpers/TruthPart.h",
"xAODAnaHelpers/TruthSelector.h",
"xAODAnaHelpers/VtxHists.h",
"xAODAnaHelpers/Writer.h",
0
    };
    static const char* includePaths[] = {
"/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/source/xAODAnaHelpers",
"/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/source/xAODAnaHelpers",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Control/AthContainers",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Control/AthContainersInterfaces",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Control/CxxUtils",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Control/AthLinksSA",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Control/xAODRootAccessInterfaces",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Control/AthToolSupport/AsgTools",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Control/xAODRootAccess",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODCore",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODEventFormat",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/DataQuality/GoodRunsLists",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODEventInfo",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/Interfaces/AsgAnalysisInterfaces",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/AnalysisCommon/PATInterfaces",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODBase",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODCaloEvent",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Calorimeter/CaloGeoHelpers",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/DetectorDescription/GeoPrimitives",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/EventPrimitives",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODCutFlow",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODEgamma",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODPrimitives",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODTracking",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODTruth",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODJet",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODBTagging",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODTrigger",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODPFlow",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODMetaDataCnv",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODMetaData",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODMissingET",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODMuon",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/MuonSpectrometer/MuonIdHelpers",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODTau",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODTriggerCnv",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/D3PDTools/EventLoop",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/D3PDTools/RootCoreUtils",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/D3PDTools/SampleHandler",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/D3PDTools/EventLoopGrid",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/InnerDetector/InDetRecTools/InDetTrackSelectionTool",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/AnalysisCommon/PATCore",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/AnalysisCommon/AssociationUtils",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/AnalysisCommon/IsolationSelection",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/AnalysisCommon/PMGTools",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/Interfaces/PMGAnalysisInterfaces",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/AnalysisCommon/PileupReweighting",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Trigger/TrigEvent/TrigDecisionInterface",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/ElectronPhotonID/ElectronEfficiencyCorrection",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/Interfaces/EgammaAnalysisInterfaces",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/ElectronPhotonID/ElectronPhotonFourMomentumCorrection",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/ElectronPhotonID/ElectronPhotonSelectorTools",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Reconstruction/MVAUtils",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/ElectronPhotonID/IsolationCorrections",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/ElectronPhotonID/ElectronPhotonShowerShapeFudgeTool",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/ElectronPhotonID/PhotonEfficiencyCorrection",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/JetMissingEtID/JetSelectorTools",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Reconstruction/Jet/JetInterface",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/Interfaces/FTagAnalysisInterfaces",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/JetTagging/JetTagPerformanceCalibration/CalibrationDataInterface",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/Interfaces/MuonAnalysisInterfaces",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/MuonID/MuonIDAnalysis/MuonMomentumCorrections",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/MuonID/MuonIDAnalysis/MuonEfficiencyCorrections",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/TauID/TauAnalysisTools",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Generators/TruthUtils",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/MCTruthClassifier",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Reconstruction/tauRecTools",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Reconstruction/Jet/JetAnalysisTools/JetTileCorrection",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Reconstruction/Jet/JetCPInterfaces",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Reconstruction/Jet/JetCalibTools",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODEventShape",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Reconstruction/Jet/JetJvtEfficiency",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Reconstruction/Jet/JetMomentTools",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Reconstruction/Jet/JetEDM",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Reconstruction/Jet/JetRec",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Reconstruction/EventShapes/EventShapeInterface",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Reconstruction/Jet/JetUtils",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Reconstruction/PFlow/PFlowUtils",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Reconstruction/Jet/JetResolution",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Reconstruction/Jet/JetSubStructureUtils",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/MuonID/MuonSelectorTools",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Reconstruction/Jet/JetUncertainties",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Reconstruction/MET/METInterface",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Reconstruction/MET/METUtilities",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Tools/PathResolver",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Trigger/TrigAnalysis/TrigDecisionTool",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Trigger/TrigConfiguration/TrigConfHLTData",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Trigger/TrigConfiguration/TrigConfL1Data",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Trigger/TrigConfiguration/TrigConfInterfaces",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Trigger/TrigEvent/TrigRoiConversion",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Trigger/TrigEvent/TrigSteeringEvent",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/DetectorDescription/RoiDescriptor",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/DetectorDescription/IRegionSelector",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Trigger/TrigEvent/TrigNavStructure",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Trigger/TrigAnalysis/TriggerMatchingTool",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Trigger/TrigConfiguration/TrigConfxAOD",
"/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/source/xAODAnaHelpers",
"/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/source/xAODAnaHelpers",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/D3PDTools/EventLoopGrid",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/RootCore/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/RootCore/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/D3PDTools/EventLoop",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/D3PDTools/RootCoreUtils",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/D3PDTools/SampleHandler",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Control/AthToolSupport/AsgTools",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Control/xAODRootAccessInterfaces",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Control/xAODRootAccess",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Control/AthContainers",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Control/AthContainersInterfaces",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Control/AthLinksSA",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Control/CxxUtils",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODCore",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODEventFormat",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/D3PDTools/AnaAlgorithm",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODBase",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODEventInfo",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/DataQuality/GoodRunsLists",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/Interfaces/AsgAnalysisInterfaces",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/AnalysisCommon/PATInterfaces",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/AnalysisCommon/PileupReweighting",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Trigger/TrigEvent/TrigDecisionInterface",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Tools/PathResolver",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODTau",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODJet",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODBTagging",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODTracking",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include/eigen3",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/DetectorDescription/GeoPrimitives",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include/eigen3",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/EventPrimitives",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include/eigen3",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODPFlow",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODCaloEvent",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include/eigen3",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Calorimeter/CaloGeoHelpers",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODTrigger",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODTruth",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODMuon",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODPrimitives",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/MuonSpectrometer/MuonIdHelpers",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODEgamma",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include/eigen3",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/MuonID/MuonIDAnalysis/MuonMomentumCorrections",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/Interfaces/MuonAnalysisInterfaces",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/AnalysisCommon/PATCore",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/MuonID/MuonIDAnalysis/MuonEfficiencyCorrections",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/MuonID/MuonSelectorTools",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Reconstruction/Jet/JetCalibTools",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODEventShape",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Reconstruction/Jet/JetInterface",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/JetMissingEtID/JetSelectorTools",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/ElectronPhotonID/ElectronPhotonFourMomentumCorrection",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/Interfaces/EgammaAnalysisInterfaces",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Reconstruction/egamma/egammaMVACalib",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/ElectronPhotonID/ElectronEfficiencyCorrection",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/ElectronPhotonID/ElectronPhotonSelectorTools",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Reconstruction/MVAUtils",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODHIEvent",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/AnalysisCommon/IsolationSelection",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/InnerDetector/InDetRecTools/InDetTrackSelectionTool",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/ElectronPhotonID/IsolationCorrections",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODMetaData",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/ElectronPhotonID/ElectronPhotonShowerShapeFudgeTool",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/Interfaces/FTagAnalysisInterfaces",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/JetTagging/JetTagPerformanceCalibration/CalibrationDataInterface",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/ElectronPhotonID/PhotonEfficiencyCorrection",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Reconstruction/MET/METUtilities",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODMissingET",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Reconstruction/Jet/JetResolution",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Reconstruction/tauRecTools",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/MCTruthClassifier",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Generators/TruthUtils",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Reconstruction/MET/METInterface",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/TauID/TauAnalysisTools",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/AnalysisCommon/AssociationUtils",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Reconstruction/Jet/JetEDM",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Reconstruction/Jet/JetUncertainties",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Reconstruction/Jet/JetCPInterfaces",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/JetTagging/JetTagPerformanceCalibration/xAODBTaggingEfficiency",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Trigger/TrigConfiguration/TrigConfxAOD",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Trigger/TrigConfiguration/TrigConfL1Data",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Trigger/TrigConfiguration/TrigConfHLTData",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Trigger/TrigConfiguration/TrigConfInterfaces",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Trigger/TrigAnalysis/TrigDecisionTool",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Trigger/TrigEvent/TrigNavStructure",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Trigger/TrigEvent/TrigRoiConversion",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Trigger/TrigEvent/TrigSteeringEvent",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/DetectorDescription/RoiDescriptor",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/DetectorDescription/IRegionSelector",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODCutFlow",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Reconstruction/Jet/JetMomentTools",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Reconstruction/PFlow/PFlowUtils",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Reconstruction/Jet/JetRec",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Reconstruction/EventShapes/EventShapeInterface",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Reconstruction/Jet/JetUtils",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Trigger/TrigAnalysis/TriggerMatchingTool",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODMetaDataCnv",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Reconstruction/Jet/JetJvtEfficiency",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/AnalysisCommon/PMGTools",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/PhysicsAnalysis/Interfaces/PMGAnalysisInterfaces",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Reconstruction/Jet/JetSubStructureUtils",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Reconstruction/Jet/JetAnalysisTools/JetTileCorrection",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/../../../../AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/src/Event/xAOD/xAODTriggerCnv",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/RootCore/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBase/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/RootCore/include",
"/cvmfs/atlas.cern.ch/repo/sw/software/21.2/AnalysisBaseExternals/21.2.14/InstallArea/x86_64-slc6-gcc62-opt/include",
"/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/build/xAODAnaHelpers/CMakeFiles/makexAODAnaHelpersLibCintDict.8qIu3C/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libxAODAnaHelpersLib dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace xAH{class __attribute__((annotate("$clingAutoload$xAODAnaHelpers/Algorithm.h")))  Algorithm;}
class __attribute__((annotate("$clingAutoload$xAODAnaHelpers/BasicEventSelection.h")))  BasicEventSelection;
class __attribute__((annotate("$clingAutoload$xAODAnaHelpers/ElectronSelector.h")))  ElectronSelector;
class __attribute__((annotate("$clingAutoload$xAODAnaHelpers/PhotonSelector.h")))  PhotonSelector;
class __attribute__((annotate("$clingAutoload$xAODAnaHelpers/TauSelector.h")))  TauSelector;
class __attribute__((annotate("$clingAutoload$xAODAnaHelpers/JetSelector.h")))  JetSelector;
class __attribute__((annotate("$clingAutoload$xAODAnaHelpers/DebugTool.h")))  DebugTool;
class __attribute__((annotate("$clingAutoload$xAODAnaHelpers/TruthSelector.h")))  TruthSelector;
class __attribute__((annotate("$clingAutoload$xAODAnaHelpers/TrackSelector.h")))  TrackSelector;
class __attribute__((annotate("$clingAutoload$xAODAnaHelpers/MuonSelector.h")))  MuonSelector;
class __attribute__((annotate("$clingAutoload$xAODAnaHelpers/ElectronCalibrator.h")))  ElectronCalibrator;
class __attribute__((annotate("$clingAutoload$xAODAnaHelpers/PhotonCalibrator.h")))  PhotonCalibrator;
class __attribute__((annotate("$clingAutoload$xAODAnaHelpers/JetCalibrator.h")))  JetCalibrator;
class __attribute__((annotate("$clingAutoload$xAODAnaHelpers/MuonCalibrator.h")))  MuonCalibrator;
class __attribute__((annotate("$clingAutoload$xAODAnaHelpers/TauCalibrator.h")))  TauCalibrator;
class __attribute__((annotate("$clingAutoload$xAODAnaHelpers/HLTJetRoIBuilder.h")))  HLTJetRoIBuilder;
class __attribute__((annotate("$clingAutoload$xAODAnaHelpers/HLTJetGetter.h")))  HLTJetGetter;
class __attribute__((annotate("$clingAutoload$xAODAnaHelpers/METConstructor.h")))  METConstructor;
class __attribute__((annotate("$clingAutoload$xAODAnaHelpers/ElectronEfficiencyCorrector.h")))  ElectronEfficiencyCorrector;
class __attribute__((annotate("$clingAutoload$xAODAnaHelpers/MuonEfficiencyCorrector.h")))  MuonEfficiencyCorrector;
class __attribute__((annotate("$clingAutoload$xAODAnaHelpers/TauEfficiencyCorrector.h")))  TauEfficiencyCorrector;
class __attribute__((annotate("$clingAutoload$xAODAnaHelpers/BJetEfficiencyCorrector.h")))  BJetEfficiencyCorrector;
class __attribute__((annotate("$clingAutoload$xAODAnaHelpers/IParticleHistsAlgo.h")))  IParticleHistsAlgo;
class __attribute__((annotate("$clingAutoload$xAODAnaHelpers/JetHistsAlgo.h")))  JetHistsAlgo;
class __attribute__((annotate("$clingAutoload$xAODAnaHelpers/MuonHistsAlgo.h")))  MuonHistsAlgo;
class __attribute__((annotate("$clingAutoload$xAODAnaHelpers/PhotonHistsAlgo.h")))  PhotonHistsAlgo;
class __attribute__((annotate("$clingAutoload$xAODAnaHelpers/ElectronHistsAlgo.h")))  ElectronHistsAlgo;
class __attribute__((annotate("$clingAutoload$xAODAnaHelpers/MetHistsAlgo.h")))  MetHistsAlgo;
class __attribute__((annotate("$clingAutoload$xAODAnaHelpers/TrackHistsAlgo.h")))  TrackHistsAlgo;
class __attribute__((annotate("$clingAutoload$xAODAnaHelpers/ClusterHistsAlgo.h")))  ClusterHistsAlgo;
class __attribute__((annotate(R"ATTRDUMP(!)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(!)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$xAODAnaHelpers/TreeAlgo.h")))  TreeAlgo;
class __attribute__((annotate("$clingAutoload$xAODAnaHelpers/MinixAOD.h")))  MinixAOD;
class __attribute__((annotate("$clingAutoload$xAODAnaHelpers/OverlapRemover.h")))  OverlapRemover;
class __attribute__((annotate("$clingAutoload$xAODAnaHelpers/TrigMatcher.h")))  TrigMatcher;
class __attribute__((annotate("$clingAutoload$xAODAnaHelpers/Writer.h")))  Writer;
class __attribute__((annotate("$clingAutoload$xAODAnaHelpers/MessagePrinterAlgo.h")))  MessagePrinterAlgo;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libxAODAnaHelpersLib dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef HAVE_PRETTY_FUNCTION
  #define HAVE_PRETTY_FUNCTION 1
#endif
#ifndef HAVE_64_BITS
  #define HAVE_64_BITS 1
#endif
#ifndef __IDENTIFIER_64BIT__
  #define __IDENTIFIER_64BIT__ 1
#endif
#ifndef ATLAS
  #define ATLAS 1
#endif
#ifndef ROOTCORE
  #define ROOTCORE 1
#endif
#ifndef XAOD_STANDALONE
  #define XAOD_STANDALONE 1
#endif
#ifndef XAOD_ANALYSIS
  #define XAOD_ANALYSIS 1
#endif
#ifndef ROOTCORE_RELEASE_SERIES
  #define ROOTCORE_RELEASE_SERIES 25
#endif
#ifndef PACKAGE_VERSION
  #define PACKAGE_VERSION "xAODAnaHelpers-00-00-00"
#endif
#ifndef PACKAGE_VERSION_UQ
  #define PACKAGE_VERSION_UQ xAODAnaHelpers-00-00-00
#endif
#ifndef USE_CMAKE
  #define USE_CMAKE 1
#endif
#ifndef NO_SHOWERDECONSTRUCTION
  #define NO_SHOWERDECONSTRUCTION 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "xAODAnaHelpers/Algorithm.h"
#include "xAODAnaHelpers/BJetEfficiencyCorrector.h"
#include "xAODAnaHelpers/BasicEventSelection.h"
#include "xAODAnaHelpers/Cluster.h"
#include "xAODAnaHelpers/ClusterContainer.h"
#include "xAODAnaHelpers/ClusterHists.h"
#include "xAODAnaHelpers/ClusterHistsAlgo.h"
#include "xAODAnaHelpers/DebugTool.h"
#include "xAODAnaHelpers/Electron.h"
#include "xAODAnaHelpers/ElectronCalibrator.h"
#include "xAODAnaHelpers/ElectronContainer.h"
#include "xAODAnaHelpers/ElectronEfficiencyCorrector.h"
#include "xAODAnaHelpers/ElectronHists.h"
#include "xAODAnaHelpers/ElectronHistsAlgo.h"
#include "xAODAnaHelpers/ElectronSelector.h"
#include "xAODAnaHelpers/EventInfo.h"
#include "xAODAnaHelpers/FatJet.h"
#include "xAODAnaHelpers/FatJetContainer.h"
#include "xAODAnaHelpers/HLTJetGetter.h"
#include "xAODAnaHelpers/HLTJetRoIBuilder.h"
#include "xAODAnaHelpers/HelpTreeBase.h"
#include "xAODAnaHelpers/HelperClasses.h"
#include "xAODAnaHelpers/HelperFunctions.h"
#include "xAODAnaHelpers/HistogramManager.h"
#include "xAODAnaHelpers/IParticleHists.h"
#include "xAODAnaHelpers/IParticleHistsAlgo.h"
#include "xAODAnaHelpers/Jet.h"
#include "xAODAnaHelpers/JetCalibrator.h"
#include "xAODAnaHelpers/JetContainer.h"
#include "xAODAnaHelpers/JetHists.h"
#include "xAODAnaHelpers/JetHistsAlgo.h"
#include "xAODAnaHelpers/JetSelector.h"
#include "xAODAnaHelpers/METConstructor.h"
#include "xAODAnaHelpers/MessagePrinterAlgo.h"
#include "xAODAnaHelpers/MetContainer.h"
#include "xAODAnaHelpers/MetHists.h"
#include "xAODAnaHelpers/MetHistsAlgo.h"
#include "xAODAnaHelpers/MinixAOD.h"
#include "xAODAnaHelpers/Muon.h"
#include "xAODAnaHelpers/MuonCalibrator.h"
#include "xAODAnaHelpers/MuonContainer.h"
#include "xAODAnaHelpers/MuonEfficiencyCorrector.h"
#include "xAODAnaHelpers/MuonHists.h"
#include "xAODAnaHelpers/MuonHistsAlgo.h"
#include "xAODAnaHelpers/MuonSelector.h"
#include "xAODAnaHelpers/OnlineBeamSpotTool.h"
#include "xAODAnaHelpers/OverlapRemover.h"
#include "xAODAnaHelpers/Particle.h"
#include "xAODAnaHelpers/ParticleContainer.h"
#include "xAODAnaHelpers/ParticlePIDManager.h"
#include "xAODAnaHelpers/Photon.h"
#include "xAODAnaHelpers/PhotonCalibrator.h"
#include "xAODAnaHelpers/PhotonContainer.h"
#include "xAODAnaHelpers/PhotonHists.h"
#include "xAODAnaHelpers/PhotonHistsAlgo.h"
#include "xAODAnaHelpers/PhotonSelector.h"
#include "xAODAnaHelpers/Tau.h"
#include "xAODAnaHelpers/TauCalibrator.h"
#include "xAODAnaHelpers/TauContainer.h"
#include "xAODAnaHelpers/TauEfficiencyCorrector.h"
#include "xAODAnaHelpers/TauSelector.h"
#include "xAODAnaHelpers/TrackContainer.h"
#include "xAODAnaHelpers/TrackHists.h"
#include "xAODAnaHelpers/TrackHistsAlgo.h"
#include "xAODAnaHelpers/TrackPart.h"
#include "xAODAnaHelpers/TrackSelector.h"
#include "xAODAnaHelpers/TracksInJetHists.h"
#include "xAODAnaHelpers/TreeAlgo.h"
#include "xAODAnaHelpers/TrigMatcher.h"
#include "xAODAnaHelpers/TruthContainer.h"
#include "xAODAnaHelpers/TruthPart.h"
#include "xAODAnaHelpers/TruthSelector.h"
#include "xAODAnaHelpers/VtxHists.h"
#include "xAODAnaHelpers/Writer.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"BJetEfficiencyCorrector", payloadCode, "@",
"BasicEventSelection", payloadCode, "@",
"ClusterHistsAlgo", payloadCode, "@",
"DebugTool", payloadCode, "@",
"ElectronCalibrator", payloadCode, "@",
"ElectronEfficiencyCorrector", payloadCode, "@",
"ElectronHistsAlgo", payloadCode, "@",
"ElectronSelector", payloadCode, "@",
"HLTJetGetter", payloadCode, "@",
"HLTJetRoIBuilder", payloadCode, "@",
"IParticleHistsAlgo", payloadCode, "@",
"JetCalibrator", payloadCode, "@",
"JetHistsAlgo", payloadCode, "@",
"JetSelector", payloadCode, "@",
"METConstructor", payloadCode, "@",
"MessagePrinterAlgo", payloadCode, "@",
"MetHistsAlgo", payloadCode, "@",
"MinixAOD", payloadCode, "@",
"MuonCalibrator", payloadCode, "@",
"MuonEfficiencyCorrector", payloadCode, "@",
"MuonHistsAlgo", payloadCode, "@",
"MuonSelector", payloadCode, "@",
"OverlapRemover", payloadCode, "@",
"PhotonCalibrator", payloadCode, "@",
"PhotonHistsAlgo", payloadCode, "@",
"PhotonSelector", payloadCode, "@",
"TauCalibrator", payloadCode, "@",
"TauEfficiencyCorrector", payloadCode, "@",
"TauSelector", payloadCode, "@",
"TrackHistsAlgo", payloadCode, "@",
"TrackSelector", payloadCode, "@",
"TreeAlgo", payloadCode, "@",
"TrigMatcher", payloadCode, "@",
"TruthSelector", payloadCode, "@",
"Writer", payloadCode, "@",
"xAH::Algorithm", payloadCode, "@",
"xAH::addRucio", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libxAODAnaHelpersLib",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libxAODAnaHelpersLib_Impl, {{"namespace DataVector_detail { template <typename B1, typename B2, typename B3> class VirtBases; }", 1},{"template <typename T> class DataVectorBase;", 1},{"template <typename T, typename BASE> class DataVector;", 1},{"namespace DataVector_detail { template <typename T> class DVLEltBaseInit; }", 1}}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libxAODAnaHelpersLib_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libxAODAnaHelpersLib() {
  TriggerDictionaryInitialization_libxAODAnaHelpersLib_Impl();
}
