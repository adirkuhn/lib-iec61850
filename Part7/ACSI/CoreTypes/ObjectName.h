///////////////////////////////////////////////////////////
//  ObjectName.h
//  Implementation of the Class ObjectName
//  Created on:      15-Apr-2014 2:52:37 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_590A2CA8_4808_40cb_8CB6_0349EB778973__INCLUDED_)
#define EA_590A2CA8_4808_40cb_8CB6_0349EB778973__INCLUDED_

#include "P_VISIBLE_STRING32.h"

/**
 * part 7-2, sec. 5
 * Value in this type shall specify a unique instance name within the given parent.
 * 
 * NOTE: Clause 19 specifies constraints on the use of the type ObjectName.
 * <b>Modelling note</b>: We define this type to hold an attribute of type
 * P_VISIBLE_STRING32 (because we cannot use inheritance from primitive type), so
 * that an implementation could provide validation of specified naming rules.
 */
class ObjectName
{

public:
	ObjectName();
	virtual ~ObjectName();

private:
	P_VISIBLE_STRING32 name;

};
#endif // !defined(EA_590A2CA8_4808_40cb_8CB6_0349EB778973__INCLUDED_)
