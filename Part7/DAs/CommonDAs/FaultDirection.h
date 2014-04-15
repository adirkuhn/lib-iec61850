///////////////////////////////////////////////////////////
//  FaultDirection.h
//  Implementation of the Class FaultDirection
//  Created on:      15-Apr-2014 2:52:14 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_7DED4A51_D76C_45b1_9B0F_B3DF12652E35__INCLUDED_)
#define EA_7DED4A51_D76C_45b1_9B0F_B3DF12652E35__INCLUDED_

#include "PrimitiveDA.h"
#include "FaultDirectionKind.h"

/**
 * <font color="#141414">See FaultDirectionKind.</font>
 */
class FaultDirection : public PrimitiveDA
{

public:
	FaultDirection();
	virtual ~FaultDirection();

private:
	FaultDirectionKind val;

};
#endif // !defined(EA_7DED4A51_D76C_45b1_9B0F_B3DF12652E35__INCLUDED_)
