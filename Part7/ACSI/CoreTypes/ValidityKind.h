///////////////////////////////////////////////////////////
//  ValidityKind.h
//  Implementation of the Class ValidityKind
//  Created on:      15-Apr-2014 2:52:50 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_5421C04C_6F78_49b0_A082_A83F3A8B171D__INCLUDED_)
#define EA_5421C04C_6F78_49b0_A082_A83F3A8B171D__INCLUDED_

/**
 * part 7-3
 * Not explicitly defined in the standard.
 * Used for:
 *  Quality.validity
 * See statechart diagram in P_Quality ("validityStateMachine").
 */
enum ValidityKind
{
	/**
	 * Notes:   Supervision function has not detected abnormal condition of neither
	 * the acquisition function nor the information source.
	 */
	good,
	/**
	 * Notes:   Supervision function has detected an abnormal condition of the
	 * acquisition function or the information source (missing or non-operating
	 * updating devices). The value shall be undefined under this condition. The mark
	 * invalid shall be used to indicate to the client that the value may be incorrect
	 * and shall not be used.
	 * EXAMPLE - If an input unit detects an oscillation of one input it will mark the
	 * related information as invalid.
	 */
	invalid,
	/**
	 * Notes:   Supervision function has detected any abnormal behaviour. However, the
	 * value could still be valid. It is client's responsibility to determine whether
	 * the values marked 'questionable' should be used.
	 */
	questionable
};
#endif // !defined(EA_5421C04C_6F78_49b0_A082_A83F3A8B171D__INCLUDED_)
