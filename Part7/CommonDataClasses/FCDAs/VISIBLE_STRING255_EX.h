///////////////////////////////////////////////////////////
//  VISIBLE_STRING255_EX.h
//  Implementation of the Class VISIBLE_STRING255_EX
//  Created on:      15-Apr-2014 2:52:52 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_DC98192A_B9D2_44a7_8C27_5A03D8D8AB37__INCLUDED_)
#define EA_DC98192A_B9D2_44a7_8C27_5A03D8D8AB37__INCLUDED_

#include "VISIBLE_STRING255.h"
#include "FCDA_EX.h"

class VISIBLE_STRING255_EX : public FCDA_EX
{

public:
	VISIBLE_STRING255_EX();
	virtual ~VISIBLE_STRING255_EX();

private:
	VISIBLE_STRING255 attr;

};
#endif // !defined(EA_DC98192A_B9D2_44a7_8C27_5A03D8D8AB37__INCLUDED_)
