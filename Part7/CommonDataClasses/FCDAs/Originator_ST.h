///////////////////////////////////////////////////////////
//  Originator_ST.h
//  Implementation of the Class Originator_ST
//  Created on:      15-Apr-2014 2:52:38 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_111FED8A_E3FC_493d_99A7_E156BBFBF766__INCLUDED_)
#define EA_111FED8A_E3FC_493d_99A7_E156BBFBF766__INCLUDED_

#include "Originator.h"
#include "FCDA_ST.h"

class Originator_ST : public FCDA_ST
{

public:
	Originator_ST();
	virtual ~Originator_ST();

private:
	Originator attr;

};
#endif // !defined(EA_111FED8A_E3FC_493d_99A7_E156BBFBF766__INCLUDED_)
