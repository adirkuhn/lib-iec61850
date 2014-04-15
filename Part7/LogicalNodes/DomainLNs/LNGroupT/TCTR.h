///////////////////////////////////////////////////////////
//  TCTR.h
//  Implementation of the Class TCTR
//  Created on:      15-Apr-2014 2:52:48 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_8E6318AF_6D1D_4aa3_8677_E770349057FB__INCLUDED_)
#define EA_8E6318AF_6D1D_4aa3_8677_E770349057FB__INCLUDED_

#include "SAV.h"
#include "ASG.h"
#include "GroupT.h"

/**
 * The current is delivered as sampled values. The sampled values are transmitted
 * as engineering values, i.e. as "true" (corrected) primary current values.
 * Therefore, the transformer ratio and the correction factors are of no interest
 * for the transmitted samples, but for maintenance purposes of an external
 * conventional (magnetic) transducer only.
 * 
 * For modelling per phase, one instance per phase shall be created. These
 * three/four instances may be allocated to different physical devices mounted in
 * the instrument transformer per phase.
 * 
 * part 7-4, sec. 5.13.1
 */
class TCTR : public GroupT
{

public:
	TCTR();
	virtual ~TCTR();
	/**
	 * 'TCTR.Amp.instMag.f' is the sampled, non-three-phase current of the current
	 * transformer
	 */
	SAV Amp;
	/**
	 * 'TCTR.ARtg.setMag.f' is rated current of the current transformer
	 */
	ASG ARtg;

};
#endif // !defined(EA_8E6318AF_6D1D_4aa3_8677_E770349057FB__INCLUDED_)
