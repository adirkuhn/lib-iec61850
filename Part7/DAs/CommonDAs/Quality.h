///////////////////////////////////////////////////////////
//  Quality.h
//  Implementation of the Class Quality
//  Created on:      15-Apr-2014 2:52:43 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_A5D8A8CE_FB06_4f60_91AA_CA537B3325AB__INCLUDED_)
#define EA_A5D8A8CE_FB06_4f60_91AA_CA537B3325AB__INCLUDED_

#include "P_Quality.h"
#include "PrimitiveDA.h"

/**
 * <font color="#141414">See P_Quality.</font>
 */
class Quality : public PrimitiveDA
{

public:
	Quality();
	virtual ~Quality();

private:
	P_Quality val;

};
#endif // !defined(EA_A5D8A8CE_FB06_4f60_91AA_CA537B3325AB__INCLUDED_)
