///////////////////////////////////////////////////////////
//  ValWithTrans_ST_dchg.cpp
//  Implementation of the Class ValWithTrans_ST_dchg
//  Created on:      15-Apr-2014 2:52:51 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#include "ValWithTrans_ST_dchg.h"


ValWithTrans_ST_dchg::ValWithTrans_ST_dchg(){

}



ValWithTrans_ST_dchg::~ValWithTrans_ST_dchg(){

}

ValWithTrans ValWithTrans_ST_dchg::getAttr(){
    return attr;
}

void ValWithTrans_ST_dchg::setAttr(ValWithTrans attr){
    this->attr = attr;
}
