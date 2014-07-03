///////////////////////////////////////////////////////////
//  GroupA.h
//  Implementation of the Class GroupA
//  Created on:      15-Apr-2014 2:52:20 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_FF96EECF_0F38_417c_A1B8_E62EFF22397C__INCLUDED_)
#define EA_FF96EECF_0F38_417c_A1B8_E62EFF22397C__INCLUDED_

#include "SPS.h"
#include "INC.h"
#include "DomainLN.h"

/**
 * <font color="#141414">Abstract type, holding common attributes of all the
 * logical nodes in this group.defined as such in the standard.</font>
 */
class GroupA : public DomainLN
{

public:
	GroupA();
	virtual ~GroupA();
	/**
	 * 'GroupA.Loc.stVal=TRUE' stands for local (operation from the bay unit), while
	 * ''GroupA.Loc.stVal=FALSE' stands for remote (from a station unit) operation of
	 * the automatic controller. The changeover is always done locally, with a
	 * physical key or toggle switch, which may have a set of contacts from which the
	 * position can be read.
	 */
	SPS Loc;
	/**
	 * 'GroupA.OpCntRs.stVal' is the count of operations. It can be reset from remote,
	 * with the desired new counter value 'GroupA.OpCntRs.ctlVal', which may be other
	 * than 0.
	 */
	INC OpCntRs;
	/**
	 * If 'GroupA.Auto.stVal=TRUE', the output circuit of the automatic controller is
	 * enabled (control is automatic); otherwise, it is disabled (control is manual)
	 */
	SPS Auto;

};
#endif // !defined(EA_FF96EECF_0F38_417c_A1B8_E62EFF22397C__INCLUDED_)
