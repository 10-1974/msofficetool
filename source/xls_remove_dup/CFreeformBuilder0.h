// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ��

// CFreeformBuilder0 ��װ��

class CFreeformBuilder0 : public COleDispatchDriver
{
public:
	CFreeformBuilder0(){} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CFreeformBuilder0(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CFreeformBuilder0(const CFreeformBuilder0& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IFreeformBuilder ����
public:
	STDMETHOD(get_Application)(Application * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PDISPATCH ;
		InvokeHelper(0x94, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(get_Creator)(XlCreator * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PI4 ;
		InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(get_Parent)(LPDISPATCH * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PDISPATCH ;
		InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(AddNodes)(MsoSegmentType SegmentType, MsoEditingType EditingType, float X1, float Y1, VARIANT X2, VARIANT Y2, VARIANT X3, VARIANT Y3)
	{
		HRESULT result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_R4 VTS_R4 VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT ;
		InvokeHelper(0x6e2, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, SegmentType, EditingType, X1, Y1, &X2, &Y2, &X3, &Y3);
		return result;
	}
	STDMETHOD(ConvertToShape)(Shape * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PDISPATCH ;
		InvokeHelper(0x6e6, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}

	// IFreeformBuilder ����
public:

};
