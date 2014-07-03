///////////////////////////////////////////////////////////
//  MMXN.h
//  Implementation of the Class MMXN
//  Created on:      15-Apr-2014 2:52:35 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_FFB56391_CC33_43cf_B233_1CEC26394A76__INCLUDED_)
#define EA_FFB56391_CC33_43cf_B233_1CEC26394A76__INCLUDED_

#include "INS_HealthState.h"
#include "DPL.h"
#include "MV.h"
#include "CMV.h"
#include "DomainLN.h"

/**
 * <font color="#141414">Used for calculation of currents, voltages, powers and
 * impedances in a system where voltages and currents are not phase-related. The
 * main use is for operative applications.</font>
 * <font color="#141414">
 * </font><font color="#141414">part 7-4, sec. 5.10.6</font>
 */
class MMXN : public DomainLN
{

public:
	MMXN();
	virtual ~MMXN();
	/**
	 * If 'MMXN.EEHealth.stVal' is the live zero alarm if the values for measurement
	 * are provided by an external sensor connected via a 4-20 mA link.
	 */
	INS_HealthState EEHealth;
	/**
	 * Name plate of the external sensor
	 */
	DPL EEName;
	/**
	 * 'MMXN.Amp.mag.f' is the rms current (non-three-phase).
	 */
	MV Amp;
	/**
	 * 'MMXN.Vol.mag.f' is the rms voltage (non-three-phase).
	 */
	MV Vol;
	/**
	 * 'MMXN.Watt.mag.f' is the real power (P, non-three-phase)
	 */
	MV Watt;
	/**
	 * 'MMXN.VolAmpr.mag.f' is the reactive power (Q, non-three-phase)
	 */
	MV VolAmpr;
	/**
	 * 'MMXN.VolAmp.mag.f' is the apparent power (S, non-three-phase).
	 */
	MV VolAmp;
	/**
	 * 'MMXN.PwrFact.mag.f' is the power factor (non-three-phase).
	 */
	MV PwrFact;
	/**
	 * 'MMXN.Imp.cVal.[mag,ang].f' is the impedance.
	 */
	CMV Imp;
	/**
	 * 'MMXN.Hz.mag.f' is the frequency of the power system, in Hz.
	 */
	MV Hz;

};
#endif // !defined(EA_FFB56391_CC33_43cf_B233_1CEC26394A76__INCLUDED_)
