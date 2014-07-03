///////////////////////////////////////////////////////////
//  OCTET_STRING64_ST.h
//  Implementation of the Class OCTET_STRING64_ST
//  Created on:      15-Apr-2014 2:52:37 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_151A0FF0_8FA8_44c0_97EF_674CE6F65271__INCLUDED_)
#define EA_151A0FF0_8FA8_44c0_97EF_674CE6F65271__INCLUDED_

#include "OCTET_STRING64.h"
#include "FCDA_ST.h"

class OCTET_STRING64_ST : public FCDA_ST
{

public:
	OCTET_STRING64_ST();
	virtual ~OCTET_STRING64_ST();

private:
	OCTET_STRING64 attr;

};
#endif // !defined(EA_151A0FF0_8FA8_44c0_97EF_674CE6F65271__INCLUDED_)
