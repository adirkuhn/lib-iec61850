///////////////////////////////////////////////////////////
//  GroupY.h
//  Implementation of the Class GroupY
//  Created on:      15-Apr-2014 2:52:20 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_7D95A9C3_7D04_48fb_9FA5_896C5A77F1CD__INCLUDED_)
#define EA_7D95A9C3_7D04_48fb_9FA5_896C5A77F1CD__INCLUDED_

#include "INS_HealthState.h"
#include "DPL.h"
#include "DomainLN.h"

/**
 * <font color="#141414">Abstract type, holding common attributes of all the
 * logical nodes in this group.</font>
 * <font color="#141414">
 * </font><font color="#141414">Not defined as such in the standard.</font>
 */
class GroupY : public DomainLN
{

public:
	GroupY();
	virtual ~GroupY();
	/**
	 * 'GroupY.EEHealth.stVal' reflects the state of external (primary) equipment to
	 * which the logical node is associated (for example, power transformer controlled
	 * by the logical node YPTR)
	 */
	INS_HealthState EEHealth;
	/**
	 * Name plate of external (primary) equipment to which the logical node is
	 * associated (for example, power transformer controlled by the logical node YPTR).
	 */
	DPL EEName;

};
#endif // !defined(EA_7D95A9C3_7D04_48fb_9FA5_896C5A77F1CD__INCLUDED_)
