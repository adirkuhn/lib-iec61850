///////////////////////////////////////////////////////////
//  Originator_MC.h
//  Implementation of the Class Originator_MC
//  Created on:      15-Apr-2014 2:52:38 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_8655EB8B_A57A_45b3_A618_4FEFF5A14F0B__INCLUDED_)
#define EA_8655EB8B_A57A_45b3_A618_4FEFF5A14F0B__INCLUDED_

#include "Originator.h"
#include "FCDA_MC.h"

class Originator_MC : public FCDA_MC
{

public:
	Originator_MC();
	virtual ~Originator_MC();

private:
	Originator attr;

};
#endif // !defined(EA_8655EB8B_A57A_45b3_A618_4FEFF5A14F0B__INCLUDED_)
