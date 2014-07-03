///////////////////////////////////////////////////////////
//  Vector_MX.h
//  Implementation of the Class Vector_MX
//  Created on:      15-Apr-2014 2:52:51 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_862AED38_BB78_4f94_9209_CF8BAE85C706__INCLUDED_)
#define EA_862AED38_BB78_4f94_9209_CF8BAE85C706__INCLUDED_

#include "FCDA_MX.h"
#include "Vector.h"

class Vector_MX : public FCDA_MX
{

public:
	Vector_MX();
	virtual ~Vector_MX();

private:
	Vector attr;

};
#endif // !defined(EA_862AED38_BB78_4f94_9209_CF8BAE85C706__INCLUDED_)
