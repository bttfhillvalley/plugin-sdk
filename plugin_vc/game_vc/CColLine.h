/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class CColLine
{
public:
    CVector m_vStart;
    int pad0;
    CVector m_vEnd;
    int pad1;
        
    CColLine(CVector const& start, CVector const& end);
};

VALIDATE_SIZE(CColLine, 0x20);