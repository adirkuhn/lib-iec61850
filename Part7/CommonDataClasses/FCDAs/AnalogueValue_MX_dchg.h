///////////////////////////////////////////////////////////
//  AnalogueValue_MX_dchg.h
//  Implementation of the Class AnalogueValue_MX_dchg
//  Created on:      15-Apr-2014 2:52:03 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_E0581C57_0907_4133_9559_7737490D090F__INCLUDED_)
#define EA_E0581C57_0907_4133_9559_7737490D090F__INCLUDED_

#include "AnalogueValue.h"
#include "FCDA_MX_dchg.h"

class AnalogueValue_MX_dchg : public FCDA_MX_dchg
{

public:
	AnalogueValue_MX_dchg();
	virtual ~AnalogueValue_MX_dchg();

private:
	AnalogueValue attr;

};
#endif // !defined(EA_E0581C57_0907_4133_9559_7737490D090F__INCLUDED_)
