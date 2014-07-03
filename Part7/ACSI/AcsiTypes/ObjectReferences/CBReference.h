///////////////////////////////////////////////////////////
//  CBReference.h
//  Implementation of the Class CBReference
//  Created on:      15-Apr-2014 2:52:08 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_CC8103F1_7472_4676_98B6_219FB11A9D24__INCLUDED_)
#define EA_CC8103F1_7472_4676_98B6_219FB11A9D24__INCLUDED_

#include "ObjectName.h"
#include "P_VISIBLE_STRING255.h"
#include "ServiceFcKind.h"

/**
 * Type not explicitly specified in the standard. Naming for control blocks: SGCB,
 * BRCB, URCB, LCB, GCB, USVCB and MSVCB.
 */
class CBReference
{

public:
	CBReference();
	virtual ~CBReference();

	ObjectName getCbName();
	ServiceFcKind getFc();
	P_VISIBLE_STRING255 getRef();

};
#endif // !defined(EA_CC8103F1_7472_4676_98B6_219FB11A9D24__INCLUDED_)
