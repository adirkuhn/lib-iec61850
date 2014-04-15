///////////////////////////////////////////////////////////
//  Sequence_MX.h
//  Implementation of the Class Sequence_MX
//  Created on:      15-Apr-2014 2:52:45 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_5EEA2D92_59BE_427e_9F30_C6D231F29B2B__INCLUDED_)
#define EA_5EEA2D92_59BE_427e_9F30_C6D231F29B2B__INCLUDED_

#include "Sequence.h"
#include "FCDA_MX.h"

class Sequence_MX : public FCDA_MX
{

public:
	Sequence_MX();
	virtual ~Sequence_MX();

private:
	Sequence attr;

};
#endif // !defined(EA_5EEA2D92_59BE_427e_9F30_C6D231F29B2B__INCLUDED_)
