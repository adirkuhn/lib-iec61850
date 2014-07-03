///////////////////////////////////////////////////////////
//  CtlModels.h
//  Implementation of the Class CtlModels
//  Created on:      15-Apr-2014 2:52:11 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_D36EEBA2_525D_4cc3_B50A_8ECF10C71088__INCLUDED_)
#define EA_D36EEBA2_525D_4cc3_B50A_8ECF10C71088__INCLUDED_

#include "PrimitiveDA.h"
#include "CtlModelsKind.h"

/**
 * <font color="#141414">See CtlModelsKind.</font>
 */
class CtlModels : public PrimitiveDA
{

public:
	CtlModels();
	virtual ~CtlModels();

private:
	CtlModelsKind val;

};
#endif // !defined(EA_D36EEBA2_525D_4cc3_B50A_8ECF10C71088__INCLUDED_)
