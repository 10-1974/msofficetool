// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ��

// CQueryTables ��װ��

class CQueryTables : public COleDispatchDriver
{
public:
	CQueryTables(){} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CQueryTables(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CQueryTables(const CQueryTables& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IQueryTables ����
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
	STDMETHOD(Add)(VARIANT Connection, Range * Destination, VARIANT Sql, QueryTable * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_VARIANT VTS_DISPATCH VTS_VARIANT VTS_PDISPATCH ;
		InvokeHelper(0xb5, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, &Connection, Destination, &Sql, RHS);
		return result;
	}
	STDMETHOD(Item)(VARIANT Index, QueryTable * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_VARIANT VTS_PDISPATCH ;
		InvokeHelper(0xaa, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, &Index, RHS);
		return result;
	}
	STDMETHOD(get__Default)(VARIANT Index, QueryTable * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_VARIANT VTS_PDISPATCH ;
		InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, &Index, RHS);
		return result;
	}
	STDMETHOD(_NewEnum)(LPUNKNOWN * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PUNKNOWN ;
		InvokeHelper(0xfffffffc, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}

	// IQueryTables ����
public:

};
