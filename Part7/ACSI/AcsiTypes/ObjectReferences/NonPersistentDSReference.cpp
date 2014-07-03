///////////////////////////////////////////////////////////
//  NonPersistentDSReference.cpp
//  Implementation of the Class NonPersistentDSReference
//  Created on:      15-Apr-2014 2:52:37 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#include "NonPersistentDSReference.h"


NonPersistentDSReference::NonPersistentDSReference(){

}



NonPersistentDSReference::~NonPersistentDSReference(){

}





/**
 * Returns name of a dataset instance, unambiguously identifying it within the
 * scope of a two party application association.
 * <b>Modelling note</b>: Corresponds to DSName. 
 */
ObjectName NonPersistentDSReference::getDsName(){

	//return NULL;
}


/**
 * Returns path-name of the non-persistent dataset instance.
 * <b>Modelling note</b>: Corresponds to DSRef=@DSName.
 * <b>Question</b>: Should this be "@DSName", as defined in Sections 11 and 19 in
 * Part 7-2, or "@/DSName" as given in Section 19 in the context of TPAA scope?
 * <b>Implementation note</b>: { return "@" + getDsName(); } or { return "@/" +
 * getDsName(); }, depending on the answer to the above question. 
 */
P_VISIBLE_STRING255 NonPersistentDSReference::getRef(){

	//return NULL;
}