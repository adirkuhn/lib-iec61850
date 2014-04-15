///////////////////////////////////////////////////////////
//  Quality_ST_qchg.h
//  Implementation of the Class Quality_ST_qchg
//  Created on:      15-Apr-2014 2:52:43 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_125FEED1_5960_47eb_86FD_926A68219ACF__INCLUDED_)
#define EA_125FEED1_5960_47eb_86FD_926A68219ACF__INCLUDED_

#include "FCDA_ST_dupd.h"
#include "Quality.h"

class Quality_ST_qchg : public FCDA_ST_dupd
{

public:
	Quality_ST_qchg();
	virtual ~Quality_ST_qchg();

private:
	Quality attr;

};
#endif // !defined(EA_125FEED1_5960_47eb_86FD_926A68219ACF__INCLUDED_)
