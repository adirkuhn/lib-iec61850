///////////////////////////////////////////////////////////
//  Quality_SV.h
//  Implementation of the Class Quality_SV
//  Created on:      15-Apr-2014 2:52:43 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_FEC4353E_5574_4470_88CA_AE2D910BF8BB__INCLUDED_)
#define EA_FEC4353E_5574_4470_88CA_AE2D910BF8BB__INCLUDED_

#include "Quality.h"
#include "FCDA_SV.h"

class Quality_SV : public FCDA_SV
{

public:
	Quality_SV();
	virtual ~Quality_SV();

private:
	Quality attr;

};
#endif // !defined(EA_FEC4353E_5574_4470_88CA_AE2D910BF8BB__INCLUDED_)
