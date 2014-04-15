///////////////////////////////////////////////////////////
//  CBReference.cpp
//  Implementation of the Class CBReference
//  Created on:      15-Apr-2014 2:52:08 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#include "ServiceFcKind.h"
#include "CBReference.h"


CBReference::CBReference(){

}



CBReference::~CBReference(){

}





/**
 * Returns name of a BRCB, URCB or LCB instance, unambiguously identifying it
 * within the scope of an <b><i>LN</i></b>, or name of an SGCB, GCB, USVCB or
 * MSVCB instance, unambiguously identifying it within the scope of the
 * <b><i>LN0</i></b>. To find out which control block it describes, use getFc().
 * <b>Modelling note</b>: Corresponds to one of the following:
 * - SGCBName = "SGCB",
 * - BRCBName,
 * - URCBName,
 * - LCBName,
 * - GoCBName,
 * - USVCBName,
 * - MSVCBName. 
 */
ObjectName CBReference::getCbName(){

	//return NULL;
}


/**
 * Returns:
 * - FcKind.SP for SGCB,
 * - FcKind.BR for BRCB,
 * - FcKind.RP for URCB,
 * - FcKind.LG for LCB,
 * - FcKind.GO for GCB,
 * - FcKind.MS for MSVCB,
 * - FcKind.US for USVCB. 
 */
ServiceFcKind CBReference::getFc(){

	//return NULL;
}


/**
 * Returns path-name of the control block (SGCB, BRCB, URCB, LCB, GCB, USVCB,
 * MSVCB) instance.
 * <b>Modelling note</b>: Corresponds to one of the following:
 * - SGCBRef=LDName/LNName.SGCBName [SP],
 * - BRCBRef=LDName/LNName.BRCBName [BR],
 * - URCBRef=LDName/LNName.URCBName [RP],
 * - LCBRef=LDName/LNName.LCBName [LG],
 * - GoCBRef=LDName/LNName.GoCBName [GO],
 * - USVCBRef=LDName/LNName.USVCBName [US],
 * - MSVCBRef=LDName/LNName.MSVCBName [MS].
 * <b>Implementation note</b>: { return "[" + getFc() + "] " + super.getRef() + ".
 * " + getCbName(); }. 
 */
P_VISIBLE_STRING255 CBReference::getRef(){

	//return NULL;
}
