// MyMath50322.cpp: реализация CMyMath50322

#include "pch.h"
#include "MyMath50322.h"


// CMyMath50322

STDMETHODIMP CMyMath50322::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_IMyMath50322
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CMyMath50322::Add(LONG x, LONG y, LONG* z)
{
	// TODO: Добавьте сюда код реализации
	*z = x + y;
	return S_OK;
}

STDMETHODIMP CMyMath50322::Sub(LONG x, LONG y, LONG* z)
{
	// TODO: Добавьте сюда код реализации
	*z = x - y;
	return S_OK;
}

STDMETHODIMP CMyMath50322::Mul(LONG x, LONG y, LONG* z)
{
	// TODO: Добавьте сюда код реализации
	*z = x * y;
	return S_OK;
}

STDMETHODIMP CMyMath50322::get_Param1(LONG* pVal)
{
	// TODO: Добавьте сюда код реализации
	*pVal = Par1Val;
	return S_OK;
}

STDMETHODIMP CMyMath50322::put_Param1(LONG newVal)
{
	// TODO: Добавьте сюда код реализации
	if (newVal < 0)
	{
		return Error("Параметр 1 не должен быть меньше 0.");
	}
	else if (newVal > 40)
	{
		return Error("Параметр 1 не должен быть больше 40");
	}
	
	Par1Val = newVal;

	return S_OK;
}

STDMETHODIMP CMyMath50322::GetAuthor(BSTR name, BSTR* message) 
{
	CComBSTR messageBSTR("Welcome, ");
	messageBSTR.Append(name);
	*message = messageBSTR;
	return S_OK;
}