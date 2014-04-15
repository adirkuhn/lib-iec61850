///////////////////////////////////////////////////////////
//  INT32_CO.h
//  Implementation of the Class INT32_CO
//  Created on:      15-Apr-2014 2:52:28 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_A8DD36FF_988D_4336_815A_789F1CE6C1C2__INCLUDED_)
#define EA_A8DD36FF_988D_4336_815A_789F1CE6C1C2__INCLUDED_

#include "INT32.h"
#include "FCDA_CO.h"

class INT32_CO : public FCDA_CO
{

public:
	INT32_CO();
	virtual ~INT32_CO();

private:
	INT32 attr;

};
#endif // !defined(EA_A8DD36FF_988D_4336_815A_789F1CE6C1C2__INCLUDED_)
