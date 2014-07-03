///////////////////////////////////////////////////////////
//  SeverityKind.h
//  Implementation of the Enumeration SeverityKind
//  Created on:      15-Apr-2014 2:52:46 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_FF627203_FEB9_48ac_9EAF_473E21598AAD__INCLUDED_)
#define EA_FF627203_FEB9_48ac_9EAF_473E21598AAD__INCLUDED_

/**
 * Not explicitly defined in the standard.
 */
enum SeverityKind
{
	/**
	 * Severity cannot be determined.
	 */
	unknown,
	/**
	 * Severity is critical in terms of safe operation, or data is considered critical
	 * and priviledged access was attempted.
	 */
	critical,
	/**
	 * Severity is major in terms of safe operation, or data is considered of major
	 * importance and priviledged access was attempted.
	 */
	major,
	/**
	 * Severity is minor in the sense that access control was denied to data
	 * considered priviledged.
	 */
	minor,
	/**
	 * Less severe than minor.
	 */
	warning
};
#endif // !defined(EA_FF627203_FEB9_48ac_9EAF_473E21598AAD__INCLUDED_)
