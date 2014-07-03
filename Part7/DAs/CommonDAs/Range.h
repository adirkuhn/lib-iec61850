///////////////////////////////////////////////////////////
//  Range.h
//  Implementation of the Class Range
//  Created on:      15-Apr-2014 2:52:43 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_C39985E8_E6DB_42b1_A010_735AC6470DCA__INCLUDED_)
#define EA_C39985E8_E6DB_42b1_A010_735AC6470DCA__INCLUDED_

#include "PrimitiveDA.h"
#include "RangeKind.h"

/**
 * <font color="#141414">See RangeKind.</font>
 */
class Range : public PrimitiveDA
{

public:
	Range();
	virtual ~Range();

private:
	RangeKind val;

};
#endif // !defined(EA_C39985E8_E6DB_42b1_A010_735AC6470DCA__INCLUDED_)
