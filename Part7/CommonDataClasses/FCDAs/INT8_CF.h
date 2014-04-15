///////////////////////////////////////////////////////////
//  INT8_CF.h
//  Implementation of the Class INT8_CF
//  Created on:      15-Apr-2014 2:52:30 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_B83D7496_DEAF_425b_9A02_F0B69616073F__INCLUDED_)
#define EA_B83D7496_DEAF_425b_9A02_F0B69616073F__INCLUDED_

#include "INT8.h"
#include "FCDA_CF.h"

class INT8_CF : public FCDA_CF
{

public:
	INT8_CF();
	virtual ~INT8_CF();

private:
	INT8 attr;

};
#endif // !defined(EA_B83D7496_DEAF_425b_9A02_F0B69616073F__INCLUDED_)
