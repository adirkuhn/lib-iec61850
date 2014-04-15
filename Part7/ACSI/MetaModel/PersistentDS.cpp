///////////////////////////////////////////////////////////
//  PersistentDS.cpp
//  Implementation of the Class PersistentDS
//  Created on:      15-Apr-2014 2:52:41 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#include "PersistentDS.h"


PersistentDS::PersistentDS(){

}



PersistentDS::~PersistentDS(){

}





/**
 * Returns whether this persistent data set is referenced by any control block.
 * <b>Modelling note</b>: Persistent data set has to maintain the count of control
 * blocks that refer to it. As long as any control block refers to it, the data
 * set must not be deleted. 
 */
P_BOOLEAN PersistentDS::isReferenced(){

	//return NULL;
}