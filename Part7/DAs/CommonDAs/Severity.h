///////////////////////////////////////////////////////////
//  Severity.h
//  Implementation of the Class Severity
//  Created on:      15-Apr-2014 2:52:46 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_B297AF54_4DBB_46dd_A0AC_C85E6DC624C9__INCLUDED_)
#define EA_B297AF54_4DBB_46dd_A0AC_C85E6DC624C9__INCLUDED_

#include "PrimitiveDA.h"
#include "SeverityKind.h"

/**
 * <font color="#141414">See SeverityKind.</font>
 */
class Severity : public PrimitiveDA
{

public:
	Severity();
	virtual ~Severity();

private:
	SeverityKind val;

};
#endif // !defined(EA_B297AF54_4DBB_46dd_A0AC_C85E6DC624C9__INCLUDED_)
