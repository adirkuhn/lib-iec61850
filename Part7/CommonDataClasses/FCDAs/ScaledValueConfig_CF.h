///////////////////////////////////////////////////////////
//  ScaledValueConfig_CF.h
//  Implementation of the Class ScaledValueConfig_CF
//  Created on:      15-Apr-2014 2:52:45 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_78002183_3729_417a_83BD_F825594E89F7__INCLUDED_)
#define EA_78002183_3729_417a_83BD_F825594E89F7__INCLUDED_

#include "ScaledValueConfig.h"
#include "FCDA_CF.h"

class ScaledValueConfig_CF : public FCDA_CF
{

public:
	ScaledValueConfig_CF();
	virtual ~ScaledValueConfig_CF();

private:
	ScaledValueConfig attr;

};
#endif // !defined(EA_78002183_3729_417a_83BD_F825594E89F7__INCLUDED_)
