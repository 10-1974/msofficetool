// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ��

// CReflectionFormat ��װ��

class CReflectionFormat : public COleDispatchDriver
{
public:
	CReflectionFormat(){} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CReflectionFormat(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CReflectionFormat(const CReflectionFormat& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// ReflectionFormat ����
public:
	long get_Type()
	{
		long result;
		InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_Type(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}

	// ReflectionFormat ����
public:

};
