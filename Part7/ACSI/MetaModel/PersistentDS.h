///////////////////////////////////////////////////////////
//  PersistentDS.h
//  Implementation of the Class PersistentDS
//  Created on:      15-Apr-2014 2:52:41 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_DE6B4177_5A26_468b_A8E8_9B973D5BB649__INCLUDED_)
#define EA_DE6B4177_5A26_468b_A8E8_9B973D5BB649__INCLUDED_

#include "P_BOOLEAN.h"
#include "LNOwnedDS.h"

/**
 * Not explicitly defined in the standard. A persistent DS instance is created by
 * one TPAA client on the fly and is visible to all TPAA clients. It is called
 * persistent because its lifecycle is not bound the TPAA client that created it
 * (i.e., the server keeps it even when the TPAA over which the instance has been
 * created is released or aborted). It shall not be deleted as long as a control
 * class (such as RCB or GCB) references it.
 */
class PersistentDS : public LNOwnedDS
{

public:
	PersistentDS();
	virtual ~PersistentDS();

	P_BOOLEAN isReferenced();

};
#endif // !defined(EA_DE6B4177_5A26_468b_A8E8_9B973D5BB649__INCLUDED_)
