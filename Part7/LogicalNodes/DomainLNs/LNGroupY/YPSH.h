///////////////////////////////////////////////////////////
//  YPSH.h
//  Implementation of the Class YPSH
//  Created on:      15-Apr-2014 2:52:53 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_9274B2FC_BAED_4530_970C_11ABFDD7ED38__INCLUDED_)
#define EA_9274B2FC_BAED_4530_970C_11ABFDD7ED38__INCLUDED_

#include "INS.h"
#include "DPC.h"
#include "SPC.h"
#include "INS_SwitchingCapability.h"
#include "GroupY.h"

/**
 * <font color="#141414">Includes also the switch for closing and opening the
 * shunt.</font>
 * <font color="#141414">
 * </font><font color="#141414">7-4, sec. 5.14.3</font>
 */
class YPSH : public GroupY
{

public:
	YPSH();
	virtual ~YPSH();
	/**
	 * Operation time
	 */
	INS OpTmh;
	/**
	 * 'YPSH.Pos.ctlVal' is used to initiate the change in the switch position. The
	 * resulting position is 'YPSH.Pos.stVal'. For a hand-operated switch, the
	 * (optional) 'ctlVal' does not exist - only the status 'stVal' can be read.
	 */
	DPC Pos;
	/**
	 * 'YPSH.BlkOpn.ctlVal=TRUE' initiates blocking the 'open()' action of the switch.
	 * Can be set from another logical node (like a protection node) or from a local /
	 * remote switch. Operating capability 'YPSH.ShOpCap.stVal' does not reflect the
	 * blocked opening
	 */
	SPC BlkOpn;
	/**
	 * 'YPSH.BlkCls.ctlVal=TRUE' initiates blocking the 'close()' action of the switch.
	 * Can be set from another logical node (like a protection node) or from a local /
	 * remote switch. Operating capability 'YPSH.ShOpCap.stVal' does not reflect the
	 * blocked closing.
	 */
	SPC BlkCls;
	/**
	 * 'YPSH.ShOpCap.stVal' is the operating capability of the (switch of the) power
	 * shunt: 'YPSH.ShOpCap.stVal' = 'YPSH.MaxOpCap.stVal'+1
	 */
	INS_SwitchingCapability ShOpCap;
	/**
	 * 'YPSH.ChaMotEna.ctlVal=TRUE' initiates enabling the charger motor. It is used
	 * to prevent overload of the power supply after a busbar trip. Inversly, 'YPSH.
	 * ChaMotEna.ctlVal=FALSE' initiates disabling the charger motor. The resulting
	 * status (enabled/disabled) is 'YPSH.ChaMotEna.stVal'
	 */
	SPC ChaMotEna;
	/**
	 * 'YPSH.MaxOpCap.stVal' is the operating capability of the (switch of the) power
	 * shunt when fully charged.
	 */
	INS_SwitchingCapability MaxOpCap;

};
#endif // !defined(EA_9274B2FC_BAED_4530_970C_11ABFDD7ED38__INCLUDED_)
