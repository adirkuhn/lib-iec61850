///////////////////////////////////////////////////////////
//  Multiplier.h
//  Implementation of the Class Multiplier
//  Created on:      15-Apr-2014 2:52:36 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_C840683D_B457_41b7_984F_F7493C539253__INCLUDED_)
#define EA_C840683D_B457_41b7_984F_F7493C539253__INCLUDED_

#include "PrimitiveDA.h"
#include "MultiplierKind.h"

/**
 * See MultiplierKind.
 */
class Multiplier : public PrimitiveDA
{

public:
	Multiplier();
	virtual ~Multiplier();

private:
	MultiplierKind val;

};
#endif // !defined(EA_C840683D_B457_41b7_984F_F7493C539253__INCLUDED_)
