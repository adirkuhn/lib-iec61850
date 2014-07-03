///////////////////////////////////////////////////////////
//  PrimitiveCDC.h
//  Implementation of the Class PrimitiveCDC
//  Created on:      15-Apr-2014 2:52:42 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_AF736835_9F54_4c17_9DE5_328012D9A0B9__INCLUDED_)
#define EA_AF736835_9F54_4c17_9DE5_328012D9A0B9__INCLUDED_

#include "P_BOOLEAN.h"
#include "CDC.h"

/**
 * A CDC that contains FCD(A)s only.
 */
class PrimitiveCDC : public CDC
{

public:
	PrimitiveCDC();
	virtual ~PrimitiveCDC();

	P_BOOLEAN isPrimitive();

};
#endif // !defined(EA_AF736835_9F54_4c17_9DE5_328012D9A0B9__INCLUDED_)
