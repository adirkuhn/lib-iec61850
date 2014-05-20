///////////////////////////////////////////////////////////
//  ObjectName.cpp
//  Implementation of the Class ObjectName
//  Created on:      15-Apr-2014 2:52:37 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#include "ObjectName.h"


ObjectName::ObjectName() {

}

void ObjectName::setObjectName(P_VISIBLE_STRING32 name) {
    this->name = name;
}

P_VISIBLE_STRING32 ObjectName::getObjectName() {

    return this->name;
}



ObjectName::~ObjectName(){

}
