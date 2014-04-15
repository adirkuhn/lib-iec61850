///////////////////////////////////////////////////////////
//  WYE.h
//  Implementation of the Class WYE
//  Created on:      15-Apr-2014 2:52:53 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_261D249C_8749_4868_9A45_5A3A935EF179__INCLUDED_)
#define EA_261D249C_8749_4868_9A45_5A3A935EF179__INCLUDED_

#include "CMV.h"
#include "AngleReference_CF.h"
#include "ComposedMeasurandInfo.h"

/**
 * <font color="#141414">Collection of simultaneous phase-to-ground measurements
 * in a 3-phase system. NOTE: Can also be applied to calculated values.</font>
 * <font color="#141414">
 * </font><font color="#141414">7-3, tab. 24</font>
 */
class WYE : public ComposedMeasurandInfo
{

public:
	WYE();
	virtual ~WYE();
	/**
	 * Value of phase A. Values for 'phsA', 'phsB', 'phsC', 'neut', 'net' and 'res'
	 * have been simultaneously acquired or determined, which means that their
	 * respective time stamps 't' hold the same value. It shall be assumed that any
	 * jitter between the acquisition times dedicated for these 6 values is
	 * neglectable. The jitter for simultaneity shall be as indicated in any of the
	 * respective 't.TimeStamp.TimeQuality' attributes of the above 6 values.
	 */
	CMV phsA;
	/**
	 * Value of phase B. For further details see 'phsA'.
	 */
	CMV phsB;
	/**
	 * Value of phase C. For further details see 'phsA'.
	 */
	CMV phsC;
	/**
	 * Value of phase neutral. For further details see 'phsA'
	 */
	CMV neut;
	/**
	 * Net current is the algebraic sum of the instantaneous values of currents
	 * flowing through all live conductors (sum over phase currents) _and_ the neutral
	 * of a circuit, at a point of the electrical installation. For further details
	 * see 'phsA'.
	 */
	CMV net;
	/**
	 * Residual current is the algebraic sum of the instantaneous values of currents
	 * flowing through all live conductors (i.e. sum over phase currents) of a circuit
	 * at a point of the electrical installation. For further details see 'phsA'.
	 */
	CMV res;
	/**
	 * Angle reference. Indicates the quantity that is used as reference for the phase
	 * angles of 'phsA', 'phsB', 'phsC', 'neut', 'net' and 'res', instead of their own
	 * respective 'angRef' attributes. For the indicated quantity, the fundamental
	 * frequency (index = 1) is used as reference by convention.
	 */
	AngleReference_CF angRef;

};
#endif // !defined(EA_261D249C_8749_4868_9A45_5A3A935EF179__INCLUDED_)
