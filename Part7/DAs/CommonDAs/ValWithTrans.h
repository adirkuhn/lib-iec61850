///////////////////////////////////////////////////////////
//  ValWithTrans.h
//  Implementation of the Class ValWithTrans
//  Created on:      15-Apr-2014 2:52:50 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_C96A5366_6B7E_4490_A200_9140D902E2EF__INCLUDED_)
#define EA_C96A5366_6B7E_4490_A200_9140D902E2EF__INCLUDED_

#include "INT8.h"
#include "BOOLEAN.h"
#include "ComposedDA.h"

/**
 * part 7-3, tab. 6
 * Step position with transient indication type is for example used to indicate
 * the position of tap changers.
 */
class ValWithTrans : public ComposedDA
{

public:
	ValWithTrans();
	virtual ~ValWithTrans();
	/**
	 * Step position.
	 */
	INT8 posVal;
	/**
	 * Whether the equipment is in a transient state.
	 */
	BOOLEAN transInd;

};
#endif // !defined(EA_C96A5366_6B7E_4490_A200_9140D902E2EF__INCLUDED_)
