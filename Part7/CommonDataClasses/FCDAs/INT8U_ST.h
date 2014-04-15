///////////////////////////////////////////////////////////
//  INT8U_ST.h
//  Implementation of the Class INT8U_ST
//  Created on:      15-Apr-2014 2:52:30 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_CBF8C279_8FFB_4ad8_81EB_9E5D3F61D529__INCLUDED_)
#define EA_CBF8C279_8FFB_4ad8_81EB_9E5D3F61D529__INCLUDED_

#include "INT8U.h"
#include "FCDA_ST.h"

class INT8U_ST : public FCDA_ST
{

public:
	INT8U_ST();
	virtual ~INT8U_ST();

private:
	INT8U attr;

};
#endif // !defined(EA_CBF8C279_8FFB_4ad8_81EB_9E5D3F61D529__INCLUDED_)
