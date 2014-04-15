///////////////////////////////////////////////////////////
//  LNDOM.h
//  Implementation of the Class LNDOM
//  Created on:      15-Apr-2014 2:52:32 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_640679CC_53F0_4924_825E_3FEAE63276A6__INCLUDED_)
#define EA_640679CC_53F0_4924_825E_3FEAE63276A6__INCLUDED_

#include "LN.h"

/**
 * part 7-2, section 8.1.2.3
 * Not explicitly defined in the standard. It is, however, needed to represent
 * explicitly the cardinalities between LD and "other than LPHD or LLN0" LNs. IEC
 * 61850-7-4 specifies specialised classes, such as XCBR and MMXU.
 * <b>Modelling note</b>: We reserve the name "DomainLN" as supertype for the
 * <i>concrete </i>domain LNs (part 7-4), that contain <i>concrete </i>CDCs (part
 * 7-3).
 */
class LNDOM : public LN
{

public:
	LNDOM();
	virtual ~LNDOM();

};
#endif // !defined(EA_640679CC_53F0_4924_825E_3FEAE63276A6__INCLUDED_)
