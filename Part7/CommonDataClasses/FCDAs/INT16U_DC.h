///////////////////////////////////////////////////////////
//  INT16U_DC.h
//  Implementation of the Class INT16U_DC
//  Created on:      15-Apr-2014 2:52:28 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_FC1C6DE7_1F57_4b26_9683_155EA70CCCD6__INCLUDED_)
#define EA_FC1C6DE7_1F57_4b26_9683_155EA70CCCD6__INCLUDED_

#include "INT16U.h"
#include "FCDA_DC.h"

class INT16U_DC : public FCDA_DC
{

public:
	INT16U_DC();
	virtual ~INT16U_DC();

private:
	INT16U attr;

};
#endif // !defined(EA_FC1C6DE7_1F57_4b26_9683_155EA70CCCD6__INCLUDED_)
