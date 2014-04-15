///////////////////////////////////////////////////////////
//  Unit_DC.h
//  Implementation of the Class Unit_DC
//  Created on:      15-Apr-2014 2:52:50 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_E0C048DD_052D_4878_B462_DA027DA08760__INCLUDED_)
#define EA_E0C048DD_052D_4878_B462_DA027DA08760__INCLUDED_

#include "Unit.h"
#include "FCDA_DC.h"

class Unit_DC : public FCDA_DC
{

public:
	Unit_DC();
	virtual ~Unit_DC();

private:
	Unit attr;

};
#endif // !defined(EA_E0C048DD_052D_4878_B462_DA027DA08760__INCLUDED_)
