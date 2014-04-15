///////////////////////////////////////////////////////////
//  FCDA_DC.h
//  Implementation of the Class FCDA_DC
//  Created on:      15-Apr-2014 2:52:15 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_9238D92D_C2E3_4a0d_9DF9_8B694FC3A5EA__INCLUDED_)
#define EA_9238D92D_C2E3_4a0d_9DF9_8B694FC3A5EA__INCLUDED_

#include "P_BOOLEAN.h"
#include "FCDA.h"

/**
 * <font color="#141414">See FcKind.</font>
 */
class FCDA_DC : public FCDA
{

public:
	FCDA_DC();
	virtual ~FCDA_DC();

	FcKind getFc();
	P_BOOLEAN isReadable();
	P_BOOLEAN isWritable();

};
#endif // !defined(EA_9238D92D_C2E3_4a0d_9DF9_8B694FC3A5EA__INCLUDED_)
