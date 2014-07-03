///////////////////////////////////////////////////////////
//  BOOLEAN_SG.h
//  Implementation of the Class BOOLEAN_SG
//  Created on:      15-Apr-2014 2:52:06 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_88FFA0A0_FC8C_4e11_9E12_BAF1ACE59ACC__INCLUDED_)
#define EA_88FFA0A0_FC8C_4e11_9E12_BAF1ACE59ACC__INCLUDED_

#include "FCDA_SP.h"
#include "BOOLEAN.h"

class BOOLEAN_SG : public FCDA_SP
{

public:
	BOOLEAN_SG();
	virtual ~BOOLEAN_SG();

private:
	BOOLEAN attr;

};
#endif // !defined(EA_88FFA0A0_FC8C_4e11_9E12_BAF1ACE59ACC__INCLUDED_)
