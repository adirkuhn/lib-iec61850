///////////////////////////////////////////////////////////
//  INT128_ST_dupd.h
//  Implementation of the Class INT128_ST_dupd
//  Created on:      15-Apr-2014 2:52:27 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_E11C9C2F_D51E_472a_96EF_42F783BF8904__INCLUDED_)
#define EA_E11C9C2F_D51E_472a_96EF_42F783BF8904__INCLUDED_

#include "INT128.h"
#include "FCDA_ST_dupd.h"

class INT128_ST_dupd : public FCDA_ST_dupd
{

public:
	INT128_ST_dupd();
	virtual ~INT128_ST_dupd();

private:
	INT128 attr;

};
#endif // !defined(EA_E11C9C2F_D51E_472a_96EF_42F783BF8904__INCLUDED_)
