// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ��

// CLinearGradient0 ��װ��

class CLinearGradient0 : public COleDispatchDriver
{
public:
	CLinearGradient0(){} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CLinearGradient0(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CLinearGradient0(const CLinearGradient0& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// LinearGradient ����
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
	LPDISPATCH get_ColorStops()
	{
		LPDISPATCH result;
		InvokeHelper(0xac9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	double get_Degree()
	{
		double result;
		InvokeHelper(0x657, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	void put_Degree(double newValue)
	{
		static BYTE parms[] = VTS_R8 ;
		InvokeHelper(0x657, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}

	// LinearGradient ����
public:

};
