///////////////////////////////////////////////////////////
//  FCDA.cpp
//  Implementation of the Class FCDA
//  Created on:      15-Apr-2014 2:52:15 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#include "FCDA.h"


FCDA::FCDA(){

}



FCDA::~FCDA(){

}





/**
 * Returns the kind of functional constraint. Method is abstract and must be
 * implemented by the FCDA subtypes.
 */
FcKind FCDA::getFc(){

	//return NULL;
}


/**
 * Default implementation may return TrgOpKind.none; should be overriden by FCDA
 * subtypes that need to return another TrgOpKind. 
 */
TrgOpKind FCDA::getTrgOp(){

	//return NULL;
}


/**
 * Returns whether the value is writable (according to the definition of the
 * specific functional constraint).
 */
P_BOOLEAN FCDA::isWritable(){

	//return NULL;
}


/**
 * Returns whether the value is readable (according to the definition of the
 * specific functional constraint).
 */
P_BOOLEAN FCDA::isReadable(){

	//return NULL;
}


/**
 * Returns the owning CDC. 
 */
//CDC FCDA::getCdc(){

//	//return NULL;
//}


/**
 * Returns reference as object (which provides methods to obtain all the
 * constituents of the reference string). 
 */
FCDAReference FCDA::getFcdaRef(){

	//return NULL;
}


/**
 * Returns associated data attribute of the meta-model. Concrete sub-classes
 * should return their contained attribute of some concrete subtype of DA.
 */
DA FCDA::getDa(){

	//return NULL;
}


/**
 * Returns all the primitive data attributes, which contain value that can be read,
 * written and monitored for change. List must not be empty. When associated data
 * attribute is primitive, that one is the only list element. When associated data
 * attribute is composed, its primitive "leafs" are list elements. 
 */
PrimitiveDA FCDA::getPrimitiveDas(){

	//return NULL;
}


/**
 * Returns all data sets that hold reference to this FCDA.
 * <b>Modelling note</b>: FCDA must maintain the link to DSs that reference it, so
 * that the DSs can get notified before the FCD disappears. This enforces the
 * following part of the DS spec: "The persistent existence of DATA and
 * DataAttribute is expected as long as they are referenced as members of a DS. A
 * system has to take special measures to ensure their persistent existence". 
 */
//DS FCDA::getDss(){

//	//return NULL;
//}
