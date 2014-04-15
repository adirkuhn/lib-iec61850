///////////////////////////////////////////////////////////
//  BOOLEAN_SE.h
//  Implementation of the Class BOOLEAN_SE
//  Created on:      15-Apr-2014 2:52:06 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_CB5D4C0D_0264_4072_8FF6_D5C5B85EEE2E__INCLUDED_)
#define EA_CB5D4C0D_0264_4072_8FF6_D5C5B85EEE2E__INCLUDED_

#include "BOOLEAN.h"
#include "FCDA_SE.h"

class BOOLEAN_SE : public FCDA_SE
{

public:
	BOOLEAN_SE();
	virtual ~BOOLEAN_SE();

private:
	BOOLEAN attr;

};
#endif // !defined(EA_CB5D4C0D_0264_4072_8FF6_D5C5B85EEE2E__INCLUDED_)
