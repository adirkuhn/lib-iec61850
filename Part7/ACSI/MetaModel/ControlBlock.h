///////////////////////////////////////////////////////////
//  ControlBlock.h
//  Implementation of the Class ControlBlock
//  Created on:      15-Apr-2014 2:52:10 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_B9D74B89_984C_44d6_85BD_3A576133A62C__INCLUDED_)
#define EA_B9D74B89_984C_44d6_85BD_3A576133A62C__INCLUDED_

#include "CBReference.h"
#include "NamedIEC61850Object.h"

/**
 * Not explicitly defined in the standard. A control block in IEC61850 is the
 * concept that allows for configuring and controlling eventing, logging and
 * setting groups of data contained in logical nodes. This class is a useful place
 * to define, on need, behaviour common to all control blocks (e.g., raising
 * application events, or subscribing to application events).
 */
class ControlBlock : public NamedIEC61850Object
{

public:
	ControlBlock();
	virtual ~ControlBlock();

	CBReference getCbRef();

};
#endif // !defined(EA_B9D74B89_984C_44d6_85BD_3A576133A62C__INCLUDED_)
