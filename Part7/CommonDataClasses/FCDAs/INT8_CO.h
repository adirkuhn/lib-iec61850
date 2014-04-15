///////////////////////////////////////////////////////////
//  INT8_CO.h
//  Implementation of the Class INT8_CO
//  Created on:      15-Apr-2014 2:52:30 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_95EE31D5_C570_4423_804A_28F6BAABC447__INCLUDED_)
#define EA_95EE31D5_C570_4423_804A_28F6BAABC447__INCLUDED_

#include "INT8.h"
#include "FCDA_CO.h"

class INT8_CO : public FCDA_CO
{

public:
	INT8_CO();
	virtual ~INT8_CO();

private:
	INT8 attr;

};
#endif // !defined(EA_95EE31D5_C570_4423_804A_28F6BAABC447__INCLUDED_)
