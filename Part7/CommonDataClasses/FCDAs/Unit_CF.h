///////////////////////////////////////////////////////////
//  Unit_CF.h
//  Implementation of the Class Unit_CF
//  Created on:      15-Apr-2014 2:52:50 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_6139FCEB_8310_4f52_B86D_59A80CF607B3__INCLUDED_)
#define EA_6139FCEB_8310_4f52_B86D_59A80CF607B3__INCLUDED_

#include "Unit.h"
#include "FCDA_CF.h"

class Unit_CF : public FCDA_CF
{

public:
	Unit_CF();
	virtual ~Unit_CF();

private:
	Unit attr;

};
#endif // !defined(EA_6139FCEB_8310_4f52_B86D_59A80CF607B3__INCLUDED_)
