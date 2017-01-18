// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ��

// CCustomProperty0 ��װ��

class CCustomProperty0 : public COleDispatchDriver
{
public:
	CCustomProperty0(){} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CCustomProperty0(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CCustomProperty0(const CCustomProperty0& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// ICustomProperty ����
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
	STDMETHOD(get_Name)(BSTR * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PBSTR ;
		InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(put_Name)(LPCTSTR RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x6e, DISPATCH_PROPERTYPUT, VT_HRESULT, (void*)&result, parms, newValue);
		return result;
	}
	STDMETHOD(get_Value)(VARIANT * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PVARIANT ;
		InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(put_Value)(VARIANT RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_VARIANT ;
		InvokeHelper(0x6, DISPATCH_PROPERTYPUT, VT_HRESULT, (void*)&result, parms, &newValue);
		return result;
	}
	STDMETHOD(get__Default)(VARIANT * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PVARIANT ;
		InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(Delete)()
	{
		HRESULT result;
		InvokeHelper(0x75, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}

	// ICustomProperty ����
public:

};
