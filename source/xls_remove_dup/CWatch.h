// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ��

// CWatch ��װ��

class CWatch : public COleDispatchDriver
{
public:
	CWatch(){} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CWatch(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWatch(const CWatch& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IWatch ����
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
	STDMETHOD(Delete)()
	{
		HRESULT result;
		InvokeHelper(0x75, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(get_Source)(VARIANT * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PVARIANT ;
		InvokeHelper(0xde, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}

	// IWatch ����
public:

};
