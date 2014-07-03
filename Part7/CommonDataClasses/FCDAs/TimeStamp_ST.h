///////////////////////////////////////////////////////////
//  TimeStamp_ST.h
//  Implementation of the Class TimeStamp_ST
//  Created on:      15-Apr-2014 2:52:49 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_07CAC8FF_FDCF_4822_91D4_D9237722FEFE__INCLUDED_)
#define EA_07CAC8FF_FDCF_4822_91D4_D9237722FEFE__INCLUDED_

#include "FCDA_ST.h"
#include "TimeStamp.h"

class TimeStamp_ST : public FCDA_ST
{

public:
	TimeStamp_ST();
	virtual ~TimeStamp_ST();

private:
	TimeStamp attr;

};
#endif // !defined(EA_07CAC8FF_FDCF_4822_91D4_D9237722FEFE__INCLUDED_)
