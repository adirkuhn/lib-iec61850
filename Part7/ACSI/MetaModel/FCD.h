///////////////////////////////////////////////////////////
//  FCD.h
//  Implementation of the Class FCD
//  Created on:      15-Apr-2014 2:52:15 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_CF8E7C27_C62F_4982_AA48_3DE5338759C4__INCLUDED_)
#define EA_CF8E7C27_C62F_4982_AA48_3DE5338759C4__INCLUDED_

//#include "CDC.h"
#include "FCDReference.h"
//#include "DS.h"
#include "HierarchyIEC61850Object.h"
#include "FCDA.h"

/**
 * Functionally constrained data is used to define groups of attributes of CDCs
 * (common data classes) with the same functional constraint. It is therefore a
 * collection of FCDAs. FCD is useful in the context of data sets, as its
 * reference may be a member of the data set.
 */
class FCD : public HierarchyIEC61850Object
{

public:
	FCD();
	virtual ~FCD();
	FCDA *m_FCDA;

	FcKind getFc();
    //CDC getCdc();
	FCDReference getFcdRef();
	FCD getFcdas();
    //DS getDss();

};
#endif // !defined(EA_CF8E7C27_C62F_4982_AA48_3DE5338759C4__INCLUDED_)
