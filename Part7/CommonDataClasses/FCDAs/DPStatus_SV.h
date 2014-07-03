///////////////////////////////////////////////////////////
//  DPStatus_SV.h
//  Implementation of the Class DPStatus_SV
//  Created on:      15-Apr-2014 2:52:14 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_F2D765DF_1D91_4077_9496_90B22A520D35__INCLUDED_)
#define EA_F2D765DF_1D91_4077_9496_90B22A520D35__INCLUDED_

#include "DPStatus.h"
#include "FCDA_SV.h"

class DPStatus_SV : public FCDA_SV
{

public:
	DPStatus_SV();
	virtual ~DPStatus_SV();

private:
	DPStatus attr;

};
#endif // !defined(EA_F2D765DF_1D91_4077_9496_90B22A520D35__INCLUDED_)
