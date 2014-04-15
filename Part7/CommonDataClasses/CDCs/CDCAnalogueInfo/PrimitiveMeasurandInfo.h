///////////////////////////////////////////////////////////
//  PrimitiveMeasurandInfo.h
//  Implementation of the Class PrimitiveMeasurandInfo
//  Created on:      15-Apr-2014 2:52:42 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_64146AA7_92AA_42ec_870E_D55DD1F8CF97__INCLUDED_)
#define EA_64146AA7_92AA_42ec_870E_D55DD1F8CF97__INCLUDED_

#include "VISIBLE_STRING255_DC.h"
#include "UNICODE_STRING255_DC.h"
#include "C_PrimitiveCDC.h"

/**
 * Abstract supertype for all primitive measurand information CDCs.
 */
class PrimitiveMeasurandInfo : public C_PrimitiveCDC
{

public:
	PrimitiveMeasurandInfo();
	virtual ~PrimitiveMeasurandInfo();
	/**
	 * Textual description of the data
	 */
	VISIBLE_STRING255_DC d;
	/**
	 * Textual description of the data using unicode characters
	 */
	UNICODE_STRING255_DC dU;

};
#endif // !defined(EA_64146AA7_92AA_42ec_870E_D55DD1F8CF97__INCLUDED_)
