// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ��

// CResearch ��װ��

class CResearch : public COleDispatchDriver
{
public:
	CResearch(){} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CResearch(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CResearch(const CResearch& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IResearch ����
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
	STDMETHOD(Query)(LPCTSTR ServiceID, VARIANT QueryString, VARIANT QueryLanguage, VARIANT UseSelection, VARIANT LaunchQuery, VARIANT * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_BSTR VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_PVARIANT ;
		InvokeHelper(0xabf, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, ServiceID, &QueryString, &QueryLanguage, &UseSelection, &LaunchQuery, RHS);
		return result;
	}
	STDMETHOD(IsResearchService)(LPCTSTR ServiceID, BOOL * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_BSTR VTS_PBOOL ;
		InvokeHelper(0xac5, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, ServiceID, RHS);
		return result;
	}
	STDMETHOD(SetLanguagePair)(long LanguageFrom, long LanguageTo, VARIANT * RHS)
	{
		HRESULT result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_PVARIANT ;
		InvokeHelper(0xac6, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, LanguageFrom, LanguageTo, RHS);
		return result;
	}

	// IResearch ����
public:

};
