///////////////////////////////////////////////////////////
//  FLOAT32_SG.h
//  Implementation of the Class FLOAT32_SG
//  Created on:      15-Apr-2014 2:52:19 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_18A12C0B_1DF7_4cc9_B318_46F8270FBB50__INCLUDED_)
#define EA_18A12C0B_1DF7_4cc9_B318_46F8270FBB50__INCLUDED_

#include "FLOAT32.h"
#include "FCDA_SG.h"

class FLOAT32_SG : public FCDA_SG
{

public:
	FLOAT32_SG();
	virtual ~FLOAT32_SG();

private:
	FLOAT32 attr;

};
#endif // !defined(EA_18A12C0B_1DF7_4cc9_B318_46F8270FBB50__INCLUDED_)
