///////////////////////////////////////////////////////////
//  FCDReference.cpp
//  Implementation of the Class FCDReference
//  Created on:      15-Apr-2014 2:52:18 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#include "FcKind.h"
#include "FCDReference.h"


FCDReference::FCDReference(){

}



FCDReference::~FCDReference(){

}





/**
 * Returns functional constraint.
 */
FcKind FCDReference::getFc(){

	//return NULL;
}


/**
 * Returns path-name of the PrimitiveCDC instance (contained in LN or in
 * ComposedCDC) prefixed with a functional constraint.
 * <b>Modelling note</b>: Corresponds to FCD = [FC] DataRef.
 * <b>Implementation note</b>: { return "[" + getFc() + "] " + super.getRef(); }. 
 */
P_VISIBLE_STRING255 FCDReference::getRef(){

	//return NULL;
}


/**
 * Returns path-name of the PrimitiveCDC instance (contained in LN or in
 * ComposedCDC) without functional constraint.
 * <b>Modelling note</b>: Corresponds DataRef.
 * <b>Implementation note</b>: { return super.getRef(); }. 
 */
P_VISIBLE_STRING255 FCDReference::getRefWithoutFc(){

	//return NULL;
}
