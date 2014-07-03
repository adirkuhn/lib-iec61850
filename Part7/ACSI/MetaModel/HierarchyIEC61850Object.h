///////////////////////////////////////////////////////////
//  HierarchyIEC61850Object.h
//  Implementation of the Class HierarchyIEC61850Object
//  Created on:      15-Apr-2014 2:52:21 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_78422277_710A_45d6_94CA_FDBF1A8FEAEE__INCLUDED_)
#define EA_78422277_710A_45d6_94CA_FDBF1A8FEAEE__INCLUDED_

#include "IEC61850Object.h"

/**
 * IEC61850 objetc that belongs to a naming hierarchy.
 */
class HierarchyIEC61850Object : public IEC61850Object
{

public:
	HierarchyIEC61850Object();
	virtual ~HierarchyIEC61850Object();

	IEC61850Object getParent();

};
#endif // !defined(EA_78422277_710A_45d6_94CA_FDBF1A8FEAEE__INCLUDED_)
