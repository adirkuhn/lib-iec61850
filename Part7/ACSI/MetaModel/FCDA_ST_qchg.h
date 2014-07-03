///////////////////////////////////////////////////////////
//  FCDA_ST_qchg.h
//  Implementation of the Class FCDA_ST_qchg
//  Created on:      15-Apr-2014 2:52:18 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_BF83C6A9_5CA1_4c89_95B2_C660015C5E3E__INCLUDED_)
#define EA_BF83C6A9_5CA1_4c89_95B2_C660015C5E3E__INCLUDED_

#include "FCDA_ST.h"

/**
 * <font color="#141414">See FcKind and TrgOpKind.</font>
 */
class FCDA_ST_qchg : public FCDA_ST
{

public:
	FCDA_ST_qchg();
	virtual ~FCDA_ST_qchg();

	TrgOpKind getTrgOp();

};
#endif // !defined(EA_BF83C6A9_5CA1_4c89_95B2_C660015C5E3E__INCLUDED_)
