///////////////////////////////////////////////////////////
//  ING_TriggerSource.h
//  Implementation of the Class ING_TriggerSource
//  Created on:      15-Apr-2014 2:52:25 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_80A07E03_EBFF_4f66_BA3F_7C3D3FE67209__INCLUDED_)
#define EA_80A07E03_EBFF_4f66_BA3F_7C3D3FE67209__INCLUDED_

#include "ING_ENUM.h"

/**
 * <font color="#141414">Possible values for 'setVal', 'minVal', 'maxVal' are
 * restricted by enumeration. Used for: TrgMod.</font>
 */
class ING_TriggerSource : public ING_ENUM
{

public:
	ING_TriggerSource();
	virtual ~ING_TriggerSource();

};
#endif // !defined(EA_80A07E03_EBFF_4f66_BA3F_7C3D3FE67209__INCLUDED_)
