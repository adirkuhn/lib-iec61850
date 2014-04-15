///////////////////////////////////////////////////////////
//  INT128_ST_dchg.h
//  Implementation of the Class INT128_ST_dchg
//  Created on:      15-Apr-2014 2:52:27 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_B398F02F_F86E_4a82_AE2C_B1FF8B3B050F__INCLUDED_)
#define EA_B398F02F_F86E_4a82_AE2C_B1FF8B3B050F__INCLUDED_

#include "INT128.h"
#include "FCDA_ST_dchg.h"

class INT128_ST_dchg : public FCDA_ST_dchg
{

public:
	INT128_ST_dchg();
	virtual ~INT128_ST_dchg();

private:
	INT128 attr;

};
#endif // !defined(EA_B398F02F_F86E_4a82_AE2C_B1FF8B3B050F__INCLUDED_)
