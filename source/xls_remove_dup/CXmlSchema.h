// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ��

// CXmlSchema ��װ��

class CXmlSchema : public COleDispatchDriver
{
public:
	CXmlSchema(){} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CXmlSchema(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CXmlSchema(const CXmlSchema& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IXmlSchema ����
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
	STDMETHOD(get_Namespace)(XmlNamespace * * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PDISPATCH ;
		InvokeHelper(0x91c, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(get_XML)(BSTR * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PBSTR ;
		InvokeHelper(0x91d, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}
	STDMETHOD(get_Name)(BSTR * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_PBSTR ;
		InvokeHelper(0x6e, DISPATCH_PROPERTYGET, VT_HRESULT, (void*)&result, parms, RHS);
		return result;
	}

	// IXmlSchema ����
public:

};
