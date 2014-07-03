///////////////////////////////////////////////////////////
//  TVTR.h
//  Implementation of the Class TVTR
//  Created on:      15-Apr-2014 2:52:49 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_4B15BF18_D5CD_4737_A84D_79B81607EB8C__INCLUDED_)
#define EA_4B15BF18_D5CD_4737_A84D_79B81607EB8C__INCLUDED_

#include "SAV.h"
#include "SPS.h"
#include "ASG.h"
#include "GroupT.h"

/**
 * The voltage is delivered as sampled values. The sampled values are transmitted
 * as engineering values, i.e. as "true" (corrected) primary voltage values.
 * Therefore, the transformer ratio and the correction factors are of no interest
 * for the transmitted samples but for maintenance purposes of an external
 * conventional (magnetic) transducer only.
 * For modelling per phase, one instance per phase shall be created. These
 * three/four instances may be allocated to different physical devices mounted in
 * the instrument transformer per phase.
 * part 7-4, sec. 5.13.2
 */
class TVTR : public GroupT
{

public:
	TVTR();
	virtual ~TVTR();
	/**
	 * 'TVTR.Vol.instMag.f' is the sampled, non-three-phase voltage of the voltage
	 * transformer
	 */
	SAV Vol;
	/**
	 * If 'TVTR.FuFail.stVal=TRUE', the fuse of the voltage transformer has
	 * opened/failed.
	 */
	SPS FuFail;
	/**
	 * 'TVTR.VRtg.setMag.f' is rated voltage of the voltage transformer.
	 */
	ASG VRtg;

};
#endif // !defined(EA_4B15BF18_D5CD_4737_A84D_79B81607EB8C__INCLUDED_)
