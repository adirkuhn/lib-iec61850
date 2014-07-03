///////////////////////////////////////////////////////////
//  SPS_transient.h
//  Implementation of the Class SPS_transient
//  Created on:      15-Apr-2014 2:52:47 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_2D072551_1EBD_4d6a_B061_1418D812548B__INCLUDED_)
#define EA_2D072551_1EBD_4d6a_B061_1418D812548B__INCLUDED_

#include "SPS.h"

/**
 * An SPS whose 'stVal' is transient.
 * Not explicitly defined in the standard.
 * 
 * Transient Data - the status of data with this designation is momentary and must
 * be logged or reported to provide evidence of their momentary state. Some T may
 * be only valid on a modelling level. The TRANSIENT property of DATA only applies
 * to BOOLEAN process data attributes (FC=ST) of that DATA. Transient DATA is
 * identical to normal DATA, except that for the process state change from TRUE to
 * FALSE no event may be generated for reporting and for logging.
 */
class SPS_transient : public SPS
{

public:
	SPS_transient();
	virtual ~SPS_transient();

};
#endif // !defined(EA_2D072551_1EBD_4d6a_B061_1418D812548B__INCLUDED_)
