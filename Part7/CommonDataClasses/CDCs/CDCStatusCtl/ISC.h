///////////////////////////////////////////////////////////
//  ISC.h
//  Implementation of the Class ISC
//  Created on:      15-Apr-2014 2:52:31 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_5FD54F27_AA8C_46c6_AF96_CD692A55F86F__INCLUDED_)
#define EA_5FD54F27_AA8C_46c6_AF96_CD692A55F86F__INCLUDED_

#include "INT8_CO.h"
#include "ValWithTrans_ST_dchg.h"
#include "Quality_ST_qchg.h"
#include "TimeStamp_ST.h"
#include "ValWithTrans_SV.h"
#include "INT8_CF.h"
#include "INT8U_CF.h"
#include "ControllableStatusInfo.h"

/**
 * <font color="#141414">(no documentation)</font>
 * <font color="#141414">
 * </font><font color="#141414">7-3, tab. 34</font>
 */
class ISC : public ControllableStatusInfo
{

public:
	ISC();
	virtual ~ISC();
	/**
	 * Control activity. The value in 'ctlVal' contains the desired change in
	 * 'valWithTrans.posVal', and is transmitted in 'SelectWithValue()', 'Operate()'
	 * and 'TimeActivatedOperate()' services
	 */
	INT8_CO ctlVal;
	/**
	 * Value with transient indication
	 */
	ValWithTrans_ST_dchg valWTr;
	/**
	 * Quality of the data value: 'valWTr'.
	 */
	Quality_ST_qchg q;
	/**
	 * Timestamp of the last change in one of the attributes representing the data
	 * value ('valWTr') or the data quality ('q'), i.e., those which have 'dchg' or
	 * 'qchg'.
	 */
	TimeStamp_ST t;
	/**
	 * Value used to substitute 'valWTr'.
	 */
	ValWithTrans_SV subVal;
	/**
	 * Together with 'maxVal', defines the setting range for 'ctlVal'
	 */
	INT8_CF minVal;
	/**
	 * Together with 'minVal', defines the setting range for 'ctlVal'.
	 */
	INT8_CF maxVal;
	/**
	 * Step between the individual values of 'ctlVal': 'stepSize' = [1..('maxVal'-
	 * 'minVal')].
	 */
	INT8U_CF stepSize;

};
#endif // !defined(EA_5FD54F27_AA8C_46c6_AF96_CD692A55F86F__INCLUDED_)
