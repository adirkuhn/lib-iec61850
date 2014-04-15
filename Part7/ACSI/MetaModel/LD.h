///////////////////////////////////////////////////////////
//  LD.h
//  Implementation of the Class LD
//  Created on:      15-Apr-2014 2:52:31 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_7548BBEE_A3C3_4345_99CB_3EA9B156C466__INCLUDED_)
#define EA_7548BBEE_A3C3_4345_99CB_3EA9B156C466__INCLUDED_

//#include "SERVER.h"
#include "LDReference.h"
#include "LNPHD.h"
#include "LLN0.h"
#include "LNDOM.h"
#include "NamedIEC61850Object.h"
#include "LN0.h"

/**
 * part 7-2, sec. 8
 * <b>Original doc:</b>
 * Contains the information produced and consumed by a group of domain-specific
 * application functions; functions are defined as LOGICAL_NODEs (LNs).
 * NOTE: An LD can be used simply as a container of a group of LNs or as a device
 * that functions as a gateway or proxy. Details on the use of LD can be found in
 * IEC 61850-7-1.
 * <b>Modelling note 1</b>: Services are defined in AcsiLD interface.
 * <b>Modelling note 2</b>: Original specification in IEC 61850-7-2 defines an
 * array LogicalNode [1..n] of LNs: "LNs that are contained in the LD. IEC 61850-7-
 * 4 specifies specialised classes of LNs." We split this into three explicit
 * relations to meta-model subtypes of LN.
 */
class LD : public NamedIEC61850Object
{

public:
	LD();
	virtual ~LD();
	LNPHD *m_LNPHD;
	LNDOM *m_LNDOM;
	LN0 *m_LN0;

    //SERVER getServer();
	LDReference getLdRef();
	LNPHD getLphd();
	LLN0 getLn0();
	LNDOM getDomainLns();

};
#endif // !defined(EA_7548BBEE_A3C3_4345_99CB_3EA9B156C466__INCLUDED_)
