///////////////////////////////////////////////////////////
//  DirectionPhase.h
//  Implementation of the Class DirectionPhase
//  Created on:      15-Apr-2014 2:52:13 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_883753AF_2ADB_479d_AEC4_C4CA63E232C2__INCLUDED_)
#define EA_883753AF_2ADB_479d_AEC4_C4CA63E232C2__INCLUDED_

#include "PrimitiveDA.h"
#include "DirectionPhaseKind.h"

/**
 * <font color="#141414">See DirectionPhaseKind.</font>
 */
class DirectionPhase : public PrimitiveDA
{

public:
	DirectionPhase();
	virtual ~DirectionPhase();

private:
	DirectionPhaseKind val;

};
#endif // !defined(EA_883753AF_2ADB_479d_AEC4_C4CA63E232C2__INCLUDED_)
