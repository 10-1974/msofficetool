// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ��

// CComment0 ��װ��

class CComment0 : public COleDispatchDriver
{
public:
	CComment0(){} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CComment0(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CComment0(const CComment0& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IComment ����
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
	STDMETHOD(get_Author)(BSTR * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PBSTR ;
		InvokeHelper(0x23e, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(get_Shape)(Shape * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PDISPATCH ;
		InvokeHelper(0x62e, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(get_Visible)(BOOL * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PBOOL ;
		InvokeHelper(0x22e, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(put_Visible)(BOOL RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x22e, DISPATCH_PROPERTYPUT, VT_HRESULT, (void*)&result, parms, newValue);
		return result;
	}
	STDMETHOD(Text)(VARIANT Text, VARIANT Start, VARIANT Overwrite, BSTR * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_PBSTR ;
		InvokeHelper(0x8a, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, &Text, &Start, &Overwrite, RHS);
		return result;
	}
	STDMETHOD(Delete)()
	{
		HRESULT result;
		InvokeHelper(0x75, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(Next)(Comment * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PDISPATCH ;
		InvokeHelper(0x1f6, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(Previous)(Comment * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PDISPATCH ;
		InvokeHelper(0x1f7, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}

	// IComment ����
public:

};
