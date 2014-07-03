///////////////////////////////////////////////////////////
//  INS_AutoReclosingStatus.h
//  Implementation of the Class INS_AutoReclosingStatus
//  Created on:      15-Apr-2014 2:52:25 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_0E409499_F98C_40e3_A8DA_98A1A02C82E1__INCLUDED_)
#define EA_0E409499_F98C_40e3_A8DA_98A1A02C82E1__INCLUDED_

#include "INS_ENUM.h"

/**
 * <font color="#141414">Possible values for 'stVal', 'subVal' are restricted by
 * enumeration. Used for: AutoRecSt</font>
 */
class INS_AutoReclosingStatus : public INS_ENUM
{

public:
	INS_AutoReclosingStatus();
	virtual ~INS_AutoReclosingStatus();

};
#endif // !defined(EA_0E409499_F98C_40e3_A8DA_98A1A02C82E1__INCLUDED_)
