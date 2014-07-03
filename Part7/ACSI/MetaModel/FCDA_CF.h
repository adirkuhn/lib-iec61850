///////////////////////////////////////////////////////////
//  FCDA_CF.h
//  Implementation of the Class FCDA_CF
//  Created on:      15-Apr-2014 2:52:15 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_E63123CE_3871_44fc_806D_636BACCA8CB6__INCLUDED_)
#define EA_E63123CE_3871_44fc_806D_636BACCA8CB6__INCLUDED_

#include "P_BOOLEAN.h"
#include "FCDA.h"

/**
 * <font color="#141414">See FcKind.</font>
 */
class FCDA_CF : public FCDA
{

public:
	FCDA_CF();
	virtual ~FCDA_CF();

	FcKind getFc();
	P_BOOLEAN isReadable();
	P_BOOLEAN isWritable();

};
#endif // !defined(EA_E63123CE_3871_44fc_806D_636BACCA8CB6__INCLUDED_)
