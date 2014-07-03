///////////////////////////////////////////////////////////
//  CMVAngleReference.h
//  Implementation of the Class CMVAngleReference
//  Created on:      15-Apr-2014 2:52:09 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_E0FCCCCF_54C0_40ed_959C_35330A3CC45E__INCLUDED_)
#define EA_E0FCCCCF_54C0_40ed_959C_35330A3CC45E__INCLUDED_

#include "PrimitiveDA.h"
#include "CMVAngleReferenceKind.h"

/**
 * <font color="#141414">See CMVAngleReferenceKind.</font>
 */
class CMVAngleReference : public PrimitiveDA
{

public:
	CMVAngleReference();
	virtual ~CMVAngleReference();

private:
	CMVAngleReferenceKind val;

};
#endif // !defined(EA_E0FCCCCF_54C0_40ed_959C_35330A3CC45E__INCLUDED_)
