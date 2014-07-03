///////////////////////////////////////////////////////////
//  LNReference.cpp
//  Implementation of the Class LNReference
//  Created on:      15-Apr-2014 2:52:32 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#include "LNReference.h"


LNReference::LNReference(){

}



LNReference::~LNReference(){

}





/**
 * Returns name of an LN instance, unambiguously identifying the LN within the
 * scope of an LD.
 * <b>Modelling note</b>: Corresponds to LNName.
 */
ObjectName LNReference::getLnName(){

	//return NULL;
}


/**
 * Returns path-name of the LN instance.
 * <b>Modelling note</b>: Corresponds to LNRef=LDName/LNName.
 * <b>Implementation note</b>: { return super.getRef() + "/" + getLnName(); } 
 */
P_VISIBLE_STRING255 LNReference::getRef(){

	//return NULL;
}