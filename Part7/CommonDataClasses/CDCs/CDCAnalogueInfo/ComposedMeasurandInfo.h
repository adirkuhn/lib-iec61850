///////////////////////////////////////////////////////////
//  ComposedMeasurandInfo.h
//  Implementation of the Class ComposedMeasurandInfo
//  Created on:      15-Apr-2014 2:52:09 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_1A32E2B9_AD84_437c_AD22_2429A046C39D__INCLUDED_)
#define EA_1A32E2B9_AD84_437c_AD22_2429A046C39D__INCLUDED_

#include "VISIBLE_STRING255_DC.h"
#include "UNICODE_STRING255_DC.h"
#include "C_ComposedCDC.h"

/**
 * <font color="#141414">Abstract supertype for all composed measurand information
 * CDCs.</font>
 */
class ComposedMeasurandInfo : public C_ComposedCDC
{

public:
	ComposedMeasurandInfo();
	virtual ~ComposedMeasurandInfo();
	/**
	 * Textual description of the data.
	 */
	VISIBLE_STRING255_DC d;
	/**
	 * Textual description of the data using unicode characters.
	 */
	UNICODE_STRING255_DC dU;

};
#endif // !defined(EA_1A32E2B9_AD84_437c_AD22_2429A046C39D__INCLUDED_)
