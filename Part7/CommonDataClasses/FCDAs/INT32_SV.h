///////////////////////////////////////////////////////////
//  INT32_SV.h
//  Implementation of the Class INT32_SV
//  Created on:      15-Apr-2014 2:52:29 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_915E6809_DE95_43e4_938B_5EC6C69DBAD6__INCLUDED_)
#define EA_915E6809_DE95_43e4_938B_5EC6C69DBAD6__INCLUDED_

#include "INT32.h"
#include "FCDA_SV.h"

class INT32_SV : public FCDA_SV
{

public:
	INT32_SV();
	virtual ~INT32_SV();

private:
	INT32 attr;

};
#endif // !defined(EA_915E6809_DE95_43e4_938B_5EC6C69DBAD6__INCLUDED_)
