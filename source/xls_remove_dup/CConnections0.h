// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ��

// CConnections0 ��װ��

class CConnections0 : public COleDispatchDriver
{
public:
	CConnections0(){} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CConnections0(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CConnections0(const CConnections0& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IConnections ����
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
	STDMETHOD(AddFromFile)(LPCTSTR Filename, WorkbookConnection * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_BSTR VTS_PDISPATCH ;
		InvokeHelper(0xa8c, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, Filename, RHS);
		return result;
	}
	STDMETHOD(Add)(LPCTSTR Name, LPCTSTR Description, VARIANT ConnectionString, VARIANT CommandText, VARIANT lCmdtype, WorkbookConnection * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_PDISPATCH ;
		InvokeHelper(0xb5, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, Name, Description, &ConnectionString, &CommandText, &lCmdtype, RHS);
		return result;
	}
	STDMETHOD(Item)(VARIANT Index, WorkbookConnection * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_VARIANT VTS_PDISPATCH ;
		InvokeHelper(0xaa, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, &Index, RHS);
		return result;
	}
	STDMETHOD(get__Default)(VARIANT Index, WorkbookConnection * * RHS)
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

	// IConnections ����
public:

};
