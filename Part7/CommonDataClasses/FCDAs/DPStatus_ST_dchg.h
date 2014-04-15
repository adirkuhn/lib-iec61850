///////////////////////////////////////////////////////////
//  DPStatus_ST_dchg.h
//  Implementation of the Class DPStatus_ST_dchg
//  Created on:      15-Apr-2014 2:52:14 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_BE709BCF_EB8D_4d70_93B4_E2127172F034__INCLUDED_)
#define EA_BE709BCF_EB8D_4d70_93B4_E2127172F034__INCLUDED_

#include "DPStatus.h"
#include "FCDA_ST_dchg.h"

class DPStatus_ST_dchg : public FCDA_ST_dchg
{

public:
	DPStatus_ST_dchg();
	virtual ~DPStatus_ST_dchg();

private:
	DPStatus attr;

};
#endif // !defined(EA_BE709BCF_EB8D_4d70_93B4_E2127172F034__INCLUDED_)
