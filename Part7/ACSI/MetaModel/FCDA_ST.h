///////////////////////////////////////////////////////////
//  FCDA_ST.h
//  Implementation of the Class FCDA_ST
//  Created on:      15-Apr-2014 2:52:17 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_AA701E71_6285_48c4_A579_E3304198E66D__INCLUDED_)
#define EA_AA701E71_6285_48c4_A579_E3304198E66D__INCLUDED_

#include "P_BOOLEAN.h"
#include "FCDA.h"
#include "FcKind.h"

/**
 * <font color="#141414">See FcKind.</font>
 */
class FCDA_ST : public FCDA
{

public:
	FCDA_ST();
	virtual ~FCDA_ST();

	FcKind getFc();
	P_BOOLEAN isReadable();
	P_BOOLEAN isWritable();

};
#endif // !defined(EA_AA701E71_6285_48c4_A579_E3304198E66D__INCLUDED_)
