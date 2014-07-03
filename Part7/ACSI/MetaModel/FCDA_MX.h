///////////////////////////////////////////////////////////
//  FCDA_MX.h
//  Implementation of the Class FCDA_MX
//  Created on:      15-Apr-2014 2:52:16 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_672CFE6D_2BB7_435f_9CEF_EE9C0335297A__INCLUDED_)
#define EA_672CFE6D_2BB7_435f_9CEF_EE9C0335297A__INCLUDED_

#include "P_BOOLEAN.h"
#include "FCDA.h"

/**
 * <font color="#141414">See FcKind.</font>
 */
class FCDA_MX : public FCDA
{

public:
	FCDA_MX();
	virtual ~FCDA_MX();

	FcKind getFc();
	P_BOOLEAN isReadable();
	P_BOOLEAN isWritable();

};


#endif // !defined(EA_672CFE6D_2BB7_435f_9CEF_EE9C0335297A__INCLUDED_)
