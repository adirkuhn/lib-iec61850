///////////////////////////////////////////////////////////
//  INT8_CO.cpp
//  Implementation of the Class INT8_CO
//  Created on:      15-Apr-2014 2:52:30 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#include "INT8_CO.h"


INT8_CO::INT8_CO(){

}



INT8_CO::~INT8_CO(){

}

void INT8_CO::setAttr(INT8 attr) {
    this->attr = attr;
}

INT8 INT8_CO::getAttr() {
    return this->attr;
}
