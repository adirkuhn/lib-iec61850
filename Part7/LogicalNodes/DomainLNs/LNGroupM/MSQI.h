///////////////////////////////////////////////////////////
//  MSQI.h
//  Implementation of the Class MSQI
//  Created on:      15-Apr-2014 2:52:35 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_431081ED_EB43_4b3b_82DE_C40E1D88A3D1__INCLUDED_)
#define EA_431081ED_EB43_4b3b_82DE_C40E1D88A3D1__INCLUDED_

#include "INS_HealthState.h"
#include "DPL.h"
#include "SEQ.h"
#include "WYE.h"
#include "MV.h"
#include "DEL.h"
#include "DomainLN.h"

/**
 * ###TODO: attribute comments###
 * 
 * (no documentation)
 * 
 * part 7-4, sec. 5.10.8
 */
class MSQI : public DomainLN
{

public:
	MSQI();
	virtual ~MSQI();
	/**
	 * External equipment health (external sensor)
	 */
	INS_HealthState EEHealth;
	/**
	 * External equipment name plate
	 */
	DPL EEName;
	/**
	 * Positive, Negative and Zero Sequence Current
	 */
	SEQ SeqA;
	/**
	 * Positive, Negative and Zero Sequence voltage
	 */
	SEQ SeqV;
	/**
	 * DQ0 Sequence
	 */
	SEQ DQ0Seq;
	/**
	 * Imbalance current
	 */
	WYE ImbA;
	/**
	 * Imbalance negative sequence current
	 */
	MV ImbNgA;
	/**
	 * Imbalance negative sequence voltage
	 */
	MV ImbNgV;
	/**
	 * Imbalance phase-phase voltage
	 */
	DEL ImbPPV;
	/**
	 * Imbalance voltage
	 */
	WYE ImbV;
	/**
	 * Imbalance zero sequence current
	 */
	MV ImbZroA;
	/**
	 * Imbalance zero sequence voltage
	 */
	MV ImbZroV;
	/**
	 * Maximum imbalance current
	 */
	WYE MaxImbA;
	/**
	 * Maximum imbalance phase-phase voltage
	 */
	WYE MaxImbPPV;
	/**
	 * Maximum imbalance voltage
	 */
	WYE MaxImbV;

};
#endif // !defined(EA_431081ED_EB43_4b3b_82DE_C40E1D88A3D1__INCLUDED_)
