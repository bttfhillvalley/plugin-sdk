/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class PLUGIN_API CDoor {
public:
    float fAngleInPosOne;
    float fAngleInPosTwo;
    unsigned char nAxisDirection;
    unsigned char nAxis;
    unsigned char nState;
    unsigned char __f000B;
    float fAngle;
    float fPrevAngle;
    float fVelAngle;
    CVector vecVelocity;

    float RetAngleWhenOpen() {
        if (abs(fAngleInPosOne) < abs(fAngleInPosTwo))
            return fAngleInPosTwo;
        else
            return fAngleInPosOne;
    }

    float GetAngleOpenRatio()
    {
        float open = RetAngleWhenOpen();
        if (open == 0.0f)
            return 0.0f;
        return fAngle / open;
    }
};

VALIDATE_SIZE(CDoor, 0x24);