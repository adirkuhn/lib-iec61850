///////////////////////////////////////////////////////////
//  INT32_SG.h
//  Implementation of the Class INT32_SG
//  Created on:      15-Apr-2014 2:52:28 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_CD4CA9AD_E4F1_49cf_A308_D115D00859BD__INCLUDED_)
#define EA_CD4CA9AD_E4F1_49cf_A308_D115D00859BD__INCLUDED_

#include "INT32.h"
#include "FCDA_SG.h"

class INT32_SG : public FCDA_SG
{

public:
	INT32_SG();
	virtual ~INT32_SG();

private:
	INT32 attr;

};
#endif // !defined(EA_CD4CA9AD_E4F1_49cf_A308_D115D00859BD__INCLUDED_)
