///////////////////////////////////////////////////////////
//  AnalogueValue_SG.h
//  Implementation of the Class AnalogueValue_SG
//  Created on:      15-Apr-2014 2:52:04 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_CC0C6607_14F9_442c_BFBB_6E06B5421005__INCLUDED_)
#define EA_CC0C6607_14F9_442c_BFBB_6E06B5421005__INCLUDED_

#include "AnalogueValue.h"
#include "FCDA_SG.h"

class AnalogueValue_SG : public FCDA_SG
{

public:
	AnalogueValue_SG();
	virtual ~AnalogueValue_SG();

private:
	AnalogueValue attr;

};
#endif // !defined(EA_CC0C6607_14F9_442c_BFBB_6E06B5421005__INCLUDED_)
