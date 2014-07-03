///////////////////////////////////////////////////////////
//  AngleReference_CF.h
//  Implementation of the Class AngleReference_CF
//  Created on:      15-Apr-2014 2:52:04 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_4241B517_74C3_4da4_848E_DC6035374CC5__INCLUDED_)
#define EA_4241B517_74C3_4da4_848E_DC6035374CC5__INCLUDED_

#include "AngleReference.h"
#include "FCDA_CF.h"

class AngleReference_CF : public FCDA_CF
{

public:
	AngleReference_CF();
	virtual ~AngleReference_CF();

private:
	AngleReference attr;

};
#endif // !defined(EA_4241B517_74C3_4da4_848E_DC6035374CC5__INCLUDED_)
