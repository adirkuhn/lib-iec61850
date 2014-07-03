///////////////////////////////////////////////////////////
//  BCR.h
//  Implementation of the Class BCR
//  Created on:      15-Apr-2014 2:52:06 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_46480FA6_DE57_4dfe_B4BC_CE269DA61ED4__INCLUDED_)
#define EA_46480FA6_DE57_4dfe_B4BC_CE269DA61ED4__INCLUDED_

#include "INT128_ST_dchg.h"
#include "INT128_ST_dupd.h"
#include "TimeStamp_ST_dupd.h"
#include "Quality_ST_qchg.h"
#include "Unit_CF.h"
#include "FLOAT32_CF.h"
#include "BOOLEAN_CF.h"
#include "TimeStamp_CF.h"
#include "INT32_CF.h"
#include "StatusInfo.h"

/**
 * (no documentation)
 * part 7-3, tab. 19
 */
class BCR : public StatusInfo
{

public:
	BCR();
	virtual ~BCR();
	/**
	 * Binary counter status represented as an integer value.
	 */
	INT128_ST_dchg actVal;
	/**
	 * Frozen binary counter status represented as an integer value.
	 */
	INT128_ST_dupd frVal;
	/**
	 * Time of the last counter freeze.
	 */
	TimeStamp_ST_dupd frTm;
	/**
	 * Quality of the data values: 'actVal', 'frVal'.
	 */
	Quality_ST_qchg q;
	/**
	 * Units of the data values: 'actVal', 'frVal'.
	 */
	Unit_CF units;
	/**
	 * Magnitude of the counted value per count. Used together with 'actVal' and
	 * 'frVal' to calculate the value: [value = 'actVal * pulsQty'], [value = 'frVal *
	 * pulsQty'].
	 */
	FLOAT32_CF pulsQty;
	/**
	 * Controls the freeze process. If 'frEna=TRUE', freezing shall occur as specified
	 * in 'strTm', 'frPd' and 'frRs'; otherwise, no freezing shall occur.
	 */
	BOOLEAN_CF frEna;
	/**
	 * Starting time of the freeze process. If the current time is later than 'strTm',
	 * the first freeze shall occur at the expiration of the next freeze interval
	 * 'frPd', computed from 'strTm' setting.
	 */
	TimeStamp_CF strTm;
	/**
	 * Time interval between freeze operations, in ms. If 'frPd=0', only a single
	 * freeze is performed at the time indicated in 'strTm'.
	 */
	INT32_CF frPd;
	/**
	 * If 'frRs=TRUE', the counter is to be automatically reset to zero after each
	 * freezing process.
	 */
	BOOLEAN_CF frRs;

};
#endif // !defined(EA_46480FA6_DE57_4dfe_B4BC_CE269DA61ED4__INCLUDED_)
