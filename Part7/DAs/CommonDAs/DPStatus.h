///////////////////////////////////////////////////////////
//  DPStatus.h
//  Implementation of the Class DPStatus
//  Created on:      15-Apr-2014 2:52:14 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_139F0CBB_91DE_4660_867E_0C164D5B65C8__INCLUDED_)
#define EA_139F0CBB_91DE_4660_867E_0C164D5B65C8__INCLUDED_

#include "PrimitiveDA.h"
#include "DPStatusKind.h"

/**
 * <font color="#141414">See DPStatusKind.</font>
 */
class DPStatus : public PrimitiveDA
{

public:
	DPStatus();
	virtual ~DPStatus();

private:
	DPStatusKind val;

};
#endif // !defined(EA_139F0CBB_91DE_4660_867E_0C164D5B65C8__INCLUDED_)
