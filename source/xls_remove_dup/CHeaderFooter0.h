// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ��

// CHeaderFooter0 ��װ��

class CHeaderFooter0 : public COleDispatchDriver
{
public:
	CHeaderFooter0(){} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CHeaderFooter0(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CHeaderFooter0(const CHeaderFooter0& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IHeaderFooter ����
public:
	STDMETHOD(get_Text)(BSTR * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PBSTR ;
		InvokeHelper(0x8a, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(put_Text)(LPCTSTR RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x8a, DISPATCH_PROPERTYPUT, VT_HRESULT, (void*)&result, parms, newValue);
		return result;
	}
	STDMETHOD(get_Picture)(Graphic * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PDISPATCH ;
		InvokeHelper(0x1df, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}

	// IHeaderFooter ����
public:

};
