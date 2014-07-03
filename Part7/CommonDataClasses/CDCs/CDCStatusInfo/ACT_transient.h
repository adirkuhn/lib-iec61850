///////////////////////////////////////////////////////////
//  ACT_transient.h
//  Implementation of the Class ACT_transient
//  Created on:      15-Apr-2014 2:52:02 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_CA8AD290_1FA2_42a0_8A2B_CA60C58D8234__INCLUDED_)
#define EA_CA8AD290_1FA2_42a0_8A2B_CA60C58D8234__INCLUDED_

#include "ACT.h"

/**
 * An ACT whose 'general', 'phsA', 'phsB', 'phsC', and 'neut' are transient.
 * Not explicitly defined in the standard.
 * 
 * Transient Data - the status of data with this designation is momentary and must
 * be logged or reported to provide evidence of their momentary state. Some T may
 * be only valid on a modelling level. The TRANSIENT property of DATA only applies
 * to BOOLEAN process data attributes (FC=ST) of that DATA. Transient DATA is
 * identical to normal DATA, except that for the process state change from TRUE to
 * FALSE no event may be generated for reporting and for logging.
 */
class ACT_transient : public ACT
{

public:
	ACT_transient();
	virtual ~ACT_transient();

};
#endif // !defined(EA_CA8AD290_1FA2_42a0_8A2B_CA60C58D8234__INCLUDED_)
