///////////////////////////////////////////////////////////
//  INT32U_CF.h
//  Implementation of the Class INT32U_CF
//  Created on:      15-Apr-2014 2:52:29 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_35AA2A04_6FE3_4da4_8DD5_1F51A327F731__INCLUDED_)
#define EA_35AA2A04_6FE3_4da4_8DD5_1F51A327F731__INCLUDED_

#include "INT32U.h"
#include "FCDA_CF.h"

class INT32U_CF : public FCDA_CF
{

public:
	INT32U_CF();
	virtual ~INT32U_CF();

private:
	INT32U attr;

};
#endif // !defined(EA_35AA2A04_6FE3_4da4_8DD5_1F51A327F731__INCLUDED_)
