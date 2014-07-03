///////////////////////////////////////////////////////////
//  VISIBLE_STRING255.h
//  Implementation of the Class VISIBLE_STRING255
//  Created on:      15-Apr-2014 2:52:52 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_6170D160_0D3A_4242_B764_A9E5DD2BD93E__INCLUDED_)
#define EA_6170D160_0D3A_4242_B764_A9E5DD2BD93E__INCLUDED_

#include "P_VISIBLE_STRING255.h"
#include "PrimitiveDA.h"

/**
 * <font color="#141414">See P_VISIBLE_STRING255.</font>
 */
class VISIBLE_STRING255 : public PrimitiveDA
{

public:
	VISIBLE_STRING255();
	virtual ~VISIBLE_STRING255();

private:
	P_VISIBLE_STRING255 val;

};
#endif // !defined(EA_6170D160_0D3A_4242_B764_A9E5DD2BD93E__INCLUDED_)
