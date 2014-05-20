///////////////////////////////////////////////////////////
//  NamedIEC61850Object.h
//  Implementation of the Class NamedIEC61850Object
//  Created on:      15-Apr-2014 2:52:36 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_767F83EC_C0C0_4708_8E08_2E31B477BD86__INCLUDED_)
#define EA_767F83EC_C0C0_4708_8E08_2E31B477BD86__INCLUDED_

#include "ObjectName.h"
#include "P_VISIBLE_STRING255.h"
#include "P_VISIBLE_STRING32.h"
#include "HierarchyIEC61850Object.h"

/**
 * Hierarchy IEC61850 object with a name.
 */
class NamedIEC61850Object : public HierarchyIEC61850Object
{
private:
    ObjectName objectName;

public:
    NamedIEC61850Object();
	virtual ~NamedIEC61850Object();

    ObjectName getName();
    void setName(P_VISIBLE_STRING32 name);
	virtual void getObjectRef();
	P_VISIBLE_STRING255 getRef();

};
#endif // !defined(EA_767F83EC_C0C0_4708_8E08_2E31B477BD86__INCLUDED_)
