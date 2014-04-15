///////////////////////////////////////////////////////////
//  FLOAT32.h
//  Implementation of the Class FLOAT32
//  Created on:      15-Apr-2014 2:52:19 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_B7698C5B_0DBC_47bb_B238_E40572B8B779__INCLUDED_)
#define EA_B7698C5B_0DBC_47bb_B238_E40572B8B779__INCLUDED_

#include "P_FLOAT32.h"
#include "PrimitiveDA.h"

/**
 * <font color="#141414">See P_FLOAT32.</font>
 */
class FLOAT32 : public PrimitiveDA
{

public:
	FLOAT32();
	virtual ~FLOAT32();

private:
	P_FLOAT32 val;

};
#endif // !defined(EA_B7698C5B_0DBC_47bb_B238_E40572B8B779__INCLUDED_)
