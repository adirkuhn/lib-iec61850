///////////////////////////////////////////////////////////
//  VectorArray_MX_dchg_dupd.h
//  Implementation of the Class VectorArray_MX_dchg_dupd
//  Created on:      15-Apr-2014 2:52:52 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_8A21FCE7_5CEC_4d6d_8CC6_FA9654D49222__INCLUDED_)
#define EA_8A21FCE7_5CEC_4d6d_8CC6_FA9654D49222__INCLUDED_

#include "VectorArray.h"
#include "FCDA_MX_dchg.h"

class VectorArray_MX_dchg_dupd : public FCDA_MX_dchg
{

public:
	VectorArray_MX_dchg_dupd();
	virtual ~VectorArray_MX_dchg_dupd();

private:
	VectorArray attr;

};
#endif // !defined(EA_8A21FCE7_5CEC_4d6d_8CC6_FA9654D49222__INCLUDED_)
