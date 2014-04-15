///////////////////////////////////////////////////////////
//  APC.h
//  Implementation of the Class APC
//  Created on:      15-Apr-2014 2:52:05 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_FF92A7FF_DF7B_4809_BF14_126C15195598__INCLUDED_)
#define EA_FF92A7FF_DF7B_4809_BF14_126C15195598__INCLUDED_

#include "AnalogueValue_MX.h"
#include "AnalogueValue_MC.h"
#include "Originator_MX.h"
#include "Originator_MC.h"
#include "TimeStamp_MC.h"
#include "Quality_MX_qchg.h"
#include "TimeStamp_MX.h"
#include "CtlModels_CF.h"
#include "Unit_CF.h"
#include "ScaledValueConfig_CF.h"
#include "AnalogueValue_CF.h"
#include "VISIBLE_STRING255_DC.h"
#include "UNICODE_STRING255_DC.h"
#include "ControllableAnalogueInfo.h"

/**
 * <font color="#141414">(no documentation)</font>
 * <font color="#141414">
 * </font><font color="#141414">7-3, tab. 37</font>
 */
class APC : public ControllableAnalogueInfo
{

public:
	APC();
	virtual ~APC();
	/**
	 * Value of the set-point.
	 */
	AnalogueValue_MX setMag;
	/**
	 * Value of the set-point.
	 */
	AnalogueValue_MC _setMag;
	/**
	 * Information related to the originator of the last change of the controllable
	 * data value.
	 */
	Originator_MX origin;
	/**
	 * Information related to the originator of the last change of the controllable
	 * data value.
	 */
	Originator_MC _origin;
	/**
	 * Absolute time at which the command shall be executed ('TimeActivatedOperate()'
	 * service).
	 */
	TimeStamp_MC operTm;
	/**
	 * Quality of the data value: 'setMag'.
	 */
	Quality_MX_qchg q;
	/**
	 * Timestamp of the last change in one of the attributes representing the data
	 * value ('setMag') or the data quality ('q'), i.e., those which have 'dchg' or
	 * 'qchg'.
	 */
	TimeStamp_MX t;
	/**
	 * Control model of IEC 61850-7-2 that reflects the behaviour of the data. NOTE:
	 * If a data instance of a control class has no status information associated,
	 * then 'stVal' does not exist. In that case, the value range for 'ctlModel' is
	 * restricted to 'directWithNormalSecurity' and 'sboWithNormalSecurity'
	 */
	CtlModels_CF ctlModel;
	/**
	 * Units of the data values: 'setMag', 'minVal', 'maxVal', 'stepSize'.
	 */
	Unit_CF units;
	/**
	 * Scaled value configuration. Shall be used to configure the scaled value
	 * representation of 'setMag'.
	 */
	ScaledValueConfig_CF sVC;
	/**
	 * Together with 'maxVal', defines the setting range for 'setMag'
	 */
	AnalogueValue_CF minVal;
	/**
	 * Together with 'minVal', defines the setting range for 'setMag'.
	 */
	AnalogueValue_CF maxVal;
	/**
	 * Step between the individual values of 'setMag': 'stepSize' = [1..('maxVal'-
	 * 'minVal')].
	 */
	AnalogueValue_CF stepSize;
	/**
	 * Textual description of the data
	 */
	VISIBLE_STRING255_DC d;
	/**
	 * Textual description of the data
	 */
	UNICODE_STRING255_DC dU;

};
#endif // !defined(EA_FF92A7FF_DF7B_4809_BF14_126C15195598__INCLUDED_)
