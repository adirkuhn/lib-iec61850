///////////////////////////////////////////////////////////
//  VectorArray.h
//  Implementation of the Class VectorArray
//  Created on:      15-Apr-2014 2:52:51 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_14C933C3_5847_4330_965C_61ADCC6001B4__INCLUDED_)
#define EA_14C933C3_5847_4330_965C_61ADCC6001B4__INCLUDED_

#include "Vector.h"
#include "ComposedDA.h"

/**
 * part 7-3, tab.11
 * Not explicitly defined in the standard. Necessary to hold an array of Vector-s.
 * 
 * Modelling note: Here appears ARRAY [0..numHar] of Vector, with numHar greater
 * than 1, which means that ARRAY should have at least 3 elements, starting with
 * index 0.
 */
class VectorArray : public ComposedDA
{

public:
	VectorArray();
	virtual ~VectorArray();
	Vector *m_Vector;

};
#endif // !defined(EA_14C933C3_5847_4330_965C_61ADCC6001B4__INCLUDED_)
