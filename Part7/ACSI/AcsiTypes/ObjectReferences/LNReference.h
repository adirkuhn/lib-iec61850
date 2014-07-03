///////////////////////////////////////////////////////////
//  LNReference.h
//  Implementation of the Class LNReference
//  Created on:      15-Apr-2014 2:52:32 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_A03AC2D5_2F87_46bc_8465_98B7D03AD525__INCLUDED_)
#define EA_A03AC2D5_2F87_46bc_8465_98B7D03AD525__INCLUDED_

#include "ObjectName.h"
#include "P_VISIBLE_STRING255.h"

/**
 * Type not explicitly specified in the standard. Naming for LN.
 */
class LNReference
{

public:
	LNReference();
	virtual ~LNReference();

	ObjectName getLnName();
	P_VISIBLE_STRING255 getRef();

};
#endif // !defined(EA_A03AC2D5_2F87_46bc_8465_98B7D03AD525__INCLUDED_)
