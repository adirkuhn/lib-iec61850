///////////////////////////////////////////////////////////
//  RangeConfig.h
//  Implementation of the Class RangeConfig
//  Created on:      15-Apr-2014 2:52:43 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_31B2A2FD_CA1B_4e9e_96CB_D70A01887AF4__INCLUDED_)
#define EA_31B2A2FD_CA1B_4e9e_96CB_D70A01887AF4__INCLUDED_

#include "AnalogueValue.h"
#include "ComposedDA.h"

/**
 * part 7-3, tab. 5
 * Range configuration type is used to configure the limits that define the range
 * of a measured value.
 * Used for:
 *  [MV | CMV].rangeC
 * in conjunction with [MV | CMV].range.
 * See the Statechart diagram 'Range / value (range)'.
 */
class RangeConfig : public ComposedDA
{

public:
	RangeConfig();
	virtual ~RangeConfig();
	/**
	 * Shall be the configuration parameter used in the context with the range
	 * attribute as defined in clause 8.
	 */
	AnalogueValue hhLim;
	/**
	 * Shall be the configuration parameter used in the context with the range
	 * attribute as defined in clause 8
	 */
	AnalogueValue hLim;
	/**
	 * Shall be the configuration parameter used in the context with the range
	 * attribute as defined in clause 8.
	 */
	AnalogueValue lLim;
	/**
	 * Shall be the configuration parameter used in the context with the range
	 * attribute as defined in clause 8
	 */
	AnalogueValue llLim;
	/**
	 * Shall represent the minimum process measurement for which values of i or f are
	 * considered within process limits. If the value is lower, Quality shall be set
	 * accordingly (Quality.detailQual.outOfRange=TRUE => Quality.
	 * validity=questionable)
	 */
	AnalogueValue min;
	/**
	 * Shall represent the maximum process measurement for which values of i or f are
	 * considered within process limits. If the value is higher, Quality shall be set
	 * accordingly (Quality.detailQual.outOfRange=TRUE => Quality.
	 * validity=questionable)
	 */
	AnalogueValue max;

};
#endif // !defined(EA_31B2A2FD_CA1B_4e9e_96CB_D70A01887AF4__INCLUDED_)
