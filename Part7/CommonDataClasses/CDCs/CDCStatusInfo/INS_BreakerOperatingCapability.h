///////////////////////////////////////////////////////////
//  INS_BreakerOperatingCapability.h
//  Implementation of the Class INS_BreakerOperatingCapability
//  Created on:      15-Apr-2014 2:52:25 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_0F199FE8_16BB_4b25_ACB4_C47F35AF9C46__INCLUDED_)
#define EA_0F199FE8_16BB_4b25_ACB4_C47F35AF9C46__INCLUDED_

#include "INS_ENUM.h"

/**
 * <font color="#141414">Possible values for 'stVal', 'subVal' are restricted by
 * enumeration. Used for: CBOpCap, XCBR.MaxOpCap.</font>
 */
class INS_BreakerOperatingCapability : public INS_ENUM
{

public:
	INS_BreakerOperatingCapability();
	virtual ~INS_BreakerOperatingCapability();

};
#endif // !defined(EA_0F199FE8_16BB_4b25_ACB4_C47F35AF9C46__INCLUDED_)
