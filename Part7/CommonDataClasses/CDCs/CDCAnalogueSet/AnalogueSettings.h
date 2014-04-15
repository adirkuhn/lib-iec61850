///////////////////////////////////////////////////////////
//  AnalogueSettings.h
//  Implementation of the Class AnalogueSettings
//  Created on:      15-Apr-2014 2:52:03 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_B4EFE89B_5F5B_497f_AB9E_47C525E2310D__INCLUDED_)
#define EA_B4EFE89B_5F5B_497f_AB9E_47C525E2310D__INCLUDED_

#include "VISIBLE_STRING255_DC.h"
#include "UNICODE_STRING255_DC.h"
#include "C_PrimitiveCDC.h"

/**
 * <font color="#141414">Abstract supertype for all analogue settings CDCs.</font>
 */
class AnalogueSettings : public C_PrimitiveCDC
{

public:
	AnalogueSettings();
	virtual ~AnalogueSettings();
	/**
	 * Textual description of the data.
	 */
	VISIBLE_STRING255_DC d;
	/**
	 * Textual description of the data using unicode characters.
	 */
	UNICODE_STRING255_DC dU;

};
#endif // !defined(EA_B4EFE89B_5F5B_497f_AB9E_47C525E2310D__INCLUDED_)
