///////////////////////////////////////////////////////////
//  CMVAngleReference_CF.h
//  Implementation of the Class CMVAngleReference_CF
//  Created on:      15-Apr-2014 2:52:09 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_7E4747A4_FC70_46d4_9CD2_41A2DDE18F80__INCLUDED_)
#define EA_7E4747A4_FC70_46d4_9CD2_41A2DDE18F80__INCLUDED_

#include "CMVAngleReference.h"
#include "FCDA_CF.h"

class CMVAngleReference_CF : public FCDA_CF
{

public:
	CMVAngleReference_CF();
	virtual ~CMVAngleReference_CF();

private:
	CMVAngleReference attr;

};
#endif // !defined(EA_7E4747A4_FC70_46d4_9CD2_41A2DDE18F80__INCLUDED_)
