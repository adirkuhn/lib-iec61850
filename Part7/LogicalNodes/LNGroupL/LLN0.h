///////////////////////////////////////////////////////////
//  LLN0.h
//  Implementation of the Class LLN0
//  Created on:      15-Apr-2014 2:52:31 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_BED5D5CB_6615_4323_874B_507C2AEADA87__INCLUDED_)
#define EA_BED5D5CB_6615_4323_874B_507C2AEADA87__INCLUDED_

#include "INC_ModeBehaviour.h"
#include "INS_HealthState.h"
#include "LPL.h"
#include "SPS.h"
#include "INS.h"
#include "SPC_transient.h"
#include "LN0.h"

/**
 * Models common issues for logical devices.
 * part 7-4, secs. 5.3.3 and 5.3.4
 */
class LLN0 : public LN0
{

public:
	LLN0();
	virtual ~LLN0();
	/**
	 * 'LLN0.Mod.ctlVal' (what does this control do: setting all the contained
	 * 'DomainLN.Mod.ctlVal'; or just setting 'LLN0.Mod.stVal')?
	 * 'LLN0.Mod.stVal' is the current operating mode of the logical device. See
	 * statechart diagram 'DomainLN.behStateMachine'.
	 */
	INC_ModeBehaviour Mod;
	INC_ModeBehaviour Beh;
	/**
	 * 'LLN0.Health.stVal' reflects the state of the logical device related hardware
	 * and software. It is derived from the worst (most critical) value of the health
	 * attribute of all the domain logical nodes contained in the logical device:
	 * 'LLN0.Health.stVal' = max('DomainLN[i].Health.stVal').
	 */
	INS_HealthState Health;
	/**
	 * Name plate of the logical device
	 */
	LPL NamPlt;
	/**
	 * 'LLN0.Loc.stVal=TRUE' stands for local, while ''LLN0.Loc.stVal=FALSE' stands
	 * for remote operation of the complete logical device. The changeover is always
	 * done locally, with a physical key or toggle switch, which may have a set of
	 * contacts from which the position can be read.
	 * At bay level, "local" means operation from the bay unit and "remote" means
	 * operation from a station unit. At process level, "local" means direct operation
	 * on the process device (for example on a circuit breaker) and "remote" means
	 * operation from a bay unit.
	 * If in a logical device 'LLN0.Loc.stVal' is in contradiction to the Loc of any
	 * contained LN, "local" is always dominant.
	 */
	SPS Loc;
	/**
	 * Operation time, in h, of a physical device (???) since start of the operation
	 */
	INS OpTmh;
	/**
	 * LLN0.Diag.ctlVal=TRUE' initiates running the diagnostics.
	 */
	SPC Diag;
	/**
	 * 'LLN0.LEDRs.ctlVal=TRUE' initiates the resetting of all light emitting diodes.
	 */
	SPC_transient LEDRs;

};
#endif // !defined(EA_BED5D5CB_6615_4323_874B_507C2AEADA87__INCLUDED_)
