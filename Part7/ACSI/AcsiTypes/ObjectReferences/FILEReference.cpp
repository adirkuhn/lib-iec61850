///////////////////////////////////////////////////////////
//  FILEReference.cpp
//  Implementation of the Class FILEReference
//  Created on:      15-Apr-2014 2:52:19 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#include "FILEReference.h"


FILEReference::FILEReference(){

}



FILEReference::~FILEReference(){

}





/**
 * Returns name of a FILE instance, unambiguously identifying the file within the
 * ACSI file store. File names may be structured to differentiate file types, for
 * example, disturbance records, programs, and parameter and configuration data.
 * <b>Modelling note 1</b>: Corresponds to FileName. Original definition:
 * "FileAttribute: Name of the file in the ACSI file store. File names may be
 * structured to differentiate file types, e.g. disturbance records, programs, and
 * parameter and configuration data."
 * <b>Modelling note 2</b>: Although this is called "FileName", it should have
 * been called "FileRef" to follow the logic of the whole ACSI naming scheme. Note
 * that the type is not ObjectName, but P_VISIBLE_STRING255. 
 */
P_VISIBLE_STRING255 FILEReference::getFileName(){

	//return NULL;
}


/**
 * Returns path-name of the FILE instance.
 * <b>Modelling note</b>: Corresponds to FileName. 
 */
P_VISIBLE_STRING255 FILEReference::getRef(){

	//return NULL;
}