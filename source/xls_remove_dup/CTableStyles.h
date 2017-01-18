// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装类

// CTableStyles 包装类

class CTableStyles : public COleDispatchDriver
{
public:
	CTableStyles(){} // 调用 COleDispatchDriver 默认构造函数
	CTableStyles(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CTableStyles(const CTableStyles& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 属性
public:

	// 操作
public:


	// ITableStyles 方法
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
	STDMETHOD(Add)(LPCTSTR TableStyleName, TableStyle * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_BSTR VTS_PDISPATCH ;
		InvokeHelper(0xb5, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, TableStyleName, RHS);
		return result;
	}
	STDMETHOD(Item)(VARIANT Index, TableStyle * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_VARIANT VTS_PDISPATCH ;
		InvokeHelper(0xaa, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, &Index, RHS);
		return result;
	}
	STDMETHOD(get__Default)(VARIANT Index, TableStyle * * RHS)
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

	// ITableStyles 属性
public:

};
