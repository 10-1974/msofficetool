// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ��

// CPivotAxis0 ��װ��

class CPivotAxis0 : public COleDispatchDriver
{
public:
	CPivotAxis0(){} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CPivotAxis0(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CPivotAxis0(const CPivotAxis0& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// PivotAxis ����
public:
	LPDISPATCH get_Application()
	{
		LPDISPATCH result;
		InvokeHelper(0x94, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	long get_Creator()
	{
		long result;
		InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Parent()
	{
		LPDISPATCH result;
		InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_PivotLines()
	{
		LPDISPATCH result;
		InvokeHelper(0xa7d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}

	// PivotAxis ����
public:

};
