///////////////////////////////////////////////////////////
//  INT128.h
//  Implementation of the Class INT128
//  Created on:      15-Apr-2014 2:52:27 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_43ABFEBA_CEAC_43bf_A68C_A19D3E57DC70__INCLUDED_)
#define EA_43ABFEBA_CEAC_43bf_A68C_A19D3E57DC70__INCLUDED_

#include "P_INT128.h"
#include "PrimitiveDA.h"

/**
 * See P_INT128
 */
class INT128 : public PrimitiveDA
{

public:
	INT128();
	virtual ~INT128();

private:
	P_INT128 val;

};
#endif // !defined(EA_43ABFEBA_CEAC_43bf_A68C_A19D3E57DC70__INCLUDED_)
