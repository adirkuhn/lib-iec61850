///////////////////////////////////////////////////////////
//  INT8.h
//  Implementation of the Class INT8
//  Created on:      15-Apr-2014 2:52:29 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_8121401F_9076_4feb_AAFA_19E83FCCC2B1__INCLUDED_)
#define EA_8121401F_9076_4feb_AAFA_19E83FCCC2B1__INCLUDED_

#include "PrimitiveDA.h"
#include "P_INT8.h"

class INT8 : public PrimitiveDA
{

public:
    P_INT8 val;
	INT8();
	virtual ~INT8();
    P_INT8 getVal();
    void setVal(P_INT8 val);


//private:
    //P_INT8 val;

};
#endif // !defined(EA_8121401F_9076_4feb_AAFA_19E83FCCC2B1__INCLUDED_)
