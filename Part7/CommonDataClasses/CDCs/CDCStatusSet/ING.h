///////////////////////////////////////////////////////////
//  ING.h
//  Implementation of the Class ING
//  Created on:      15-Apr-2014 2:52:22 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_F2C71443_EF56_47b7_9243_950DDF3710BB__INCLUDED_)
#define EA_F2C71443_EF56_47b7_9243_950DDF3710BB__INCLUDED_

#include "INT32_SP.h"
#include "INT32_SE.h"
#include "INT32_SG.h"
#include "INT32_CF.h"
#include "INT32U_CF.h"
#include "StatusSettings.h"

/**
 * <font color="#141414">(no documentation)</font>
 * <font color="#141414">
 * </font><font color="#141414">part 7-3, tab. 40</font>
 * <font color="#141414">
 * </font>
 */
class ING : public StatusSettings
{

public:
	ING();
	virtual ~ING();
	/**
	 * The value of the status setting
	 */
	INT32_SP setVal;
	/**
	 * The value of the status setting
	 */
	INT32_SE _setVal;
	/**
	 * The value of the status setting.
	 */
	INT32_SG __setVal;
	/**
	 * Defines together with 'maxVal' the setting range for 'setVal'
	 */
	INT32_CF minVal;
	/**
	 * Defines together with 'minVal' the setting range for 'setVal'
	 */
	INT32_CF maxVal;
	/**
	 * Step between the individual values of 'setVal': 'stepSize' = [1..('maxVal'-
	 * 'minVal')]
	 */
	INT32U_CF stepSize;

};
#endif // !defined(EA_F2C71443_EF56_47b7_9243_950DDF3710BB__INCLUDED_)
