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
   static TClass *CPcLcLJSSTutorialPFlowJetToolsAlgo_Dictionary();
   static void CPcLcLJSSTutorialPFlowJetToolsAlgo_TClassManip(TClass*);
   static void delete_CPcLcLJSSTutorialPFlowJetToolsAlgo(void *p);
   static void deleteArray_CPcLcLJSSTutorialPFlowJetToolsAlgo(void *p);
   static void destruct_CPcLcLJSSTutorialPFlowJetToolsAlgo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CP::JSSTutorialPFlowJetToolsAlgo*)
   {
      ::CP::JSSTutorialPFlowJetToolsAlgo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::CP::JSSTutorialPFlowJetToolsAlgo));
      static ::ROOT::TGenericClassInfo 
         instance("CP::JSSTutorialPFlowJetToolsAlgo", "JSSTutorialPFlowJetToolsAlgo.h", 22,
                  typeid(::CP::JSSTutorialPFlowJetToolsAlgo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &CPcLcLJSSTutorialPFlowJetToolsAlgo_Dictionary, isa_proxy, 4,
                  sizeof(::CP::JSSTutorialPFlowJetToolsAlgo) );
      instance.SetDelete(&delete_CPcLcLJSSTutorialPFlowJetToolsAlgo);
      instance.SetDeleteArray(&deleteArray_CPcLcLJSSTutorialPFlowJetToolsAlgo);
      instance.SetDestructor(&destruct_CPcLcLJSSTutorialPFlowJetToolsAlgo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CP::JSSTutorialPFlowJetToolsAlgo*)
   {
      return GenerateInitInstanceLocal((::CP::JSSTutorialPFlowJetToolsAlgo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::CP::JSSTutorialPFlowJetToolsAlgo*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *CPcLcLJSSTutorialPFlowJetToolsAlgo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::CP::JSSTutorialPFlowJetToolsAlgo*)0x0)->GetClass();
      CPcLcLJSSTutorialPFlowJetToolsAlgo_TClassManip(theClass);
   return theClass;
   }

   static void CPcLcLJSSTutorialPFlowJetToolsAlgo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CPcLcLJSSTutorialPFlowJetToolsAlgo(void *p) {
      delete ((::CP::JSSTutorialPFlowJetToolsAlgo*)p);
   }
   static void deleteArray_CPcLcLJSSTutorialPFlowJetToolsAlgo(void *p) {
      delete [] ((::CP::JSSTutorialPFlowJetToolsAlgo*)p);
   }
   static void destruct_CPcLcLJSSTutorialPFlowJetToolsAlgo(void *p) {
      typedef ::CP::JSSTutorialPFlowJetToolsAlgo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CP::JSSTutorialPFlowJetToolsAlgo

namespace {
  void TriggerDictionaryInitialization_libMyAnalysisDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/afs/cern.ch/user/a/akotsoke/ROOTAnalysisTutorial/build/MyAnalysis/CMakeFiles/makeMyAnalysisDictReflexDict.8mKyZs/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libMyAnalysisDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace CP{class __attribute__((annotate("$clingAutoload$MyAnalysis/JSSTutorialPFlowJetToolsAlgo.h")))  JSSTutorialPFlowJetToolsAlgo;}
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
"CP::JSSTutorialPFlowJetToolsAlgo", payloadCode, "@",
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
