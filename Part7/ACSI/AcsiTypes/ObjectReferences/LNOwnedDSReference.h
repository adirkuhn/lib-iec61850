///////////////////////////////////////////////////////////
//  LNOwnedDSReference.h
//  Implementation of the Class LNOwnedDSReference
//  Created on:      15-Apr-2014 2:52:32 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_E1FB89B1_08F1_4e96_913C_A3E726C6C8D5__INCLUDED_)
#define EA_E1FB89B1_08F1_4e96_913C_A3E726C6C8D5__INCLUDED_

#include "ObjectName.h"
#include "P_VISIBLE_STRING255.h"

/**
 * Type not explicitly specified in the standard. Naming for ConfiguredDS and
 * PersistentDS.
 */
class LNOwnedDSReference
{

public:
	LNOwnedDSReference();
	virtual ~LNOwnedDSReference();

	ObjectName getDsName();
	P_VISIBLE_STRING255 getRef();

};
#endif // !defined(EA_E1FB89B1_08F1_4e96_913C_A3E726C6C8D5__INCLUDED_)
