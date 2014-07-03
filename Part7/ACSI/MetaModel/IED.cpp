///////////////////////////////////////////////////////////
//  IED.cpp
//  Implementation of the Class IED
//  Created on:      15-Apr-2014 2:52:22 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#include "IED.h"


IED::IED(){

}



IED::~IED(){

}





/**
 * Returns name of an IED, unambiguously identifying it within the substation.
 * <b>Modelling note</b>: This is not defined in the standard, but is useful in
 * applications that deal with more then one IED.
 */
P_VISIBLE_STRING32 IED::getName(){

	//return NULL;
}


/**
 * Returns all servers within the IED. List must not be empty. 
 */
SERVER IED::getServers(){

	//return NULL;
}