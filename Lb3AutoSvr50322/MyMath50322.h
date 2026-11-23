// MyMath50322.h: объявление CMyMath50322

#pragma once
#include "resource.h"       // основные символы



#include "Lb3AutoSvr50322_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Однопотоковые COM-объекты не поддерживаются должным образом платформой Windows CE, например платформами Windows Mobile, в которых не предусмотрена полная поддержка DCOM. Определите _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA, чтобы принудить ATL поддерживать создание однопотоковых COM-объектов и разрешить использование его реализаций однопотоковых COM-объектов. Для потоковой модели в вашем rgs-файле задано значение 'Free', поскольку это единственная потоковая модель, поддерживаемая не-DCOM платформами Windows CE."
#endif

using namespace ATL;


// CMyMath50322

class ATL_NO_VTABLE CMyMath50322 :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CMyMath50322, &CLSID_MyMath50322>,
	public ISupportErrorInfo,
	public IDispatchImpl<IMyMath50322, &IID_IMyMath50322, &LIBID_Lb3AutoSvr50322Lib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
	public IDispatchImpl<IVer, &IID_IVer, &LIBID_Lb3AutoSvr50322Lib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CMyMath50322()
	{
		Par1Val = 1;
	}

DECLARE_REGISTRY_RESOURCEID(106)


BEGIN_COM_MAP(CMyMath50322)
	COM_INTERFACE_ENTRY(IMyMath50322)
	COM_INTERFACE_ENTRY(IVer)
	COM_INTERFACE_ENTRY2(IDispatch, IMyMath50322)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);


	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

private:
	LONG Par1Val;

public:

	STDMETHOD(Add)(LONG x, LONG y, LONG* z);
	STDMETHOD(Sub)(LONG x, LONG y, LONG* z);
	STDMETHOD(Mul)(LONG x, LONG y, LONG* z);
	STDMETHOD(get_Param1)(LONG* pVal);
	STDMETHOD(put_Param1)(LONG newVal);
	//IVer
	STDMETHOD(GetAuthor)(BSTR name, BSTR* message);
};

OBJECT_ENTRY_AUTO(__uuidof(MyMath50322), CMyMath50322)
