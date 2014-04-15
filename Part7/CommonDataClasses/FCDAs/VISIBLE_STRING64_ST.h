///////////////////////////////////////////////////////////
//  VISIBLE_STRING64_ST.h
//  Implementation of the Class VISIBLE_STRING64_ST
//  Created on:      15-Apr-2014 2:52:52 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_9023FCA6_3417_492f_A02D_58A10EE0FF39__INCLUDED_)
#define EA_9023FCA6_3417_492f_A02D_58A10EE0FF39__INCLUDED_

#include "VISIBLE_STRING64.h"
#include "FCDA_ST.h"

class VISIBLE_STRING64_ST : public FCDA_ST
{

public:
	VISIBLE_STRING64_ST();
	virtual ~VISIBLE_STRING64_ST();

private:
	VISIBLE_STRING64 attr;

};
#endif // !defined(EA_9023FCA6_3417_492f_A02D_58A10EE0FF39__INCLUDED_)
