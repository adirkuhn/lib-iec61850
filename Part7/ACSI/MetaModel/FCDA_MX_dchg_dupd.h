///////////////////////////////////////////////////////////
//  FCDA_MX_dchg_dupd.h
//  Implementation of the Class FCDA_MX_dchg_dupd
//  Created on:      15-Apr-2014 2:52:16 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_438DB1A0_0AA9_48ce_8972_403F99A74168__INCLUDED_)
#define EA_438DB1A0_0AA9_48ce_8972_403F99A74168__INCLUDED_

#include "FCDA_MX.h"

/**
 * <font color="#141414">See FcKind and TrgOpKind.</font>
 */
class FCDA_MX_dchg_dupd : public FCDA_MX
{

public:
	FCDA_MX_dchg_dupd();
	virtual ~FCDA_MX_dchg_dupd();

	TrgOpKind getTrgOp();

};
#endif // !defined(EA_438DB1A0_0AA9_48ce_8972_403F99A74168__INCLUDED_)
