///////////////////////////////////////////////////////////
//  DomainLN.h
//  Implementation of the Class DomainLN
//  Created on:      15-Apr-2014 2:52:13 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_7EF18DE6_66CF_4adb_86B1_CC2A2B803710__INCLUDED_)
#define EA_7EF18DE6_66CF_4adb_86B1_CC2A2B803710__INCLUDED_

#include "INC_ModeBehaviour.h"
#include "INS_ModeBehaviour.h"
#include "INS_HealthState.h"
#include "LPL.h"
#include "LNDOM.h"

/**
 * Abstract type, holding common attributes of all the domain logical nodes
 * (corresponds to Common LN from the original IEC 61850-7-4).
 * part 7-4, sec. 5.3
 */
class DomainLN : public LNDOM
{

public:
	DomainLN();
	virtual ~DomainLN();
	/**
	 * 'DomainLN.Mod.ctlVal' is used to initiate the change in the operating mode of
	 * any domain logical node. The resulting operating mode is 'DomainLN.Mod.stVal'.
	 * See statechart diagram 'DomainLN.behStateMachine'.
	 */
	INC_ModeBehaviour Mod;
	/**
	 * 'DomainLN.Beh.stVal' is a read-only value, describing the behaviour of a
	 * (domain) logical node. It is dependent on the current operating mode of the
	 * logical node ('DomainLN.Mod.stVal'), and the current operating mode of the
	 * logical device that contains this (domain) logical node ('LLN0.Mod.stVal'). See
	 * statechart diagram 'DomainLN.behStateMachine'.
	 */
	INS_ModeBehaviour Beh;
	/**
	 * 'DomainLN.Health.stVal' reflects the state of the logical node related hardware
	 * and software. More detailed information related to the source of the problem
	 * may be provided by specific attribute of the logical node.
	 */
	INS_HealthState Health;
	/**
	 * Name plate of the logical node
	 */
	LPL NamPlt;

};
#endif // !defined(EA_7EF18DE6_66CF_4adb_86B1_CC2A2B803710__INCLUDED_)
