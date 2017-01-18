// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ��

// CRectangularGradient ��װ��

class CRectangularGradient : public COleDispatchDriver
{
public:
	CRectangularGradient(){} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CRectangularGradient(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CRectangularGradient(const CRectangularGradient& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IRectangularGradient ����
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
	STDMETHOD(get_ColorStops)(ColorStops * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PDISPATCH ;
		InvokeHelper(0xac9, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(get_RectangleTop)(double * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PR8 ;
		InvokeHelper(0xaca, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(put_RectangleTop)(double RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_R8 ;
		InvokeHelper(0xaca, DISPATCH_PROPERTYPUT, VT_HRESULT, (void*)&result, parms, newValue);
		return result;
	}
	STDMETHOD(get_RectangleBottom)(double * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PR8 ;
		InvokeHelper(0xacb, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(put_RectangleBottom)(double RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_R8 ;
		InvokeHelper(0xacb, DISPATCH_PROPERTYPUT, VT_HRESULT, (void*)&result, parms, newValue);
		return result;
	}
	STDMETHOD(get_RectangleLeft)(double * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PR8 ;
		InvokeHelper(0xacc, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(put_RectangleLeft)(double RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_R8 ;
		InvokeHelper(0xacc, DISPATCH_PROPERTYPUT, VT_HRESULT, (void*)&result, parms, newValue);
		return result;
	}
	STDMETHOD(get_RectangleRight)(double * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PR8 ;
		InvokeHelper(0xacd, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(put_RectangleRight)(double RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_R8 ;
		InvokeHelper(0xacd, DISPATCH_PROPERTYPUT, VT_HRESULT, (void*)&result, parms, newValue);
		return result;
	}

	// IRectangularGradient ����
public:

};
