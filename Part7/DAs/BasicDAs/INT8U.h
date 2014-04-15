///////////////////////////////////////////////////////////
//  INT8U.h
//  Implementation of the Class INT8U
//  Created on:      15-Apr-2014 2:52:30 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_8B419240_8D80_4b79_841F_E1754C4575A6__INCLUDED_)
#define EA_8B419240_8D80_4b79_841F_E1754C4575A6__INCLUDED_

#include "P_INT8U.h"
#include "PrimitiveDA.h"

/**
 * SEE P_INT8U
 */
class INT8U : public PrimitiveDA
{

public:
	INT8U();
	virtual ~INT8U();

private:
	P_INT8U val;

};
#endif // !defined(EA_8B419240_8D80_4b79_841F_E1754C4575A6__INCLUDED_)
