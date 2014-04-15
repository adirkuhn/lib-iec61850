///////////////////////////////////////////////////////////
//  INT16U.h
//  Implementation of the Class INT16U
//  Created on:      15-Apr-2014 2:52:27 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_25CD33FE_F689_42d4_B005_6CC1DD8009E8__INCLUDED_)
#define EA_25CD33FE_F689_42d4_B005_6CC1DD8009E8__INCLUDED_

#include "P_INT16U.h"
#include "PrimitiveDA.h"

/**
 * See P_INT16U
 */
class INT16U : public PrimitiveDA
{

public:
	INT16U();
	virtual ~INT16U();

private:
	P_INT16U val;

};
#endif // !defined(EA_25CD33FE_F689_42d4_B005_6CC1DD8009E8__INCLUDED_)
