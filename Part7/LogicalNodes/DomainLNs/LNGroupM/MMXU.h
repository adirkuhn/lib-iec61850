///////////////////////////////////////////////////////////
//  MMXU.h
//  Implementation of the Class MMXU
//  Created on:      15-Apr-2014 2:52:35 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_7073A7C9_DC24_4afa_BD90_75B211879371__INCLUDED_)
#define EA_7073A7C9_DC24_4afa_BD90_75B211879371__INCLUDED_

#include "INS_HealthState.h"
#include "MV.h"
#include "DEL.h"
#include "WYE.h"
#include "DomainLN.h"

/**
 * Used for calculation of currents, voltages, powers and impedances in a three-
 * phase system. The main use is for operative applications.
 * 
 * part 7-4, sec. 5.10.7
 */
class MMXU : public DomainLN
{

public:
	MMXU();
	virtual ~MMXU();
	/**
	 * If 'MMXU.EEHealth.stVal' is the live zero alarm if the values for measurement
	 * are provided by an external sensor connected via a 4-20 mA link.
	 */
	INS_HealthState EEHealth;
	/**
	 * 'MMXU.TotW.mag.f' is the total real power (P) in a three-phase circuit, in W.
	 */
	MV TotW;
	/**
	 * 'MMXU.TotVAr.mag.f' is the total reactive power (Q) in a three-phase circuit,
	 * in VAr.
	 */
	MV TotVAr;
	/**
	 * 'MMXU.TotVA.mag.f' is the total apparent power (S) in a three-phase circuit, in
	 * VA.
	 */
	MV TotVA;
	/**
	 * 'MMXU.TotPF.mag.f' is the average (total) power factor in a three-phase circuit.
	 */
	MV TotPF;
	/**
	 * 'MMXU.Hz.mag.f' is the frequency of the power system, in Hz
	 */
	MV Hz;
	/**
	 * 'MMXU.PPV' holds the phase to phase voltage phasors, in V, as follows:
	 * - 'MMXU.PPV.[phsAB,phsBC,phsCA].cVal.[mag,ang].f' are phase voltage phasors;
	 * - 'MMXU.PPV.angRef.stVal' is the quantity used as reference for the phase
	 * angles of the 3 phasors above (see AngleReference).
	 */
	DEL PPV;
	/**
	 * 'MMXU.PhV' holds phase to ground (line) voltage phasors for three phases, in V.
	 * For details, see 'MMXU.A'.
	 */
	WYE PhV;
	/**
	 * 'MMXU.A' holds the currents for three phases, in A, as follows:
	 * - 'MMXU.A.[phsA,phsB,phsC].cVal.[mag,ang].f' are phase current phasors;
	 * - 'MMXU.A.neut.cVal.[mag,ang].f' is neutral current phasor;
	 * - 'MMXU.A.net.cVal.[mag,ang].f' is net current phasor (phsA+phsB+phsC+neut);
	 * - 'MMXU.A.res.cVal.[mag,ang].f' is residual current phasor (phsA+phsB+phsC);
	 * - 'MMXU.A.angRef.stVal' is the quantity used as reference for the phase angles
	 * of the 6 phasors above (see AngleReference).
	 */
	WYE A;
	/**
	 * 'MMXU.W' holds the real powers (P) for three phases, in W. For details, see
	 * 'MMXU.A'.
	 */
	WYE W;
	/**
	 * 'MMXU.VAr' holds the reactive powers (Q) for three phases, in VAr. For details,
	 * see 'MMXU.A'.
	 */
	WYE VAr;
	/**
	 * 'MMXU.VA' holds the apparent powers (S) for three phases, in VA. For details,
	 * see 'MMXU.A'.
	 */
	WYE VA;
	/**
	 * 'MMXU.PF' holds the phase to ground power factor phasors for three phases. For
	 * details, see 'MMXU.A'
	 */
	WYE PF;
	/**
	 * 'MMXU.Z' holds the impedances for three phases. For details, see 'MMXU.A'
	 */
	WYE Z;

};
#endif // !defined(EA_7073A7C9_DC24_4afa_BD90_75B211879371__INCLUDED_)
