///////////////////////////////////////////////////////////
//  LNOwnedDSReference.cpp
//  Implementation of the Class LNOwnedDSReference
//  Created on:      15-Apr-2014 2:52:32 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#include "LNOwnedDSReference.h"


LNOwnedDSReference::LNOwnedDSReference(){

}



LNOwnedDSReference::~LNOwnedDSReference(){

}





/**
 * Returns name of a DS instance, unambiguously identifying the DS within the
 * scope of an LN.
 * <b>Modelling note</b>: Corresponds to DSName. 
 */
ObjectName LNOwnedDSReference::getDsName(){

	//return NULL;
}


/**
 * Returns path-name of the ConfiguredDS or PersistentDS instance.
 * <b>Modelling note</b>: Corresponds to DSRef=LDName/LNName.DSName.
 * <b>Implementation note</b>: { return super.getRef() + "." + getDsName(); }. 
 */
P_VISIBLE_STRING255 LNOwnedDSReference::getRef(){

	//return NULL;
}