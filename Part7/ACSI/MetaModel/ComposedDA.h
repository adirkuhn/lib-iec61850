///////////////////////////////////////////////////////////
//  ComposedDA.h
//  Implementation of the Class ComposedDA
//  Created on:      15-Apr-2014 2:52:09 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_406C0ACF_725C_47f6_8609_95C6C80DC514__INCLUDED_)
#define EA_406C0ACF_725C_47f6_8609_95C6C80DC514__INCLUDED_

#include "P_BOOLEAN.h"
#include "DA.h"

/**
 * Not explicitly defined in the standard. Composed data attribute contains other
 * DAs (composed or primitive). Examples are Vector, which has attributes of type
 * AnalogueValue (ComposedDA), and AnalogueValue, which has attributes of INT32
 * and FLOAT32 (both PrimitiveDAs).
 */
class ComposedDA : public DA
{

public:
	ComposedDA();
	virtual ~ComposedDA();
	DA *m_DA;

	P_BOOLEAN isPrimitive();
	DA getDas();

};
#endif // !defined(EA_406C0ACF_725C_47f6_8609_95C6C80DC514__INCLUDED_)
