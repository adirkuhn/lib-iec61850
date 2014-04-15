///////////////////////////////////////////////////////////
//  FCDA_ST_dupd.h
//  Implementation of the Class FCDA_ST_dupd
//  Created on:      15-Apr-2014 2:52:18 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_ADA04B35_5FE7_4da3_BEDE_B6A01F83FA8C__INCLUDED_)
#define EA_ADA04B35_5FE7_4da3_BEDE_B6A01F83FA8C__INCLUDED_

#include "FCDA_ST.h"
#include "TrgOpKind.h"

/**
 * <font color="#141414">See FcKind and TrgOpKind.</font>
 */
class FCDA_ST_dupd : public FCDA_ST
{

public:
	FCDA_ST_dupd();
	virtual ~FCDA_ST_dupd();

	TrgOpKind getTrgOp();

};
#endif // !defined(EA_ADA04B35_5FE7_4da3_BEDE_B6A01F83FA8C__INCLUDED_)
