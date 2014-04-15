///////////////////////////////////////////////////////////
//  INT32U_ST_dchg.h
//  Implementation of the Class INT32U_ST_dchg
//  Created on:      15-Apr-2014 2:52:29 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_DA67DA6F_B2DC_4127_994E_642E9E6270A2__INCLUDED_)
#define EA_DA67DA6F_B2DC_4127_994E_642E9E6270A2__INCLUDED_

#include "INT32U.h"
#include "FCDA_ST_dchg.h"

class INT32U_ST_dchg : public FCDA_ST_dchg
{

public:
	INT32U_ST_dchg();
	virtual ~INT32U_ST_dchg();

private:
	INT32U attr;

};
#endif // !defined(EA_DA67DA6F_B2DC_4127_994E_642E9E6270A2__INCLUDED_)
