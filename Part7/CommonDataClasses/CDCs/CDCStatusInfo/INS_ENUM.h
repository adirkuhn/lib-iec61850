///////////////////////////////////////////////////////////
//  INS_ENUM.h
//  Implementation of the Class INS_ENUM
//  Created on:      15-Apr-2014 2:52:26 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_EECBEB6D_268F_4bf2_9263_3537BAC11FB8__INCLUDED_)
#define EA_EECBEB6D_268F_4bf2_9263_3537BAC11FB8__INCLUDED_

#include "INS.h"

/**
 * Supertype for different INS subtypes whose 'stVal', 'subVal' are restricted by
 * an enumeration.
 * Not explicitly defined in the standard.
 */
class INS_ENUM : public INS
{

public:
	INS_ENUM();
	virtual ~INS_ENUM();

};
#endif // !defined(EA_EECBEB6D_268F_4bf2_9263_3537BAC11FB8__INCLUDED_)
