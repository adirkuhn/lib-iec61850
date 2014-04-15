///////////////////////////////////////////////////////////
//  AnalogueValue_SE.h
//  Implementation of the Class AnalogueValue_SE
//  Created on:      15-Apr-2014 2:52:04 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_72EEEFA9_559A_41fe_8F36_A072C14F374C__INCLUDED_)
#define EA_72EEEFA9_559A_41fe_8F36_A072C14F374C__INCLUDED_

#include "AnalogueValue.h"
#include "FCDA_SE.h"

class AnalogueValue_SE : public FCDA_SE
{

public:
	AnalogueValue_SE();
	virtual ~AnalogueValue_SE();

private:
	AnalogueValue attr;

};
#endif // !defined(EA_72EEEFA9_559A_41fe_8F36_A072C14F374C__INCLUDED_)
