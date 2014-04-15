///////////////////////////////////////////////////////////
//  TimeStamp.h
//  Implementation of the Class TimeStamp
//  Created on:      15-Apr-2014 2:52:48 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_33682667_3D4F_4af8_8BFC_CD8336B52569__INCLUDED_)
#define EA_33682667_3D4F_4af8_8BFC_CD8336B52569__INCLUDED_

#include "P_TimeStamp.h"
#include "PrimitiveDA.h"

/**
 * <font color="#141414">See P_TimeStamp</font>
 */
class TimeStamp : public PrimitiveDA
{

public:
	TimeStamp();
	virtual ~TimeStamp();

private:
	P_TimeStamp val;

};
#endif // !defined(EA_33682667_3D4F_4af8_8BFC_CD8336B52569__INCLUDED_)
