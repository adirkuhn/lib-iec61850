///////////////////////////////////////////////////////////
//  LN0.h
//  Implementation of the Class LN0
//  Created on:      15-Apr-2014 2:52:31 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_5A48F9D7_A02B_4630_B909_60995539768F__INCLUDED_)
#define EA_5A48F9D7_A02B_4630_B909_60995539768F__INCLUDED_

//#include "LOG.h"
#include "MSVCB.h"
#include "LN.h"

/**
 * part 7-2, sec. 9
 * IEC 61850-7-4 specifies specialised class LLN0.
 */
class LN0 : public LN
{

public:
	LN0();
	virtual ~LN0();

    //LOG getLog();
	void getSgcb();
	void getGcbs();
	MSVCB getMsvcbs();
	void getUsvcbs();

};
#endif // !defined(EA_5A48F9D7_A02B_4630_B909_60995539768F__INCLUDED_)
