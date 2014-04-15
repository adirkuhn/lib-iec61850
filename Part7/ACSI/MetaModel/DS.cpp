///////////////////////////////////////////////////////////
//  DS.cpp
//  Implementation of the Class DS
//  Created on:      15-Apr-2014 2:52:14 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#include "DS.h"


DS::DS(){

}



DS::~DS(){

}





/**
 * Returns all functionally constrained data (groups of data with the same
 * functional constraint) that this data set refers to. List may be empty.
 * <b>Modelling note</b>: This is FDC part of the originally defined DSMemberRef. 
 */
//FCD DS::getFcds(){

//	//return NULL;
//}


/**
 * Returns all functionally constrained data attributes that this data set refers
 * to. List may be empty.
 * <b>Modelling note</b>: This is FDCA part of the originally defined DSMemberRef.
 */
//FCD DS::getFcdas(){

//	//return NULL;
//}


/**
 * Returns all the primitive data attributes that this data set refers to. List
 * must not be empty and is of the same size as teh onre returned by getFcdas(). 
 */
PrimitiveDA DS::getPrimitiveDas(){

	//return NULL;
}
