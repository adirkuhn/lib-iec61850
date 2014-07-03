///////////////////////////////////////////////////////////
//  FCDA_CO.h
//  Implementation of the Class FCDA_CO
//  Created on:      15-Apr-2014 2:52:15 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_C793572C_965E_4c29_A7E0_E632EBC04041__INCLUDED_)
#define EA_C793572C_965E_4c29_A7E0_E632EBC04041__INCLUDED_

#include "P_BOOLEAN.h"
#include "FCDA.h"

/**
 * <font color="#141414">See FcKind.</font>
 */
class FCDA_CO : public FCDA
{

public:
	FCDA_CO();
	virtual ~FCDA_CO();

	FcKind getFc();
	P_BOOLEAN isReadable();
	P_BOOLEAN isWritable();

};
#endif // !defined(EA_C793572C_965E_4c29_A7E0_E632EBC04041__INCLUDED_)
