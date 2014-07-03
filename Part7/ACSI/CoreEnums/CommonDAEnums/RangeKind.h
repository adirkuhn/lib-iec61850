///////////////////////////////////////////////////////////
//  RangeKind.h
//  Implementation of the Enumeration RangeKind
//  Created on:      15-Apr-2014 2:52:44 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_BEF6C456_BCC9_4791_9783_633D29DC4683__INCLUDED_)
#define EA_BEF6C456_BCC9_4791_9783_633D29DC4683__INCLUDED_

/**
 * Not explicitly defined in the standard.
 * part 7-3, tab. 48
 * Used for: [MV | CMV].range, in conjunction with [MV | CMV].rangeC.
 * See the Statechart diagram 'Range / value (range)'.
 */
enum RangeKind
{
	normal,
	high,
	low,
	highHigh,
	lowLow
};
#endif // !defined(EA_BEF6C456_BCC9_4791_9783_633D29DC4683__INCLUDED_)
