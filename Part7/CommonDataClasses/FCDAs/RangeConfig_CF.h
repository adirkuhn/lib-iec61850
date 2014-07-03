///////////////////////////////////////////////////////////
//  RangeConfig_CF.h
//  Implementation of the Class RangeConfig_CF
//  Created on:      15-Apr-2014 2:52:44 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_6C218CF3_20BD_4331_A247_EF8B9FDDF1EA__INCLUDED_)
#define EA_6C218CF3_20BD_4331_A247_EF8B9FDDF1EA__INCLUDED_

#include "RangeConfig.h"
#include "FCDA_CF.h"

class RangeConfig_CF : public FCDA_CF
{

public:
	RangeConfig_CF();
	virtual ~RangeConfig_CF();

private:
	RangeConfig attr;

};
#endif // !defined(EA_6C218CF3_20BD_4331_A247_EF8B9FDDF1EA__INCLUDED_)
