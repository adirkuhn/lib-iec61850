///////////////////////////////////////////////////////////
//  INT32_SP.h
//  Implementation of the Class INT32_SP
//  Created on:      15-Apr-2014 2:52:28 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_6EB753D2_0F14_4649_9CE5_F7A0533451BA__INCLUDED_)
#define EA_6EB753D2_0F14_4649_9CE5_F7A0533451BA__INCLUDED_

#include "INT32.h"
#include "FCDA_SP.h"

class INT32_SP : public FCDA_SP
{

public:
	INT32_SP();
	virtual ~INT32_SP();

private:
	INT32 attr;

};
#endif // !defined(EA_6EB753D2_0F14_4649_9CE5_F7A0533451BA__INCLUDED_)
