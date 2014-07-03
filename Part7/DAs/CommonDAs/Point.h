///////////////////////////////////////////////////////////
//  Point.h
//  Implementation of the Class Point
//  Created on:      15-Apr-2014 2:52:41 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_D7CC844E_C86B_4ed4_BEC7_5F6136C6EADB__INCLUDED_)
#define EA_D7CC844E_C86B_4ed4_BEC7_5F6136C6EADB__INCLUDED_

#include "FLOAT32.h"
#include "ComposedDA.h"

/**
 * part 7-3, tab. 12
 * Point of a curve.
 */
class Point : public ComposedDA
{

public:
	Point();
	virtual ~Point();
	/**
	 * The x value of a curve point.
	 */
	FLOAT32 xVal;
	/**
	 * The y value of a curve point
	 */
	FLOAT32 yVal;

};
#endif // !defined(EA_D7CC844E_C86B_4ed4_BEC7_5F6136C6EADB__INCLUDED_)
