// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ��

// COutline ��װ��

class COutline : public COleDispatchDriver
{
public:
	COutline(){} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	COutline(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	COutline(const COutline& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IOutline ����
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
	STDMETHOD(get_AutomaticStyles)(BOOL * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PBOOL ;
		InvokeHelper(0x3bf, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(put_AutomaticStyles)(BOOL RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x3bf, DISPATCH_PROPERTYPUT, VT_HRESULT, (void*)&result, parms, newValue);
		return result;
	}
	STDMETHOD(ShowLevels)(VARIANT RowLevels, VARIANT ColumnLevels, VARIANT * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_PVARIANT ;
		InvokeHelper(0x3c0, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, &RowLevels, &ColumnLevels, RHS);
		return result;
	}
	STDMETHOD(get_SummaryColumn)(XlSummaryColumn * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PI4 ;
		InvokeHelper(0x3c1, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(put_SummaryColumn)(XlSummaryColumn RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x3c1, DISPATCH_PROPERTYPUT, VT_HRESULT, (void*)&result, parms, newValue);
		return result;
	}
	STDMETHOD(get_SummaryRow)(XlSummaryRow * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PI4 ;
		InvokeHelper(0x386, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(put_SummaryRow)(XlSummaryRow RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x386, DISPATCH_PROPERTYPUT, VT_HRESULT, (void*)&result, parms, newValue);
		return result;
	}

	// IOutline ����
public:

};
