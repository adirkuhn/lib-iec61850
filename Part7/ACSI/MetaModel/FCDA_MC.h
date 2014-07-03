///////////////////////////////////////////////////////////
//  FCDA_MC.h
//  Implementation of the Class FCDA_MC
//  Created on:      15-Apr-2014 2:52:16 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_41CECF78_1C37_451d_9146_47B3B45AAA7A__INCLUDED_)
#define EA_41CECF78_1C37_451d_9146_47B3B45AAA7A__INCLUDED_

#include "P_BOOLEAN.h"
#include "FCDA.h"

/**
 * <font color="#141414">See FcKind.</font>
 */
class FCDA_MC : public FCDA
{

public:
	FCDA_MC();
	virtual ~FCDA_MC();

	FcKind getFc();
	P_BOOLEAN isReadable();
	P_BOOLEAN isWritable();

};
#endif // !defined(EA_41CECF78_1C37_451d_9146_47B3B45AAA7A__INCLUDED_)
