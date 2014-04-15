///////////////////////////////////////////////////////////
//  SboClasses_CF.h
//  Implementation of the Class SboClasses_CF
//  Created on:      15-Apr-2014 2:52:44 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_A7BB7105_7E24_4637_94F6_BF7EC4D05A69__INCLUDED_)
#define EA_A7BB7105_7E24_4637_94F6_BF7EC4D05A69__INCLUDED_

#include "SboClasses.h"
#include "FCDA_CF.h"

class SboClasses_CF : public FCDA_CF
{

public:
	SboClasses_CF();
	virtual ~SboClasses_CF();

private:
	SboClasses attr;

};
#endif // !defined(EA_A7BB7105_7E24_4637_94F6_BF7EC4D05A69__INCLUDED_)
