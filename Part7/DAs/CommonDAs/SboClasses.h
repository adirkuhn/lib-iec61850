///////////////////////////////////////////////////////////
//  SboClasses.h
//  Implementation of the Class SboClasses
//  Created on:      15-Apr-2014 2:52:44 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_44E268C7_F38A_4a31_9535_7617AECD7D5B__INCLUDED_)
#define EA_44E268C7_F38A_4a31_9535_7617AECD7D5B__INCLUDED_

#include "PrimitiveDA.h"
#include "SboClassesKind.h"

/**
 * <font color="#141414">See SboClassesKind.</font>
 */
class SboClasses : public PrimitiveDA
{

public:
	SboClasses();
	virtual ~SboClasses();

private:
	SboClassesKind val;

};
#endif // !defined(EA_44E268C7_F38A_4a31_9535_7617AECD7D5B__INCLUDED_)
