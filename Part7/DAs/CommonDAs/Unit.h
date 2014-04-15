///////////////////////////////////////////////////////////
//  Unit.h
//  Implementation of the Class Unit
//  Created on:      15-Apr-2014 2:52:50 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_A420FF00_D9C1_4f6d_8512_66B89E3611CC__INCLUDED_)
#define EA_A420FF00_D9C1_4f6d_8512_66B89E3611CC__INCLUDED_

#include "SIUnits.h"
#include "Multiplier.h"
#include "ComposedDA.h"

/**
 * See UnitKind.
 */
class Unit : public ComposedDA
{

public:
	Unit();
	virtual ~Unit();
	/**
	 * See SIUnits. 
	 */
	SIUnits SIUnit;
	/**
	 * The default value is 0 (i.e. multiplier = 1). See Multiplier. 
	 */
	Multiplier multiplier;

};
#endif // !defined(EA_A420FF00_D9C1_4f6d_8512_66B89E3611CC__INCLUDED_)
