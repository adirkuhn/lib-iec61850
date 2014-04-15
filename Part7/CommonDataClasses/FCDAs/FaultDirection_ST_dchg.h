///////////////////////////////////////////////////////////
//  FaultDirection_ST_dchg.h
//  Implementation of the Class FaultDirection_ST_dchg
//  Created on:      15-Apr-2014 2:52:14 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_C79B97A0_EEDD_4916_8890_E878264B6EC2__INCLUDED_)
#define EA_C79B97A0_EEDD_4916_8890_E878264B6EC2__INCLUDED_

#include "FaultDirection.h"
#include "FCDA_ST_dchg.h"

class FaultDirection_ST_dchg : public FCDA_ST_dchg
{

public:
	FaultDirection_ST_dchg();
	virtual ~FaultDirection_ST_dchg();

private:
	FaultDirection attr;

};
#endif // !defined(EA_C79B97A0_EEDD_4916_8890_E878264B6EC2__INCLUDED_)
