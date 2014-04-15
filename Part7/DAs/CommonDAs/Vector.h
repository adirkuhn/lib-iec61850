///////////////////////////////////////////////////////////
//  Vector.h
//  Implementation of the Class Vector
//  Created on:      15-Apr-2014 2:52:51 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_65AA5381_FD08_413c_98AA_34CD5F9667BC__INCLUDED_)
#define EA_65AA5381_FD08_413c_98AA_34CD5F9667BC__INCLUDED_

#include "AnalogueValue.h"
#include "ComposedDA.h"

/**
 * <font color="#141414">part 7-3, tab. 11</font>
 */
class Vector : public ComposedDA
{

public:
	Vector();
	virtual ~Vector();
	/**
	 * The magnitude of the complex value
	 */
	AnalogueValue mag;
	/**
	 * The angle of the complex value in degrees. The angle reference is defined in
	 * the context where the Vector type is used.
	 */
	AnalogueValue ang;

};
#endif // !defined(EA_65AA5381_FD08_413c_98AA_34CD5F9667BC__INCLUDED_)
