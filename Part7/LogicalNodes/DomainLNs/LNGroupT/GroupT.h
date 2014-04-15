///////////////////////////////////////////////////////////
//  GroupT.h
//  Implementation of the Class GroupT
//  Created on:      15-Apr-2014 2:52:20 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_74A63032_B972_4dc4_ABA4_03F89DEF66F7__INCLUDED_)
#define EA_74A63032_B972_4dc4_ABA4_03F89DEF66F7__INCLUDED_

#include "INS_HealthState.h"
#include "DPL.h"
#include "INS.h"
#include "ASG.h"
#include "DomainLN.h"

/**
 * Abstract type, holding common attributes of all the logical nodes in this group.
 * 
 * Not defined as such in the standard.
 */
class GroupT : public DomainLN
{

public:
	GroupT();
	virtual ~GroupT();
	/**
	 * 'GroupT.EEHealth.stVal' reflects the state of external (primary) equipment to
	 * which the logical node is associated (for example, voltage transformer
	 * controlled by the logical node TVTR)
	 */
	INS_HealthState EEHealth;
	/**
	 * Name plate of external (primary) equipment to which the logical node is
	 * associated (for example, voltage transformer controlled by the logical node
	 * TVTR)
	 */
	DPL EEName;
	/**
	 * Operation time
	 */
	INS OpTmh;
	/**
	 * 'GroupT.HzRtg.setMag.f' is rated frequency of the voltage/current transformer
	 */
	ASG HzRtg;
	/**
	 * 'GroupT.Rat.setMag.f' is the winding ratio of external voltage/current
	 * transformer (transducer), if applicable
	 */
	ASG Rat;
	/**
	 * 'GroupT.Cor.setMag.f' is the voltage/current phasor magnitude correction of the
	 * external voltage/current transformer
	 */
	ASG Cor;
	/**
	 * 'GroupT.AngCor.setMag.f' is the voltage/current phasor angle correction of the
	 * external voltage/current transformer
	 */
	ASG AngCor;

};
#endif // !defined(EA_74A63032_B972_4dc4_ABA4_03F89DEF66F7__INCLUDED_)
