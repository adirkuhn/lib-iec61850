///////////////////////////////////////////////////////////
//  DirectionPhase_ST_dchg.h
//  Implementation of the Class DirectionPhase_ST_dchg
//  Created on:      15-Apr-2014 2:52:13 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_879B9460_045E_47fc_B29E_2A4BBBA04156__INCLUDED_)
#define EA_879B9460_045E_47fc_B29E_2A4BBBA04156__INCLUDED_

#include "DirectionPhase.h"
#include "FCDA_ST_dchg.h"

class DirectionPhase_ST_dchg : public FCDA_ST_dchg
{

public:
	DirectionPhase_ST_dchg();
	virtual ~DirectionPhase_ST_dchg();

private:
	DirectionPhase attr;

};
#endif // !defined(EA_879B9460_045E_47fc_B29E_2A4BBBA04156__INCLUDED_)
