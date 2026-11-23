//
// DClient.cpp - Dispatch client implementation
//
// This client connects to the IMyMath dual interface
// through the dispinterface.
//
#include <windows.h>
#include <stdio.h>
//#include <strstream>
int main()
{
	DWORD clsctx;
	clsctx = CLSCTX_INPROC_SERVER;
	HRESULT hr = OleInitialize(NULL);
	if (FAILED(hr))
	{
		printf("Failed to initialize. Code 0x8%X \n", hr); return 1;
	}
	// Get the CLSID for the application.
	wchar_t progid[] = L"Lb3AutoSvr50322.MyMath50322.1";// Прог. ид. Prog ID
	CLSID clsid;
	hr = ::CLSIDFromProgID(progid, &clsid);
	if (FAILED(hr)) {
		printf("Failed to get CLSID.Code 0x8%X \n", hr); return
			1;
	}
	// Create the component.
	IDispatch* pIDispatch = NULL;
	hr = ::CoCreateInstance(clsid, NULL, clsctx, IID_IDispatch,
		(void**)&pIDispatch);
	if (FAILED(hr))
	{
		//trace("Create instance failed.", hr);
		printf("Create instance failed.Code 0x8%X \n", hr);//+
		OleUninitialize();
		return 1;
	}
	printf("CoCreateInstance succeeded.\n");
	// First we need to get the IDs for the function names.
	printf("Get DispID for function \"Add\".\n");
	DISPID dispid;
	OLECHAR* name = (OLECHAR*)L"Add";//*
	hr = pIDispatch->GetIDsOfNames(IID_NULL,
		&name,
		1,
		GetUserDefaultLCID(),
		&dispid);
	if (FAILED(hr)) {printf("Query GetIDsOfNames failed.Code %X \n", hr);
		pIDispatch->Release(); return 1;
	}
	// Build up the parameters for the invoke call.
	// Allocate and initialize a VARIANT argument.
	VARIANTARG vargs[2];//*
	::VariantInit(&vargs[0]); // Initialize the VARIANT.//*
	vargs[0].vt = VT_I4; // Type of VARIANT data//*
	vargs[0].lVal = 5; //Op2 Data for the VARIANT//*
	::VariantInit(&vargs[1]); // Initialize the VARIANT.
	vargs[1].vt = VT_I4; // Type of VARIANT data
	vargs[1].lVal = 4; //Op1 Data for the VARIANT
	//Аргументы справа на лево!!! (vargs[1], vargs[0])
	// Fill in the DISPPARAMS structure.
	DISPPARAMS param;
	param.cArgs = 2; // Number of arguments//*
	param.rgvarg = vargs; // Arguments//*
	param.cNamedArgs = 0; // Number of named args
	param.rgdispidNamedArgs = NULL; // Named arguments
	VARIANTARG varres;//*
	::VariantInit(&varres); // Initialize the VARIANT.//*
	varres.vt = VT_I4; // Type of VARIANT data//*
	varres.lVal = 0; // Data for the VARIANT//*
	printf("Invoke the function \"Add\".\n");
	hr = pIDispatch->Invoke(dispid,
		IID_NULL,
		GetUserDefaultLCID(),
		DISPATCH_METHOD,
		&param,
		&varres,//*
		NULL,
		NULL);
	if (FAILED(hr))
	{
		printf("Invoke call failed.Code 0x8%X \n", hr);
		pIDispatch->Release();
		return 1;
	}
	// Display the returned Val.
	if (varres.vt == VT_I4)
	{
		printf("Returned from component: op1 %d + op2 %d = %d\n",
			vargs[1].lVal, vargs[0].lVal, varres.lVal);
	}
	//==========================================
	//==========================================
	////////////////////////////////////////////////////
// Установка и чтение свойства
//
////===Установка значения свойства =========================
// Получение диспетчерского идентификатора =================
	printf("Get DispID for \"Param1\".\n");
	DISPID dispidProp;
	OLECHAR* nameProp = (OLECHAR*)L"Param1";//*
	hr = pIDispatch->GetIDsOfNames(IID_NULL, &nameProp, 1, GetUserDefaultLCID(),
		&dispidProp);
	if (FAILED(hr))
	{
		printf("Query GetIDsOfNames Prop failed.Code %X \n", hr);
		pIDispatch->Release(); return 1;
	}
	// Build up the parameters for the invoke call.
	// Allocate and initialize a VARIANT argument.
	VARIANTARG vargsProp;
	::VariantInit(&vargsProp); // Initialize the VARIANT.//*
	vargsProp.vt = VT_I4; // Type of VARIANT data//*
	vargsProp.lVal = 6; // Data for the VARIANT//*
	// Fill in the DISPPARAMS structure.
	DISPID dispPropPut = DISPID_PROPERTYPUT; ///ВНИМАНИЕ !!!!!!
	DISPPARAMS paramProp;
	paramProp.cArgs = 1; // Number of arguments//*
	paramProp.rgvarg = &vargsProp; // Arguments//*
	paramProp.cNamedArgs = 1; // Number of named args //ВНИМАНИЕ!!!!!!
		paramProp.rgdispidNamedArgs = &dispPropPut; // Named arguments ///ВНИМАНИЕ!!!!!!
		printf("Invoke the Prop put\"Param1\".\n");
	hr = pIDispatch->Invoke(dispidProp, IID_NULL, GetUserDefaultLCID(),
		DISPATCH_PROPERTYPUT, &paramProp, NULL, NULL, NULL);
	if (FAILED(hr))
	{
		printf("Invoke call Prop Put failed.Code 0x8%X \n", hr);
		pIDispatch->Release(); return 1;
	}
	////=====Значение свойства установлено =========================
	////=== Чтение свойства ========================================
	// Build up the parameters for the invoke call.
	// Fill in the DISPPARAMS structure.
	paramProp.cArgs = 0; // Number of arguments//*
	paramProp.rgvarg = NULL; // Arguments//*
	paramProp.cNamedArgs = 0; // Number of named args
	paramProp.rgdispidNamedArgs = NULL; // Named arguments
	VARIANTARG varresProp;//*
	::VariantInit(&varresProp); // Initialize the VARIANT.//*
	printf("Invoke the Prop Get\"Param1\".\n");
	hr = pIDispatch->Invoke(dispidProp, IID_NULL, GetUserDefaultLCID(),
		DISPATCH_PROPERTYGET, &paramProp, &varresProp, NULL, NULL);
	if (FAILED(hr))
	{
		printf("Invoke call Prop Get failed.Code 0x8%X \n", hr);
		pIDispatch->Release(); return 1;
	}
	// Display the returned Value.
	if (varresProp.vt == VT_I4)
	{
		printf("Returned from component: Param1 %d \n", varresProp.lVal);
	}
	////====== Значение свойства получено и отображено =============	
	//==========================================
	// Release the dispatch interface.
	pIDispatch->Release();
	//pIVer->Release();////////////////////////////////////////////////////
	// Uninitialize the OLE library.
	OleUninitialize();
	return 0;
	//то что надо будет доделать, в методических указаниях примерно написано, но плохо
	//надо взять свойство календаря, MSCAL.OSX его как-то зарегестрировать и потом
	//взять и посмотреть его свойство как это мы делали тут
	//получается зарегестрировать библиотеку, через оливью посмотреть его прог ид и потом написать приложение
	//в программе как-то подключить 
}