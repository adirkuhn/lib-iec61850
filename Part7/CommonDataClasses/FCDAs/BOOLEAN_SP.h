///////////////////////////////////////////////////////////
//  BOOLEAN_SP.h
//  Implementation of the Class BOOLEAN_SP
//  Created on:      15-Apr-2014 2:52:06 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_59FE3315_75D9_44e9_B8AD_42BEB99FE58F__INCLUDED_)
#define EA_59FE3315_75D9_44e9_B8AD_42BEB99FE58F__INCLUDED_

#include "BOOLEAN.h"
#include "FCDA_SG.h"

class BOOLEAN_SP : public FCDA_SG
{

public:
	BOOLEAN_SP();
	virtual ~BOOLEAN_SP();

private:
	BOOLEAN attr;

};
#endif // !defined(EA_59FE3315_75D9_44e9_B8AD_42BEB99FE58F__INCLUDED_)
