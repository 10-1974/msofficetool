// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ��

// CModuleView0 ��װ��

class CModuleView0 : public COleDispatchDriver
{
public:
	CModuleView0(){} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CModuleView0(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CModuleView0(const CModuleView0& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// ModuleView ����
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
	LPDISPATCH get_Sheet()
	{
		LPDISPATCH result;
		InvokeHelper(0x2ef, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}

	// ModuleView ����
public:

};
