///////////////////////////////////////////////////////////
//  ANCR.h
//  Implementation of the Class ANCR
//  Created on:      15-Apr-2014 2:52:04 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_7D471BCE_DC9A_474f_B19E_D86F9901856E__INCLUDED_)
#define EA_7D471BCE_DC9A_474f_B19E_D86F9901856E__INCLUDED_

#include "BSC.h"
#include "SPC.h"

/**
 * <font color="#141414">(no documentation)</font>
 * <font color="#141414">
 * </font><font color="#141414">7-4, sec. 5.9.2</font>
 */
class ANCR
{

public:
	ANCR();
	virtual ~ANCR();
	/**
	 * 'ANCR.TapChg.ctlVal' initiates the desired change (contained in ctlVal) in the
	 * tap position (raise or lower a single tap); the resulting tap position is 'ANCR.
	 * TapChg.valWithTrans.posVal'
	 */
	BSC TapChg;
	/**
	 * 'ANCR.RCol.ctlVal=TRUE' initiates raising plunge core position
	 */
	SPC RCol;
	/**
	 * 'ANCR.LCol.ctlVal=TRUE' initiates lowering plunge core position
	 */
	SPC LCol;

};
#endif // !defined(EA_7D471BCE_DC9A_474f_B19E_D86F9901856E__INCLUDED_)
