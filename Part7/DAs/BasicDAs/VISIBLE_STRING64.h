///////////////////////////////////////////////////////////
//  VISIBLE_STRING64.h
//  Implementation of the Class VISIBLE_STRING64
//  Created on:      15-Apr-2014 2:52:52 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_D1D599DC_C22B_4f46_9E43_A7E874397DBD__INCLUDED_)
#define EA_D1D599DC_C22B_4f46_9E43_A7E874397DBD__INCLUDED_

#include "P_VISIBLE_STRING64.h"
#include "PrimitiveDA.h"

/**
 * <font color="#141414">See P_VISIBLE_STRING64.</font>
 */
class VISIBLE_STRING64 : public PrimitiveDA
{

public:
	VISIBLE_STRING64();
	virtual ~VISIBLE_STRING64();

private:
	P_VISIBLE_STRING64 val;

};
#endif // !defined(EA_D1D599DC_C22B_4f46_9E43_A7E874397DBD__INCLUDED_)
