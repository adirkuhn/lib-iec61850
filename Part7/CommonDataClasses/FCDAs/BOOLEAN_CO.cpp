///////////////////////////////////////////////////////////
//  BOOLEAN_CO.cpp
//  Implementation of the Class BOOLEAN_CO
//  Created on:      15-Apr-2014 2:52:06 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#include "BOOLEAN_CO.h"


BOOLEAN_CO::BOOLEAN_CO(){

}

BOOLEAN_CO::~BOOLEAN_CO(){

}

void BOOLEAN_CO::setAttr(BOOLEAN attr) {
    this->attr = attr;
}

BOOLEAN BOOLEAN_CO::getAttr() {
    return this->attr;
}
