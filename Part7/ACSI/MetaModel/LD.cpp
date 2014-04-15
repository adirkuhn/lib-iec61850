///////////////////////////////////////////////////////////
//  LD.cpp
//  Implementation of the Class LD
//  Created on:      15-Apr-2014 2:52:31 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#include "LD.h"


LD::LD(){

}



LD::~LD(){

}





/**
 * Returns server that contains this logical device. 
 */
//SERVER LD::getServer(){

//	//return NULL;
//}


/**
 * Returns reference as object (which provides methods to obtain all the
 * constituents of the reference string). 
 */
LDReference LD::getLdRef(){

	//return NULL;
}


/**
 * Returns physical device logical node contained within the logical device. Must
 * not be null.
 */
LNPHD LD::getLphd(){

	//return NULL;
}


/**
 * Returns logical device logical node contained within the logical device. Must
 * not be null. 
 */
LLN0 LD::getLn0(){

	//return NULL;
}


/**
 * Returns all domain logical nodes contained within the logical device. List must
 * not be empty. 
 */
LNDOM LD::getDomainLns(){

	//return NULL;
}
