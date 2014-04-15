///////////////////////////////////////////////////////////
//  AngleReference.h
//  Implementation of the Class AngleReference
//  Created on:      15-Apr-2014 2:52:04 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_EDF6F103_495B_4a2f_900C_AB0EB9CCD3B1__INCLUDED_)
#define EA_EDF6F103_495B_4a2f_900C_AB0EB9CCD3B1__INCLUDED_

#include "PrimitiveDA.h"
#include "AngleReferenceKind.h"

/**
 * <font color="#141414">See AngleReferenceKind.</font>
 */
class AngleReference : public PrimitiveDA
{

public:
	AngleReference();
	virtual ~AngleReference();

private:
	AngleReferenceKind val;

};
#endif // !defined(EA_EDF6F103_495B_4a2f_900C_AB0EB9CCD3B1__INCLUDED_)
