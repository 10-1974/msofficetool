// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ��

// CSort ��װ��

class CSort : public COleDispatchDriver
{
public:
	CSort(){} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CSort(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CSort(const CSort& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// ISort ����
public:
	STDMETHOD(get_Application)(Application * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PDISPATCH ;
		InvokeHelper(0x94, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(get_Creator)(XlCreator * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PI4 ;
		InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(get_Parent)(LPDISPATCH * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PDISPATCH ;
		InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(get_Rng)(Range * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PDISPATCH ;
		InvokeHelper(0xabc, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(get_Header)(XlYesNoGuess * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PI4 ;
		InvokeHelper(0x37f, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(put_Header)(XlYesNoGuess RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x37f, DISPATCH_PROPERTYPUT, VT_HRESULT, (void*)&result, parms, newValue);
		return result;
	}
	STDMETHOD(get_MatchCase)(BOOL * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PBOOL ;
		InvokeHelper(0x1aa, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(put_MatchCase)(BOOL RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x1aa, DISPATCH_PROPERTYPUT, VT_HRESULT, (void*)&result, parms, newValue);
		return result;
	}
	STDMETHOD(get_Orientation)(XlSortOrientation * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PI4 ;
		InvokeHelper(0x86, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(put_Orientation)(XlSortOrientation RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x86, DISPATCH_PROPERTYPUT, VT_HRESULT, (void*)&result, parms, newValue);
		return result;
	}
	STDMETHOD(get_SortMethod)(XlSortMethod * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PI4 ;
		InvokeHelper(0x381, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(put_SortMethod)(XlSortMethod RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x381, DISPATCH_PROPERTYPUT, VT_HRESULT, (void*)&result, parms, newValue);
		return result;
	}
	STDMETHOD(get_SortFields)(SortFields * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PDISPATCH ;
		InvokeHelper(0xabd, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(SetRange)(Range * Rng)
	{
		HRESULT result;
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0xabe, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, Rng);
		return result;
	}
	STDMETHOD(Apply)()
	{
		HRESULT result;
		InvokeHelper(0x68b, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}

	// ISort ����
public:

};
