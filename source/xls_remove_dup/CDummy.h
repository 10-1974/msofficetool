// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ��

// CDummy ��װ��

class CDummy : public COleDispatchDriver
{
public:
	CDummy(){} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CDummy(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CDummy(const CDummy& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IDummy ����
public:
	STDMETHOD(_ActiveSheetOrChart)()
	{
		HRESULT result;
		InvokeHelper(0x644, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(RGB)()
	{
		HRESULT result;
		InvokeHelper(0x41f, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(ChDir)()
	{
		HRESULT result;
		InvokeHelper(0x420, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(DoScript)()
	{
		HRESULT result;
		InvokeHelper(0x475, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(DirectObject)()
	{
		HRESULT result;
		InvokeHelper(0x473, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(RefreshDocument)()
	{
		HRESULT result;
		InvokeHelper(0x758, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(AddSignatureLine)(VARIANT SigProv, Signature * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_VARIANT VTS_PDISPATCH ;
		InvokeHelper(0xa48, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, &SigProv, RHS);
		return result;
	}
	STDMETHOD(AddNonVisibleSignature)(VARIANT SigProv, Signature * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_VARIANT VTS_PDISPATCH ;
		InvokeHelper(0xa4a, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, &SigProv, RHS);
		return result;
	}
	STDMETHOD(get_ShowSignaturesPane)(BOOL * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PBOOL ;
		InvokeHelper(0xa4b, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(put_ShowSignaturesPane)(BOOL RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0xa4b, DISPATCH_PROPERTYPUT, VT_HRESULT, (void*)&result, parms, newValue);
		return result;
	}
	STDMETHOD(ThemeFontScheme)()
	{
		HRESULT result;
		InvokeHelper(0xa4c, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(ThemeColorScheme)()
	{
		HRESULT result;
		InvokeHelper(0xa4d, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(ThemeEffectScheme)()
	{
		HRESULT result;
		InvokeHelper(0xa4e, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(Load)()
	{
		HRESULT result;
		InvokeHelper(0xa4f, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}

	// IDummy ����
public:

};
