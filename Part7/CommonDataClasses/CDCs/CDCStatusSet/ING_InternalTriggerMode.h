///////////////////////////////////////////////////////////
//  ING_InternalTriggerMode.h
//  Implementation of the Class ING_InternalTriggerMode
//  Created on:      15-Apr-2014 2:52:23 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_F3C9C899_5DF1_4403_94C9_41C792517968__INCLUDED_)
#define EA_F3C9C899_5DF1_4403_94C9_41C792517968__INCLUDED_

#include "ING_ENUM.h"

/**
 * <font color="#141414">Possible values for 'setVal', 'minVal', 'maxVal' are
 * restricted by enumeration. Used for: LevMod</font>
 */
class ING_InternalTriggerMode : public ING_ENUM
{

public:
	ING_InternalTriggerMode();
	virtual ~ING_InternalTriggerMode();

};
#endif // !defined(EA_F3C9C899_5DF1_4403_94C9_41C792517968__INCLUDED_)
