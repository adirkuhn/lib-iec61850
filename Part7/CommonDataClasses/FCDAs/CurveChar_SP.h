///////////////////////////////////////////////////////////
//  CurveChar_SP.h
//  Implementation of the Class CurveChar_SP
//  Created on:      15-Apr-2014 2:52:12 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_4C3B81D0_913D_459e_9D05_EA1245B293E4__INCLUDED_)
#define EA_4C3B81D0_913D_459e_9D05_EA1245B293E4__INCLUDED_

#include "CurveChar.h"
#include "FCDA_SP.h"

class CurveChar_SP : public FCDA_SP
{

public:
	CurveChar_SP();
	virtual ~CurveChar_SP();

private:
	CurveChar attr;

};
#endif // !defined(EA_4C3B81D0_913D_459e_9D05_EA1245B293E4__INCLUDED_)
