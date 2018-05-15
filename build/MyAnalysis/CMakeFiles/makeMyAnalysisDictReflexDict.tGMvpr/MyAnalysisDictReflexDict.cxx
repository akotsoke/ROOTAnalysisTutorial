// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME MyAnalysisDictReflexDict

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
#include "/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/source/MyAnalysis/MyAnalysis/MyAnalysisDict.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_JSSTutorialPFlowJetToolsAlgo(void *p);
   static void deleteArray_JSSTutorialPFlowJetToolsAlgo(void *p);
   static void destruct_JSSTutorialPFlowJetToolsAlgo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::JSSTutorialPFlowJetToolsAlgo*)
   {
      ::JSSTutorialPFlowJetToolsAlgo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::JSSTutorialPFlowJetToolsAlgo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("JSSTutorialPFlowJetToolsAlgo", ::JSSTutorialPFlowJetToolsAlgo::Class_Version(), "JSSTutorialPFlowJetToolsAlgo.h", 25,
                  typeid(::JSSTutorialPFlowJetToolsAlgo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::JSSTutorialPFlowJetToolsAlgo::Dictionary, isa_proxy, 4,
                  sizeof(::JSSTutorialPFlowJetToolsAlgo) );
      instance.SetDelete(&delete_JSSTutorialPFlowJetToolsAlgo);
      instance.SetDeleteArray(&deleteArray_JSSTutorialPFlowJetToolsAlgo);
      instance.SetDestructor(&destruct_JSSTutorialPFlowJetToolsAlgo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::JSSTutorialPFlowJetToolsAlgo*)
   {
      return GenerateInitInstanceLocal((::JSSTutorialPFlowJetToolsAlgo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::JSSTutorialPFlowJetToolsAlgo*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr JSSTutorialPFlowJetToolsAlgo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *JSSTutorialPFlowJetToolsAlgo::Class_Name()
{
   return "JSSTutorialPFlowJetToolsAlgo";
}

//______________________________________________________________________________
const char *JSSTutorialPFlowJetToolsAlgo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::JSSTutorialPFlowJetToolsAlgo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int JSSTutorialPFlowJetToolsAlgo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::JSSTutorialPFlowJetToolsAlgo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *JSSTutorialPFlowJetToolsAlgo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::JSSTutorialPFlowJetToolsAlgo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *JSSTutorialPFlowJetToolsAlgo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::JSSTutorialPFlowJetToolsAlgo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void JSSTutorialPFlowJetToolsAlgo::Streamer(TBuffer &R__b)
{
   // Stream an object of class JSSTutorialPFlowJetToolsAlgo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(JSSTutorialPFlowJetToolsAlgo::Class(),this);
   } else {
      R__b.WriteClassBuffer(JSSTutorialPFlowJetToolsAlgo::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_JSSTutorialPFlowJetToolsAlgo(void *p) {
      delete ((::JSSTutorialPFlowJetToolsAlgo*)p);
   }
   static void deleteArray_JSSTutorialPFlowJetToolsAlgo(void *p) {
      delete [] ((::JSSTutorialPFlowJetToolsAlgo*)p);
   }
   static void destruct_JSSTutorialPFlowJetToolsAlgo(void *p) {
      typedef ::JSSTutorialPFlowJetToolsAlgo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::JSSTutorialPFlowJetToolsAlgo

namespace {
  void TriggerDictionaryInitialization_libMyAnalysisDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/build/MyAnalysis/CMakeFiles/makeMyAnalysisDictReflexDict.tGMvpr/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libMyAnalysisDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$MyAnalysis/JSSTutorialPFlowJetToolsAlgo.h")))  JSSTutorialPFlowJetToolsAlgo;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libMyAnalysisDict dictionary payload"

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
  #define PACKAGE_VERSION "MyAnalysis-00-00-00"
#endif
#ifndef PACKAGE_VERSION_UQ
  #define PACKAGE_VERSION_UQ MyAnalysis-00-00-00
#endif
#ifndef EIGEN_DONT_VECTORIZE
  #define EIGEN_DONT_VECTORIZE 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#ifndef MYANALYSISDICT_H_
#define MYANALYSISDICT_H_

#if defined(__GCCXML__) and not defined(EIGEN_DONT_VECTORIZE)
#   define EIGEN_DONT_VECTORIZE
#endif // __GCCXML__

#include "MyAnalysis/JSSTutorialPFlowJetToolsAlgo.h"

#endif /* TAGGINGUTILITIESDICT_H_ */


#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"JSSTutorialPFlowJetToolsAlgo", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libMyAnalysisDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libMyAnalysisDict_Impl, {{"namespace DataVector_detail { template <typename B1, typename B2, typename B3> class VirtBases; }", 1},{"template <typename T> class DataVectorBase;", 1},{"template <typename T, typename BASE> class DataVector;", 1},{"namespace DataVector_detail { template <typename T> class DVLEltBaseInit; }", 1}}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libMyAnalysisDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libMyAnalysisDict() {
  TriggerDictionaryInitialization_libMyAnalysisDict_Impl();
}
