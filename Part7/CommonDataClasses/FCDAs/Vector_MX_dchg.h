///////////////////////////////////////////////////////////
//  Vector_MX_dchg.h
//  Implementation of the Class Vector_MX_dchg
//  Created on:      15-Apr-2014 2:52:51 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_C5D9BE36_5E23_4e5a_8559_51B33F8C1EA7__INCLUDED_)
#define EA_C5D9BE36_5E23_4e5a_8559_51B33F8C1EA7__INCLUDED_

#include "Vector.h"
#include "FCDA_MX_dchg.h"

class Vector_MX_dchg : public FCDA_MX_dchg
{

public:
	Vector_MX_dchg();
	virtual ~Vector_MX_dchg();

private:
	Vector attr;

};
#endif // !defined(EA_C5D9BE36_5E23_4e5a_8559_51B33F8C1EA7__INCLUDED_)
