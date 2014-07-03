///////////////////////////////////////////////////////////
//  TimeStamp_MX.h
//  Implementation of the Class TimeStamp_MX
//  Created on:      15-Apr-2014 2:52:49 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_C093D752_1554_4766_8D6A_A86861192895__INCLUDED_)
#define EA_C093D752_1554_4766_8D6A_A86861192895__INCLUDED_

#include "TimeStamp.h"
#include "FCDA_MX.h"

class TimeStamp_MX : public FCDA_MX
{

public:
	TimeStamp_MX();
	virtual ~TimeStamp_MX();

private:
	TimeStamp attr;

};
#endif // !defined(EA_C093D752_1554_4766_8D6A_A86861192895__INCLUDED_)
