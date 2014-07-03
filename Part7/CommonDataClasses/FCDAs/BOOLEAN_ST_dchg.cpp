///////////////////////////////////////////////////////////
//  BOOLEAN_ST_dchg.cpp
//  Implementation of the Class BOOLEAN_ST_dchg
//  Created on:      15-Apr-2014 2:52:07 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#include "BOOLEAN_ST_dchg.h"


BOOLEAN_ST_dchg::BOOLEAN_ST_dchg(){

}



BOOLEAN_ST_dchg::~BOOLEAN_ST_dchg(){

}

void BOOLEAN_ST_dchg::setAttr(BOOLEAN attr) {
    this->attr = attr;
}

BOOLEAN BOOLEAN_ST_dchg::getAttr() {
    return this->attr;
}
