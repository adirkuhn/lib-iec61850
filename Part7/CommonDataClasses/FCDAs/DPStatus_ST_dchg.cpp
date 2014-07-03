///////////////////////////////////////////////////////////
//  DPStatus_ST_dchg.cpp
//  Implementation of the Class DPStatus_ST_dchg
//  Created on:      15-Apr-2014 2:52:14 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#include "DPStatus_ST_dchg.h"


DPStatus_ST_dchg::DPStatus_ST_dchg(){

}



DPStatus_ST_dchg::~DPStatus_ST_dchg(){

}

void DPStatus_ST_dchg::setAttr(DPStatus attr)
{
    this->attr = attr;
}

DPStatus DPStatus_ST_dchg::getAttr()
{
    return this->attr;
}
