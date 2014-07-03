///////////////////////////////////////////////////////////
//  AnalogueValue_SP.h
//  Implementation of the Class AnalogueValue_SP
//  Created on:      15-Apr-2014 2:52:04 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_BC305E38_DC4B_4fc0_9B0C_426ABF643BE6__INCLUDED_)
#define EA_BC305E38_DC4B_4fc0_9B0C_426ABF643BE6__INCLUDED_

#include "AnalogueValue.h"
#include "FCDA_SP.h"

class AnalogueValue_SP : public FCDA_SP
{

public:
	AnalogueValue_SP();
	virtual ~AnalogueValue_SP();
    void setAttr(AnalogueValue attr);
    AnalogueValue getAttr();

private:
	AnalogueValue attr;

};
#endif // !defined(EA_BC305E38_DC4B_4fc0_9B0C_426ABF643BE6__INCLUDED_)
