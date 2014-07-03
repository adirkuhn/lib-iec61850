///////////////////////////////////////////////////////////
//  LNOwnedDS.h
//  Implementation of the Class LNOwnedDS
//  Created on:      15-Apr-2014 2:52:32 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_A4638764_143A_447c_82B3_03174CC36A61__INCLUDED_)
#define EA_A4638764_143A_447c_82B3_03174CC36A61__INCLUDED_

#include "LN.h"
#include "LNOwnedDSReference.h"
#include "DS.h"

/**
 * Not explicitly defined in the standard. This abstract subtype of DS allows us
 * to distinguish DS owned by an LN (configured and persistent) from those owned
 * by a TPAA (non-persistent DSs).
 * <b>Modelling note</b>: This class is abstract, as one should be using meta-
 * model subclasses.
 */
class LNOwnedDS : public DS
{

public:
	LNOwnedDS();
	virtual ~LNOwnedDS();

	LN getLn();
	LNOwnedDSReference getDsRef();

};
#endif // !defined(EA_A4638764_143A_447c_82B3_03174CC36A61__INCLUDED_)
