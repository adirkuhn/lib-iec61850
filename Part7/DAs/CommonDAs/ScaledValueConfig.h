///////////////////////////////////////////////////////////
//  ScaledValueConfig.h
//  Implementation of the Class ScaledValueConfig
//  Created on:      15-Apr-2014 2:52:44 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_F9DAA124_7C00_4c8e_8C74_5088D5DCC311__INCLUDED_)
#define EA_F9DAA124_7C00_4c8e_8C74_5088D5DCC311__INCLUDED_

#include "P_FLOAT32.h"
#include "ComposedDA.h"

/**
 * part 7-3, tab. 4
 * Configuration of analogue value type shall be used to configure the INT value
 * representation of the analogue (FLOAT) value. The formula for conversion
 * between INT and FLOAT value is given with 'AnalogueValue' definition.
 */
class ScaledValueConfig : public ComposedDA
{

public:
	ScaledValueConfig();
	virtual ~ScaledValueConfig();
	/**
	 * Scaling factor 
	 */
	P_FLOAT32 scaleFactor;
	/**
	 * Offset
	 */
	P_FLOAT32 offset;

};
#endif // !defined(EA_F9DAA124_7C00_4c8e_8C74_5088D5DCC311__INCLUDED_)
