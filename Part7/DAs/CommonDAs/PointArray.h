///////////////////////////////////////////////////////////
//  PointArray.h
//  Implementation of the Class PointArray
//  Created on:      15-Apr-2014 2:52:41 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_B1DECF5F_2B71_49eb_A185_9C32CBA06ADE__INCLUDED_)
#define EA_B1DECF5F_2B71_49eb_A185_9C32CBA06ADE__INCLUDED_

#include "Point.h"
#include "ComposedDA.h"

/**
 * part 7-3
 * Not explicitly defined in the standard.
 * Necessary to hold an array of Point-s.
 */
class PointArray : public ComposedDA
{

public:
	PointArray();
	virtual ~PointArray();
	Point *m_Point;

};
#endif // !defined(EA_B1DECF5F_2B71_49eb_A185_9C32CBA06ADE__INCLUDED_)
