///////////////////////////////////////////////////////////
//  Vector_SV.h
//  Implementation of the Class Vector_SV
//  Created on:      15-Apr-2014 2:52:51 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_E0BAFD2D_6001_4950_A0C9_5DA1475CD483__INCLUDED_)
#define EA_E0BAFD2D_6001_4950_A0C9_5DA1475CD483__INCLUDED_

#include "Vector.h"
#include "FCDA_SV.h"

class Vector_SV : public FCDA_SV
{

public:
	Vector_SV();
	virtual ~Vector_SV();

private:
	Vector attr;

};
#endif // !defined(EA_E0BAFD2D_6001_4950_A0C9_5DA1475CD483__INCLUDED_)
