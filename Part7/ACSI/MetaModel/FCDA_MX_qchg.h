///////////////////////////////////////////////////////////
//  FCDA_MX_qchg.h
//  Implementation of the Class FCDA_MX_qchg
//  Created on:      15-Apr-2014 2:52:17 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_092BEB7E_5F61_46ff_89FA_03378AFA7445__INCLUDED_)
#define EA_092BEB7E_5F61_46ff_89FA_03378AFA7445__INCLUDED_

#include "FCDA_MX.h"

/**
 * <font color="#141414">See FcKind and TrgOpKind.</font>
 */
class FCDA_MX_qchg : public FCDA_MX
{

public:
	FCDA_MX_qchg();
	virtual ~FCDA_MX_qchg();

	TrgOpKind getTrgOp();

};
#endif // !defined(EA_092BEB7E_5F61_46ff_89FA_03378AFA7445__INCLUDED_)
