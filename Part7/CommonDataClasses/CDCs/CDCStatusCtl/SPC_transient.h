///////////////////////////////////////////////////////////
//  SPC_transient.h
//  Implementation of the Class SPC_transient
//  Created on:      15-Apr-2014 2:52:47 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_79152E95_E9D3_4bcb_87F5_22B52B40D196__INCLUDED_)
#define EA_79152E95_E9D3_4bcb_87F5_22B52B40D196__INCLUDED_

#include "SPC.h"

/**
 * An SPC whose 'stVal' is transient.
 * Not explicitly defined in the standard.
 * 
 * Transient Data - the status of data with this designation is momentary and must
 * be logged or reported to provide evidence of their momentary state. Some T may
 * be only valid on a modelling level. The TRANSIENT property of DATA only applies
 * to BOOLEAN process data attributes (FC=ST) of that DATA. Transient DATA is
 * identical to normal DATA, except that for the process state change from TRUE to
 * FALSE no event may be generated for reporting and for logging.
 */
class SPC_transient : public SPC
{

public:
	SPC_transient();
	virtual ~SPC_transient();

};
#endif // !defined(EA_79152E95_E9D3_4bcb_87F5_22B52B40D196__INCLUDED_)
