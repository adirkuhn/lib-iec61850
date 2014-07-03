///////////////////////////////////////////////////////////
//  INC_PumpControl.h
//  Implementation of the Class INC_PumpControl
//  Created on:      15-Apr-2014 2:52:22 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_82557056_2C10_4b0c_B697_042267CF7772__INCLUDED_)
#define EA_82557056_2C10_4b0c_B697_042267CF7772__INCLUDED_

#include "INC_ENUM.h"

/**
 * <font color="#141414">Possible values for 'stVal', 'ctlVal', 'subVal', 'minVal',
 * 'maxVal' are restricted by enumeration. Used for: PmpCtlGen, PmpCtl.</font>
 */
class INC_PumpControl : public INC_ENUM
{

public:
	INC_PumpControl();
	virtual ~INC_PumpControl();

};
#endif // !defined(EA_82557056_2C10_4b0c_B697_042267CF7772__INCLUDED_)
