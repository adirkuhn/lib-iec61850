///////////////////////////////////////////////////////////
//  INC_ENUM.h
//  Implementation of the Class INC_ENUM
//  Created on:      15-Apr-2014 2:52:22 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_94DE4CDB_1301_4f4e_8F57_E3C6562A34FC__INCLUDED_)
#define EA_94DE4CDB_1301_4f4e_8F57_E3C6562A34FC__INCLUDED_

#include "INC.h"

/**
 * <font color="#141414">Supertype for different INC subtypes whose 'stVal',
 * 'ctlVal', 'subVal', 'minVal', 'maxVal' are restricted by an enumeration.
 * </font>
 * <font color="#141414">
 * </font><font color="#141414">Not explicitly defined in the standard.</font>
 */
class INC_ENUM : public INC
{

public:
	INC_ENUM();
	virtual ~INC_ENUM();

};
#endif // !defined(EA_94DE4CDB_1301_4f4e_8F57_E3C6562A34FC__INCLUDED_)
