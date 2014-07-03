///////////////////////////////////////////////////////////
//  FCDAReference.h
//  Implementation of the Class FCDAReference
//  Created on:      15-Apr-2014 2:52:18 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_B3729B8E_44EE_407c_AAC6_63373859E854__INCLUDED_)
#define EA_B3729B8E_44EE_407c_AAC6_63373859E854__INCLUDED_

#include "ObjectName.h"
#include "P_VISIBLE_STRING255.h"

/**
 * Type not explicitly specified in the standard, but corresponds to what is
 * called FCDA.
 * <b>Modelling note</b>: Original spec for FCDA reads: "A reference of a single
 * DataAttribute of a DATA having a specific functional constraint (FC) value
 * shall be called functionally constrained data attribute (FCDA). A functionally
 * constrained data attribute shall be defined as a DataAttributeReference
 * accompanied by a value of a functional constraint (FC).
 * NOTE A single measured value of a DATA (FC = MX) is referenced by an FCDA. The
 * functionally constrained data attribute is used, for example, to describe and
 * to remotely create DATA-SETs. The syntax notation for FCDA is defined in a SCSM.
 * 
 * EXAMPLE Figure 11 shows a [MX] FCDA in the fifth line."
 */
class FCDAReference
{

public:
	FCDAReference();
	virtual ~FCDAReference();

	ObjectName getLeafAttrName();
	P_VISIBLE_STRING255 getRef();
	P_VISIBLE_STRING255 getRefWithoutFc();

};
#endif // !defined(EA_B3729B8E_44EE_407c_AAC6_63373859E854__INCLUDED_)
