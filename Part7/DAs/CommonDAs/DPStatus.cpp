///////////////////////////////////////////////////////////
//  DPStatus.cpp
//  Implementation of the Class DPStatus
//  Created on:      15-Apr-2014 2:52:14 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#include "DPStatus.h"


DPStatus::DPStatus(){

}

DPStatus::~DPStatus(){

}

void DPStatus::setVal(DPStatusKind val)
{
    this->val = val;
}

DPStatusKind DPStatus::getVal()
{
    return this->val;
}
