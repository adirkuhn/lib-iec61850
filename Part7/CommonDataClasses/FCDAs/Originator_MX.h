///////////////////////////////////////////////////////////
//  Originator_MX.h
//  Implementation of the Class Originator_MX
//  Created on:      15-Apr-2014 2:52:38 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_53C38091_0186_4559_8AF5_15708649C088__INCLUDED_)
#define EA_53C38091_0186_4559_8AF5_15708649C088__INCLUDED_

#include "Originator.h"
#include "FCDA_MX.h"

class Originator_MX : public FCDA_MX
{

public:
	Originator_MX();
	virtual ~Originator_MX();

private:
	Originator attr;

};
#endif // !defined(EA_53C38091_0186_4559_8AF5_15708649C088__INCLUDED_)
