///////////////////////////////////////////////////////////
//  IPAddress.h
//  Implementation of the Class IPAddress
//  Created on:      15-Apr-2014 2:52:30 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_EC4B2DEC_8ABF_4398_B7E5_33BB228A2D7F__INCLUDED_)
#define EA_EC4B2DEC_8ABF_4398_B7E5_33BB228A2D7F__INCLUDED_

#include "P_VISIBLE_STRING64.h"

/**
 * Not explicitly specified in the standard, but is required for connecting to the
 * SERVER.
 */
class IPAddress
{

public:
	IPAddress();
	virtual ~IPAddress();
	/**
	 * String value of this address. 
	 */
	P_VISIBLE_STRING64 address;

};
#endif // !defined(EA_EC4B2DEC_8ABF_4398_B7E5_33BB228A2D7F__INCLUDED_)
