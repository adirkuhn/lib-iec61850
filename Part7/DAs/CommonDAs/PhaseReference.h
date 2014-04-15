///////////////////////////////////////////////////////////
//  PhaseReference.h
//  Implementation of the Class PhaseReference
//  Created on:      15-Apr-2014 2:52:41 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_E87E6053_A844_4f12_8B23_A5EC55148E1A__INCLUDED_)
#define EA_E87E6053_A844_4f12_8B23_A5EC55148E1A__INCLUDED_

#include "PrimitiveDA.h"
#include "PhaseReferenceKind.h"

/**
 * <font color="#141414">See PhaseReferenceKind.</font>
 */
class PhaseReference : public PrimitiveDA
{

public:
	PhaseReference();
	virtual ~PhaseReference();

private:
	PhaseReferenceKind val;

};
#endif // !defined(EA_E87E6053_A844_4f12_8B23_A5EC55148E1A__INCLUDED_)
