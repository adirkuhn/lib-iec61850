///////////////////////////////////////////////////////////
//  NonPersistentDS.h
//  Implementation of the Class NonPersistentDS
//  Created on:      15-Apr-2014 2:52:36 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_FE7EEA56_B92F_4d6f_BC05_77443AE3D79D__INCLUDED_)
#define EA_FE7EEA56_B92F_4d6f_BC05_77443AE3D79D__INCLUDED_

#include "TPAA.h"
#include "NonPersistentDSReference.h"
#include "DS.h"

/**
 * Not explicitly defined in the standard. A non-persistent DS instance is created
 * by one TPAA client on the fly and is visible to that TPAA client only. It is
 * called non-persistent because its lifecycle is bound to the TPAA client that
 * created it (i.e., the server deletes it when the TPAA over which the instance
 * has been created is released or aborted). It can be referenced by URCBs and
 * USVCBs only.
 */
class NonPersistentDS : public DS
{

public:
	NonPersistentDS();
	virtual ~NonPersistentDS();

	TPAA getTpaa();
	NonPersistentDSReference getDsRef();

};
#endif // !defined(EA_FE7EEA56_B92F_4d6f_BC05_77443AE3D79D__INCLUDED_)
