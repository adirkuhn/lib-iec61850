///////////////////////////////////////////////////////////
//  NamedIEC61850Object.cpp
//  Implementation of the Class NamedIEC61850Object
//  Created on:      15-Apr-2014 2:52:36 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#include "NamedIEC61850Object.h"


NamedIEC61850Object::NamedIEC61850Object(){

}



NamedIEC61850Object::~NamedIEC61850Object(){

}


/**
 * @brief NamedIEC61850Object::setName
 * @param P_VISIBLE_STRING32 name The name of the object
 */
void NamedIEC61850Object::setName(P_VISIBLE_STRING32 name) {
    objectName.setObjectName(name);
}

/**
 * Returns object name.
 */
ObjectName NamedIEC61850Object::getName(){

    return objectName;
}


void NamedIEC61850Object::getObjectRef(){

}


/**
 * Returns reference as string.
 */
P_VISIBLE_STRING255 NamedIEC61850Object::getRef(){

	//return NULL;
}
