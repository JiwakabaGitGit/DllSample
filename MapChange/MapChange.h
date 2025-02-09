// MapChange.h : MapChange DLL のメイン ヘッダー ファイル
//

#pragma once
#include "pch.h"
#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'pch.h' をインクルードしてください"
#endif

#include "resource.h"		// メイン シンボル

#ifdef MAP_CHANGE_EXPORTS
#define MAP_CHANGE_API __declspec(dllexport)
#else
#define MAP_CHANGE_API __declspec(dllimport)
#endif


typedef void ( *CallbackFunc )( int );

// Export MFC application from DLL
extern "C" MAP_CHANGE_API int MapChange( CallbackFunc callback );

// CMapChangeApp
// このクラスの実装に関しては MapChange.cpp をご覧ください
//
//
class MAP_CHANGE_API CMapChangeApp : public CWinApp
{
public:
	CMapChangeApp();

// オーバーライド
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};

