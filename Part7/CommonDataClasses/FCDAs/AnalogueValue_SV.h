///////////////////////////////////////////////////////////
//  AnalogueValue_SV.h
//  Implementation of the Class AnalogueValue_SV
//  Created on:      15-Apr-2014 2:52:04 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_738F7943_6311_40e5_BF90_DD1DC534E540__INCLUDED_)
#define EA_738F7943_6311_40e5_BF90_DD1DC534E540__INCLUDED_

#include "AnalogueValue.h"
#include "FCDA_SV.h"

class AnalogueValue_SV : public FCDA_SV
{

public:
	AnalogueValue_SV();
	virtual ~AnalogueValue_SV();

private:
	AnalogueValue attr;

};
#endif // !defined(EA_738F7943_6311_40e5_BF90_DD1DC534E540__INCLUDED_)
