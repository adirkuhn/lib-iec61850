///////////////////////////////////////////////////////////
//  SAV.h
//  Implementation of the Class SAV
//  Created on:      15-Apr-2014 2:52:44 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_6C14D691_31F9_4e4c_A98B_D4FD1544FA5A__INCLUDED_)
#define EA_6C14D691_31F9_4e4c_A98B_D4FD1544FA5A__INCLUDED_

#include "AnalogueValue_MX.h"
#include "Quality_MX_qchg.h"
#include "TimeStamp_MX.h"
#include "Unit_CF.h"
#include "ScaledValueConfig_CF.h"
#include "AnalogueValue_CF.h"
#include "PrimitiveMeasurandInfo.h"

/**
 * Used to represent samples of instantaneous analogue values. The values are
 * usually transmitted using the "transmission of sampled value model" as defined
 * in IEC 61850-7-2. NOTE: Can also be applied to calculated values.
 * 
 * part 7-3, tab. 23
 */
class SAV : public PrimitiveMeasurandInfo
{

public:
	SAV();
	virtual ~SAV();
	/**
	 * Magnitude of the instantaneous value
	 */
	AnalogueValue_MX instMag;
	/**
	 * Quality of the data value 'instMag'.
	 */
	Quality_MX_qchg q;
	/**
	 * Timestamp of the last change in one of the attributes representing the data
	 * value ('instMag') or the data quality ('q')
	 */
	TimeStamp_MX t;
	/**
	 * Units of the data value 'instMag'.
	 */
	Unit_CF units;
	/**
	 * Scaled value configuration. Shall be used to configure the scaled value
	 * representation of 'instMag'.
	 */
	ScaledValueConfig_CF sVC;
	/**
	 * Minimum process measurement for which values of 'instMag.i' or 'instMag.f' are
	 * considered within process limits. See statechart diagram 'AnalogueValue.
	 * minMaxStateMachine'.
	 */
	AnalogueValue_CF min;
	/**
	 * Maximum process measurement for which values of 'instMag.i' or 'instMag.f' are
	 * considered within process limits. See statechart diagram 'AnalogueValue.
	 * minMaxStateMachine'.
	 */
	AnalogueValue_CF max;

};

#endif // !defined(EA_6C14D691_31F9_4e4c_A98B_D4FD1544FA5A__INCLUDED_)
