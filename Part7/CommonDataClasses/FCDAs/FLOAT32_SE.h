///////////////////////////////////////////////////////////
//  FLOAT32_SE.h
//  Implementation of the Class FLOAT32_SE
//  Created on:      15-Apr-2014 2:52:19 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_07904331_40AB_4c7d_9CE5_F702CADD59CF__INCLUDED_)
#define EA_07904331_40AB_4c7d_9CE5_F702CADD59CF__INCLUDED_

#include "FLOAT32.h"
#include "FCDA_SE.h"

class FLOAT32_SE : public FCDA_SE
{

public:
	FLOAT32_SE();
	virtual ~FLOAT32_SE();

private:
	FLOAT32 attr;

};
#endif // !defined(EA_07904331_40AB_4c7d_9CE5_F702CADD59CF__INCLUDED_)
