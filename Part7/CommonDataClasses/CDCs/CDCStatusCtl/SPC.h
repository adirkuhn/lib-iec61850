///////////////////////////////////////////////////////////
//  SPC.h
//  Implementation of the Class SPC
//  Created on:      15-Apr-2014 2:52:46 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_B428858D_0459_4e07_8F4E_B8F47AE19ADB__INCLUDED_)
#define EA_B428858D_0459_4e07_8F4E_B8F47AE19ADB__INCLUDED_

#include "BOOLEAN_CO.h"
#include "BOOLEAN_ST_dchg.h"
#include "Quality_ST_qchg.h"
#include "TimeStamp_ST.h"
#include "BOOLEAN_SV.h"
#include "PulseConfig_CF.h"
#include "ControllableStatusInfo.h"

class SPC : public ControllableStatusInfo
{

public:
	SPC();
	virtual ~SPC();
	/**
	 * Control activity. The value in 'ctlVal' contains the desired new value for
	 * 'stVal', and is transmitted in 'SelectWithValue()', 'Operate()' and
	 * 'TimeActivatedOperate()' services.
	 */
	BOOLEAN_CO ctlVal;
	/**
	 * Status value
	 */
	BOOLEAN_ST_dchg stVal;
	/**
	 * Quality of the data value: 'stVal'.
	 */
	Quality_ST_qchg q;
	/**
	 * Timestamp of the last change in one of the attributes representing the data
	 * value ('stVal') or the data quality ('q'), i.e., those which have 'dchg' or
	 * 'qchg'.
	 */
	TimeStamp_ST t;
	/**
	 * Value used to substitute 'stVal'.
	 */
	BOOLEAN_SV subVal;
	/**
	 * Used to configure the output pulse generated with the command, if applicable
	 */
	PulseConfig_CF pulseConfig;

};
#endif // !defined(EA_B428858D_0459_4e07_8F4E_B8F47AE19ADB__INCLUDED_)
