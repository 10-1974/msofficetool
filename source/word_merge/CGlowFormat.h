// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ��

// CGlowFormat ��װ��

class CGlowFormat : public COleDispatchDriver
{
public:
	CGlowFormat(){} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CGlowFormat(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CGlowFormat(const CGlowFormat& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// GlowFormat ����
public:
	float get_Radius()
	{
		float result;
		InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_Radius(float newValue)
	{
		static BYTE parms[] = VTS_R4 ;
		InvokeHelper(0x1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_Color()
	{
		LPDISPATCH result;
		InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}

	// GlowFormat ����
public:

};
