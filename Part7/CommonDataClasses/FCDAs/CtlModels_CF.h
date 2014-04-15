///////////////////////////////////////////////////////////
//  CtlModels_CF.h
//  Implementation of the Class CtlModels_CF
//  Created on:      15-Apr-2014 2:52:11 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_66A6D3E7_45F6_45e7_B1BB_00DEC02D8C17__INCLUDED_)
#define EA_66A6D3E7_45F6_45e7_B1BB_00DEC02D8C17__INCLUDED_

#include "CtlModels.h"
#include "FCDA_CF.h"

class CtlModels_CF : public FCDA_CF
{

public:
	CtlModels_CF();
	virtual ~CtlModels_CF();

private:
	CtlModels attr;

};
#endif // !defined(EA_66A6D3E7_45F6_45e7_B1BB_00DEC02D8C17__INCLUDED_)
