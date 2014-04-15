///////////////////////////////////////////////////////////
//  CDCReference.h
//  Implementation of the Class CDCReference
//  Created on:      15-Apr-2014 2:52:08 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_0C2B911A_E980_4b29_BD31_F9B7F1EFB433__INCLUDED_)
#define EA_0C2B911A_E980_4b29_BD31_F9B7F1EFB433__INCLUDED_

#include "ObjectName.h"
#include "P_VISIBLE_STRING255.h"

/**
 * Type not explicitly specified in the standard. Naming for CDC.
 */
class CDCReference
{

public:
	CDCReference();
	virtual ~CDCReference();

	ObjectName getDataName1();
	ObjectName getDataName2();
	P_VISIBLE_STRING255 getRef();

};
#endif // !defined(EA_0C2B911A_E980_4b29_BD31_F9B7F1EFB433__INCLUDED_)
