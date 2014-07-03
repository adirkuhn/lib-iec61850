///////////////////////////////////////////////////////////
//  Severity_ST.h
//  Implementation of the Class Severity_ST
//  Created on:      15-Apr-2014 2:52:46 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_2F80CE95_0BE0_48c9_AABD_2BE90069B16A__INCLUDED_)
#define EA_2F80CE95_0BE0_48c9_AABD_2BE90069B16A__INCLUDED_

#include "Severity.h"
#include "FCDA_ST.h"

class Severity_ST : public FCDA_ST
{

public:
	Severity_ST();
	virtual ~Severity_ST();

private:
	Severity attr;

};
#endif // !defined(EA_2F80CE95_0BE0_48c9_AABD_2BE90069B16A__INCLUDED_)
