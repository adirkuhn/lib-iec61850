///////////////////////////////////////////////////////////
//  DPL.h
//  Implementation of the Class DPL
//  Created on:      15-Apr-2014 2:52:13 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_A37EDBED_E4DD_4cbf_8D10_B9801F1BB369__INCLUDED_)
#define EA_A37EDBED_E4DD_4cbf_8D10_B9801F1BB369__INCLUDED_

#include "VISIBLE_STRING255_DC.h"
#include "DescriptionInfo.h"

/**
 * <font color="#141414">Used to identify entities like primary equipment or
 * physical devices.</font>
 * <font color="#141414">
 * </font><font color="#141414">7-3, tab. 45</font>
 */
class DPL : public DescriptionInfo
{

public:
	DPL();
	virtual ~DPL();
	/**
	 * Name of the vendor.
	 */
	VISIBLE_STRING255_DC vendor;
	/**
	 * Hardware revision
	 */
	VISIBLE_STRING255_DC hwRev;
	/**
	 * Software revision
	 */
	VISIBLE_STRING255_DC swRev;
	/**
	 * Serial number
	 */
	VISIBLE_STRING255_DC serNum;
	/**
	 * Vendor specific product name
	 */
	VISIBLE_STRING255_DC model;
	/**
	 * Location where the equipment is installed
	 */
	VISIBLE_STRING255_DC location;

};
#endif // !defined(EA_A37EDBED_E4DD_4cbf_8D10_B9801F1BB369__INCLUDED_)
