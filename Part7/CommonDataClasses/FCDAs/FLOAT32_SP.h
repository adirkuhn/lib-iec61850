///////////////////////////////////////////////////////////
//  FLOAT32_SP.h
//  Implementation of the Class FLOAT32_SP
//  Created on:      15-Apr-2014 2:52:19 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_41687144_D40B_4213_A52A_AB7CB94285AD__INCLUDED_)
#define EA_41687144_D40B_4213_A52A_AB7CB94285AD__INCLUDED_

#include "FLOAT32.h"
#include "FCDA_SP.h"

class FLOAT32_SP : public FCDA_SP
{

public:
	FLOAT32_SP();
	virtual ~FLOAT32_SP();

private:
	FLOAT32 attr;

};
#endif // !defined(EA_41687144_D40B_4213_A52A_AB7CB94285AD__INCLUDED_)
