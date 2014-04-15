///////////////////////////////////////////////////////////
//  DPStatusKind.h
//  Implementation of the Enumeration DPStatusKind
//  Created on:      15-Apr-2014 2:52:14 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_DB9F3B3F_E566_4e8a_B895_639873875CDD__INCLUDED_)
#define EA_DB9F3B3F_E566_4e8a_B895_639873875CDD__INCLUDED_

/**
 * <font color="#141414">Not explicitly defined in the standard, but the same
 * combination of possible values is used at several places in Parts 7-3 and 7-2.
 * </font>
 */
enum DPStatusKind
{
	intermediateState,
	offOrFalse,
	onOrTrue,
	badState
};
#endif // !defined(EA_DB9F3B3F_E566_4e8a_B895_639873875CDD__INCLUDED_)
