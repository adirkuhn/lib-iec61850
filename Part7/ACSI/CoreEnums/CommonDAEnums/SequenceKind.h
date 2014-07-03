///////////////////////////////////////////////////////////
//  SequenceKind.h
//  Implementation of the Enumeration SequenceKind
//  Created on:      15-Apr-2014 2:52:45 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_C86BE701_43A7_4783_B9B7_4E6E3CE9D0BC__INCLUDED_)
#define EA_C86BE701_43A7_4783_B9B7_4E6E3CE9D0BC__INCLUDED_

/**
 * Not explicitly defined in the standard.
 */
enum SequenceKind
{
	/**
	 * Sequence components 'CDC.[c1 | c2 | c3]' are positive, negative and zero,
	 * respectively.
	 */
	posNegZero,
	/**
	 * Sequence components 'CDC.[c1 | c2 | c3]' are direct, quadratic and zero,
	 * respectively.
	 */
	dirQuadZero
};
#endif // !defined(EA_C86BE701_43A7_4783_B9B7_4E6E3CE9D0BC__INCLUDED_)
