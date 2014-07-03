///////////////////////////////////////////////////////////
//  AnalogueValue_MX.cpp
//  Implementation of the Class AnalogueValue_MX
//  Created on:      15-Apr-2014 2:52:03 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#include "AnalogueValue_MX.h"


AnalogueValue_MX::AnalogueValue_MX(){

}



AnalogueValue_MX::~AnalogueValue_MX(){

}

void AnalogueValue_MX::setAttr(AnalogueValue attr) {
    this->attr = attr;
}

AnalogueValue AnalogueValue_MX::getAttr() {
    return this->attr;
}
