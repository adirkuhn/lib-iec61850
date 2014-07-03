///////////////////////////////////////////////////////////
//  INC_FanControl.h
//  Implementation of the Class INC_FanControl
//  Created on:      15-Apr-2014 2:52:22 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_C4DA7FC0_2014_4be0_AF14_549DC5229EDB__INCLUDED_)
#define EA_C4DA7FC0_2014_4be0_AF14_549DC5229EDB__INCLUDED_

#include "INC_ENUM.h"

/**
 * <font color="#141414">Possible values for 'stVal', 'ctlVal', 'subVal', 'minVal',
 * 'maxVal' are restricted by enumeration. Used for: FanCtlGen, FanCtl.</font>
 */
class INC_FanControl : public INC_ENUM
{

public:
	INC_FanControl();
	virtual ~INC_FanControl();

};
#endif // !defined(EA_C4DA7FC0_2014_4be0_AF14_549DC5229EDB__INCLUDED_)
