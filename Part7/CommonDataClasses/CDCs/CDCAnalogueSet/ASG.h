///////////////////////////////////////////////////////////
//  ASG.h
//  Implementation of the Class ASG
//  Created on:      15-Apr-2014 2:52:05 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_DFBD6A62_915C_4db2_B1F7_A83CE5002541__INCLUDED_)
#define EA_DFBD6A62_915C_4db2_B1F7_A83CE5002541__INCLUDED_

#include "AnalogueValue_SP.h"
#include "AnalogueValue_SE.h"
#include "AnalogueValue_SG.h"
#include "Unit_CF.h"
#include "ScaledValueConfig_CF.h"
#include "AnalogueValue_CF.h"
#include "AnalogueSettings.h"

/**
 * <font color="#141414">(no documentation)</font>
 * <font color="#141414">
 * </font><font color="#141414">7-3, tab. 42</font>
 */
class ASG : public AnalogueSettings
{

public:
	ASG();
	virtual ~ASG();
	/**
	 * Value of the analogue setting.
	 */
	AnalogueValue_SP setMag;
	/**
	 * Value of the analogue setting.
	 */
	AnalogueValue_SE _setMag;
	/**
	 * Value of the analogue setting.
	 */
	AnalogueValue_SG __setMag;
	/**
	 * Units of the data values: 'setMag', 'minVal', 'maxVal', 'stepSize'
	 */
	Unit_CF units;
	/**
	 * Scaled value configuration. Shall be used to configure the scaled value
	 * representation of 'setMag'.
	 */
	ScaledValueConfig_CF sVC;
	/**
	 * Defines together with 'maxVal' the setting range for 'setMag'
	 */
	AnalogueValue_CF minVal;
	/**
	 * Defines together with 'minVal' the setting range for 'setMag'.
	 */
	AnalogueValue_CF maxVal;
	/**
	 * Step between the individual values of 'setMag': 'stepSize' = [1..('maxVal'-
	 * 'minVal')].
	 */
	AnalogueValue_CF stepSize;

};
#endif // !defined(EA_DFBD6A62_915C_4db2_B1F7_A83CE5002541__INCLUDED_)
