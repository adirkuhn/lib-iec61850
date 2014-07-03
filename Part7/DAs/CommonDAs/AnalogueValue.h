///////////////////////////////////////////////////////////
//  AnalogueValue.h
//  Implementation of the Class AnalogueValue
//  Created on:      15-Apr-2014 2:52:03 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_BAC622EE_D8D4_44eb_AA59_A07B2DDFF8A4__INCLUDED_)
#define EA_BAC622EE_D8D4_44eb_AA59_A07B2DDFF8A4__INCLUDED_

#include "P_INT32.h"
#include "P_FLOAT32.h"
#include "ComposedDA.h"

/**
 * part 7-3, tab. 3
 * Analogue values may be represented as a basic data type INT (attribute i) or as
 * FLOAT (attribute f). At least one of the attributes shall be used. If both i
 * and f exist, the application has to insure that both values remain consistent.
 * The latest value set by the communication service shall be used to update the
 * other value. As an example, if xxx.f is written, the application shall update
 * xxx.i accordingly.
 * The formula to convert between i and f shall be:
 * f * 10^units.multiplier = (i * ScaledValueConfig.scaleFactor) +
 * ScaledValueConfig.offset
 * It shall be true within acceptable error when i, scaleFactor, offset and f are
 * all present.
 * NOTE - The reason for both INT and FLOAT representation is so that IEDs without
 * FLOAT capabilities shall be enabled to support analogue values. In this case
 * the scaleFactor and offset may be exchanged offline between clients and servers.
 */
class AnalogueValue : public ComposedDA
{

public:
	AnalogueValue();
	virtual ~AnalogueValue();
	/**
	 * The value of i shall be an integer representation of the measured value.
	 */
	P_INT32 i;
	/**
	 * The value of f shall be the FLOAT representation of the measured value. f shall
	 * represent the technological value in SI units. 
	 */
	P_FLOAT32 f;

};
#endif // !defined(EA_BAC622EE_D8D4_44eb_AA59_A07B2DDFF8A4__INCLUDED_)
