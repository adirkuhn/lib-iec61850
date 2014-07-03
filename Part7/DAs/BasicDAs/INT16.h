///////////////////////////////////////////////////////////
//  INT16.h
//  Implementation of the Class INT16
//  Created on:      15-Apr-2014 2:52:27 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_904DF9E0_43E5_4c03_867E_3C6BA38E0741__INCLUDED_)
#define EA_904DF9E0_43E5_4c03_867E_3C6BA38E0741__INCLUDED_

#include "P_INT16.h"
#include "PrimitiveDA.h"

/**
 * See P_INT16
 */
class INT16 : public PrimitiveDA
{

public:
	INT16();
	virtual ~INT16();

private:
	P_INT16 val;

};
#endif // !defined(EA_904DF9E0_43E5_4c03_867E_3C6BA38E0741__INCLUDED_)
