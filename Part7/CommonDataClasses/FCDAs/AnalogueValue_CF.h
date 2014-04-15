///////////////////////////////////////////////////////////
//  AnalogueValue_CF.h
//  Implementation of the Class AnalogueValue_CF
//  Created on:      15-Apr-2014 2:52:03 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_910D9B36_259C_4811_AD1B_502E82EA06ED__INCLUDED_)
#define EA_910D9B36_259C_4811_AD1B_502E82EA06ED__INCLUDED_

#include "AnalogueValue.h"
#include "FCDA_CF.h"

class AnalogueValue_CF : public FCDA_CF
{

public:
	AnalogueValue_CF();
	virtual ~AnalogueValue_CF();

private:
	AnalogueValue attr;

};
#endif // !defined(EA_910D9B36_259C_4811_AD1B_502E82EA06ED__INCLUDED_)
