///////////////////////////////////////////////////////////
//  Quality_MX_qchg.h
//  Implementation of the Class Quality_MX_qchg
//  Created on:      15-Apr-2014 2:52:43 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_871ADD45_D25D_45b2_A4A4_A22E54D003A2__INCLUDED_)
#define EA_871ADD45_D25D_45b2_A4A4_A22E54D003A2__INCLUDED_

#include "Quality.h"
#include "FCDA_MX_dchg.h"

class Quality_MX_qchg : public FCDA_MX_dchg
{

public:
	Quality_MX_qchg();
	virtual ~Quality_MX_qchg();

private:
	Quality attr;

};
#endif // !defined(EA_871ADD45_D25D_45b2_A4A4_A22E54D003A2__INCLUDED_)
