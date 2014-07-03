///////////////////////////////////////////////////////////
//  ARCO.h
//  Implementation of the Class ARCO
//  Created on:      15-Apr-2014 2:52:05 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_69E45B83_9A80_4530_9E39_93A85B49785D__INCLUDED_)
#define EA_69E45B83_9A80_4530_9E39_93A85B49785D__INCLUDED_

#include "BSC.h"
#include "SPS.h"
#include "SPS_transient.h"

/**
 * <font color="#141414">Used for reactive power control in a substation, by the
 * means of compensating devices (reactance, capacitor).</font>
 * <font color="#141414">
 * </font><font color="#141414">7-4, sec. 5.9.3</font>
 */
class ARCO
{

public:
	ARCO();
	virtual ~ARCO();
	/**
	 * 'ARCO.TapChg.ctlVal' initiates the desired change (contained in ctlVal) in the
	 * tap position (raise or lower a single tap); the resulting tap position is 'ARCO.
	 * TapChg.valWithTrans.posVal'
	 */
	BSC TapChg;
	/**
	 * TRUE = Indicates voltage override control status
	 */
	SPS VOvSt;
	/**
	 * If 'ARCO.NeutAlm.stVal=TRUE', neutral alarm is present
	 */
	SPS NeutAlm;
	/**
	 * If 'ARCO.DschBlk.stVal=TRUE', the capacitor bank 'close()' action is blocked
	 * due to the discharge state of the bank
	 */
	SPS_transient DschBlk;

};
#endif // !defined(EA_69E45B83_9A80_4530_9E39_93A85B49785D__INCLUDED_)
