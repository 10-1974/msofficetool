// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ��

// CDocEvents0 ��װ��

class CDocEvents0 : public COleDispatchDriver
{
public:
	CDocEvents0(){} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CDocEvents0(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CDocEvents0(const CDocEvents0& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IDocEvents ����
public:
	STDMETHOD(SelectionChange)(Range * Target)
	{
		HRESULT result;
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0x607, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, Target);
		return result;
	}
	STDMETHOD(BeforeDoubleClick)(Range * Target, BOOL * Cancel)
	{
		HRESULT result;
		static BYTE parms[] = VTS_DISPATCH VTS_PBOOL ;
		InvokeHelper(0x601, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, Target, Cancel);
		return result;
	}
	STDMETHOD(BeforeRightClick)(Range * Target, BOOL * Cancel)
	{
		HRESULT result;
		static BYTE parms[] = VTS_DISPATCH VTS_PBOOL ;
		InvokeHelper(0x5fe, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, Target, Cancel);
		return result;
	}
	STDMETHOD(Activate)()
	{
		HRESULT result;
		InvokeHelper(0x130, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(Deactivate)()
	{
		HRESULT result;
		InvokeHelper(0x5fa, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(Calculate)()
	{
		HRESULT result;
		InvokeHelper(0x117, DISPATCH_METHOD, VT_HRESULT, (void*)&result, NULL);
		return result;
	}
	STDMETHOD(Change)(Range * Target)
	{
		HRESULT result;
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0x609, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, Target);
		return result;
	}
	STDMETHOD(FollowHyperlink)(Hyperlink * Target)
	{
		HRESULT result;
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0x5be, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, Target);
		return result;
	}
	STDMETHOD(PivotTableUpdate)(PivotTable * Target)
	{
		HRESULT result;
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0x86c, DISPATCH_METHOD, VT_HRESULT, (void*)&result, parms, Target);
		return result;
	}

	// IDocEvents ����
public:

};
