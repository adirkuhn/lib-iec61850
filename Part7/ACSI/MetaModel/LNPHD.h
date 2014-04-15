///////////////////////////////////////////////////////////
//  LNPHD.h
//  Implementation of the Class LNPHD
//  Created on:      15-Apr-2014 2:52:32 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_1E99B3EA_B003_48a4_AFFC_5C7025C23834__INCLUDED_)
#define EA_1E99B3EA_B003_48a4_AFFC_5C7025C23834__INCLUDED_

#include "LN.h"

/**
 * part 7-2, section 8.1.2.3
 * Not explicitly defined in the standard. It is however needed to represent
 * explicitly the cardinalities between LD and physical device logical node. IEC
 * 61850-7-4 specifies specialised class LPHD.
 */
class LNPHD : public LN
{

public:
	LNPHD();
	virtual ~LNPHD();

};
#endif // !defined(EA_1E99B3EA_B003_48a4_AFFC_5C7025C23834__INCLUDED_)
