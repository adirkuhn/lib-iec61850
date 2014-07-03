///////////////////////////////////////////////////////////
//  INT32.h
//  Implementation of the Class INT32
//  Created on:      15-Apr-2014 2:52:28 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_90615DE7_604F_4cc8_A85E_21CFDE3AE3AA__INCLUDED_)
#define EA_90615DE7_604F_4cc8_A85E_21CFDE3AE3AA__INCLUDED_

#include "P_INT32.h"
#include "PrimitiveDA.h"

/**
 * See P_INT32
 */
class INT32 : public PrimitiveDA
{

public:
	INT32();
	virtual ~INT32();

private:
	P_INT32 val;

};
#endif // !defined(EA_90615DE7_604F_4cc8_A85E_21CFDE3AE3AA__INCLUDED_)
