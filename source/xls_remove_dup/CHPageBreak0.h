// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ��

// CHPageBreak0 ��װ��

class CHPageBreak0 : public COleDispatchDriver
{
public:
	CHPageBreak0(){} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CHPageBreak0(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CHPageBreak0(const CHPageBreak0& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IHPageBreak ����
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
	STDMETHOD(get_Parent)(Worksheet * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PDISPATCH ;
		InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(Delete)()
	{
		HRESULT result;
		InvokeHelper(0x75, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(DragOff)(XlDirection Direction, long RegionIndex)
	{
		HRESULT result;
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x58c, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, Direction, RegionIndex);
		return result;
	}
	STDMETHOD(get_Type)(XlPageBreak * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PI4 ;
		InvokeHelper(0x6c, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(put_Type)(XlPageBreak RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x6c, DISPATCH_PROPERTYPUT, VT_HRESULT, (void*)&result, parms, newValue);
		return result;
	}
	STDMETHOD(get_Extent)(XlPageBreakExtent * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PI4 ;
		InvokeHelper(0x58e, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(get_Location)(Range * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PDISPATCH ;
		InvokeHelper(0x575, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(putref_Location)(Range * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0x575, DISPATCH_PROPERTYPUTREF, VT_HRESULT, (void*)&result, parms, newValue);
		return result;
	}

	// IHPageBreak ����
public:

};
