///////////////////////////////////////////////////////////
//  TimeQuality.h
//  Implementation of the Class TimeQuality
//  Created on:      15-Apr-2014 2:52:48 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_D1055D72_083A_4b0d_8A80_EB836E57537D__INCLUDED_)
#define EA_D1055D72_083A_4b0d_8A80_EB836E57537D__INCLUDED_

#include "P_BOOLEAN.h"
#include "TimeAccuracyKind.h"

/**
 * part 7-2, sec. 5
 * Information about the time source of the sending IED.
 */
class TimeQuality
{

public:
	TimeQuality();
	virtual ~TimeQuality();

private:
	P_BOOLEAN leapSecondsKnown;
	P_BOOLEAN clockFailure;
	P_BOOLEAN clockNotSynchronized;
	TimeAccuracyKind timeAccuracy;

};
#endif // !defined(EA_D1055D72_083A_4b0d_8A80_EB836E57537D__INCLUDED_)
