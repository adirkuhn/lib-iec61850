///////////////////////////////////////////////////////////
//  PrimitiveDA.h
//  Implementation of the Class PrimitiveDA
//  Created on:      15-Apr-2014 2:52:42 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_FC495A23_A61F_4667_84CD_113178FDC52E__INCLUDED_)
#define EA_FC495A23_A61F_4667_84CD_113178FDC52E__INCLUDED_

#include "P_BOOLEAN.h"
#include "DA.h"

/**
 * Not explicitly defined in the standard. Primitive data attribute has only a
 * value field of some primitive type (e.g., FLOAT32 has value of type P_FLOAT32).
 */
class PrimitiveDA : public DA
{

public:
	PrimitiveDA();
	virtual ~PrimitiveDA();

	P_BOOLEAN isPrimitive();
	void getValue();

};
#endif // !defined(EA_FC495A23_A61F_4667_84CD_113178FDC52E__INCLUDED_)
