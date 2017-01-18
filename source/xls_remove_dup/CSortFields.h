// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ��

// CSortFields ��װ��

class CSortFields : public COleDispatchDriver
{
public:
	CSortFields(){} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CSortFields(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CSortFields(const CSortFields& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// ISortFields ����
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
	STDMETHOD(Add)(Range * Key, VARIANT SortOn, VARIANT Order, VARIANT CustomOrder, VARIANT DataOption, SortField * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_DISPATCH VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_PDISPATCH ;
		InvokeHelper(0xb5, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, Key, &SortOn, &Order, &CustomOrder, &DataOption, RHS);
		return result;
	}
	STDMETHOD(get_Item)(VARIANT Index, SortField * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_VARIANT VTS_PDISPATCH ;
		InvokeHelper(0xaa, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, &Index, RHS);
		return result;
	}
	STDMETHOD(get_Count)(long * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PI4 ;
		InvokeHelper(0x76, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(Clear)()
	{
		HRESULT result;
		InvokeHelper(0x6f, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(get__Default)(VARIANT Index, SortField * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_VARIANT VTS_PDISPATCH ;
		InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, &Index, RHS);
		return result;
	}
	STDMETHOD(get__NewEnum)(LPUNKNOWN * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PUNKNOWN ;
		InvokeHelper(0xfffffffc, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}

	// ISortFields ����
public:

};
