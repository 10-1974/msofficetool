// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ��

// CRecentFile ��װ��

class CRecentFile : public COleDispatchDriver
{
public:
	CRecentFile(){} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CRecentFile(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CRecentFile(const CRecentFile& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IRecentFile ����
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
	STDMETHOD(get_Name)(BSTR * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PBSTR ;
		InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(get_Path)(BSTR * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PBSTR ;
		InvokeHelper(0x123, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(get_Index)(long * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PI4 ;
		InvokeHelper(0x1e6, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(Open)(Workbook * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PDISPATCH ;
		InvokeHelper(0x783, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(Delete)()
	{
		HRESULT result;
		InvokeHelper(0x75, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}

	// IRecentFile ����
public:

};
