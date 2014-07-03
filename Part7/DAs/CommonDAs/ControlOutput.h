///////////////////////////////////////////////////////////
//  ControlOutput.h
//  Implementation of the Class ControlOutput
//  Created on:      15-Apr-2014 2:52:10 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_A1A830CD_0D59_4eea_BAE7_795C6632FB10__INCLUDED_)
#define EA_A1A830CD_0D59_4eea_BAE7_795C6632FB10__INCLUDED_

#include "PrimitiveDA.h"
#include "ControlOutputKind.h"

/**
 * <font color="#141414">See ControlOutputKind</font>
 */
class ControlOutput : public PrimitiveDA
{

public:
	ControlOutput();
	virtual ~ControlOutput();

private:
	ControlOutputKind val;

};
#endif // !defined(EA_A1A830CD_0D59_4eea_BAE7_795C6632FB10__INCLUDED_)
