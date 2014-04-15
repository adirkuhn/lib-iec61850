///////////////////////////////////////////////////////////
//  ControllableStatusInfo.h
//  Implementation of the Class ControllableStatusInfo
//  Created on:      15-Apr-2014 2:52:10 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_A7F870A6_008F_4e46_8B90_5669776A1E40__INCLUDED_)
#define EA_A7F870A6_008F_4e46_8B90_5669776A1E40__INCLUDED_

#include "TimeStamp_CO.h"
#include "Originator_ST.h"
#include "Originator_CO.h"
#include "INT8U_ST.h"
#include "INT8U_CO.h"
#include "BOOLEAN_ST_dchg.h"
#include "BOOLEAN_SV.h"
#include "Quality_SV.h"
#include "VISIBLE_STRING64_SV.h"
#include "CtlModels_CF.h"
#include "INT32U_CF.h"
#include "SboClasses_CF.h"
#include "VISIBLE_STRING255_DC.h"
#include "UNICODE_STRING255_DC.h"
#include "C_PrimitiveCDC.h"

/**
 * <font color="#141414">Abstract supertype for all controllable status
 * information CDCs.</font>
 */
class ControllableStatusInfo : public C_PrimitiveCDC
{

public:
	ControllableStatusInfo();
	virtual ~ControllableStatusInfo();
	/**
	 * Absolute time at which the command shall be executed ('TimeActivatedOperate()'
	 * service).
	 */
	TimeStamp_CO operTm;
	/**
	 * Information related to the originator of the last change of the controllable
	 * data value.
	 */
	Originator_ST origin;
	/**
	 * Information related to the originator of the last change of the controllable
	 * data value
	 */
	Originator_CO _origin;
	/**
	 * Control sequence number of the control service when the change of the status
	 * was caused by a control. All service primitives belonging to one control
	 * sequence shall be identified by the same 'ctlNum'. The use of 'ctlNum' is an
	 * issue of the client. The server shall only include 'ctlNum' in the responses to
	 * the control model and in the reports about a status change caused by a command.
	 */
	INT8U_ST ctlNum;
	/**
	 * Control sequence number of the control service when the change of the status
	 * was caused by a control. All service primitives belonging to one control
	 * sequence shall be identified by the same 'ctlNum'. The use of 'ctlNum' is an
	 * issue of the client. The server shall only include 'ctlNum' in the responses to
	 * the control model and in the reports about a status change caused by a command.
	 */
	INT8U_CO _ctlNum;
	/**
	 * True means that the controllable data is in the status "selected".
	 */
	BOOLEAN_ST_dchg stSeld;
	/**
	 * Used to enable substitution. If 'subEna=TRUE', the data values ('[SPC | DPC |
	 * INC].stVal' and '[BSC | ISC].valWTr', 'q') shall always be set to the same
	 * value as the attributes used to store the substitution data values ('subVal',
	 * 'subQ'); otherwise, the data values shall be based on the process values. It is
	 * the responsibility of the client application, in particular in the case of
	 * multiple attributes to be substituted, to set all relevant substitution values
	 * before enabling substitution.
	 */
	BOOLEAN_SV subEna;
	/**
	 * Value used to substitute 'q'.
	 */
	Quality_SV subQ;
	/**
	 * Address of the device that made the substitution. The value of null shall be
	 * used if 'subEna=FALSE' or if the device is not known.
	 */
	VISIBLE_STRING64_SV subID;
	/**
	 * Control model of IEC 61850-7-2 that reflects the behaviour of the data. NOTE:
	 * If a data instance of a control class has no status information associated,
	 * then 'stVal' does not exist. In that case, the value range for 'ctlModel' is
	 * restricted to 'directWithNormalSecurity' and 'sboWithNormalSecurity'.
	 */
	CtlModels_CF ctlModel;
	/**
	 * Time in ms, on whose expiration the successfully selected control object
	 * ('Select()' service) shall be unselected again
	 */
	INT32U_CF sboTimeout;
	/**
	 * Specifies the SBO-class according to the control model of IEC 61850-7-2 that
	 * corresponds to the behaviour of the data
	 */
	SboClasses_CF sboClass;
	/**
	 * Textual description of the data.
	 */
	VISIBLE_STRING255_DC d;
	/**
	 * Textual description of the data using unicode characters.
	 */
	UNICODE_STRING255_DC dU;

};
#endif // !defined(EA_A7F870A6_008F_4e46_8B90_5669776A1E40__INCLUDED_)
