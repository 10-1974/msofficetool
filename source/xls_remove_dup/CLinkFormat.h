// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ��

// CLinkFormat ��װ��

class CLinkFormat : public COleDispatchDriver
{
public:
	CLinkFormat(){} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CLinkFormat(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CLinkFormat(const CLinkFormat& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// ILinkFormat ����
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
	STDMETHOD(get_AutoUpdate)(BOOL * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PBOOL ;
		InvokeHelper(0x418, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(put_AutoUpdate)(BOOL RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x418, DISPATCH_PROPERTYPUT, VT_HRESULT, (void*)&result, parms, newValue);
		return result;
	}
	STDMETHOD(get_Locked)(BOOL * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PBOOL ;
		InvokeHelper(0x10d, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(put_Locked)(BOOL RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x10d, DISPATCH_PROPERTYPUT, VT_HRESULT, (void*)&result, parms, newValue);
		return result;
	}
	STDMETHOD(Update)()
	{
		HRESULT result;
		InvokeHelper(0x2a8, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}

	// ILinkFormat ����
public:

};
