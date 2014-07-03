///////////////////////////////////////////////////////////
//  BOOLEAN.h
//  Implementation of the Class BOOLEAN
//  Created on:      15-Apr-2014 2:52:06 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_B70F6937_C75A_4a68_B8A8_923CC985D84B__INCLUDED_)
#define EA_B70F6937_C75A_4a68_B8A8_923CC985D84B__INCLUDED_

#include "P_BOOLEAN.h"
#include "PrimitiveDA.h"

/**
 * See P_BOOLEAN
 */
class BOOLEAN : public PrimitiveDA
{

public:
	BOOLEAN();
	virtual ~BOOLEAN();
    void setVal(P_BOOLEAN val);
    P_BOOLEAN getVal();

private:
	P_BOOLEAN val;

};
#endif // !defined(EA_B70F6937_C75A_4a68_B8A8_923CC985D84B__INCLUDED_)
