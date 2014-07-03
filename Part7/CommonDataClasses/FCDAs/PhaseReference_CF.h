///////////////////////////////////////////////////////////
//  PhaseReference_CF.h
//  Implementation of the Class PhaseReference_CF
//  Created on:      15-Apr-2014 2:52:41 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_883A4C99_9FBE_4529_936D_F78B9596FDFA__INCLUDED_)
#define EA_883A4C99_9FBE_4529_936D_F78B9596FDFA__INCLUDED_

#include "PhaseReference.h"
#include "FCDA_CF.h"

class PhaseReference_CF : public FCDA_CF
{

public:
	PhaseReference_CF();
	virtual ~PhaseReference_CF();

private:
	PhaseReference attr;

};
#endif // !defined(EA_883A4C99_9FBE_4529_936D_F78B9596FDFA__INCLUDED_)
