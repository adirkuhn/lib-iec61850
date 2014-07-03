///////////////////////////////////////////////////////////
//  INS_FaultLoop.h
//  Implementation of the Class INS_FaultLoop
//  Created on:      15-Apr-2014 2:52:26 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_8F44F574_F09A_48c8_9F65_4BC86D8DF1D9__INCLUDED_)
#define EA_8F44F574_F09A_48c8_9F65_4BC86D8DF1D9__INCLUDED_

#include "INS_ENUM.h"

/**
 * <font color="#141414">Possible values for 'stVal', 'subVal' are restricted by
 * enumeration. Used for: FltLoop.</font>
 */
class INS_FaultLoop : public INS_ENUM
{

public:
	INS_FaultLoop();
	virtual ~INS_FaultLoop();

};
#endif // !defined(EA_8F44F574_F09A_48c8_9F65_4BC86D8DF1D9__INCLUDED_)
