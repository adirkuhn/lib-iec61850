///////////////////////////////////////////////////////////
//  GroupX.h
//  Implementation of the Class GroupX
//  Created on:      15-Apr-2014 2:52:20 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_AAFF8485_FB44_44d4_91F2_35CF8E69EBE9__INCLUDED_)
#define EA_AAFF8485_FB44_44d4_91F2_35CF8E69EBE9__INCLUDED_

#include "SPS.h"
#include "INS_HealthState.h"
#include "DPL.h"
#include "INS.h"
#include "DPC.h"
#include "SPC.h"
#include "DomainLN.h"

/**
 * Abstract type, holding common attributes of all the logical nodes in this group.
 * 
 * Not defined as such in the standard.
 */
class GroupX : public DomainLN
{

public:
	GroupX();
	virtual ~GroupX();
	/**
	 * 'GroupX.Loc.stVal=TRUE' stands for local (direct operation on the circuit
	 * breaker/switch), while ''GroupX.Loc.stVal=FALSE' stands for remote operation
	 * (from a bay unit). The changeover is always done locally, with a physical key
	 * or toggle switch, which may have a set of contacts from which the position can
	 * be read.
	 */
	SPS Loc;
	/**
	 * 'GroupX.EEHealth.stVal' reflects the state of external (primary) equipment to
	 * which the logical node is associated (for example, circuit breaker controlled
	 * by the logical node XCBR).
	 */
	INS_HealthState EEHealth;
	/**
	 * Name plate of external (primary) equipment to which the logical node is
	 * associated (for example, circuit breaker controlled by the logical node XCBR)
	 */
	DPL EEName;
	/**
	 * 'GroupX.OpCnt.stVal' is the count of operations of the circuit breaker/switch.
	 * It is not resetable from remote, but may be reset from local.
	 */
	INS OpCnt;
	/**
	 * 'GroupX.Pos.ctlVal' is used to initiate the change in the circuit
	 * breaker/switch position. The resulting position is 'GroupX.Pos.stVal'. For a
	 * hand-operated circuit breaker/switch, the (optional) 'ctlVal' does not exist -
	 * only the status 'stVal' can be read.
	 */
	DPC Pos;
	/**
	 * 'GroupX.BlkOpn.ctlVal=TRUE' initiates blocking the 'open()' action of the
	 * circuit breaker/switch. Can be set from another logical node (like a protection
	 * node) or from a local / remote switch. Operating capability ('XCBR.CBOpCap.
	 * stVal' and 'XSWI.SwOpCap.stVal' for circuit breaker and switch, respectively)
	 * does not reflect the blocked opening.
	 */
	SPC BlkOpn;
	/**
	 * 'GroupX.BlkCls.ctlVal=TRUE' initiates blocking the 'close()' action of the
	 * circuit breaker/switch. Can be set from another logical node (like a protection
	 * node) or from a local / remote switch. Operating capability ('XCBR.CBOpCap.
	 * stVal' and 'XSWI.SwOpCap.stVal' for circuit breaker and switch, respectively)
	 * does not reflect the blocked closing.
	 */
	SPC BlkCls;
	/**
	 * 'GroupX.ChaMotEna.ctlVal=TRUE' initiates enabling the charger motor. It is used
	 * to prevent overload of the power supply after a busbar trip. Inversly, 'GroupX.
	 * ChaMotEna.ctlVal=FALSE' initiates disabling the charger motor. The resulting
	 * status (enabled/disabled) is 'GroupX.ChaMotEna.stVal'.
	 */
	SPC ChaMotEna;

};
#endif // !defined(EA_AAFF8485_FB44_44d4_91F2_35CF8E69EBE9__INCLUDED_)
