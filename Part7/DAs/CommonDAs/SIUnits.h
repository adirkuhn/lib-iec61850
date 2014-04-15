///////////////////////////////////////////////////////////
//  SIUnits.h
//  Implementation of the Class SIUnits
//  Created on:      15-Apr-2014 2:52:46 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_E72B1B15_54C9_4430_88D4_4014CC5ABAAB__INCLUDED_)
#define EA_E72B1B15_54C9_4430_88D4_4014CC5ABAAB__INCLUDED_

#include "PrimitiveDA.h"
#include "SIUnitsKind.h"

/**
 * See SIUnitsKind.
 */
class SIUnits : public PrimitiveDA
{

public:
	SIUnits();
	virtual ~SIUnits();

private:
	SIUnitsKind val;

};
#endif // !defined(EA_E72B1B15_54C9_4430_88D4_4014CC5ABAAB__INCLUDED_)
