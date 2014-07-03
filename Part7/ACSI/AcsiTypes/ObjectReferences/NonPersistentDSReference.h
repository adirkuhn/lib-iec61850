///////////////////////////////////////////////////////////
//  NonPersistentDSReference.h
//  Implementation of the Class NonPersistentDSReference
//  Created on:      15-Apr-2014 2:52:37 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_C433C05F_FFE2_4fbd_AD37_213672FFEEEB__INCLUDED_)
#define EA_C433C05F_FFE2_4fbd_AD37_213672FFEEEB__INCLUDED_

#include "ObjectName.h"
#include "P_VISIBLE_STRING255.h"

/**
 * Type not explicitly specified in the standard. Naming for NonPersistentDS.
 */
class NonPersistentDSReference
{

public:
	NonPersistentDSReference();
	virtual ~NonPersistentDSReference();

	ObjectName getDsName();
	P_VISIBLE_STRING255 getRef();

};
#endif // !defined(EA_C433C05F_FFE2_4fbd_AD37_213672FFEEEB__INCLUDED_)
