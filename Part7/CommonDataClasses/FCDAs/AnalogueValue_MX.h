///////////////////////////////////////////////////////////
//  AnalogueValue_MX.h
//  Implementation of the Class AnalogueValue_MX
//  Created on:      15-Apr-2014 2:52:03 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_5FE1155D_707E_4620_B90A_8D489E52BA9A__INCLUDED_)
#define EA_5FE1155D_707E_4620_B90A_8D489E52BA9A__INCLUDED_

#include "AnalogueValue.h"
#include "FCDA_MX.h"

class AnalogueValue_MX : public FCDA_MX
{

public:
	AnalogueValue_MX();
	virtual ~AnalogueValue_MX();
    void setAttr(AnalogueValue attr);
    AnalogueValue getAttr();

private:
	AnalogueValue attr;

};
#endif // !defined(EA_5FE1155D_707E_4620_B90A_8D489E52BA9A__INCLUDED_)
