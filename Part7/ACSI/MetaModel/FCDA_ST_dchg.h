///////////////////////////////////////////////////////////
//  FCDA_ST_dchg.h
//  Implementation of the Class FCDA_ST_dchg
//  Created on:      15-Apr-2014 2:52:17 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_57588B99_FA93_4b92_82F8_EB47ACED423E__INCLUDED_)
#define EA_57588B99_FA93_4b92_82F8_EB47ACED423E__INCLUDED_

#include "FCDA_ST.h"

/**
 * <font color="#141414">See FcKind and TrgOpKind.</font>
 */
class FCDA_ST_dchg : public FCDA_ST
{

public:
	FCDA_ST_dchg();
	virtual ~FCDA_ST_dchg();

	TrgOpKind getTrgOp();

};
#endif // !defined(EA_57588B99_FA93_4b92_82F8_EB47ACED423E__INCLUDED_)
