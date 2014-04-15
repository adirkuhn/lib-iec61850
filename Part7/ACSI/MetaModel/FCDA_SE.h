///////////////////////////////////////////////////////////
//  FCDA_SE.h
//  Implementation of the Class FCDA_SE
//  Created on:      15-Apr-2014 2:52:17 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_4726905C_DB7F_41eb_A6B4_AFCC50DC76A9__INCLUDED_)
#define EA_4726905C_DB7F_41eb_A6B4_AFCC50DC76A9__INCLUDED_

#include "P_BOOLEAN.h"
#include "FCDA.h"

/**
 * <font color="#141414">See FcKind.</font>
 */
class FCDA_SE : public FCDA
{

public:
	FCDA_SE();
	virtual ~FCDA_SE();

	FcKind getFc();
	P_BOOLEAN isReadable();
	P_BOOLEAN isWritable();

};
#endif // !defined(EA_4726905C_DB7F_41eb_A6B4_AFCC50DC76A9__INCLUDED_)
