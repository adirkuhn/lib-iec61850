///////////////////////////////////////////////////////////
//  ValWithTrans_SV.h
//  Implementation of the Class ValWithTrans_SV
//  Created on:      15-Apr-2014 2:52:51 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_4530333A_0D1F_477c_833C_B3BFDB41BFDC__INCLUDED_)
#define EA_4530333A_0D1F_477c_833C_B3BFDB41BFDC__INCLUDED_

#include "ValWithTrans.h"
#include "FCDA_SV.h"

class ValWithTrans_SV : public FCDA_SV
{

public:
	ValWithTrans_SV();
	virtual ~ValWithTrans_SV();

private:
	ValWithTrans attr;

};
#endif // !defined(EA_4530333A_0D1F_477c_833C_B3BFDB41BFDC__INCLUDED_)
