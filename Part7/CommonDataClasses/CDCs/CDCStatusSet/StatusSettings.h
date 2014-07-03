///////////////////////////////////////////////////////////
//  StatusSettings.h
//  Implementation of the Class StatusSettings
//  Created on:      15-Apr-2014 2:52:47 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_B87AB801_8432_45c5_A4A2_1286683C7BC1__INCLUDED_)
#define EA_B87AB801_8432_45c5_A4A2_1286683C7BC1__INCLUDED_

#include "VISIBLE_STRING255_DC.h"
#include "UNICODE_STRING255_DC.h"
#include "C_PrimitiveCDC.h"

/**
 * <font color="#141414">Abstract supertype for all status settings CDCs.</font>
 */
class StatusSettings : public C_PrimitiveCDC
{

public:
	StatusSettings();
	virtual ~StatusSettings();
	/**
	 * Textual description of the data
	 */
	VISIBLE_STRING255_DC d;
	/**
	 * Textual description of the data using unicode characters
	 */
	UNICODE_STRING255_DC dU;

};
#endif // !defined(EA_B87AB801_8432_45c5_A4A2_1286683C7BC1__INCLUDED_)
