///////////////////////////////////////////////////////////
//  CDCReference.cpp
//  Implementation of the Class CDCReference
//  Created on:      15-Apr-2014 2:52:08 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#include "CDCReference.h"


CDCReference::CDCReference(){

}



CDCReference::~CDCReference(){

}





/**
 * Returns the name of a CDC instance contained in the LN. The CDC may be:
 * <ol>
 * 	<li>PrimitiveCDC: Example is "Auto" from the reference myLD3/RREC1.Auto (where
 * myLD3/RREC1.Auto is of type SPC:PrimitiveCDC).</li>
 * 	<li>ComposedCDC: example is "PhV" from the reference myLD3/MMXU1.PhV.phsA
 * (where myLD3/MMXU1.PhV is of type WYE:ComposedCDC).</li>
 * </ol>
 * 
 * <b>Modelling note</b>: Corresponds to DataName1.
 * <b>Implementation note</b>: To identify the case (2), i.e., ComposedCDCs, you
 * have to construct the hashmap based on definitions from IEC 61850-7-3, since
 * MMS does not provide information about PrimitiveCDC and ComposedCDC. See
 * diagram ObjectReferences::ImlementationNotes-ComplexCDCs. 
 */
ObjectName CDCReference::getDataName1(){

	//return NULL;
}


/**
 * Returns:
 * <ol>
 * 	<li>empty string if PrimitiveCDC is contained in LN</li>
 * 	<li>non-empty string if PrimitiveCDC is contained in ComposedCDC. Example is
 * "phsA" from the reference myLD3/MMXU1.PhV.phsA (where PhV is of type WYE:
 * ComposedCDC, and one level further, PhV.phsA is of type SPC:PrimitiveCDC).
 * </li>
 * </ol>
 * 
 * <b>Modelling note</b>: Corresponds to DataName2 (where applicable).
 * <b>Implementation note</b>: See also note in getDataName1(). 
 */
ObjectName CDCReference::getDataName2(){

	//return NULL;
}


/**
 * Returns path-name of the CDC (ComposedCDC or PrimitiveCDC) instance.
 * <b>Modelling note</b>: Corresponds to
 * DataRef=LDName/LNName.DataName1 for PrimitiveCDC or to
 * DataRef=LDName/LNName.DataName1.DataName2 for ComposedCDC.
 * <b>Implementation note</b>:
 * {
 * P_VISIBLE_STRING255 result = super.getRef() + "." + getDataName1();
 * if (!getDataName2().isEmpty()) result += "." + getDataName2();
 * return result;
 * } 
 */
P_VISIBLE_STRING255 CDCReference::getRef(){

	//return NULL;
}