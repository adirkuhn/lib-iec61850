///////////////////////////////////////////////////////////
//  BOOLEAN_CF.h
//  Implementation of the Class BOOLEAN_CF
//  Created on:      15-Apr-2014 2:52:06 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_DF406095_1786_433c_A5ED_617774F9DC50__INCLUDED_)
#define EA_DF406095_1786_433c_A5ED_617774F9DC50__INCLUDED_

#include "BOOLEAN.h"
#include "FCDA_CF.h"

class BOOLEAN_CF : public FCDA_CF
{

public:
	BOOLEAN_CF();
	virtual ~BOOLEAN_CF();

private:
	BOOLEAN attr;

};
#endif // !defined(EA_DF406095_1786_433c_A5ED_617774F9DC50__INCLUDED_)
