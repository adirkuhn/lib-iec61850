///////////////////////////////////////////////////////////
//  C_ComposedCDC.h
//  Implementation of the Class C_ComposedCDC
//  Created on:      15-Apr-2014 2:52:07 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_D34B14F3_A9E8_4285_B6B3_37A405CC2493__INCLUDED_)
#define EA_D34B14F3_A9E8_4285_B6B3_37A405CC2493__INCLUDED_

#include "VISIBLE_STRING255_EX.h"
#include "ComposedCDC.h"

/**
 * <font color="#141414">Abstract supertype for all composed CDCs. It factors the
 * common attributes.</font>
 */
class C_ComposedCDC : public ComposedCDC
{

public:
	C_ComposedCDC();
	virtual ~C_ComposedCDC();
	/**
	 * See C_PrimitiveCDC.cdcNs.
	 */
	VISIBLE_STRING255_EX cdcNs;
	/**
	 * See C_PrimitiveCDC.cdcName.
	 */
	VISIBLE_STRING255_EX cdcName;
	/**
	 * See C_PrimitiveCDC.dataNs
	 */
	VISIBLE_STRING255_EX dataNs;

};
#endif // !defined(EA_D34B14F3_A9E8_4285_B6B3_37A405CC2493__INCLUDED_)
