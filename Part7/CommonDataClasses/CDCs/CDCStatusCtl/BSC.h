///////////////////////////////////////////////////////////
//  BSC.h
//  Implementation of the Class BSC
//  Created on:      15-Apr-2014 2:52:07 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_1D91E51C_137D_4872_9C62_9C6ECB39CB34__INCLUDED_)
#define EA_1D91E51C_137D_4872_9C62_9C6ECB39CB34__INCLUDED_

#include "BSControl_CO.h"
#include "ValWithTrans_ST_dchg.h"
#include "Quality_ST_qchg.h"
#include "TimeStamp_ST.h"
#include "ValWithTrans_SV.h"
#include "BOOLEAN_CF.h"
#include "INT8_CF.h"
#include "INT8U_CF.h"
#include "ControllableStatusInfo.h"

/**
 * <font color="#141414">(no documentation)</font>
 * <font color="#141414">
 * </font><font color="#141414">7-3, tab. 34</font>
 */
class BSC : public ControllableStatusInfo
{

public:
	BSC();
	virtual ~BSC();
	/**
	 * Control activity. The value in 'ctlVal' contains the desired change in
	 * 'valWithTrans.posVal', and is transmitted in 'SelectWithValue()', 'Operate()'
	 * and 'TimeActivatedOperate()' services
	 */
	BSControl_CO ctlVal;
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
	 * Configures the control output. If 'persistent=FALSE', the 'Operate()' service
	 * results in the change of exactly one step higher or lower, as defined with
	 * 'ctlVal' (i.e., 'ctlVal=higher' or 'ctlVal=lower'). If 'persistent=TRUE', the
	 * 'Operate()' service initiates the persistent activation of the output; it shall
	 * be deactivated by an 'OperateWithValue()" service with 'ctlVal=stop', or by a
	 * local timeout. A client may repeat sending the 'Operate()' service in order to
	 * retrigger the output
	 */
	BOOLEAN_CF persistent;
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
#endif // !defined(EA_1D91E51C_137D_4872_9C62_9C6ECB39CB34__INCLUDED_)
