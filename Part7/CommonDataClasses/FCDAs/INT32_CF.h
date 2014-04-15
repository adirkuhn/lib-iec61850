///////////////////////////////////////////////////////////
//  INT32_CF.h
//  Implementation of the Class INT32_CF
//  Created on:      15-Apr-2014 2:52:28 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_08EADF50_43A4_41bd_A4B0_77DF4F20AE81__INCLUDED_)
#define EA_08EADF50_43A4_41bd_A4B0_77DF4F20AE81__INCLUDED_

#include "INT32.h"
#include "FCDA_CF.h"

class INT32_CF : public FCDA_CF
{

public:
	INT32_CF();
	virtual ~INT32_CF();

private:
	INT32 attr;

};
#endif // !defined(EA_08EADF50_43A4_41bd_A4B0_77DF4F20AE81__INCLUDED_)
