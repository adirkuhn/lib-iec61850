///////////////////////////////////////////////////////////
//  CSD.h
//  Implementation of the Class CSD
//  Created on:      15-Apr-2014 2:52:10 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_82ED26BB_3618_4807_8188_F75316B0508F__INCLUDED_)
#define EA_82ED26BB_3618_4807_8188_F75316B0508F__INCLUDED_

#include "Unit_DC.h"
#include "VISIBLE_STRING255_DC.h"
#include "INT16U_DC.h"
#include "PointArray_DC.h"
#include "UNICODE_STRING255_DC.h"
#include "DescriptionInfo.h"

/**
 * <font color="#141414">Used to read the shape of a curve as, e.g., used with
 * protection settings.</font>
 * <font color="#141414">
 * </font><font color="#141414">7-3, tab. 47</font>
 */
class CSD : public DescriptionInfo
{

public:
	CSD();
	virtual ~CSD();
	/**
	 * Unit of the x-axis of a curve
	 */
	Unit_DC xUnit;
	/**
	 * Description of the value of the x-axis of a curve
	 */
	VISIBLE_STRING255_DC xD;
	/**
	 * Unit of the y-axis of a curve
	 */
	Unit_DC yUnit;
	/**
	 * Description of the value of the y-axis of a curve
	 */
	VISIBLE_STRING255_DC yD;
	/**
	 * Number of points used to define a curve: 'numPts' is greater than 1.
	 */
	INT16U_DC numPts;
	/**
	 * The array with the points specifying a curve shape
	 */
	PointArray_DC crvPts;
	/**
	 * Textual description of the data
	 */
	VISIBLE_STRING255_DC d;
	/**
	 * Textual description of the data using unicode characters.
	 */
	UNICODE_STRING255_DC dU;

};
#endif // !defined(EA_82ED26BB_3618_4807_8188_F75316B0508F__INCLUDED_)
