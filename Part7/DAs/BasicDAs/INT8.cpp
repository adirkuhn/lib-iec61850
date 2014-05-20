///////////////////////////////////////////////////////////
//  INT8.cpp
//  Implementation of the Class INT8
//  Created on:      15-Apr-2014 2:52:29 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#include "INT8.h"


INT8::INT8(){

}



INT8::~INT8(){

}

P_INT8 INT8::getVal(){
    return this->val;
}

void INT8::setVal(P_INT8 val){
    this->val=val;
}
