///////////////////////////////////////////////////////////
//  TimeStamp_CF.h
//  Implementation of the Class TimeStamp_CF
//  Created on:      15-Apr-2014 2:52:48 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_8A323DBB_832B_4ed1_BA91_48869BE83446__INCLUDED_)
#define EA_8A323DBB_832B_4ed1_BA91_48869BE83446__INCLUDED_

#include "TimeStamp.h"
#include "FCDA_CF.h"

class TimeStamp_CF : public FCDA_CF
{

public:
	TimeStamp_CF();
	virtual ~TimeStamp_CF();

private:
	TimeStamp attr;

};
#endif // !defined(EA_8A323DBB_832B_4ed1_BA91_48869BE83446__INCLUDED_)
