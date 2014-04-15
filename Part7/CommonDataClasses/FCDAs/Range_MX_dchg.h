///////////////////////////////////////////////////////////
//  Range_MX_dchg.h
//  Implementation of the Class Range_MX_dchg
//  Created on:      15-Apr-2014 2:52:43 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_4E5A2594_B626_4c9d_B4ED_5D979F9D0878__INCLUDED_)
#define EA_4E5A2594_B626_4c9d_B4ED_5D979F9D0878__INCLUDED_

#include "Range.h"
#include "FCDA_MX_dchg.h"

class Range_MX_dchg : public FCDA_MX_dchg
{

public:
	Range_MX_dchg();
	virtual ~Range_MX_dchg();

private:
	Range attr;

};
#endif // !defined(EA_4E5A2594_B626_4c9d_B4ED_5D979F9D0878__INCLUDED_)
