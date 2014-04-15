///////////////////////////////////////////////////////////
//  Sequence.h
//  Implementation of the Class Sequence
//  Created on:      15-Apr-2014 2:52:45 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_E1789B45_FCC0_4a65_BC3F_66AAC3197948__INCLUDED_)
#define EA_E1789B45_FCC0_4a65_BC3F_66AAC3197948__INCLUDED_

#include "PrimitiveDA.h"
#include "SequenceKind.h"

/**
 * <font color="#141414">See SequenceKind.</font>
 */
class Sequence : public PrimitiveDA
{

public:
	Sequence();
	virtual ~Sequence();

private:
	SequenceKind val;

};
#endif // !defined(EA_E1789B45_FCC0_4a65_BC3F_66AAC3197948__INCLUDED_)
