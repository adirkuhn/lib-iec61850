///////////////////////////////////////////////////////////
//  TimeStamp_ST_dupd.h
//  Implementation of the Class TimeStamp_ST_dupd
//  Created on:      15-Apr-2014 2:52:49 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_08626356_8E72_4ad4_B25E_A4865EF9FB01__INCLUDED_)
#define EA_08626356_8E72_4ad4_B25E_A4865EF9FB01__INCLUDED_

#include "TimeStamp.h"
#include "FCDA_ST_dupd.h"

class TimeStamp_ST_dupd : public FCDA_ST_dupd
{

public:
	TimeStamp_ST_dupd();
	virtual ~TimeStamp_ST_dupd();

private:
	TimeStamp attr;

};
#endif // !defined(EA_08626356_8E72_4ad4_B25E_A4865EF9FB01__INCLUDED_)
