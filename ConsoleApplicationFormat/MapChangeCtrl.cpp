#include "MapChangeCtrl.h"
#include <iostream>

MapChangeCtrl::MapChangeCtrl()
{
    m_hModule = LoadLibrary( L"MapChange.dll" );
    if( m_hModule )
    {
        m_pMapChangeFunc = reinterpret_cast<MapChangeFunc>(GetProcAddress( m_hModule, "MapChange" ));
       
    }
    else
    {
        std::cerr << "Failed to load DLL" << std::endl;

    }
}

MapChangeCtrl::~MapChangeCtrl()
{
    FreeLibrary( m_hModule );
}

int MapChangeCtrl::MapChange( CallbackFunc callback )
{
    return m_pMapChangeFunc( callback );
}