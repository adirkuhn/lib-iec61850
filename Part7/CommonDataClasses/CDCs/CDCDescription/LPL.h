///////////////////////////////////////////////////////////
//  LPL.h
//  Implementation of the Class LPL
//  Created on:      15-Apr-2014 2:52:33 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_BBC68CE9_A870_4a04_891D_A371899B5B40__INCLUDED_)
#define EA_BBC68CE9_A870_4a04_891D_A371899B5B40__INCLUDED_

#include "VISIBLE_STRING255_DC.h"
#include "UNICODE_STRING255_DC.h"
#include "VISIBLE_STRING255_EX.h"
#include "DescriptionInfo.h"

/**
 * <font color="#141414">Used for nameplate information of logical nodes.</font>
 * <font color="#141414">
 * </font><font color="#141414">7-3, tab. 46</font>
 */
class LPL : public DescriptionInfo
{

public:
	LPL();
	virtual ~LPL();
	/**
	 * Name of the vendor
	 */
	VISIBLE_STRING255_DC vendor;
	/**
	 * Software revision
	 */
	VISIBLE_STRING255_DC swRev;
	/**
	 * Textual description of the data;  refers to the logical node.
	 */
	VISIBLE_STRING255_DC d;
	/**
	 * Textual description of the data using unicode characters.
	 */
	UNICODE_STRING255_DC dU;
	/**
	 * Uniquely identifies the configuration of a logical device instance. 'configRev'
	 * in LLN0 (at LD level) has to be changed at least on any semantic change of the
	 * data model of this LD related to the client functionality. How this is detected
	 * and performed is left to the user. Also the semantics of 'configRev' concerning
	 * other LN's is left to the user.
	 */
	VISIBLE_STRING255_DC configRev;
	/**
	 * Name space of logical device (LLN0.NamPlt.ldNs). Indicates which technical
	 * specification has been used as the prime name space for the whole logical
	 * device. Mandatory in LLN0 if its value is different from the default one: "IEC
	 * 61850-7-4:2003".
	 * Modelling note: "Name space"-related attributes have nothing to do with XML or
	 * C# namespaces. See class diagram CDCs::NamespaceConcept.
	 */
	VISIBLE_STRING255_EX ldNs;
	/**
	 * Name space of the logical node (LLN0.NamPlt.ldNs, DomainLN.NamPlt.lnNs).
	 * Defines the name space for all the named instances of CDCs that the LN contains
	 * (e.g., Pos for XCBR). If an LN has the same name space as the LD (lnNs=ldNs),
	 * it need not define lnNs.
	 * If additional LNs are used within an LD, they must provide their name space
	 * (lnNs), which is different from the logical device name space (ldNs).
	 * Modelling note: "Name space"-related attributes have nothing to do with XML or
	 * C# namespaces. See class diagram CDCs::NamespaceConcept
	 */
	VISIBLE_STRING255_EX lnNs;

};
#endif // !defined(EA_BBC68CE9_A870_4a04_891D_A371899B5B40__INCLUDED_)
