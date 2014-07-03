///////////////////////////////////////////////////////////
//  FLOAT32_CF.h
//  Implementation of the Class FLOAT32_CF
//  Created on:      15-Apr-2014 2:52:19 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_B38B53BB_82E3_4e08_8BC4_28B5DB050823__INCLUDED_)
#define EA_B38B53BB_82E3_4e08_8BC4_28B5DB050823__INCLUDED_

#include "FLOAT32.h"
#include "FCDA_CF.h"

class FLOAT32_CF : public FCDA_CF
{

public:
	FLOAT32_CF();
	virtual ~FLOAT32_CF();

private:
	FLOAT32 attr;

};
#endif // !defined(EA_B38B53BB_82E3_4e08_8BC4_28B5DB050823__INCLUDED_)
