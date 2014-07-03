///////////////////////////////////////////////////////////
//  Originator_CO.h
//  Implementation of the Class Originator_CO
//  Created on:      15-Apr-2014 2:52:38 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_EA500DC7_BFED_421a_92BE_6EC24B30C7A0__INCLUDED_)
#define EA_EA500DC7_BFED_421a_92BE_6EC24B30C7A0__INCLUDED_

#include "Originator.h"
#include "FCDA_CO.h"

class Originator_CO : public FCDA_CO
{

public:
	Originator_CO();
	virtual ~Originator_CO();

private:
	Originator attr;

};
#endif // !defined(EA_EA500DC7_BFED_421a_92BE_6EC24B30C7A0__INCLUDED_)
