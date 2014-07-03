///////////////////////////////////////////////////////////
//  MagReference_CF.h
//  Implementation of the Class MagReference_CF
//  Created on:      15-Apr-2014 2:52:33 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_424CED25_BBF1_4e12_8A9C_6384E37E4F18__INCLUDED_)
#define EA_424CED25_BBF1_4e12_8A9C_6384E37E4F18__INCLUDED_

#include "MagReference.h"
#include "FCDA_CF.h"

class MagReference_CF : public FCDA_CF
{

public:
	MagReference_CF();
	virtual ~MagReference_CF();

private:
	MagReference attr;

};
#endif // !defined(EA_424CED25_BBF1_4e12_8A9C_6384E37E4F18__INCLUDED_)
