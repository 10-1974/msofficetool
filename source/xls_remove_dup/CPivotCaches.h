// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ��

// CPivotCaches ��װ��

class CPivotCaches : public COleDispatchDriver
{
public:
	CPivotCaches(){} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CPivotCaches(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CPivotCaches(const CPivotCaches& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IPivotCaches ����
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
	STDMETHOD(get_Count)(long * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PI4 ;
		InvokeHelper(0x76, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(Item)(VARIANT Index, PivotCache * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_VARIANT VTS_PDISPATCH ;
		InvokeHelper(0xaa, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, &Index, RHS);
		return result;
	}
	STDMETHOD(get__Default)(VARIANT Index, PivotCache * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_VARIANT VTS_PDISPATCH ;
		InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, &Index, RHS);
		return result;
	}
	STDMETHOD(_NewEnum)(LPUNKNOWN * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PUNKNOWN ;
		InvokeHelper(0xfffffffc, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(Add)(XlPivotTableSourceType SourceType, VARIANT SourceData, PivotCache * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_I4 VTS_VARIANT VTS_PDISPATCH ;
		InvokeHelper(0xb5, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, SourceType, &SourceData, RHS);
		return result;
	}
	STDMETHOD(Create)(XlPivotTableSourceType SourceType, VARIANT SourceData, VARIANT Version, PivotCache * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_I4 VTS_VARIANT VTS_VARIANT VTS_PDISPATCH ;
		InvokeHelper(0x768, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, SourceType, &SourceData, &Version, RHS);
		return result;
	}

	// IPivotCaches ����
public:

};
