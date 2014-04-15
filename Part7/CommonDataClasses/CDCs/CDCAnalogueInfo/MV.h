///////////////////////////////////////////////////////////
//  MV.h
//  Implementation of the Class MV
//  Created on:      15-Apr-2014 2:52:36 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_4EE851DE_0058_4983_8C99_FFE62993CF75__INCLUDED_)
#define EA_4EE851DE_0058_4983_8C99_FFE62993CF75__INCLUDED_

#include "AnalogueValue_MX.h"
#include "AnalogueValue_MX_dchg.h"
#include "Range_MX_dchg.h"
#include "Quality_MX_qchg.h"
#include "TimeStamp_MX.h"
#include "BOOLEAN_SV.h"
#include "AnalogueValue_SV.h"
#include "Quality_SV.h"
#include "VISIBLE_STRING64_SV.h"
#include "Unit_CF.h"
#include "INT32U_CF.h"
#include "ScaledValueConfig_CF.h"
#include "RangeConfig_CF.h"
#include "PrimitiveMeasurandInfo.h"

/**
 * <font color="#141414">NOTE: Can also be applied to calculated values.</font>
 * <font color="#141414">
 * </font><font color="#141414">7-3, tab. 21</font>
 */
class MV : public PrimitiveMeasurandInfo
{

public:
	MV();
	virtual ~MV();
	/**
	 * Magnitude of the instantaneous value.
	 */
	AnalogueValue_MX instMag;
	/**
	 * Deadbanded value, based on a dead band calculation (discretisation) from the
	 * instantaneous value 'instMag'. 'mag' shall be updated to the current value of
	 * 'instMag' when the latter has changed for the discretisation step 'db'. NOTE 1:
	 * Such a discretisation is an example. There may be other algorithms providing a
	 * comparable result; for example as an alternate solution, the dead band
	 * calculation may use the integral of the change of 'instMag'. The algorithm used
	 * is a local issue. NOTE 2: 'mag' is typically used to create reports for
	 * analogue values. Such a report is sent "by exception", and is not comparable to
	 * the transfer of sampled measured values as supported by the CDC SAV
	 */
	AnalogueValue_MX_dchg mag;
	/**
	 * Range in which the current value of 'instMag' is. 'range' may be used to report
	 * an event if its value changes (due to the change in the current value of
	 * 'instMag'). See statechart diagram 'Range.valueStateMachine'. NOTE: The use of
	 * algorithms to filter events based on transition from one range to another is a
	 * local issue
	 */
	Range_MX_dchg range;
	/**
	 * Quality of the data values: 'instMag', 'mag', 'range'
	 */
	Quality_MX_qchg q;
	/**
	 * Timestamp of the last change in one of the attributes representing the data
	 * value ('mag', 'range') or the data quality ('q'), i.e., those which have 'dchg'
	 * or 'qchg'
	 */
	TimeStamp_MX t;
	/**
	 * Used to enable substitution. If 'subEna=TRUE', the data values ('instMag', 'q')
	 * shall always be set to the same value as the attributes used to store the
	 * substitution data values ('subMag', 'subQ'); otherwise, the data values shall
	 * be based on the process values. It is the responsibility of the client
	 * application, in particular in the case of multiple attributes to be substituted,
	 * to set all relevant substitution values before enabling substitution
	 */
	BOOLEAN_SV subEna;
	/**
	 * Value used to substitute 'instMag'.
	 */
	AnalogueValue_SV subMag;
	/**
	 * Value used to substitute 'q'.
	 */
	Quality_SV subQ;
	/**
	 * Address of the device that made the substitution. The value of null shall be
	 * used if 'subEna=FALSE' or if the device is not known
	 */
	VISIBLE_STRING64_SV subID;
	/**
	 * Units of the data values: 'instMag', 'mag', 'subMag'.
	 */
	Unit_CF units;
	/**
	 * Deadband is a configuration parameter used to calculate 'mag'. The value of
	 * 'db' shall represent the percentage of difference ('rangeC.max' - 'rangeC.min')
	 * in units of 0.001%. Therefore, 'db'=[0, 100'000], corresponding to [0%, 100%],
	 * respectively. If an integral calculation is used to determine 'mag', the value
	 * of 'db' shall be represented as 0,001% s.
	 */
	INT32U_CF db;
	/**
	 * Configuration parameter used to calculate the range around zero, where 'mag'
	 * will be forced to zero. The value of 'zeroDb' shall represent the percentage of
	 * difference ('rangeC.max' - 'rangeC.min') in units of 0,001%. Therefore,
	 * 'zeroDb'=[0, 100'000], corresponding to [0%, 100%], respectively.
	 */
	INT32U_CF zeroDb;
	/**
	 * Scaled value configuration. Shall be used to configure the scaled value
	 * representation of 'instMag', 'mag', 'subMag'
	 */
	ScaledValueConfig_CF sVC;
	/**
	 * Configuration parameters as used in the context with 'range'. See statechart
	 * diagram 'Range.valueStateMachine'.
	 */
	RangeConfig_CF rangeC;
	/**
	 * Sampling rate that has been used to determine 'instMag'. 'smpRate' shall
	 * represent the number of samples per nominal period. In the case of a d.c.
	 * system, 'smpRate' shall represent the number of samples per s.
	 */
	INT32U_CF smpRate;

};
#endif // !defined(EA_4EE851DE_0058_4983_8C99_FFE62993CF75__INCLUDED_)
