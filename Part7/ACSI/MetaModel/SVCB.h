///////////////////////////////////////////////////////////
//  SVCB.h
//  Implementation of the Class SVCB
//  Created on:      15-Apr-2014 2:52:47 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_520365BE_30A0_4888_8E6E_AAD6E476196F__INCLUDED_)
#define EA_520365BE_30A0_4888_8E6E_AAD6E476196F__INCLUDED_

//#include "LN0.h"
#include "ControlBlock.h"

/**
 * part 7-2, sec. 16
 * <b>Original doc:</b>
 * TODO
 * <b>Modelling note</b>: Services are defined in AcsiSVCB interface.
 */
class SVCB : public ControlBlock
{

public:
	SVCB();
	virtual ~SVCB();

    //LN0 getLn0();

};
#endif // !defined(EA_520365BE_30A0_4888_8E6E_AAD6E476196F__INCLUDED_)
