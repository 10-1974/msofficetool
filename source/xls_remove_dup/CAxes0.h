// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ��

// CAxes0 ��װ��

class CAxes0 : public COleDispatchDriver
{
public:
	CAxes0(){} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CAxes0(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CAxes0(const CAxes0& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IAxes ����
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
	STDMETHOD(Item)(XlAxisType Type, XlAxisGroup AxisGroup, Axis * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_PDISPATCH ;
		InvokeHelper(0xaa, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, Type, AxisGroup, RHS);
		return result;
	}
	STDMETHOD(_NewEnum)(LPUNKNOWN * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PUNKNOWN ;
		InvokeHelper(0xfffffffc, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(_Default)(XlAxisType Type, XlAxisGroup AxisGroup, Axis * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_PDISPATCH ;
		InvokeHelper(0x0, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, Type, AxisGroup, RHS);
		return result;
	}

	// IAxes ����
public:

};
