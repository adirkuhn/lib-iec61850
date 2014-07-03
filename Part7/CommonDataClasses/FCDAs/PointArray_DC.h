///////////////////////////////////////////////////////////
//  PointArray_DC.h
//  Implementation of the Class PointArray_DC
//  Created on:      15-Apr-2014 2:52:42 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_26D351C8_4551_4da5_9D92_21CD4CF77682__INCLUDED_)
#define EA_26D351C8_4551_4da5_9D92_21CD4CF77682__INCLUDED_

#include "PointArray.h"
#include "FCDA_DC.h"

class PointArray_DC : public FCDA_DC
{

public:
	PointArray_DC();
	virtual ~PointArray_DC();

private:
	PointArray attr;

};
#endif // !defined(EA_26D351C8_4551_4da5_9D92_21CD4CF77682__INCLUDED_)
