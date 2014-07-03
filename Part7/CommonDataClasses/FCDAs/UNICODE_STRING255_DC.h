///////////////////////////////////////////////////////////
//  UNICODE_STRING255_DC.h
//  Implementation of the Class UNICODE_STRING255_DC
//  Created on:      15-Apr-2014 2:52:50 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_53B8297B_08C0_4e8b_948B_334AB71C0A8C__INCLUDED_)
#define EA_53B8297B_08C0_4e8b_948B_334AB71C0A8C__INCLUDED_

#include "UNICODE_STRING255.h"
#include "FCDA_DC.h"

class UNICODE_STRING255_DC : public FCDA_DC
{

public:
	UNICODE_STRING255_DC();
	virtual ~UNICODE_STRING255_DC();

private:
	UNICODE_STRING255 attr;

};
#endif // !defined(EA_53B8297B_08C0_4e8b_948B_334AB71C0A8C__INCLUDED_)
