///////////////////////////////////////////////////////////
//  ING_ENUM.h
//  Implementation of the Class ING_ENUM
//  Created on:      15-Apr-2014 2:52:23 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_F0BA4828_C8E0_41b8_ACB8_DB54C13DA7F1__INCLUDED_)
#define EA_F0BA4828_C8E0_41b8_ACB8_DB54C13DA7F1__INCLUDED_

#include "ING.h"

/**
 * <font color="#141414">Supertype for different ING subtypes whose 'setVal',
 * 'minVal', 'maxVal' are restricted by an enumeration.</font>
 * <font color="#141414">
 * </font><font color="#141414">Not explicitly defined in the standard</font>
 */
class ING_ENUM : public ING
{

public:
	ING_ENUM();
	virtual ~ING_ENUM();

};
#endif // !defined(EA_F0BA4828_C8E0_41b8_ACB8_DB54C13DA7F1__INCLUDED_)
