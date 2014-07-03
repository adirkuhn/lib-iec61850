///////////////////////////////////////////////////////////
//  BOOLEAN_SV.h
//  Implementation of the Class BOOLEAN_SV
//  Created on:      15-Apr-2014 2:52:07 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_0AB26F40_49A1_4637_8D18_C8D931BB31FA__INCLUDED_)
#define EA_0AB26F40_49A1_4637_8D18_C8D931BB31FA__INCLUDED_

#include "BOOLEAN.h"
#include "FCDA_SV.h"

class BOOLEAN_SV : public FCDA_SV
{

public:
	BOOLEAN_SV();
	virtual ~BOOLEAN_SV();

private:
	BOOLEAN attr;

};
#endif // !defined(EA_0AB26F40_49A1_4637_8D18_C8D931BB31FA__INCLUDED_)
