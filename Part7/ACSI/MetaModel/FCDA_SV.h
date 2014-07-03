///////////////////////////////////////////////////////////
//  FCDA_SV.h
//  Implementation of the Class FCDA_SV
//  Created on:      15-Apr-2014 2:52:18 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_BEC6022F_317C_4724_8F1E_FE69CF0ACDA8__INCLUDED_)
#define EA_BEC6022F_317C_4724_8F1E_FE69CF0ACDA8__INCLUDED_

#include "P_BOOLEAN.h"
#include "FCDA.h"

/**
 * <font color="#141414">See FcKind.</font>
 */
class FCDA_SV : public FCDA
{

public:
	FCDA_SV();
	virtual ~FCDA_SV();

	FcKind getFc();
	P_BOOLEAN isReadable();
	P_BOOLEAN isWritable();

};
#endif // !defined(EA_BEC6022F_317C_4724_8F1E_FE69CF0ACDA8__INCLUDED_)
