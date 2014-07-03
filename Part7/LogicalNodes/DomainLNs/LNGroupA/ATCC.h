///////////////////////////////////////////////////////////
//  ATCC.h
//  Implementation of the Class ATCC
//  Created on:      15-Apr-2014 2:52:05 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_A02B1950_118D_418d_966A_BDA59A8BDD6F__INCLUDED_)
#define EA_A02B1950_118D_418d_966A_BDA59A8BDD6F__INCLUDED_

#include "BSC.h"
#include "ISC.h"
#include "DPC.h"
#include "SPC.h"
#include "SPC_transient.h"
#include "MV.h"
#include "INS.h"
#include "ASG.h"

/**
 * <font color="#141414">Used for voltage control of a busbar by the means of tap
 * changer.</font>
 * <font color="#141414">
 * </font><font color="#141414">7-4, sec. 5.9.4</font>
 */
class ATCC
{

public:
	ATCC();
	virtual ~ATCC();
	/**
	 * 'ATCC.TapChg.ctlVal' initiates the desired change (contained in ctlVal) in the
	 * tap position (raise or lower a single tap). The resulting tap position is
	 * ''ATCC.TapChg.valWithTrans.posVal'.
	 */
	BSC TapChg;
	/**
	 * 'ATCC.TapPos.ctlVal' initiates the change of the tap position to the desired
	 * position (contained in ctlVal); the resulting tap position is 'ATCC.TapPos.
	 * valWithTrans.posVal'.
	 */
	ISC TapPos;
	/**
	 * Parallel/Independent operation.
	 * Transformers are operating in parallel
	 */
	DPC ParOp;
	/**
	 * 'ATCC.LTCBlk.ctlVal=TRUE' initiates blocking (inhibiting) the automatic control.
	 * Inversly, 'ATCC.LTCBlk.ctlVal=FALSE' initiates unblocking (enabling) the
	 * automatic control. The resulting status is 'ATCC.LTCBlk.stVal'.
	 */
	SPC LTCBlk;
	/**
	 * 'ATCC.LTCDragRs.ctlVal=TRUE' initiates resetting the load tap changer drag
	 * hands (high and low positions to present position)
	 */
	SPC_transient LTCDragRs;
	/**
	 * 'ATCC.VRed1.ctlVal=TRUE' initiates voltage reduction step 1 (i.e., reducing the
	 * load side voltage below the normal setting). Inversly, 'ATCC.VRed1.
	 * ctlVal=FALSE' initiates releasing of voltage reduction step 1. The resulting
	 * status is 'ATCC.VRed1.stVal'
	 */
	SPC VRed1;
	/**
	 * Voltage reduction step 2.
	 * TRUE = Voltage reduction is active to reduce load side voltage below the normal
	 * setting.
	 */
	SPC VRed2;
	/**
	 * 'ATCC.CtlV.mag.f' is the voltage on secondary of the transformer as used for
	 * voltage control
	 */
	MV CtlV;
	/**
	 * 'ATCC.LodA.mag.f' is the measured load current (total transformer secondary
	 * current).
	 */
	MV LodA;
	/**
	 * 'ATCC.CircA.mag.f' is the measured circulating current between transformers
	 * operated in parallel (one component of transformer secondary current in a
	 * paralleling installation).
	 */
	MV CircA;
	/**
	 * 'ATCC.PhAng.mag.f' is the phase angle of the load current ('ATCC.LodA.mag.f')
	 * relative to control voltage ('ATCC.CtlV.mag.f') at 1.0 power factor (forward
	 * power flow presumed)
	 */
	MV PhAng;
	/**
	 * 'ATCC.HiCtlV.mag.f' is the highest control voltage since last reset
	 */
	MV HiCtlV;
	/**
	 * 'ATCC.LoCtlV.mag.f' is the lowest control voltage since last reset.
	 */
	MV LoCtlV;
	/**
	 * 'ATCC.HiDmdA.mag.f' is the highest load current demand since last reset
	 */
	MV HiDmdA;
	/**
	 * 'ATCC.HiTapPos.stVal' is the highest tap position since last reset.
	 */
	INS HiTapPos;
	/**
	 * 'ATCC.LoTapPos.stVal' is the lowest tap position since last reset.
	 */
	INS LoTapPos;
	/**
	 * 'ATCC.BndCtr.setMag.f' is the centre of voltage control bandwidth (forward
	 * power flow presumed).
	 */
	ASG BndCtr;
	/**
	 * 'ATCC.BndWid.setMag.f' is the control (secondary) voltage bandwidth (i.e.,
	 * range), given either as voltage value or percentage of the nominal voltage
	 * (forward power flow presumed).
	 */
	ASG BndWid;
	/**
	 * 'ATCC.CtlDlTmms.setVal' is the time to wait before operating, after reaching
	 * the control point (forward power flow presumed).
	 */
	ASG CtlDlTmms;
	/**
	 * 'ATCC.LDCR.setMag.f' is the line drop voltage due to line resistance component
	 * (forward power flow presumed) at rated current.
	 */
	ASG LDCR;
	/**
	 * 'ATCC.LDCX.setMag.f' is the line drop voltage due to line reactance component
	 * (forward power flow presumed) at rated current.
	 */
	ASG LDCX;
	/**
	 * 'ATCC.BlkLV.setMag.f' is the control (secondary) voltage below which the
	 * automatic 'lower()' commands are blocked.
	 */
	ASG BlkLV;
	/**
	 * 'ATCC.BlkRV.setMag.f' is the control (secondary) voltage above which the
	 * automatic 'raise()' commands are blocked
	 */
	ASG BlkRV;
	/**
	 * 'ATCC.RnbkRV.setMag.f' is the runback raise voltage, i.e., the control voltage
	 * above which an automatic 'lower()' command is issued.
	 */
	ASG RnbkRV;
	/**
	 * 'ATCC.LimLodA.setMag.f' is the current above which the automatic commands are
	 * suspended.
	 */
	ASG LimLodA;
	/**
	 * If 'ATCC.LDC.setVal=TRUE', the line drop compensation is R and X model.
	 * Otherwise, it is Z model.
	 */
	ASG LDC;

};
#endif // !defined(EA_A02B1950_118D_418d_966A_BDA59A8BDD6F__INCLUDED_)
