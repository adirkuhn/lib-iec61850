///////////////////////////////////////////////////////////
//  BOOLEAN.cpp
//  Implementation of the Class BOOLEAN
//  Created on:      15-Apr-2014 2:52:06 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#include "BOOLEAN.h"


BOOLEAN::BOOLEAN(){

}

BOOLEAN::~BOOLEAN(){

}

void BOOLEAN::setVal(P_BOOLEAN val) {
    this->val = val;
}

P_BOOLEAN BOOLEAN::getVal() {
    return this->val;
}
