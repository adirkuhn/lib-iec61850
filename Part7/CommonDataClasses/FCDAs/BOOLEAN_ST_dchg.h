///////////////////////////////////////////////////////////
//  BOOLEAN_ST_dchg.h
//  Implementation of the Class BOOLEAN_ST_dchg
//  Created on:      15-Apr-2014 2:52:07 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_DD4B3C1D_9C53_4d33_8851_144450AB6004__INCLUDED_)
#define EA_DD4B3C1D_9C53_4d33_8851_144450AB6004__INCLUDED_

#include "BOOLEAN.h"
#include "FCDA_ST_dchg.h"

class BOOLEAN_ST_dchg : public FCDA_ST_dchg
{

public:
	BOOLEAN_ST_dchg();
	virtual ~BOOLEAN_ST_dchg();
    void setAttr(BOOLEAN attr);
    BOOLEAN getAttr();


private:
     BOOLEAN attr;

};
#endif // !defined(EA_DD4B3C1D_9C53_4d33_8851_144450AB6004__INCLUDED_)
