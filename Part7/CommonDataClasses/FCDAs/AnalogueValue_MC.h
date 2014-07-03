///////////////////////////////////////////////////////////
//  AnalogueValue_MC.h
//  Implementation of the Class AnalogueValue_MC
//  Created on:      15-Apr-2014 2:52:03 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_F4C2D14C_3678_4dd2_B3C0_4BB029495CFC__INCLUDED_)
#define EA_F4C2D14C_3678_4dd2_B3C0_4BB029495CFC__INCLUDED_

#include "AnalogueValue.h"
#include "FCDA_MC.h"

class AnalogueValue_MC : public FCDA_MC
{

public:
	AnalogueValue_MC();
	virtual ~AnalogueValue_MC();

private:
	AnalogueValue attr;

};
#endif // !defined(EA_F4C2D14C_3678_4dd2_B3C0_4BB029495CFC__INCLUDED_)
