///////////////////////////////////////////////////////////
//  INT16U_CF.h
//  Implementation of the Class INT16U_CF
//  Created on:      15-Apr-2014 2:52:27 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_0B1BA71A_5C0D_4c59_BAF0_7A5C0C145140__INCLUDED_)
#define EA_0B1BA71A_5C0D_4c59_BAF0_7A5C0C145140__INCLUDED_

#include "INT16U.h"
#include "FCDA_CF.h"

class INT16U_CF : public FCDA_CF
{

public:
	INT16U_CF();
	virtual ~INT16U_CF();

private:
	INT16U attr;

};
#endif // !defined(EA_0B1BA71A_5C0D_4c59_BAF0_7A5C0C145140__INCLUDED_)
