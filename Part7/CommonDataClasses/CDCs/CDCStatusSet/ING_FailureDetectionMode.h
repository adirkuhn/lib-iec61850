///////////////////////////////////////////////////////////
//  ING_FailureDetectionMode.h
//  Implementation of the Class ING_FailureDetectionMode
//  Created on:      15-Apr-2014 2:52:23 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_23891FCD_F61A_4500_987C_5926FCD75531__INCLUDED_)
#define EA_23891FCD_F61A_4500_987C_5926FCD75531__INCLUDED_

#include "ING_ENUM.h"

/**
 * <font color="#141414">Possible values for 'setVal', 'minVal', 'maxVal' are
 * restricted by enumeration. Used for: FailMod</font>
 */
class ING_FailureDetectionMode : public ING_ENUM
{

public:
	ING_FailureDetectionMode();
	virtual ~ING_FailureDetectionMode();

};
#endif // !defined(EA_23891FCD_F61A_4500_987C_5926FCD75531__INCLUDED_)
