#ifndef MainDlg_H_
#define MainDlg_H_
#include "ui.h"
namespace SOUI
{
class CMainDlg : public SHostWnd
{
public:
	    CMainDlg();
	    ~CMainDlg();
	   
public:


		
	    void     OnClose();
		void     OnMaximize();
		void     OnRestore();
		void     OnMinimize();
		
		BOOL OnInitDialog(HWND wndFocus, LPARAM lInitParam);
	
		
	    void OnSize(UINT nType, CSize size);
	    int  OnCreate( LPCREATESTRUCT lpCreateStruct );
		void OnTimer(UINT_PTR cTimerID);

		void OnOpenFile1();
		void OnOpenFile2();
	EVENT_MAP_BEGIN()
		EVENT_NAME_COMMAND(L"btn_close",OnClose)
        EVENT_NAME_COMMAND(L"btn_min",OnMinimize)
		EVENT_NAME_COMMAND(L"btn_max2",OnMaximize)
        EVENT_NAME_COMMAND(L"btn_max",OnMaximize)
		EVENT_NAME_COMMAND(L"btn_OpenFile1",OnOpenFile1);
	    EVENT_NAME_COMMAND(L"btn_OpenFile2",OnOpenFile2);
	EVENT_MAP_END()	

	BEGIN_MSG_MAP_EX(CMainDlg)
		MSG_WM_CREATE(OnCreate)
		MSG_WM_TIMER(OnTimer)
        MSG_WM_INITDIALOG(OnInitDialog)
		CHAIN_MSG_MAP(SHostWnd)
		REFLECT_NOTIFICATIONS_EX()
	END_MSG_MAP()
private:
	BOOL			                        m_bLayoutInited;
};
}
#endif