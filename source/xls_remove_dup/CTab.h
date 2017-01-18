// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ��

// CTab ��װ��

class CTab : public COleDispatchDriver
{
public:
	CTab(){} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CTab(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CTab(const CTab& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// ITab ����
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
	STDMETHOD(get_Color)(VARIANT * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PVARIANT ;
		InvokeHelper(0x63, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(put_Color)(VARIANT RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_VARIANT ;
		InvokeHelper(0x63, DISPATCH_PROPERTYPUT, VT_HRESULT, (void*)&result, parms, &newValue);
		return result;
	}
	STDMETHOD(get_ColorIndex)(XlColorIndex * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PI4 ;
		InvokeHelper(0x61, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(put_ColorIndex)(XlColorIndex RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x61, DISPATCH_PROPERTYPUT, VT_HRESULT, (void*)&result, parms, newValue);
		return result;
	}
	STDMETHOD(get_ThemeColor)(XlThemeColor * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PI4 ;
		InvokeHelper(0x93d, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(put_ThemeColor)(XlThemeColor RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x93d, DISPATCH_PROPERTYPUT, VT_HRESULT, (void*)&result, parms, newValue);
		return result;
	}
	STDMETHOD(get_TintAndShade)(VARIANT * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PVARIANT ;
		InvokeHelper(0x93e, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(put_TintAndShade)(VARIANT RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_VARIANT ;
		InvokeHelper(0x93e, DISPATCH_PROPERTYPUT, VT_HRESULT, (void*)&result, parms, &newValue);
		return result;
	}

	// ITab ����
public:

};
