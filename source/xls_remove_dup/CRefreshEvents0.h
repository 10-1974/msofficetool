// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ��

// CRefreshEvents0 ��װ��

class CRefreshEvents0 : public COleDispatchDriver
{
public:
	CRefreshEvents0(){} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CRefreshEvents0(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CRefreshEvents0(const CRefreshEvents0& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// RefreshEvents ����
public:
	void BeforeRefresh(BOOL * Cancel)
	{
		static BYTE parms[] = VTS_PBOOL ;
		InvokeHelper(0x63c, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Cancel);
	}
	void AfterRefresh(BOOL Success)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x63d, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Success);
	}

	// RefreshEvents ����
public:

};
