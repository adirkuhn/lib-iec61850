///////////////////////////////////////////////////////////
//  IED.h
//  Implementation of the Class IED
//  Created on:      15-Apr-2014 2:52:22 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_73053275_B4C9_484d_8D9A_5B95B7AF558A__INCLUDED_)
#define EA_73053275_B4C9_484d_8D9A_5B95B7AF558A__INCLUDED_

#include "P_VISIBLE_STRING32.h"
#include "SERVER.h"
#include "HierarchyIEC61850Object.h"

/**
 * Intelligent Electronic Device is a device with a microprocessor that can
 * contain one or more (IEC61850) SERVERs. In the context of IEC61850, IED could
 * be an electronic protection device, a controller or even a laptop/desktop
 * computer.
 * <b>Modelling note</b>: This class is not explicitly defined in IEC61850-7-2
 * (but only in SCL: IEC61850-6). However, it is an important concept that
 * deserves its place in the meta-model. When the meta-model gets instantiated
 * from a direct link to an IED with an IEC61850 SERVER, we typically create an
 * instance of the meta-model IED per connection. When the meta-model gets
 * instantiated from an SCL file, there is the full description of IED and its
 * functions.
 */
class IED : public HierarchyIEC61850Object
{

public:
	IED();
	virtual ~IED();
	SERVER *m_SERVER;

	P_VISIBLE_STRING32 getName();
	SERVER getServers();

};
#endif // !defined(EA_73053275_B4C9_484d_8D9A_5B95B7AF558A__INCLUDED_)
