///////////////////////////////////////////////////////////
//  MagReference.h
//  Implementation of the Class MagReference
//  Created on:      15-Apr-2014 2:52:33 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_0CC7B7F9_E843_4dfb_8396_D4AB8DB25925__INCLUDED_)
#define EA_0CC7B7F9_E843_4dfb_8396_D4AB8DB25925__INCLUDED_

#include "PrimitiveDA.h"
#include "MagReferenceKind.h"

/**
 * <font color="#141414">See MagReferenceKind.</font>
 */
class MagReference : public PrimitiveDA
{

public:
	MagReference();
	virtual ~MagReference();

private:
	MagReferenceKind val;

};
#endif // !defined(EA_0CC7B7F9_E843_4dfb_8396_D4AB8DB25925__INCLUDED_)
