///////////////////////////////////////////////////////////
//  INT32_ST_dchg.h
//  Implementation of the Class INT32_ST_dchg
//  Created on:      15-Apr-2014 2:52:29 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_502C2F03_C36A_4a70_A7F8_B3C8A110F326__INCLUDED_)
#define EA_502C2F03_C36A_4a70_A7F8_B3C8A110F326__INCLUDED_

#include "INT32.h"
#include "FCDA_ST_dchg.h"

class INT32_ST_dchg : public FCDA_ST_dchg
{

public:
	INT32_ST_dchg();
	virtual ~INT32_ST_dchg();

private:
	INT32 attr;

};
#endif // !defined(EA_502C2F03_C36A_4a70_A7F8_B3C8A110F326__INCLUDED_)
