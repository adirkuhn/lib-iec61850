///////////////////////////////////////////////////////////
//  ValWithTrans_ST_dchg.h
//  Implementation of the Class ValWithTrans_ST_dchg
//  Created on:      15-Apr-2014 2:52:50 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_3AB51ED0_13C9_4c25_B39B_319A7E1B526A__INCLUDED_)
#define EA_3AB51ED0_13C9_4c25_B39B_319A7E1B526A__INCLUDED_

#include "ValWithTrans.h"
#include "FCDA_ST_dchg.h"

class ValWithTrans_ST_dchg : public FCDA_ST_dchg
{

public:
	ValWithTrans_ST_dchg();
	virtual ~ValWithTrans_ST_dchg();

private:
	ValWithTrans attr;

};
#endif // !defined(EA_3AB51ED0_13C9_4c25_B39B_319A7E1B526A__INCLUDED_)
