///////////////////////////////////////////////////////////
//  CMV.h
//  Implementation of the Class CMV
//  Created on:      15-Apr-2014 2:52:09 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_71A4E81C_17B3_4b4c_9246_C1F679D9B2E6__INCLUDED_)
#define EA_71A4E81C_17B3_4b4c_9246_C1F679D9B2E6__INCLUDED_

#include "Vector_MX.h"
#include "Vector_MX_dchg.h"
#include "Range_MX_dchg.h"
#include "Quality_MX_qchg.h"
#include "TimeStamp_MX.h"
#include "BOOLEAN_SV.h"
#include "Vector_SV.h"
#include "Quality_SV.h"
#include "VISIBLE_STRING64_SV.h"
#include "Unit_CF.h"
#include "INT32U_CF.h"
#include "RangeConfig_CF.h"
#include "ScaledValueConfig_CF.h"
#include "CMVAngleReference_CF.h"
#include "PrimitiveMeasurandInfo.h"

/**
 * <font color="#141414">NOTE: Can also be applied to calculated values.</font>
 * <font color="#141414">
 * </font><font color="#141414">7-3, tab. 22</font>
 */
class CMV : public PrimitiveMeasurandInfo
{

public:
	CMV();
	virtual ~CMV();
	/**
	 * Magnitude and angle of instantaneous value 'cVal'.
	 */
	Vector_MX instCVal;
	/**
	 * Deadbanded complex value, based on a dead band calculation (discretisation)
	 * from the instantaneous value 'instCVal'. 'cVal' shall be updated to the current
	 * value of 'instCVal' when the latter has changed for the discretisation step
	 * 'db'. The deadband calculation is done both on magnitude 'instCVal.mag' and
	 * angle 'instCVal.ang', independently. NOTE 1: Such a discretisation is an
	 * example. There may be other algorithms providing a comparable result; for
	 * example as an alternate solution, the dead band calculation may use the
	 * integral of the change of 'instCVal'. The algorithm used is a local issue. NOTE
	 * 2: 'cVal' is typically used to create reports for analogue values. Such a
	 * report is sent "by exception", and is not comparable to the transfer of sampled
	 * measured values as supported by the CDC SAV.
	 */
	Vector_MX_dchg cVal;
	/**
	 * Range in which the current value of 'instCVal.mag' is. 'range' may be used to
	 * report an event if its value changes (due to the change in the current value of
	 * 'instCVal.mag'). See statechart diagram 'Range.valueStateMachine'. NOTE: The
	 * use of algorithms to filter events based on transition from one range to
	 * another is a local issue.
	 */
	Range_MX_dchg range;
	/**
	 * Quality of the data values: 'cVal.mag', 'instCVal.mag', 'range'.
	 */
	Quality_MX_qchg q;
	/**
	 * Timestamp of the last change in one of the attributes representing the data
	 * value ('cVal.mag', 'range') or the data quality ('q'), i.e., those which have
	 * 'dchg' or 'qchg'.
	 */
	TimeStamp_MX t;
	/**
	 * Used to enable substitution. If 'subEna=TRUE', the data values ('instCVal.mag',
	 * 'q') shall always be set to the same value as the attributes used to store the
	 * substitution data values ('subCVal', 'subQ'); otherwise, the data values shall
	 * be based on the process values. It is the responsibility of the client
	 * application, in particular in the case of multiple attributes to be substituted,
	 * to set all relevant substitution values before enabling substitution.
	 */
	BOOLEAN_SV subEna;
	/**
	 * Value used to substitute 'instCVal'.
	 */
	Vector_SV subCVal;
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
	 * Units of the data values: 'instCVal.mag', 'cVal.mag', 'subCVal.mag'.
	 */
	Unit_CF units;
	/**
	 * Deadband is a configuration parameter used to calculate 'cVal.mag'. The value
	 * of 'db' shall represent the percentage of difference ('rangeC.max' - 'rangeC.
	 * min') in units of 0.001%. Therefore, 'db'=[0, 100'000], corresponding to [0%,
	 * 100%], respectively. If an integral calculation is used to determine 'cVal.mag',
	 * the value of 'db' shall be represented as 0,001% s
	 */
	INT32U_CF db;
	/**
	 * Configuration parameter used to calculate the range around zero, where 'cVal.
	 * mag' will be forced to zero. The value of 'zeroDb' shall represent the
	 * percentage of difference ('rangeC.max' - 'rangeC.min') in units of 0,001%.
	 * Therefore, 'zeroDb'=[0, 100'000], corresponding to [0%, 100%], respectively
	 */
	INT32U_CF zeroDb;
	/**
	 * Configuration parameters as used in the context with 'range'. See statechart
	 * diagram 'Range.valueStateMachine'
	 */
	RangeConfig_CF rangeC;
	/**
	 * Scaled value configuration for magnitude. Shall be used to configure the scaled
	 * value representation of 'instCVal.mag', 'cVal.mag', 'subCVal.mag'.
	 */
	ScaledValueConfig_CF magSVC;
	/**
	 * Scaled value configuration for angles. Shall be used to configure the scaled
	 * value representation of the angles 'cVal.ang', 'instCVal.ang', 'subCVal.ang'
	 */
	ScaledValueConfig_CF angSVC;
	/**
	 * Angle reference, indicating the quantity that is used as reference for the
	 * phase angles 'cVal.ang', instCVal.ang', subCVal.ang'. For the indicated
	 * quantity, the fundamental frequency (index = 1) is used as reference by
	 * convention
	 */
	CMVAngleReference_CF angRef;
	/**
	 * Sampling rate that has been used to determine 'instCVal.mag'. 'smpRate' shall
	 * represent the number of samples per nominal period. In the case of a d.c.
	 * system, 'smpRate' shall represent the number of samples per s.
	 */
	INT32U_CF smpRate;

};
#endif // !defined(EA_71A4E81C_17B3_4b4c_9246_C1F679D9B2E6__INCLUDED_)
