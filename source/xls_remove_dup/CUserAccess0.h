// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ��

// CUserAccess0 ��װ��

class CUserAccess0 : public COleDispatchDriver
{
public:
	CUserAccess0(){} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CUserAccess0(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CUserAccess0(const CUserAccess0& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// UserAccess ����
public:
	CString get_Name()
	{
		CString result;
		InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	BOOL get_AllowEdit()
	{
		BOOL result;
		InvokeHelper(0x7e4, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_AllowEdit(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x7e4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void Delete()
	{
		InvokeHelper(0x75, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}

	// UserAccess ����
public:

};
