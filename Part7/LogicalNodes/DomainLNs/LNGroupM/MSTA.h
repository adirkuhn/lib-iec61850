///////////////////////////////////////////////////////////
//  MSTA.h
//  Implementation of the Class MSTA
//  Created on:      15-Apr-2014 2:52:35 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_93A67276_0A35_4b15_8FCD_A54164608C3F__INCLUDED_)
#define EA_93A67276_0A35_4b15_8FCD_A54164608C3F__INCLUDED_

#include "INS_HealthState.h"
#include "DPL.h"
#include "MV.h"
#include "SPC.h"
#include "ASG.h"
#include "DomainLN.h"

/**
 * ###TODO: attribute comments###
 * 
 * The metered values are not always used directly but as average values, minima
 * and maxima over a given evaluation period. The reporting may be started after
 * the end of this period.
 * 
 * part 7-4, sec. 5.10.9
 */
class MSTA : public DomainLN
{

public:
	MSTA();
	virtual ~MSTA();
	/**
	 * External equipment health (external sensor)
	 */
	INS_HealthState EEHealth;
	/**
	 * External equipment name plate
	 */
	DPL EEName;
	/**
	 * Average current
	 */
	MV AvAmps;
	/**
	 * Maximum current
	 */
	MV MaxAmps;
	/**
	 * Minimum current
	 */
	MV MinAmps;
	/**
	 * Average current
	 */
	MV AvVolts;
	/**
	 * Maximum voltage
	 */
	MV MaxVolts;
	/**
	 * Minimum voltage
	 */
	MV MinVolts;
	/**
	 * Average apparent power
	 */
	MV AvVA;
	/**
	 * Maximum apparent power
	 */
	MV MaxVA;
	/**
	 * Minimum apparent power
	 */
	MV MinVA;
	/**
	 * Average real power
	 */
	MV AvW;
	/**
	 * Maximum real power
	 */
	MV MaxW;
	/**
	 * Minimum real power
	 */
	MV MinW;
	/**
	 * Average reactive power
	 */
	MV AvVAr;
	/**
	 * Maximum reactive power
	 */
	MV MaxVAr;
	/**
	 * Minimum reactive power
	 */
	MV MinVAr;
	/**
	 * Start of evaluation interval
	 */
	SPC EvStr;
	/**
	 * Evaluation time (time window) for averages, etc.
	 */
	ASG EvTmms;

};
#endif // !defined(EA_93A67276_0A35_4b15_8FCD_A54164608C3F__INCLUDED_)
