///////////////////////////////////////////////////////////
//  DEL.h
//  Implementation of the Class DEL
//  Created on:      15-Apr-2014 2:52:12 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_6CC3572A_385B_470e_91A1_E9934D3A3046__INCLUDED_)
#define EA_6CC3572A_385B_470e_91A1_E9934D3A3046__INCLUDED_

#include "CMV.h"
#include "AngleReference_CF.h"
#include "ComposedMeasurandInfo.h"

/**
 * <font color="#141414">Collection of simultaneous phase-to-phase measurements in
 * a 3-phase system. NOTE: Can also be applied to calculated values.</font>
 * <font color="#141414">
 * </font><font color="#141414">7-3, tab. 25</font>
 */
class DEL : public ComposedMeasurandInfo
{

public:
	DEL();
	virtual ~DEL();
	/**
	 * Value of phase A to phase B measurement. Values for 'phsAB', 'phsBC' and
	 * 'phsCA' have been simultaneously acquired or determined, which means that their
	 * respective time stamps 't' hold the same value. It shall be assumed that any
	 * jitter between the acquisition times dedicated for these 3 values is
	 * neglectable. The jitter for simultaneity shall be as indicated in any of the
	 * respective 't.TimeStamp.TimeQuality' attributes of the above 3 values
	 */
	CMV phsAB;
	/**
	 * Value of phase B to phase C measurement. For further details see 'phsAB'
	 */
	CMV phsBC;
	/**
	 * Value of phase C to phase A measurement. For further details see 'phsAB'.
	 */
	CMV phsCA;
	/**
	 * Angle reference. Indicates the quantity that is used as reference for the phase
	 * angles of 'phsAB', 'phsBC' and 'phsCA', instead of their own respective
	 * 'angRef' attributes. For the indicated quantity, the fundamental frequency
	 * (index = 1) is used as reference by convention
	 */
	AngleReference_CF angRef;

};
#endif // !defined(EA_6CC3572A_385B_470e_91A1_E9934D3A3046__INCLUDED_)
