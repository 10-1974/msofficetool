// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ��

// CSoftEdgeFormat ��װ��

class CSoftEdgeFormat : public COleDispatchDriver
{
public:
	CSoftEdgeFormat(){} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CSoftEdgeFormat(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CSoftEdgeFormat(const CSoftEdgeFormat& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// SoftEdgeFormat ����
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

	// SoftEdgeFormat ����
public:

};
