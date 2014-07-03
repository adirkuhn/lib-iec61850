///////////////////////////////////////////////////////////
//  SEQ.h
//  Implementation of the Class SEQ
//  Created on:      15-Apr-2014 2:52:45 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_814418E0_CC3C_4b34_8089_0E0D8AB27273__INCLUDED_)
#define EA_814418E0_CC3C_4b34_8089_0E0D8AB27273__INCLUDED_

#include "Sequence_MX.h"
#include "PhaseReference_CF.h"
#include "ComposedMeasurandInfo.h"
#include "CMV.h"

/**
 * <font color="#141414">Collection of sequence components of a value. NOTE: Can
 * also be applied to calculated values.</font>
 * <font color="#141414">
 * </font><font color="#141414">7-3, tab. 26</font>
 */
class SEQ : public ComposedMeasurandInfo
{

public:
	SEQ();
	virtual ~SEQ();
	/**
	 * Sequence component 1. According to SequenceEnum ('seqT'), 'c1' is either
	 * positive or direct sequence component. Timestamps 'c1.t', 'c2.t' and 'c3.t' are
	 * identical, and specify the time at which the values for 'c1', 'c2' and 'c3'
	 * have been calculated
	 */
	CMV c1;
	/**
	 * Sequence component 2. According to SequenceEnum ('seqT'), 'c2' is either
	 * negative or quadratic sequence component. Timestamps 'c1.t', 'c2.t' and 'c3.t'
	 * are identical, and specify the time at which the values for 'c1', 'c2' and 'c3'
	 * have been calculated
	 */
	CMV c2;
	/**
	 * Sequence component 3. According to SequenceEnum ('seqT'), 'c3' is zero sequence
	 * component. Timestamps 'c1.t', 'c2.t' and 'c3.t' are identical, and specify the
	 * time at which the values for 'c1', 'c2' and 'c3' have been calculated.
	 */
	CMV c3;
	/**
	 * The type of the sequence, with sequence components 'c1', 'c2' and 'c3'.
	 */
	Sequence_MX seqT;
	/**
	 * Indicates which phase has been used as reference for the transformation of
	 * phase values to sequence values.
	 */
	PhaseReference_CF phsRef;

};
#endif // !defined(EA_814418E0_CC3C_4b34_8089_0E0D8AB27273__INCLUDED_)
