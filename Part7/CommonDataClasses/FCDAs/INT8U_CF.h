///////////////////////////////////////////////////////////
//  INT8U_CF.h
//  Implementation of the Class INT8U_CF
//  Created on:      15-Apr-2014 2:52:30 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_E3A2D128_072D_4d10_855F_67E0174E45AC__INCLUDED_)
#define EA_E3A2D128_072D_4d10_855F_67E0174E45AC__INCLUDED_

#include "INT8U.h"
#include "FCDA_CF.h"

class INT8U_CF : public FCDA_CF
{

public:
	INT8U_CF();
	virtual ~INT8U_CF();

private:
	INT8U attr;

};
#endif // !defined(EA_E3A2D128_072D_4d10_855F_67E0174E45AC__INCLUDED_)
