///////////////////////////////////////////////////////////
//  LN0.cpp
//  Implementation of the Class LN0
//  Created on:      15-Apr-2014 2:52:32 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#include "LN0.h"


LN0::LN0(){

}



LN0::~LN0(){

}





/**
 * Returns log contained in the logical device logical node. May be null. 
 */
//LOG LN0::getLog(){

//	//return NULL;
//}


/**
 * Returns setting group control block contained in the logical device logical
 * node. May be null. 
 */
void LN0::getSgcb(){

}


/**
 * Returns all GOOSE control blocks contained in this logical device logical node.
 * List may be empty. 
 */
void LN0::getGcbs(){

}


/**
 * Returns all multicast sampled value control blocks contained in this logical
 * device logical node. List may be empty. 
 */
MSVCB LN0::getMsvcbs(){

	//return NULL;
}


/**
 * Returns all unicast sampled value control blocks contained in this logical
 * device logical node. List may be empty. 
 */
void LN0::getUsvcbs(){

}
