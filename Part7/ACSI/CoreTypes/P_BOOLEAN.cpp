///////////////////////////////////////////////////////////
//  P_BOOLEAN.cpp
//  Implementation of the Class P_BOOLEAN
//  Created on:      15-Apr-2014 2:52:38 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#include "P_BOOLEAN.h"


P_BOOLEAN::P_BOOLEAN(){

}

P_BOOLEAN::~P_BOOLEAN(){

}

void P_BOOLEAN::setVal(bool val) {
    this->val = val;
}

bool P_BOOLEAN::getVal() {
    return this->val;
}
