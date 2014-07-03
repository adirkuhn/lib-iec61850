///////////////////////////////////////////////////////////
//  FCDA_EX.h
//  Implementation of the Class FCDA_EX
//  Created on:      15-Apr-2014 2:52:16 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_43504A9B_A212_4b65_A06A_A1ECCEA97CCF__INCLUDED_)
#define EA_43504A9B_A212_4b65_A06A_A1ECCEA97CCF__INCLUDED_

#include "P_BOOLEAN.h"
#include "FCDA.h"

/**
 * <font color="#141414">See FcKind.</font>
 */
class FCDA_EX : public FCDA
{

public:
	FCDA_EX();
	virtual ~FCDA_EX();

	FcKind getFc();
	P_BOOLEAN isReadable();
	P_BOOLEAN isWritable();

};
#endif // !defined(EA_43504A9B_A212_4b65_A06A_A1ECCEA97CCF__INCLUDED_)
