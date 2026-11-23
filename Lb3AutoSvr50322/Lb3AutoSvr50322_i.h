

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 06:14:07 2038
 */
/* Compiler settings for Lb3AutoSvr50322.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0628 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __Lb3AutoSvr50322_i_h__
#define __Lb3AutoSvr50322_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __IMyMath50322_FWD_DEFINED__
#define __IMyMath50322_FWD_DEFINED__
typedef interface IMyMath50322 IMyMath50322;

#endif 	/* __IMyMath50322_FWD_DEFINED__ */


#ifndef __IVer_FWD_DEFINED__
#define __IVer_FWD_DEFINED__
typedef interface IVer IVer;

#endif 	/* __IVer_FWD_DEFINED__ */


#ifndef __MyMath50322_FWD_DEFINED__
#define __MyMath50322_FWD_DEFINED__

#ifdef __cplusplus
typedef class MyMath50322 MyMath50322;
#else
typedef struct MyMath50322 MyMath50322;
#endif /* __cplusplus */

#endif 	/* __MyMath50322_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IMyMath50322_INTERFACE_DEFINED__
#define __IMyMath50322_INTERFACE_DEFINED__

/* interface IMyMath50322 */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IMyMath50322;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5474df26-b4ed-4210-b6c9-e3bc62900041")
    IMyMath50322 : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ LONG x,
            /* [in] */ LONG y,
            /* [retval][out] */ LONG *z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Sub( 
            /* [in] */ LONG x,
            /* [in] */ LONG y,
            /* [retval][out] */ LONG *z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Mul( 
            /* [in] */ LONG x,
            /* [in] */ LONG y,
            /* [retval][out] */ LONG *z) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Param1( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Param1( 
            /* [in] */ LONG newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMyMath50322Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMyMath50322 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMyMath50322 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMyMath50322 * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMyMath50322 * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMyMath50322 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMyMath50322 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMyMath50322 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IMyMath50322, Add)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IMyMath50322 * This,
            /* [in] */ LONG x,
            /* [in] */ LONG y,
            /* [retval][out] */ LONG *z);
        
        DECLSPEC_XFGVIRT(IMyMath50322, Sub)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Sub )( 
            IMyMath50322 * This,
            /* [in] */ LONG x,
            /* [in] */ LONG y,
            /* [retval][out] */ LONG *z);
        
        DECLSPEC_XFGVIRT(IMyMath50322, Mul)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Mul )( 
            IMyMath50322 * This,
            /* [in] */ LONG x,
            /* [in] */ LONG y,
            /* [retval][out] */ LONG *z);
        
        DECLSPEC_XFGVIRT(IMyMath50322, get_Param1)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Param1 )( 
            IMyMath50322 * This,
            /* [retval][out] */ LONG *pVal);
        
        DECLSPEC_XFGVIRT(IMyMath50322, put_Param1)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Param1 )( 
            IMyMath50322 * This,
            /* [in] */ LONG newVal);
        
        END_INTERFACE
    } IMyMath50322Vtbl;

    interface IMyMath50322
    {
        CONST_VTBL struct IMyMath50322Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMyMath50322_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMyMath50322_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMyMath50322_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMyMath50322_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMyMath50322_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMyMath50322_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMyMath50322_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMyMath50322_Add(This,x,y,z)	\
    ( (This)->lpVtbl -> Add(This,x,y,z) ) 

#define IMyMath50322_Sub(This,x,y,z)	\
    ( (This)->lpVtbl -> Sub(This,x,y,z) ) 

#define IMyMath50322_Mul(This,x,y,z)	\
    ( (This)->lpVtbl -> Mul(This,x,y,z) ) 

#define IMyMath50322_get_Param1(This,pVal)	\
    ( (This)->lpVtbl -> get_Param1(This,pVal) ) 

#define IMyMath50322_put_Param1(This,newVal)	\
    ( (This)->lpVtbl -> put_Param1(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMyMath50322_INTERFACE_DEFINED__ */


#ifndef __IVer_INTERFACE_DEFINED__
#define __IVer_INTERFACE_DEFINED__

/* interface IVer */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IVer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7DE977AB-E083-4D6C-8225-7E1F6414C963")
    IVer : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAuthor( 
            /* [in] */ BSTR name,
            /* [retval][out] */ BSTR *message) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVer * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVer * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVer * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVer * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IVer, GetAuthor)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAuthor )( 
            IVer * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ BSTR *message);
        
        END_INTERFACE
    } IVerVtbl;

    interface IVer
    {
        CONST_VTBL struct IVerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVer_GetAuthor(This,name,message)	\
    ( (This)->lpVtbl -> GetAuthor(This,name,message) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVer_INTERFACE_DEFINED__ */



#ifndef __Lb3AutoSvr50322Lib_LIBRARY_DEFINED__
#define __Lb3AutoSvr50322Lib_LIBRARY_DEFINED__

/* library Lb3AutoSvr50322Lib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_Lb3AutoSvr50322Lib;

EXTERN_C const CLSID CLSID_MyMath50322;

#ifdef __cplusplus

class DECLSPEC_UUID("f6751146-047d-4f23-aa6b-ec59dfcbee3a")
MyMath50322;
#endif
#endif /* __Lb3AutoSvr50322Lib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


