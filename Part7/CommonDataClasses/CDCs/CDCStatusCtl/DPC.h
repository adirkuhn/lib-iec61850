///////////////////////////////////////////////////////////
//  DPC.h
//  Implementation of the Class DPC
//  Created on:      15-Apr-2014 2:52:13 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_640C711A_3765_44cd_96D2_E137EA5BBF36__INCLUDED_)
#define EA_640C711A_3765_44cd_96D2_E137EA5BBF36__INCLUDED_

#include "BOOLEAN_CO.h"
#include "DPStatus_ST_dchg.h"
#include "Quality_ST_qchg.h"
#include "TimeStamp_ST.h"
#include "DPStatus_SV.h"
#include "PulseConfig_CF.h"
#include "ControllableStatusInfo.h"

/**
 * <font color="#141414">(no documentation)</font>
 * <font color="#141414">
 * </font><font color="#141414">7-3, tab. 32</font>
 */
class DPC : public ControllableStatusInfo
{

public:
	DPC();
	virtual ~DPC();
	/**
	 * Control activity. The value in 'ctlVal' contains the desired new value for
	 * 'stVal', and is transmitted in 'SelectWithValue()', 'Operate()' and
	 * 'TimeActivatedOperate()' services.
	 */
	BOOLEAN_CO ctlVal;
	/**
	 * Status value
	 */
	DPStatus_ST_dchg stVal;
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
	DPStatus_SV subVal;
	/**
	 * Used to configure the output pulse generated with the command, if applicable
	 */
	PulseConfig_CF pulseConfig;

};
#endif // !defined(EA_640C711A_3765_44cd_96D2_E137EA5BBF36__INCLUDED_)
