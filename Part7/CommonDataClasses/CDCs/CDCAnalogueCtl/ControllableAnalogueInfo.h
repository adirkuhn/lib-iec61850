///////////////////////////////////////////////////////////
//  ControllableAnalogueInfo.h
//  Implementation of the Class ControllableAnalogueInfo
//  Created on:      15-Apr-2014 2:52:10 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_378C0D8A_8B37_4166_84DE_0752EF8F5766__INCLUDED_)
#define EA_378C0D8A_8B37_4166_84DE_0752EF8F5766__INCLUDED_

#include "C_PrimitiveCDC.h"

/**
 * <font color="#141414">Abstract supertype for all controllable analogue
 * information CDCs</font>
 */
class ControllableAnalogueInfo : public C_PrimitiveCDC
{

public:
	ControllableAnalogueInfo();
	virtual ~ControllableAnalogueInfo();

};
#endif // !defined(EA_378C0D8A_8B37_4166_84DE_0752EF8F5766__INCLUDED_)
