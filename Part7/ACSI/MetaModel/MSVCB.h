///////////////////////////////////////////////////////////
//  MSVCB.h
//  Implementation of the Class MSVCB
//  Created on:      15-Apr-2014 2:52:35 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_8E5FD9DA_CB82_4739_A7A0_B252B884A603__INCLUDED_)
#define EA_8E5FD9DA_CB82_4739_A7A0_B252B884A603__INCLUDED_

#include "LNOwnedDS.h"
#include "SVCB.h"

/**
 * part 7-2, sec. 16
 */
class MSVCB : public SVCB
{

public:
	MSVCB();
	virtual ~MSVCB();

	LNOwnedDS getDs();
	void getDestinationAddress();

};
#endif // !defined(EA_8E5FD9DA_CB82_4739_A7A0_B252B884A603__INCLUDED_)
