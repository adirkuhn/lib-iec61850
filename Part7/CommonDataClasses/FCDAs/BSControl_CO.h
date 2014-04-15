///////////////////////////////////////////////////////////
//  BSControl_CO.h
//  Implementation of the Class BSControl_CO
//  Created on:      15-Apr-2014 2:52:07 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_95B7B462_8ED1_4986_B2BF_29190DD0EA6A__INCLUDED_)
#define EA_95B7B462_8ED1_4986_B2BF_29190DD0EA6A__INCLUDED_

#include "BSControl.h"
#include "FCDA_CO.h"

class BSControl_CO : public FCDA_CO
{

public:
	BSControl_CO();
	virtual ~BSControl_CO();

private:
	BSControl attr;

};
#endif // !defined(EA_95B7B462_8ED1_4986_B2BF_29190DD0EA6A__INCLUDED_)
