///////////////////////////////////////////////////////////
//  CurveChar.h
//  Implementation of the Class CurveChar
//  Created on:      15-Apr-2014 2:52:11 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_77D8C778_1D48_44be_A7B9_4BF442BAFDA4__INCLUDED_)
#define EA_77D8C778_1D48_44be_A7B9_4BF442BAFDA4__INCLUDED_

#include "PrimitiveDA.h"
#include "CurveCharKind.h"

/**
 * <font color="#141414">See CurveCharKind.</font>
 */
class CurveChar : public PrimitiveDA
{

public:
	CurveChar();
	virtual ~CurveChar();

private:
	CurveCharKind val;

};
#endif // !defined(EA_77D8C778_1D48_44be_A7B9_4BF442BAFDA4__INCLUDED_)
