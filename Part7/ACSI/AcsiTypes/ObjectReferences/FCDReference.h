///////////////////////////////////////////////////////////
//  FCDReference.h
//  Implementation of the Class FCDReference
//  Created on:      15-Apr-2014 2:52:18 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_9A63E89B_D64A_49da_8D6C_854E067A7C31__INCLUDED_)
#define EA_9A63E89B_D64A_49da_8D6C_854E067A7C31__INCLUDED_

#include "P_VISIBLE_STRING255.h"
#include "FcKind.h"

/**
 * Type not explicitly specified in the standard, but corresponds to what is
 * called FCD.
 * In this specification, the functional constraint is present as prefix to the
 * reference, enclosed in [] (e.g., [MX] myLD/myLN...).
 * <b>Modelling note</b>: Original spec for FCD reads: "The reference of an
 * ordered collection of DataAttributes of a DATA having the same functional
 * constraint (FC) value shall be called functionally constrained data (FCD). The
 * order of the collection of the FCD shall be the order of the appearance of the
 * DataAttributes in the DATA. A functionally constrained data shall be defined as
 * the DataRef accompanied by a value of a functional constraint (FC).
 * NOTE All measured values of a DATA (FC = MX) are referenced by the measurement
 * FCD. The functionally constrained data is used, for example, to describe and to
 * remotely create DATA-SETs. The syntax notation for FCD is defined in a SCSM.
 * EXAMPLE Figure 11 shows a [MX] FCD in the second line."
 */
class FCDReference
{

public:
	FCDReference();
	virtual ~FCDReference();

	FcKind getFc();
	P_VISIBLE_STRING255 getRef();
	P_VISIBLE_STRING255 getRefWithoutFc();

};
#endif // !defined(EA_9A63E89B_D64A_49da_8D6C_854E067A7C31__INCLUDED_)
