// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ��

// COLEObjectEvents0 ��װ��

class COLEObjectEvents0 : public COleDispatchDriver
{
public:
	COLEObjectEvents0(){} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	COLEObjectEvents0(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	COLEObjectEvents0(const COLEObjectEvents0& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// OLEObjectEvents ����
public:
	void GotFocus()
	{
		InvokeHelper(0x605, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void LostFocus()
	{
		InvokeHelper(0x606, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}

	// OLEObjectEvents ����
public:

};
