///////////////////////////////////////////////////////////
//  VISIBLE_STRING64_SV.h
//  Implementation of the Class VISIBLE_STRING64_SV
//  Created on:      15-Apr-2014 2:52:52 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_3AE31FD3_9D2B_46af_81E6_51A752D98941__INCLUDED_)
#define EA_3AE31FD3_9D2B_46af_81E6_51A752D98941__INCLUDED_

#include "VISIBLE_STRING64.h"
#include "FCDA_SV.h"

class VISIBLE_STRING64_SV : public FCDA_SV
{

public:
	VISIBLE_STRING64_SV();
	virtual ~VISIBLE_STRING64_SV();

private:
	VISIBLE_STRING64 attr;

};
#endif // !defined(EA_3AE31FD3_9D2B_46af_81E6_51A752D98941__INCLUDED_)
