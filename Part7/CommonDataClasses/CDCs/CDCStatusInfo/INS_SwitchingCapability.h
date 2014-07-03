///////////////////////////////////////////////////////////
//  INS_SwitchingCapability.h
//  Implementation of the Class INS_SwitchingCapability
//  Created on:      15-Apr-2014 2:52:26 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_7F7423F3_170D_48b4_B7B0_64F7F6F53C3B__INCLUDED_)
#define EA_7F7423F3_170D_48b4_B7B0_64F7F6F53C3B__INCLUDED_

#include "INS_ENUM.h"

/**
 * <font color="#141414">Possible values for 'stVal', 'subVal' are restricted by
 * enumeration. Used for: SwOpCap, POWCap, ShOpCap, [XSWI | YPSH].MaxOpCap.</font>
 */
class INS_SwitchingCapability : public INS_ENUM
{

public:
	INS_SwitchingCapability();
	virtual ~INS_SwitchingCapability();

};
#endif // !defined(EA_7F7423F3_170D_48b4_B7B0_64F7F6F53C3B__INCLUDED_)
