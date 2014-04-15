///////////////////////////////////////////////////////////
//  SourceKind.h
//  Implementation of the Class SourceKind
//  Created on:      15-Apr-2014 2:52:46 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_6EA681EA_F41C_40cc_984F_A04C0DD00D6B__INCLUDED_)
#define EA_6EA681EA_F41C_40cc_984F_A04C0DD00D6B__INCLUDED_

/**
 * part 7-3
 * Not explicitly defined in the standard.
 * Used for:
 *  Quality.source
 */
enum SourceKind
{
	/**
	 * Notes:   The value is provided by an input function from the process I/O or is
	 * calculated from some application function.
	 */
    process2,
	/**
	 * Notes:   The value is provided by an operator input or by an automatic source.
	 */
	substituted
};
#endif // !defined(EA_6EA681EA_F41C_40cc_984F_A04C0DD00D6B__INCLUDED_)
