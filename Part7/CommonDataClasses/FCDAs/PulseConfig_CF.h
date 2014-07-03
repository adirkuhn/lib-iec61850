///////////////////////////////////////////////////////////
//  PulseConfig_CF.h
//  Implementation of the Class PulseConfig_CF
//  Created on:      15-Apr-2014 2:52:42 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_978A1215_7EE9_474f_AB5A_74D5B1B8921A__INCLUDED_)
#define EA_978A1215_7EE9_474f_AB5A_74D5B1B8921A__INCLUDED_

#include "PulseConfig.h"
#include "FCDA_CF.h"

class PulseConfig_CF : public FCDA_CF
{

public:
	PulseConfig_CF();
	virtual ~PulseConfig_CF();

private:
	PulseConfig attr;

};
#endif // !defined(EA_978A1215_7EE9_474f_AB5A_74D5B1B8921A__INCLUDED_)
