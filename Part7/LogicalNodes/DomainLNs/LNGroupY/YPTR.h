///////////////////////////////////////////////////////////
//  YPTR.h
//  Implementation of the Class YPTR
//  Created on:      15-Apr-2014 2:52:54 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_2FB51EE3_5D7D_4b76_BCED_99FB5760AD30__INCLUDED_)
#define EA_2FB51EE3_5D7D_4b76_BCED_99FB5760AD30__INCLUDED_

#include "INS.h"
#include "MV.h"
#include "SPS.h"
#include "SPS_transient.h"
#include "ASG.h"
#include "GroupY.h"

/**
 * <font color="#141414">(no documentation)</font>
 * <font color="#141414">
 * </font><font color="#141414">7-4, sec. 5.14.4</font>
 */
class YPTR : public GroupY
{

public:
	YPTR();
	virtual ~YPTR();
	/**
	 * Operation time.
	 */
	INS OpTmh;
	/**
	 * 'YPTR.HPTmp.mag.f' is the hotspot temperature of the power transformer winding,
	 * in degrees Celsius.
	 */
	MV HPTmp;
	/**
	 * If 'YPTR.HPTmpAlm.stVal=TRUE', a high hotspot temperature of the power
	 * transformer winding has been detected.
	 */
	SPS HPTmpAlm;
	/**
	 * If 'YPTR.HPTmpTr.stVal=TRUE', a trip has occurred due to the high hotspot
	 * temperature of the power transformer winding.
	 */
	SPS_transient HPTmpTr;
	/**
	 * If 'YPTR.OANL.stVal=TRUE', the power transformer is operating with no load.
	 */
	SPS OANL;
	/**
	 * If 'YPTR.OpOvA.stVal=TRUE', the power transformer is operating at overcurrent
	 */
	SPS OpOvA;
	/**
	 * If 'YPTR.OpOvV.stVal=TRUE', the power transformer is operating at overvoltage.
	 */
	SPS OpOvV;
	/**
	 * If 'YPTR.OpUnV.stVal=TRUE', the power transformer is operating at undervoltage.
	 */
	SPS OpUnV;
	/**
	 * If 'YPTR.CGAlm.stVal=TRUE', the core ground alarm is active, indicating that
	 * the insulation has broken down.
	 */
	SPS CGAlm;
	/**
	 * 'YPTR.HiVRtg.setMag.f' is rated voltage (high voltage level) of the power
	 * transformer.
	 */
	ASG HiVRtg;
	/**
	 * 'YPTR.LoVRtg.setMag.f' is rated voltage (low voltage level) of the power
	 * transformer.
	 */
	ASG LoVRtg;
	/**
	 * 'YPTR.PwrRtg.setMag.f' is rated power of the power transformer.
	 */
	ASG PwrRtg;

};
#endif // !defined(EA_2FB51EE3_5D7D_4b76_BCED_99FB5760AD30__INCLUDED_)
