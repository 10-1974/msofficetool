// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ��

// CAllowEditRange0 ��װ��

class CAllowEditRange0 : public COleDispatchDriver
{
public:
	CAllowEditRange0(){} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CAllowEditRange0(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CAllowEditRange0(const CAllowEditRange0& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IAllowEditRange ����
public:
	STDMETHOD(get_Title)(BSTR * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PBSTR ;
		InvokeHelper(0xc7, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(put_Title)(LPCTSTR RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0xc7, DISPATCH_PROPERTYPUT, VT_HRESULT, (void*)&result, parms, newValue);
		return result;
	}
	STDMETHOD(get_Range)(Range * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PDISPATCH ;
		InvokeHelper(0xc5, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(putref_Range)(Range * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0xc5, DISPATCH_PROPERTYPUTREF, VT_HRESULT, (void*)&result, parms, newValue);
		return result;
	}
	STDMETHOD(ChangePassword)(LPCTSTR Password)
	{
		HRESULT result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x8bd, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, Password);
		return result;
	}
	STDMETHOD(Delete)()
	{
		HRESULT result;
		InvokeHelper(0x75, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(Unprotect)(VARIANT Password)
	{
		HRESULT result;
		static BYTE parms[] = VTS_VARIANT ;
		InvokeHelper(0x11d, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, &Password);
		return result;
	}
	STDMETHOD(get_Users)(UserAccessList * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PDISPATCH ;
		InvokeHelper(0x8be, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}

	// IAllowEditRange ����
public:

};
