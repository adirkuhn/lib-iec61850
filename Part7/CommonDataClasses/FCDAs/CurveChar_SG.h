///////////////////////////////////////////////////////////
//  CurveChar_SG.h
//  Implementation of the Class CurveChar_SG
//  Created on:      15-Apr-2014 2:52:12 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_74CA7669_196D_4b9f_9C12_1B0C88B06C50__INCLUDED_)
#define EA_74CA7669_196D_4b9f_9C12_1B0C88B06C50__INCLUDED_

#include "CurveChar.h"
#include "FCDA_SG.h"

class CurveChar_SG : public FCDA_SG
{

public:
	CurveChar_SG();
	virtual ~CurveChar_SG();

private:
	CurveChar attr;

};
#endif // !defined(EA_74CA7669_196D_4b9f_9C12_1B0C88B06C50__INCLUDED_)
