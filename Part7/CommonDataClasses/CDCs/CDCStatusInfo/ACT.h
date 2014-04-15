///////////////////////////////////////////////////////////
//  ACT.h
//  Implementation of the Class ACT
//  Created on:      15-Apr-2014 2:52:02 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_6179DE75_E296_4e8a_A4B4_BA69EEB33454__INCLUDED_)
#define EA_6179DE75_E296_4e8a_A4B4_BA69EEB33454__INCLUDED_

#include "BOOLEAN_ST_dchg.h"
#include "Quality_ST_qchg.h"
#include "TimeStamp_CF.h"
#include "StatusInfo.h"

/**
 * (no documentation)
 * part 7-3, tab. 16
 */
class ACT : public StatusInfo
{

public:
	ACT();
	virtual ~ACT();
	/**
	 * Logical "or" of the phase values, e.g. trip or start. The attribute shall also
	 * be set 'general=TRUE' if not all phases have a fault condition.
	 */
	BOOLEAN_ST_dchg general;
	/**
	 * Trip or start event of phase A
	 */
	BOOLEAN_ST_dchg phsA;
	/**
	 * Trip or start event of phase B
	 */
	BOOLEAN_ST_dchg phsB;
	/**
	 * Trip or start event of phase C
	 */
	BOOLEAN_ST_dchg phsC;
	/**
	 * Start event with earth current
	 */
	BOOLEAN_ST_dchg neut;
	/**
	 * Quality of the data values: 'general', 'phsA', 'phsB', 'phsC', 'neut'
	 */
	Quality_ST_qchg q;
	/**
	 * Operation time, used for point on wave switching
	 */
	TimeStamp_CF operTm;

};
#endif // !defined(EA_6179DE75_E296_4e8a_A4B4_BA69EEB33454__INCLUDED_)
