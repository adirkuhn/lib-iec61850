///////////////////////////////////////////////////////////
//  SPG.h
//  Implementation of the Class SPG
//  Created on:      15-Apr-2014 2:52:47 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_91B02B1A_1B72_4ba3_9D2A_9F132EFE280E__INCLUDED_)
#define EA_91B02B1A_1B72_4ba3_9D2A_9F132EFE280E__INCLUDED_

#include "BOOLEAN_SP.h"
#include "BOOLEAN_SE.h"
#include "BOOLEAN_SG.h"
#include "StatusSettings.h"

/**
 * <font color="#141414">(no documentation)</font>
 * <font color="#141414">
 * </font><font color="#141414">part 7-3, tab. 39</font>
 */
class SPG : public StatusSettings
{

public:
	SPG();
	virtual ~SPG();
	/**
	 * The value of the status setting
	 */
	BOOLEAN_SP setVal;
	/**
	 * The value of the status setting.
	 */
	BOOLEAN_SE _setVal;
	/**
	 * The value of the status setting.
	 */
	BOOLEAN_SG __setVal;

};
#endif // !defined(EA_91B02B1A_1B72_4ba3_9D2A_9F132EFE280E__INCLUDED_)
