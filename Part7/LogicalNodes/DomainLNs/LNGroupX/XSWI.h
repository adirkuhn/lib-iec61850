///////////////////////////////////////////////////////////
//  XSWI.h
//  Implementation of the Class XSWI
//  Created on:      15-Apr-2014 2:52:53 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_434E6231_D356_4b4b_AF2E_B4058EBD53E3__INCLUDED_)
#define EA_434E6231_D356_4b4b_AF2E_B4058EBD53E3__INCLUDED_

#include "INS_SwitchType.h"
#include "INS_SwitchingCapability.h"
#include "GroupX.h"

/**
 * Circuit switch is a switch without short circuit breaking capability, such as
 * disconnector, air break switch, earthing switch, etc. Additional logical nodes
 * (e.g., SIMS, etc.) may be required to complete the logical model for the switch
 * being represented. The closing and opening commands shall be subscribed from
 * CSWI. If no services with real-time capability are available between CSWI and
 * XSWI, the opening and closing commands are performed with a GSEMessage (see IEC
 * 61850-7-2).
 * For modelling per phase one instance per phase shall be created.
 * part 7-4, sec. 5.12.2
 */
class XSWI : public GroupX
{

public:
	XSWI();
	virtual ~XSWI();
	/**
	 * 'XSWI.SwTyp.stVal' is the type of the switch
	 */
	INS_SwitchType SwTyp;
	/**
	 * 'XSWI.SwOpCap.stVal' is the operating capability of the switch: 'XSWI.SwOpCap.
	 * stVal' = 'XSWI.MaxOpCap.stVal'+1
	 */
	INS_SwitchingCapability SwOpCap;
	/**
	 * 'XSWI.MaxOpCap.stVal' is the operating capability of the switch when fully
	 * charged
	 */
	INS_SwitchingCapability MaxOpCap;

};
#endif // !defined(EA_434E6231_D356_4b4b_AF2E_B4058EBD53E3__INCLUDED_)
