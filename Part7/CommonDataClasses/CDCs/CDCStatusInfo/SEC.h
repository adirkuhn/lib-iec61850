///////////////////////////////////////////////////////////
//  SEC.h
//  Implementation of the Class SEC
//  Created on:      15-Apr-2014 2:52:45 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_38926BC6_D2C5_4aa9_A21C_C2F953196182__INCLUDED_)
#define EA_38926BC6_D2C5_4aa9_A21C_C2F953196182__INCLUDED_

#include "INT32U_ST_dchg.h"
#include "Severity_ST.h"
#include "OCTET_STRING64_ST.h"
#include "VISIBLE_STRING64_ST.h"
#include "StatusInfo.h"

/**
 * (no documentation)
 * part 7-3, tab. 18
 */
class SEC : public StatusInfo
{

public:
	SEC();
	virtual ~SEC();
	/**
	 * Counter value of security violations.
	 */
	INT32U_ST_dchg cnt;
	/**
	 * Severity of the last violation detected
	 */
	Severity_ST sev;
	/**
	 * Address of the remote source that last caused the count to be incremented. NOTE:
	 * The kind of address stored (application address, IP address, link address, ...)
	 * is whatever the server can detect. This may depend on the specific mapping.
	 */
	OCTET_STRING64_ST addr;
	/**
	 * Additional information that may give further clarification as to the last
	 * detected violation.
	 */
	VISIBLE_STRING64_ST addInfo;

};
#endif // !defined(EA_38926BC6_D2C5_4aa9_A21C_C2F953196182__INCLUDED_)
