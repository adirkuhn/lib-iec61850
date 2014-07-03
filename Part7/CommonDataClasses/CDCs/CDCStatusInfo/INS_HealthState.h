///////////////////////////////////////////////////////////
//  INS_HealthState.h
//  Implementation of the Class INS_HealthState
//  Created on:      15-Apr-2014 2:52:26 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_32F93F1A_ACAC_4057_A915_5515D42E9510__INCLUDED_)
#define EA_32F93F1A_ACAC_4057_A915_5515D42E9510__INCLUDED_

#include "INS_ENUM.h"

/**
 * <font color="#141414">Possible values for 'stVal', 'subVal' are restricted by
 * enumeration. Used for: EEHealth, Health, PhyHealth</font>
 */
class INS_HealthState : public INS_ENUM
{

public:
	INS_HealthState();
	virtual ~INS_HealthState();

};
#endif // !defined(EA_32F93F1A_ACAC_4057_A915_5515D42E9510__INCLUDED_)
