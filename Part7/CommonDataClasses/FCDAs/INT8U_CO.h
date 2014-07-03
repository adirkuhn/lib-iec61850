///////////////////////////////////////////////////////////
//  INT8U_CO.h
//  Implementation of the Class INT8U_CO
//  Created on:      15-Apr-2014 2:52:30 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_E469C8A8_8BDE_4afd_AD79_E6539B6765CB__INCLUDED_)
#define EA_E469C8A8_8BDE_4afd_AD79_E6539B6765CB__INCLUDED_

#include "INT8U.h"
#include "FCDA_CO.h"

class INT8U_CO : public FCDA_CO
{

public:
	INT8U_CO();
	virtual ~INT8U_CO();

private:
	INT8U attr;

};
#endif // !defined(EA_E469C8A8_8BDE_4afd_AD79_E6539B6765CB__INCLUDED_)
