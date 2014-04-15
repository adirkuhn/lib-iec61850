///////////////////////////////////////////////////////////
//  CurveChar_SE.h
//  Implementation of the Class CurveChar_SE
//  Created on:      15-Apr-2014 2:52:11 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_0DC94AC7_7D8E_4b69_BC2A_ABE2D87FCBF2__INCLUDED_)
#define EA_0DC94AC7_7D8E_4b69_BC2A_ABE2D87FCBF2__INCLUDED_

#include "CurveChar.h"
#include "FCDA_SE.h"

class CurveChar_SE : public FCDA_SE
{

public:
	CurveChar_SE();
	virtual ~CurveChar_SE();

private:
	CurveChar attr;

};
#endif // !defined(EA_0DC94AC7_7D8E_4b69_BC2A_ABE2D87FCBF2__INCLUDED_)
