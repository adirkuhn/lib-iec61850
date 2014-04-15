///////////////////////////////////////////////////////////
//  MMTR.h
//  Implementation of the Class MMTR
//  Created on:      15-Apr-2014 2:52:34 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_D30E5804_7FEA_4982_8367_1A722AA4CFC6__INCLUDED_)
#define EA_D30E5804_7FEA_4982_8367_1A722AA4CFC6__INCLUDED_

#include "INS_HealthState.h"
#include "DPL.h"
#include "BCR.h"
#include "DomainLN.h"

/**
 * <font color="#141414">Used for calculation of energy in a three-phase
 * system</font>
 * <font color="#141414">
 * </font><font color="#141414">part 7-4, sec. 5.10.5</font>
 */
class MMTR : public DomainLN
{

public:
	MMTR();
	virtual ~MMTR();
	/**
	 * If 'MMTR.EEHealth.stVal' is the live zero alarm if the values for measurement
	 * are provided by an external sensor connected via a 4-20 mA link
	 */
	INS_HealthState EEHealth;
	/**
	 * Name plate of the external sensor
	 */
	DPL EEName;
	/**
	 * MMTR.TotVAh.actVal' is the net apparent energy since last reset
	 */
	BCR TotVAh;
	/**
	 * 'MMTR.TotWh.actVal' is the net real energy since last reset.
	 */
	BCR TotWh;
	/**
	 * 'MMTR.TotVArh.actVal' is the net reactive energy since last reset
	 */
	BCR TotVArh;
	/**
	 * 'MMTR.SupWh.actVal' is the real energy supply (default supply direction: energy
	 * flow towards busbar)
	 */
	BCR SupWh;
	/**
	 * 'MMTR.SupVArh.actVal' is the reactive energy supply (default supply direction:
	 * energy flow towards busbar)
	 */
	BCR SupVArh;
	/**
	 * 'MMTR.DmdWh.actVal' is the real energy demand (default demand direction: energy
	 * flow from busbar).
	 */
	BCR DmdWh;
	/**
	 * 'MMTR.DmdVArh.actVal' is the reactive energy demand (default demand direction:
	 * energy flow from busbar)
	 */
	BCR DmdVArh;

};
#endif // !defined(EA_D30E5804_7FEA_4982_8367_1A722AA4CFC6__INCLUDED_)
