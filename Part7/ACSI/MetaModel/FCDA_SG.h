///////////////////////////////////////////////////////////
//  FCDA_SG.h
//  Implementation of the Class FCDA_SG
//  Created on:      15-Apr-2014 2:52:17 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_723FDB84_C833_4534_B257_21E62A8D304E__INCLUDED_)
#define EA_723FDB84_C833_4534_B257_21E62A8D304E__INCLUDED_

#include "P_BOOLEAN.h"
#include "FCDA.h"

/**
 * <font color="#141414">See FcKind.</font>
 */
class FCDA_SG : public FCDA
{

public:
	FCDA_SG();
	virtual ~FCDA_SG();

	FcKind getFc();
	P_BOOLEAN isReadable();
	P_BOOLEAN isWritable();

};
#endif // !defined(EA_723FDB84_C833_4534_B257_21E62A8D304E__INCLUDED_)
