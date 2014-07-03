///////////////////////////////////////////////////////////
//  FILEReference.h
//  Implementation of the Class FILEReference
//  Created on:      15-Apr-2014 2:52:19 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_ED7C7FBE_0558_4f65_B447_5AD1C443F499__INCLUDED_)
#define EA_ED7C7FBE_0558_4f65_B447_5AD1C443F499__INCLUDED_

#include "P_VISIBLE_STRING255.h"

/**
 * Type not explicitly specified in the standard. Naming for FILE.
 * <b>Question</b>: Shouldn't we redefine here FileName to be really the name (and
 * not the name+path), add FilePath, and add DirectorySeparator (like "/")?
 */
class FILEReference
{

public:
	FILEReference();
	virtual ~FILEReference();

	P_VISIBLE_STRING255 getFileName();
	P_VISIBLE_STRING255 getRef();

};
#endif // !defined(EA_ED7C7FBE_0558_4f65_B447_5AD1C443F499__INCLUDED_)
