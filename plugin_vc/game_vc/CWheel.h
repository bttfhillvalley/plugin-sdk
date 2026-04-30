/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class CWheel {
public:
    CVector vecWheelPos;
    //char __p000C[4];
    int pad1;
    CVector vecWheelAngle;
    int pad2;
    char surfaceA;
    char pieceA;
    char surfaceB;
    char pieceB;
    float depth;
    //char __p001C[12];
};

VALIDATE_SIZE(CWheel, 0x28);