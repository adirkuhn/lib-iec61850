///////////////////////////////////////////////////////////
//  BOOLEAN_CO.h
//  Implementation of the Class BOOLEAN_CO
//  Created on:      15-Apr-2014 2:52:06 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_05702277_D430_4ab9_9432_B817F6CA5033__INCLUDED_)
#define EA_05702277_D430_4ab9_9432_B817F6CA5033__INCLUDED_

#include "FCDA_CO.h"
#include "BOOLEAN.h"

class BOOLEAN_CO : public FCDA_CO
{

public:
	BOOLEAN_CO();
	virtual ~BOOLEAN_CO();
    void setAttr(BOOLEAN attr);
    BOOLEAN getAttr();

private:
	BOOLEAN attr;

};
#endif // !defined(EA_05702277_D430_4ab9_9432_B817F6CA5033__INCLUDED_)
