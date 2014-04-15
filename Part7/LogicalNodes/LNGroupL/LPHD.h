///////////////////////////////////////////////////////////
//  LPHD.h
//  Implementation of the Class LPHD
//  Created on:      15-Apr-2014 2:52:33 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_0118022D_B678_4f72_A77B_0AF885232820__INCLUDED_)
#define EA_0118022D_B678_4f72_A77B_0AF885232820__INCLUDED_

#include "DPL.h"
#include "INS_HealthState.h"
#include "SPS.h"
#include "INS.h"
#include "SPC_transient.h"
#include "LNPHD.h"

/**
 * Models common issues for physical devices (IEDs).
 * part 7-4, sec. 5.3.2
 */
class LPHD : public LNPHD
{

public:
	LPHD();
	virtual ~LPHD();
	/**
	 * Physical device (IED) name plate
	 */
	DPL PhyNam;
	/**
	 * 'LPHD.PhyHealth.stVal' reflects the state of the physical device (IED) related
	 * hardware and software.
	 */
	INS_HealthState PhyHealth;
	/**
	 * If 'LPHD.OutOv.stVal=TRUE', an output communications buffer overflow occurred.
	 * Consequently, the annunciations important for the communication may be lost. A
	 * general interrogation is recommended or an integrity scan is started
	 * automatically.
	 */
	SPS OutOv;
	/**
	 * If 'LPHD.Proxy.stVal=TRUE', the physical device (IED) is a proxy.
	 */
	SPS Proxy;
	/**
	 * If 'LPHD.InOv.stVal=TRUE', an input communications buffer overflow occurred.
	 * Consequently, the annunciations important for the communication may be lost. A
	 * general interrogation is recommended or an integrity scan is started
	 * automatically.
	 */
	SPS InOv;
	/**
	 * 'LPHD.NumPwrUp.stVal' is the number of power up operations of the physical
	 * device (IED) since the last reset.
	 */
	INS NumPwrUp;
	/**
	 * 'LPHD.WrmStr.stVal' is the number of warm start operations of the physical
	 * device (IED) since the last reset.
	 */
	INS WrmStr;
	/**
	 * 'LPHD.WacTrg.stVal' is the number of times the watchdog circuit has reset the
	 * physical device (IED) since the counter reset.
	 */
	INS WacTrg;
	/**
	 * If 'LPHD.PwrUp.stVal=TRUE', a physical device (IED) power up has been detected
	 */
	SPS PwrUp;
	/**
	 * If 'LPHD.PwrDn.stVal=TRUE', a physical device (IED) power down has been
	 * detected.
	 */
	SPS PwrDn;
	/**
	 * If 'LPHD.PwrSupAlm.stVal=TRUE', an alarm from the external power supply occured.
	 * May be an external contact. It refers always to the local power supply of the
	 * IED, modelled by LPHD, and not to the health (EEHealth) of the complete
	 * external supply system
	 */
	SPS PwrSupAlm;
	/**
	 * If 'LPHD.RsStat.ctlVal=TRUE', initiates the resetting of the physical device
	 * (IED) security statistics
	 */
	SPC_transient RsStat;

};
#endif // !defined(EA_0118022D_B678_4f72_A77B_0AF885232820__INCLUDED_)
