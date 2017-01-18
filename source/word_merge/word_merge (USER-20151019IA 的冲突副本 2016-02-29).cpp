// word_merge.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "word_merge.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif

#include "CApplication.h"
#include "CDocuments.h"
#include "CSelection.h"
#include "CDocument0.h"

// Ψһ��Ӧ�ó������

CWinApp theApp;

using namespace std;


CApplication appword;

BOOL CreateDispatch()
{
   COleException* pe = new COleException;

   try 
   {
      // Create instance of Microsoft System Information Control 
      // by using ProgID.
      if (appword.CreateDispatch(_T("Word.Application"), pe))
      {
         _tprintf(_T("Failed to initialize OLE\n"));
		 appword.put_Visible(TRUE);
		 return TRUE;
      }
      else
      {
         throw pe;
      }
   }
   //Catch control-specific exceptions.
    catch (COleDispatchException* pe) 
   {
      CString cStr;

      if (!pe->m_strSource.IsEmpty())
         cStr = pe->m_strSource + _T(" - ");
      if (!pe->m_strDescription.IsEmpty())
         cStr += pe->m_strDescription;
      else
         cStr += _T("unknown error");

      AfxMessageBox(cStr, MB_OK, 
         (pe->m_strHelpFile.IsEmpty()) ?  0 : pe->m_dwHelpContext);

      pe->Delete();
   }
   //Catch all MFC exceptions, including COleExceptions.
   // OS exceptions will not be caught.
   catch (CException* pe) 
   {
      TRACE(_T("%s(%d): OLE Execption caught: SCODE = %x"), 
         __FILE__, __LINE__, COleException::Process(pe));
      pe->Delete();
   }

   pe->Delete();

   return FALSE;
}

VARIANT & getVstr(VARIANT &v, const char* str)
{
	CString s(str);
	v.vt = VT_BSTR;
	v.bstrVal = s.AllocSysString();
	return v;	
}

int _tmain(int argc, TCHAR* argv[], TCHAR* envp[])
{
	int nRetCode = 0;

	::CoInitialize(NULL);
	//CoUninitialize(); 
	
	// Initialize OLE libraries
	if (!AfxOleInit())
	{
		_tprintf(_T("Failed to initialize OLE\n"));
		nRetCode = 1;
	}

	// ��ʼ�� MFC ����ʧ��ʱ��ʾ����
	if (!AfxWinInit(::GetModuleHandle(NULL), NULL, ::GetCommandLine(), 0))
	{
		// TODO: ���Ĵ�������Է���������Ҫ
		_tprintf(_T("��������: MFC ��ʼ��ʧ��\n"));
		nRetCode = 1;
	}
	else
	{
		// TODO: �ڴ˴�ΪӦ�ó������Ϊ��д���롣
		_tprintf(_T("hello word\n"));
		BOOL ret;
		
		if ( !CreateDispatch() )
			return 1;
		
		COleVariant vtOptional((long)DISP_E_PARAMNOTFOUND,VT_ERROR),
		        vtTrue((short)TRUE),
				vtFalse((short)FALSE);

		CDocuments docs;
		CDocument0 doc;
		CSelection oSelection;

		docs = appword.get_Documents();
		doc = docs.Add(vtOptional,vtOptional,vtOptional,vtOptional);

		VARIANT f1;
		getVstr(f1,"c:\\tmp\\test.doc");
		CDocument0 doc1;
		doc1 = docs.Open(&f1,vtOptional,vtOptional,vtOptional,vtOptional,vtOptional,vtOptional,vtOptional,vtOptional,vtOptional,vtOptional,vtOptional,vtOptional,vtOptional,vtOptional,vtOptional);
				
		doc1.Activate();
		oSelection = appword.get_Selection();
		oSelection.WholeStory();
		oSelection.Copy();

		doc.Activate();
		oSelection = appword.get_Selection();
		oSelection.Paste();

		doc1.Close(vtOptional,vtOptional,vtOptional);
		
        VARIANT f2;
		getVstr(f2,"c:\\tmp\\test1.docx");
		CDocument0 doc2;
		doc2 = docs.Open(&f2,vtOptional,vtOptional,vtOptional,vtOptional,vtOptional,vtOptional,vtOptional,vtOptional,vtOptional,vtOptional,vtOptional,vtOptional,vtOptional,vtOptional,vtOptional);

		doc2.Activate();
		oSelection = appword.get_Selection();
		oSelection.WholeStory();
		oSelection.Copy();

		doc.Activate();
		oSelection = appword.get_Selection();
		oSelection.Paste();

		doc2.Close(vtOptional,vtOptional,vtOptional);

		/*CString StrToAdd = "addddddddddfff";
		oSelection = appword.get_Selection();
		oSelection.TypeText(StrToAdd);
		*/

		VARIANT v;
		getVstr(v,"c:\\tmp\\xxx.doc");
		
		doc.SaveAs(&v,vtOptional,vtOptional,vtOptional,vtOptional,vtOptional,vtOptional,vtOptional,vtOptional,vtOptional,vtOptional,vtOptional,vtOptional,vtOptional,vtOptional,vtOptional);

		docs.Close(vtOptional,vtOptional,vtOptional);
		appword.Quit(vtOptional,vtOptional,vtOptional);
	}

	return nRetCode;
}
