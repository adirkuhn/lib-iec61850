///////////////////////////////////////////////////////////
//  LOGReference.cpp
//  Implementation of the Class LOGReference
//  Created on:      15-Apr-2014 2:52:33 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#include "LOGReference.h"


LOGReference::LOGReference(){

}



LOGReference::~LOGReference(){

}





/**
 * Returns name of a LOG instance, unambiguously identifying it within the scope
 * of an LN0.
 * <b>Modelling note</b>: Corresponds to LOGName= LDName.
 * <b>Implementation note</b>: { return getLdName(); }. 
 */
ObjectName LOGReference::getLogName(){

	//return NULL;
}


/**
 * Returns path-name of the LOG instance.
 * <b>Modelling note</b>: Corresponds to LOGRef=[LG] LDName/LOGName.
 * <b>Implementation note</b>: As long as LOG is on LN, { return "[" + getFc() +
 * "] " + getLogName() + "/" + getLogName(); }. If LOG were moved from LN to LD,
 * {return "[" + getFc() + "] " + <b>super.getLdName() + "/" + </b>getLogName(); }.
 * 
 */
P_VISIBLE_STRING255 LOGReference::getRef(){

	//return NULL;
}


/**
 * Returns ServiceFcKind.LG. 
 */
void LOGReference::getFc(){

}