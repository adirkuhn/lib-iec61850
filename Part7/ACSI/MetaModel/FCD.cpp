///////////////////////////////////////////////////////////
//  FCD.cpp
//  Implementation of the Class FCD
//  Created on:      15-Apr-2014 2:52:15 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#include "FCD.h"


FCD::FCD(){

}



FCD::~FCD(){

}





/**
 * Returns the kind of functional constraint. 
 */
FcKind FCD::getFc(){

	//return NULL;
}


/**
 * Returns the owning CDC. 
 */
//CDC FCD::getCdc(){

//	//return NULL;
//}


/**
 * Returns reference as object (which provides methods to obtain all the
 * constituents of the reference string). 
 */
FCDReference FCD::getFcdRef(){

	//return NULL;
}


/**
 * Returns all functionally constrained data attributes contained within the
 * owning common data class, that have the functional constraint same as the one
 * returned by getFc(). List must not be empty. 
 */
FCD FCD::getFcdas(){

	//return NULL;
}


/**
 * Returns all data sets that hold reference to this FCD.
 * <b>Modelling note</b>: FCD must maintain the link to DSs that reference it, so
 * that the DSs can get notified before the FCD disappears. This enforces the
 * following part of the DS spec: "The persistent existence of DATA and
 * DataAttribute is expected as long as they are referenced as members of a DS. A
 * system has to take special measures to ensure their persistent existence". 
 */
//DS FCD::getDss(){

//	//return NULL;
//}
