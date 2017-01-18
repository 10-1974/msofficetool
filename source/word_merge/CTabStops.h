// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装类

// CTabStops 包装类

class CTabStops : public COleDispatchDriver
{
public:
	CTabStops(){} // 调用 COleDispatchDriver 默认构造函数
	CTabStops(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CTabStops(const CTabStops& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 属性
public:

	// 操作
public:


	// TabStops 方法
public:
	LPUNKNOWN get__NewEnum()
	{
		LPUNKNOWN result;
		InvokeHelper(0xfffffffc, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
		return result;
	}
	long get_Count()
	{
		long result;
		InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Application()
	{
		LPDISPATCH result;
		InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	long get_Creator()
	{
		long result;
		InvokeHelper(0x3e9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Parent()
	{
		LPDISPATCH result;
		InvokeHelper(0x3ea, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH Item(VARIANT * Index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_PVARIANT ;
		InvokeHelper(0x0, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, Index);
		return result;
	}
	LPDISPATCH Add(float Position, VARIANT * Alignment, VARIANT * Leader)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_R4 VTS_PVARIANT VTS_PVARIANT ;
		InvokeHelper(0x64, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, Position, Alignment, Leader);
		return result;
	}
	void ClearAll()
	{
		InvokeHelper(0x65, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	LPDISPATCH Before(float Position)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_R4 ;
		InvokeHelper(0x66, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, Position);
		return result;
	}
	LPDISPATCH After(float Position)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_R4 ;
		InvokeHelper(0x67, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, Position);
		return result;
	}

	// TabStops 属性
public:

};
