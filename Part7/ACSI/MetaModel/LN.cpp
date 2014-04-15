///////////////////////////////////////////////////////////
//  LN.cpp
//  Implementation of the Class LN
//  Created on:      15-Apr-2014 2:52:31 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#include "LN.h"


LN::LN(){

}



LN::~LN(){

}





/**
 * Returns logical device that contains this logical node. 
 */
//LD LN::getLd(){

//	//return NULL;
//}


/**
 * Returns reference as object (which provides methods to obtain all the
 * constituents of the reference string). 
 */
//LNReference LN::getLnRef(){

//	//return NULL;
//}


/**
 * Returns all common data classes (data objects = DATA from sec 10) contained
 * within the logical node. List must not be empty.
 * Example of returned objects for an XCBR:
 * myLD3/XCBR1.Pos
 * myLD3/XCBR1.Loc
 * myLD3/XCBR1.CBOpCap
 * ... 
 */
//CDC LN::getCdcs(){

//	//return NULL;
//}


/**
 * Returns all datasets contained within the logical node. List may be empty.
 * <b>Modelling note</b>: To distinguish between data sets effectively contained
 * by LN, and non-persistent data sets (which are owned by the TPAA over which
 * they have been created), we introduced an abstract LNOwnedDS class, which
 * excludes non-persistent DSs. 
 */
//LNOwnedDS LN::getDss(){

//	//return NULL;
//}


/**
 * Returns all buffered report control blocks contained within the logical node.
 * List may be empty. 
 */
void LN::getBrcbs(){

}


/**
 * Returns all unbuffered report control blocks contained within the logical node.
 * List may be empty. 
 */
void LN::getUrcbs(){

}


/**
 * Returns all log control blocks contained within the logical node. List may be
 * empty. 
 */
void LN::getLcbs(){

}
