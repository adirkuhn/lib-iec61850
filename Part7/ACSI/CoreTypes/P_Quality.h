///////////////////////////////////////////////////////////
//  P_Quality.h
//  Implementation of the Class P_Quality
//  Created on:      15-Apr-2014 2:52:40 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_2970EC00_242E_46c9_9A96_32CAF454C193__INCLUDED_)
#define EA_2970EC00_242E_46c9_9A96_32CAF454C193__INCLUDED_

#include "ValidityKind.h"
#include "DetailQual.h"
#include "SourceKind.h"
#include "P_BOOLEAN.h"

/**
 * part 7-3, tab. 2
 * Quality of data provided by the server.
 * The default value shall be applied if the functionality of the related
 * attribute is not supported. The mapping may specify to exclude the attribute
 * from the message, if it is not supported or if the default value applies.
 * Attributes of this type are NOT independent - for details, see sections 6.2.7
 * and 6.2.8.
 * NOTE The quality, as used within the scope of 61850, is related to the quality
 * of the information from the server. There may be a requirement that the client
 * uses additional quality information within its local database. This is a local
 * issue and not part of the scope of IEC 61850. However, the quality of a client
 * may have an impact on the quality supplied by a server of a client-server
 * relationship at a higher level (see Figure 3).
 */
class P_Quality
{

public:
	P_Quality();
	virtual ~P_Quality();
	/**
	 * Notes:   This is deduced from bits in 'Quality.detailQual'. See statechart
	 * diagram "validityStateMachine".
	 */
	ValidityKind validity;
	/**
	 * Notes:   part 7-3, section 6.2.
	 * See statechart diagram "validityStateMachine".
	 */
	DetailQual detailQual;
	/**
	 * Notes:   Gives information related to the origin of a value. The value may be
	 * acquired from the process or be a substituted value.
	 * NOTE 1 - Substitution may be done locally or via the communication services. In
	 * the second case, specific attributes with a FC=SV are used.
	 * NOTE 2 - There are various means to clear a substitution. As an example, a
	 * substitution that was done following an invalid condition may be cleared
	 * automatically if the invalid condition is cleared. However, this is a local
	 * issue and therefore not in the scope of this standard.
	 * NOTE - The DEFAULT value ("process") shall be applied, if this functionality is
	 * not supported. The mapping may specify to exclude this attribute from the
	 * message, if it is not supported or if the DEFAULT value applies.
	 */
	SourceKind source;
	/**
	 * Notes:   If set true, the value is a test value and thus not to be used for
	 * operational purpose. The processing of the test quality in the client shall be
	 * a local issue. This attribute is completely independent of the other attributes
	 * within 'detailQual'.
	 * The test identifier should normally be propagated through all hierarchical
	 * levels.
	 * NOTE - The DEFAULT value shall be applied, if this functionality is not
	 * supported. The mapping may specify to exclude this attribute from the message,
	 * if it is not supported or if the DEFAULT value applies.
	 */
	P_BOOLEAN test;
	/**
	 * Notes:   Set to true if further update of the value has been blocked by an
	 * operator. The value shall be the information that was acquired before blocking.
	 * If this identifier is set then the  identifier  of Quality.detailQual.oldData
	 * shall also be set.
	 * NOTE Both an operator and an automatic function may block communication
	 * updating and input updating. In both cases, Quality.detailQual.oldData will be
	 * set. If the blocking is done by an operator, then Quality.operatorBlocked is
	 * set additionally. In that case, an operator activity is required to clear the
	 * condition.
	 * EXAMPLE An operator may block the update of an input, to save the old value, if
	 * the auxiliary supply is switched off.
	 * NOTE - The DEFAULT value shall be applied, if this functionality is not
	 * supported. The mapping may specify to exclude this attribute from the message,
	 * if it is not supported or if the DEFAULT value applies.
	 */
	P_BOOLEAN operatorBlocked;

};
#endif // !defined(EA_2970EC00_242E_46c9_9A96_32CAF454C193__INCLUDED_)
