///////////////////////////////////////////////////////////
//  ComposedCDC.h
//  Implementation of the Class ComposedCDC
//  Created on:      15-Apr-2014 2:52:09 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_9426B323_9DBD_40a1_B68E_3D96152ED210__INCLUDED_)
#define EA_9426B323_9DBD_40a1_B68E_3D96152ED210__INCLUDED_

#include "P_BOOLEAN.h"
#include "CDC.h"
#include "PrimitiveCDC.h"

/**
 * A CDC that contains not only FCD(A)s, but CDCs as well. Example is WYE, which
 * has Data of type CMV.
 */
class ComposedCDC : public CDC
{

public:
	ComposedCDC();
	virtual ~ComposedCDC();
	PrimitiveCDC *m_PrimitiveCDC;

	P_BOOLEAN isPrimitive();
	CDC getCdcs();

};
#endif // !defined(EA_9426B323_9DBD_40a1_B68E_3D96152ED210__INCLUDED_)
