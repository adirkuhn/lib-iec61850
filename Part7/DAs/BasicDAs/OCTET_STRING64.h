///////////////////////////////////////////////////////////
//  OCTET_STRING64.h
//  Implementation of the Class OCTET_STRING64
//  Created on:      15-Apr-2014 2:52:37 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_A5CB3FDD_E859_4be5_9820_D3AF3E3615C4__INCLUDED_)
#define EA_A5CB3FDD_E859_4be5_9820_D3AF3E3615C4__INCLUDED_

#include "P_OCTET_STRING64.h"
#include "PrimitiveDA.h"

/**
 * <font color="#141414">See P_OCTET_STRING64</font>
 */
class OCTET_STRING64 : public PrimitiveDA
{

public:
	OCTET_STRING64();
	virtual ~OCTET_STRING64();

private:
	P_OCTET_STRING64 val;

};
#endif // !defined(EA_A5CB3FDD_E859_4be5_9820_D3AF3E3615C4__INCLUDED_)
