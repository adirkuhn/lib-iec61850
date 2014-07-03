///////////////////////////////////////////////////////////
//  TimeStamp_MC.h
//  Implementation of the Class TimeStamp_MC
//  Created on:      15-Apr-2014 2:52:48 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_AE5DFA84_45AF_4afa_BB68_B31B15BF294B__INCLUDED_)
#define EA_AE5DFA84_45AF_4afa_BB68_B31B15BF294B__INCLUDED_

#include "TimeStamp.h"
#include "FCDA_MC.h"

class TimeStamp_MC : public FCDA_MC
{

public:
	TimeStamp_MC();
	virtual ~TimeStamp_MC();

private:
	TimeStamp attr;

};
#endif // !defined(EA_AE5DFA84_45AF_4afa_BB68_B31B15BF294B__INCLUDED_)
