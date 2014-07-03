///////////////////////////////////////////////////////////
//  INT32_SE.h
//  Implementation of the Class INT32_SE
//  Created on:      15-Apr-2014 2:52:28 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_82868146_45B8_423f_8E66_F27E9B6DC5F7__INCLUDED_)
#define EA_82868146_45B8_423f_8E66_F27E9B6DC5F7__INCLUDED_

#include "INT32.h"
#include "FCDA_SE.h"

class INT32_SE : public FCDA_SE
{

public:
	INT32_SE();
	virtual ~INT32_SE();

private:
	INT32 attr;

};
#endif // !defined(EA_82868146_45B8_423f_8E66_F27E9B6DC5F7__INCLUDED_)
