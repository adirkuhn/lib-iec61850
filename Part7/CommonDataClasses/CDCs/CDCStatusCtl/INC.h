///////////////////////////////////////////////////////////
//  INC.h
//  Implementation of the Class INC
//  Created on:      15-Apr-2014 2:52:22 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_91911A9E_425E_42be_952E_7E1B3E6D4D20__INCLUDED_)
#define EA_91911A9E_425E_42be_952E_7E1B3E6D4D20__INCLUDED_

#include "INT32_CO.h"
#include "INT32_ST_dchg.h"
#include "Quality_ST_qchg.h"
#include "TimeStamp_ST.h"
#include "INT32_SV.h"
#include "INT32_CF.h"
#include "INT32U_CF.h"
#include "ControllableStatusInfo.h"

/**
 * <font color="#141414">(no documentation)</font>
 * <font color="#141414">
 * </font><font color="#141414">7-3, tab. 34</font>
 */
class INC : public ControllableStatusInfo
{

public:
	INC();
	virtual ~INC();
	/**
	 * Control activity. The value in 'ctlVal' contains the desired new value for
	 * 'stVal', and is transmitted in 'SelectWithValue()', 'Operate()' and
	 * 'TimeActivatedOperate()' services. 'ctlVal=0' shall be transmitted to reset
	 * 'stVal'.
	 */
	INT32_CO ctlVal;
	/**
	 * Status value
	 */
	INT32_ST_dchg stVal;
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
	INT32_SV subVal;
	/**
	 * Together with 'maxVal', defines the setting range for 'ctlVal'
	 */
	INT32_CF minVal;
	/**
	 * Together with 'minVal', defines the setting range for 'ctlVal'.
	 */
	INT32_CF maxVal;
	/**
	 * Step between the individual values of 'ctlVal': 'stepSize' = [1..('maxVal'-
	 * 'minVal')].
	 */
	INT32U_CF stepSize;

};
#endif // !defined(EA_91911A9E_425E_42be_952E_7E1B3E6D4D20__INCLUDED_)
