///////////////////////////////////////////////////////////
//  P_TimeStamp.h
//  Implementation of the Class P_TimeStamp
//  Created on:      15-Apr-2014 2:52:40 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_2B424CD8_256A_4538_B5E7_FEA9F4188495__INCLUDED_)
#define EA_2B424CD8_256A_4538_B5E7_FEA9F4188495__INCLUDED_

#include "P_INT32.h"
#include "P_INT24U.h"
#include "TimeQuality.h"

/**
 * part 7-2, sec. 5
 * Shall represent a UTC time with the epoch of midnight (00:00:00) of 1970-01-01.
 * The presentation is defined in the SCSMs. The relation between a time stamp
 * value, the synchronisation of an internal time with an external time source (e.
 * g., UTC time), and other time- related information are defined in clause 18.
 */
class P_TimeStamp
{

public:
	P_TimeStamp();
	virtual ~P_TimeStamp();

private:
	P_INT32 secondSinceEpoch;
	P_INT24U fractionOfSecond;
	TimeQuality timeQuality;

};
#endif // !defined(EA_2B424CD8_256A_4538_B5E7_FEA9F4188495__INCLUDED_)
