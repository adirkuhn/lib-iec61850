///////////////////////////////////////////////////////////
//  INT32U.h
//  Implementation of the Class INT32U
//  Created on:      15-Apr-2014 2:52:29 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_472D2E18_D5EF_4861_9745_2CF216ACE63B__INCLUDED_)
#define EA_472D2E18_D5EF_4861_9745_2CF216ACE63B__INCLUDED_

#include "P_INT32U.h"
#include "PrimitiveDA.h"

/**
 * See P_INT32U
 */
class INT32U : public PrimitiveDA
{

public:
	INT32U();
	virtual ~INT32U();

private:
	P_INT32U val;

};
#endif // !defined(EA_472D2E18_D5EF_4861_9745_2CF216ACE63B__INCLUDED_)
