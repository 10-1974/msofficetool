// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ��

// CColorScaleCriteria0 ��װ��

class CColorScaleCriteria0 : public COleDispatchDriver
{
public:
	CColorScaleCriteria0(){} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CColorScaleCriteria0(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CColorScaleCriteria0(const CColorScaleCriteria0& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IColorScaleCriteria ����
public:
	STDMETHOD(get_Count)(long * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PI4 ;
		InvokeHelper(0x76, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(get__Default)(VARIANT Index, ColorScaleCriterion * * RHS)
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
	STDMETHOD(get_Item)(VARIANT Index, ColorScaleCriterion * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_VARIANT VTS_PDISPATCH ;
		InvokeHelper(0xaa, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, &Index, RHS);
		return result;
	}

	// IColorScaleCriteria ����
public:

};
