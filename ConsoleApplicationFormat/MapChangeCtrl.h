#pragma once
#include "../MapChange/MapChange.h"

class MapChangeCtrl
{
public:
	MapChangeCtrl();
	~MapChangeCtrl();
	int MapChange( CallbackFunc callback );

private:
	HMODULE m_hModule;
	typedef int ( *MapChangeFunc )( CallbackFunc callback );
	MapChangeFunc m_pMapChangeFunc;		// MapChangeŠÖ”ƒ|ƒCƒ“ƒ^
};

