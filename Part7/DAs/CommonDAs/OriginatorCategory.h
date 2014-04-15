///////////////////////////////////////////////////////////
//  OriginatorCategory.h
//  Implementation of the Class OriginatorCategory
//  Created on:      15-Apr-2014 2:52:38 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_D0165BA1_65A4_4c01_8F9E_2AEBA2D39CB2__INCLUDED_)
#define EA_D0165BA1_65A4_4c01_8F9E_2AEBA2D39CB2__INCLUDED_

#include "PrimitiveDA.h"
#include "OriginatorCategoryKind.h"

/**
 * <font color="#141414">See OriginatorCategoryKind.</font>
 */
class OriginatorCategory : public PrimitiveDA
{

public:
	OriginatorCategory();
	virtual ~OriginatorCategory();

private:
	OriginatorCategoryKind val;

};
#endif // !defined(EA_D0165BA1_65A4_4c01_8F9E_2AEBA2D39CB2__INCLUDED_)
