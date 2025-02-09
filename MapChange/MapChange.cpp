// MapChange.cpp : DLL の初期化ルーチンを定義します。
//

#include "pch.h"
#include "framework.h"
#include "MapChange.h"
#include "CTest.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

extern "C" MAP_CHANGE_API int MapChange( CallbackFunc callback )
{
	AFX_MANAGE_STATE( AfxGetStaticModuleState() );
	CTest test;
	test.SetData( _T( "hogehoge" ) );
	for( int i = 0; i < 5; ++i )
	{
		test.TimeSleep( 100 );
		callback( i );
	}

	return 0;
}

// CMapChangeApp

BEGIN_MESSAGE_MAP(CMapChangeApp, CWinApp)
END_MESSAGE_MAP()


// CMapChangeApp の構築

CMapChangeApp::CMapChangeApp()
{
	// TODO: この位置に構築用コードを追加してください。
	// ここに InitInstance 中の重要な初期化処理をすべて記述してください。
}


// 唯一の CMapChangeApp オブジェクト

CMapChangeApp theApp;


// CMapChangeApp の初期化

BOOL CMapChangeApp::InitInstance()
{
	CWinApp::InitInstance();

	return TRUE;
}
