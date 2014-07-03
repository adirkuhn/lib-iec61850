///////////////////////////////////////////////////////////
//  P_VISIBLE_STRING32.cpp
//  Implementation of the Class P_VISIBLE_STRING32
//  Created on:      15-Apr-2014 2:52:41 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#include "P_VISIBLE_STRING32.h"

/**
 * TODO: LIMITAR A QUANTIDADE DE CARACTERES ATE 32.
 */
P_VISIBLE_STRING32::P_VISIBLE_STRING32() {

}

void P_VISIBLE_STRING32::setValue(QString value) {
    this->value = value;
}

QString P_VISIBLE_STRING32::getValue() {

    return this->value;
}

P_VISIBLE_STRING32::~P_VISIBLE_STRING32(){

}
