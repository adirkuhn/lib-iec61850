///////////////////////////////////////////////////////////
//  MDIF.h
//  Implementation of the Class MDIF
//  Created on:      15-Apr-2014 2:52:34 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_99E56DA7_8BA7_4735_A5E7_C42D7DCE03F9__INCLUDED_)
#define EA_99E56DA7_8BA7_4735_A5E7_C42D7DCE03F9__INCLUDED_

#include "WYE.h"
#include "SAV.h"
#include "GroupM.h"

/**
 * ###TODO: attribute comments###
 * 
 * Used to provide calculated process values representing the other side of the
 * line (or of another object) as used for differential protection (PDIF).
 * 
 * part 7-4, sec. 5.10.2
 */
class MDIF : public GroupM
{

public:
	MDIF();
	virtual ~MDIF();
	/**
	 * Operate Current (phasor) of the remote current measurement
	 */
	WYE OpARem;
	/**
	 * Current (Sampled value) phase A
	 */
	SAV Amp1;
	/**
	 * Current (Sampled value) phase B
	 */
	SAV Amp2;
	/**
	 * Current (Sampled value) phase C
	 */
	SAV Amp3;

};
#endif // !defined(EA_99E56DA7_8BA7_4735_A5E7_C42D7DCE03F9__INCLUDED_)
