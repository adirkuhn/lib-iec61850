///////////////////////////////////////////////////////////
//  ACD.h
//  Implementation of the Class ACD
//  Created on:      15-Apr-2014 2:52:02 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_27FF3045_2B92_4077_BEC3_CB09ED94CB12__INCLUDED_)
#define EA_27FF3045_2B92_4077_BEC3_CB09ED94CB12__INCLUDED_

#include "BOOLEAN_ST_dchg.h"
#include "FaultDirection_ST_dchg.h"
#include "DirectionPhase_ST_dchg.h"
#include "Quality_ST_qchg.h"
#include "StatusInfo.h"

/**
 * (no documentation)
 * part 7-3, tab. 17
 */
class ACD : public StatusInfo
{

public:
	ACD();
	virtual ~ACD();
	/**
	 * Logical "or" of the phase values, e.g. trip or start. The attribute shall also
	 * be set 'general=TRUE' if not all phases have a fault condition
	 */
	BOOLEAN_ST_dchg general;
	/**
	 * General direction of the fault. If the faults of individual phases have
	 * different directions, this attribute shall be set as 'dirGeneral=both'.
	 */
	FaultDirection_ST_dchg dirGeneral;
	/**
	 * Trip or start event of phase A.
	 */
	BOOLEAN_ST_dchg phsA;
	/**
	 * Direction of the fault for phase A.
	 */
	DirectionPhase_ST_dchg dirPhsA;
	/**
	 * Trip or start event of phase B.
	 */
	BOOLEAN_ST_dchg phsB;
	/**
	 * Direction of the fault for phase B.
	 */
	DirectionPhase_ST_dchg dirPhsB;
	/**
	 * Trip or start event of phase C.
	 */
	BOOLEAN_ST_dchg phsC;
	/**
	 * Direction of the fault for phase C.
	 */
	DirectionPhase_ST_dchg dirPhsC;
	/**
	 * Start event with earth current.
	 */
	BOOLEAN_ST_dchg neut;
	/**
	 * Direction of the fault for neutral.
	 */
	DirectionPhase_ST_dchg dirNeut;
	/**
	 * Quality of the data values: 'general', 'dirGeneral', 'phsA', 'dirPhsA', 'phsB',
	 * 'dirPhsB', 'phsC', 'dirPhsC', 'neut', 'dirNeut'.
	 */
	Quality_ST_qchg q;

};
#endif // !defined(EA_27FF3045_2B92_4077_BEC3_CB09ED94CB12__INCLUDED_)
