///////////////////////////////////////////////////////////
//  FCDAReference.cpp
//  Implementation of the Class FCDAReference
//  Created on:      15-Apr-2014 2:52:18 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#include "FCDAReference.h"


FCDAReference::FCDAReference(){

}



FCDAReference::~FCDAReference(){

}





/**
 * Returns one or more concatenated names of instances of DA, as follows:
 * <ol>
 * 	<li>For a PrimitiveDA, it is a single name. Example is "stVal" from the
 * reference [ST] myLD3/XCBR1.Pos.stVal (where stVal is of type DPStatus:
 * PrimitiveDA).</li>
 * 	<li>For a ComposedDA, it is two or more concatenated names, starting from the
 * ComposedDA down to the PrimitiveDA it contains. One example is "cVal.mag.f"
 * from the reference [MX] myLD3/MMXU1.PhV.phsA.cVal.mag.f. Here:</li>
 * </ol>
 * <ul>
 * 	<li>cVal is of type Vector:ComposedDA; one level further,</li>
 * 	<li>cVal.mag is of type AnalogueValue:ComposedDA; one level further,</li>
 * 	<li>cVal.mag.f is of type FLOAT32:PrimitiveDA.</li>
 * </ul>
 * 
 * <b>Modelling note</b>: Corresponds to DataAttributeName.[DataAttributeName...].
 * 
 * <b>Implementation note</b>: After DataName1 and DataName2 of CDCReference have
 * been correctly parsed, this is the concatenation of all names down to the leaf. 
 */
ObjectName FCDAReference::getLeafAttrName(){

	//return NULL;
}


/**
 * Returns path-name of the PrimitiveDA instance (contained in CDC or in
 * ComposedDA) prefixed with a functional constraint.
 * <b>Modelling note</b>: Corresponds to FCDA = [FC] DataAttrRef. For the position
 * of [FC] (as prefix or suffix), see FCDReference.
 * <b>Implementation note</b>: { return super.getRef() + "." + getLeafAttrName();
 * }. 
 */
P_VISIBLE_STRING255 FCDAReference::getRef(){

	//return NULL;
}


/**
 * Returns path-name of the PrimitiveDA instance (contained in CDC or in
 * ComposedDA) without functional constraint prefix.
 * <b>Modelling note</b>: Corresponds to DA = DataAttrRef.
 * <b>Implementation note</b>: { return super.getRefWithoutFc() + "." +
 * getLeafAttrName; }. 
 */
P_VISIBLE_STRING255 FCDAReference::getRefWithoutFc(){

	//return NULL;
}