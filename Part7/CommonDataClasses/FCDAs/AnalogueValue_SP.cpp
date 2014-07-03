///////////////////////////////////////////////////////////
//  AnalogueValue_SP.cpp
//  Implementation of the Class AnalogueValue_SP
//  Created on:      15-Apr-2014 2:52:04 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#include "AnalogueValue_SP.h"


AnalogueValue_SP::AnalogueValue_SP(){

}



AnalogueValue_SP::~AnalogueValue_SP(){

}

void AnalogueValue_SP::setAttr(AnalogueValue attr) {
    this->attr = attr;
}

AnalogueValue AnalogueValue_SP::getAttr() {
    return this->attr;
}
