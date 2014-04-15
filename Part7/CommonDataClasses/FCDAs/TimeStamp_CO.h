///////////////////////////////////////////////////////////
//  TimeStamp_CO.h
//  Implementation of the Class TimeStamp_CO
//  Created on:      15-Apr-2014 2:52:48 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_F1E7628F_E92F_4a51_8F31_9064610EE9DA__INCLUDED_)
#define EA_F1E7628F_E92F_4a51_8F31_9064610EE9DA__INCLUDED_

#include "TimeStamp.h"
#include "FCDA_CO.h"

class TimeStamp_CO : public FCDA_CO
{

public:
	TimeStamp_CO();
	virtual ~TimeStamp_CO();

private:
	TimeStamp attr;

};
#endif // !defined(EA_F1E7628F_E92F_4a51_8F31_9064610EE9DA__INCLUDED_)
