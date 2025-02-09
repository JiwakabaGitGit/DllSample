// ConsoleApplicationFormat.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <string>
#include <vector>
#include <afx.h>
#include <afxwin.h>
#include <afxtempl.h>
#include <atlstr.h>
#include <iostream>
#include <fstream>
//#include <Windows.h>
#include "MapChangeCtrl.h"

void CStringToWChar( CString & cstr, wchar_t * wstr, size_t size )
{
    // CString から wchar_t* へ変換
    wcsncpy_s( wstr, size, cstr.GetString(), _TRUNCATE );
}

typedef void ( *CallbackFunc )( int );
typedef int ( *RegisterCallbackFunc )( CallbackFunc );

void MyCallback( int value ) {
	std::cout << "Callback called with value: " << value << std::endl;
}

int main()
{
    using namespace std;


	int nRetCode = 0;
    MapChangeCtrl map;
    nRetCode = map.MapChange( MyCallback );
    std::cout << "Callback ret: " << nRetCode << std::endl;

    return 0;
}
