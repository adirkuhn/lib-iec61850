///////////////////////////////////////////////////////////
//  FCDA_MX_dchg.h
//  Implementation of the Class FCDA_MX_dchg
//  Created on:      15-Apr-2014 2:52:16 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_EDD94765_AEB1_4143_B579_FCA8DCC44DD4__INCLUDED_)
#define EA_EDD94765_AEB1_4143_B579_FCA8DCC44DD4__INCLUDED_

#include "FCDA_MX.h"

/**
 * <font color="#141414">See FcKind and TrgOpKind.</font>
 */
class FCDA_MX_dchg : public FCDA_MX
{

public:
	FCDA_MX_dchg();
	virtual ~FCDA_MX_dchg();

	TrgOpKind getTrgOp();

};
#endif // !defined(EA_EDD94765_AEB1_4143_B579_FCA8DCC44DD4__INCLUDED_)
