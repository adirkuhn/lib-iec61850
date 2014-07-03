///////////////////////////////////////////////////////////
//  Originator.h
//  Implementation of the Class Originator
//  Created on:      15-Apr-2014 2:52:37 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_A7E11EF5_38EC_4d20_88B2_FD9DB1C5F1FF__INCLUDED_)
#define EA_A7E11EF5_38EC_4d20_88B2_FD9DB1C5F1FF__INCLUDED_

#include "OriginatorCategory.h"
#include "OCTET_STRING64.h"
#include "ComposedDA.h"

/**
 * part 7-3, tab. 8
 * Originator of the last change of a controllable data. See also
 * OriginatorCategoryKind.
 */
class Originator : public ComposedDA
{

public:
	Originator();
	virtual ~Originator();
	/**
	 * Originator category indicates who/what caused the change of a controllable value
	 */
	OriginatorCategory orCat;
	/**
	 * Originator identification shall show the address of the originator who caused
	 * the change of the value. If NULL, originator of a particular action is not
	 * known or is not reported.
	 * NOTE - The kind of address stored (application address, IP address, link
	 * address, etc.) is whatever the server can detect and may depend on the specific
	 * mapping
	 */
	OCTET_STRING64 orIdent;

};
#endif // !defined(EA_A7E11EF5_38EC_4d20_88B2_FD9DB1C5F1FF__INCLUDED_)
