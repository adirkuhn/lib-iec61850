///////////////////////////////////////////////////////////
//  LDReference.h
//  Implementation of the Class LDReference
//  Created on:      15-Apr-2014 2:52:31 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_22DC59B7_DF9F_4687_B6B0_41107FEAAD9D__INCLUDED_)
#define EA_22DC59B7_DF9F_4687_B6B0_41107FEAAD9D__INCLUDED_

#include "ObjectName.h"
#include "P_VISIBLE_STRING255.h"

/**
 * Type not explicitly specified in the standard. Naming for LD.
 */
class LDReference
{

public:
	LDReference();
	virtual ~LDReference();

	ObjectName getLdName();
	P_VISIBLE_STRING255 getRef();

};
#endif // !defined(EA_22DC59B7_DF9F_4687_B6B0_41107FEAAD9D__INCLUDED_)
