// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ��

// CStyles ��װ��

class CStyles : public COleDispatchDriver
{
public:
	CStyles(){} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CStyles(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CStyles(const CStyles& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IStyles ����
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
	STDMETHOD(Add)(LPCTSTR Name, VARIANT BasedOn, Style * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_BSTR VTS_VARIANT VTS_PDISPATCH ;
		InvokeHelper(0xb5, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, Name, &BasedOn, RHS);
		return result;
	}
	STDMETHOD(get_Count)(long * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PI4 ;
		InvokeHelper(0x76, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(get_Item)(VARIANT Index, long lcid, Style * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_VARIANT VTS_I4 VTS_PDISPATCH ;
		InvokeHelper(0xaa, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, &Index, lcid, RHS);
		return result;
	}
	STDMETHOD(Merge)(VARIANT Workbook, VARIANT * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_VARIANT VTS_PVARIANT ;
		InvokeHelper(0x234, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, &Workbook, RHS);
		return result;
	}
	STDMETHOD(get__NewEnum)(LPUNKNOWN * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PUNKNOWN ;
		InvokeHelper(0xfffffffc, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(get__Default)(VARIANT Index, long lcid, Style * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_VARIANT VTS_I4 VTS_PDISPATCH ;
		InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, &Index, lcid, RHS);
		return result;
	}

	// IStyles ����
public:

};
