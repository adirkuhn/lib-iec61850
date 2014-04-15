///////////////////////////////////////////////////////////
//  FCDA_SP.h
//  Implementation of the Class FCDA_SP
//  Created on:      15-Apr-2014 2:52:17 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_E9EA3F68_7520_4abf_A65C_5A35B24E50A6__INCLUDED_)
#define EA_E9EA3F68_7520_4abf_A65C_5A35B24E50A6__INCLUDED_

#include "P_BOOLEAN.h"
#include "FCDA.h"

/**
 * <font color="#141414">See FcKind.</font>
 */
class FCDA_SP : public FCDA
{

public:
	FCDA_SP();
	virtual ~FCDA_SP();

	FcKind getFc();
	P_BOOLEAN isReadable();
	P_BOOLEAN isWritable();

};
#endif // !defined(EA_E9EA3F68_7520_4abf_A65C_5A35B24E50A6__INCLUDED_)
