///////////////////////////////////////////////////////////
//  BSControl.h
//  Implementation of the Class BSControl
//  Created on:      15-Apr-2014 2:52:07 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_BC2D4748_B5E7_4f9d_9366_6380C929FD0C__INCLUDED_)
#define EA_BC2D4748_B5E7_4f9d_9366_6380C929FD0C__INCLUDED_

#include "PrimitiveDA.h"
#include "BSControlKind.h"

/**
 * <font color="#141414">See BSControlKind.</font>
 */
class BSControl : public PrimitiveDA
{

public:
	BSControl();
	virtual ~BSControl();

private:
	BSControlKind val;

};
#endif // !defined(EA_BC2D4748_B5E7_4f9d_9366_6380C929FD0C__INCLUDED_)
