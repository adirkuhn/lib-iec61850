///////////////////////////////////////////////////////////
//  LDReference.cpp
//  Implementation of the Class LDReference
//  Created on:      15-Apr-2014 2:52:31 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#include "LDReference.h"


LDReference::LDReference(){

}



LDReference::~LDReference(){

}





/**
 * Returns name of an LD instance, unambiguously identifying the LD within the
 * system.
 * <b>Modelling note</b>: Corresponds to LDName. 
 */
ObjectName LDReference::getLdName(){

	//return NULL;
}


/**
 * Returns path-name of the LD instance.
 * <b>Modelling note</b>: Corresponds to LDRef=LDName.
 * <b>Implementation note</b>: { return getLdName(); }
 */
P_VISIBLE_STRING255 LDReference::getRef(){

	//return NULL;
}