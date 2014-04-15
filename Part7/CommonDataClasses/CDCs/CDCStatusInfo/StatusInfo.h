///////////////////////////////////////////////////////////
//  StatusInfo.h
//  Implementation of the Class StatusInfo
//  Created on:      15-Apr-2014 2:52:47 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_4A27DFE3_7CAA_401a_97AB_BCA717C69897__INCLUDED_)
#define EA_4A27DFE3_7CAA_401a_97AB_BCA717C69897__INCLUDED_

#include "TimeStamp_ST.h"
#include "VISIBLE_STRING255_DC.h"
#include "UNICODE_STRING255_DC.h"
#include "C_PrimitiveCDC.h"

/**
 * <font color="#141414">Abstract supertype for all status information CDC.</font>
 */
class StatusInfo : public C_PrimitiveCDC
{

public:
	StatusInfo();
	virtual ~StatusInfo();
	/**
	 * Timestamp of the last change in one of the attributes representing the data
	 * value or the data quality, i.e., those which have 'dchg' or 'qchg'.
	 * For SPS, DPS, INS (and all its specialisations), ACT and ACD, see the
	 * description for their quality attribute 'q' - timestamp 't' applies to same
	 * attributes to which 'q' applies, and to 'q' itself. For BCR, 't' applies to
	 * 'actVal' and 'q'. For SEC, 't' applies to 'cnt'.
	 */
	TimeStamp_ST t;
	/**
	 * Textual description of the data.
	 */
	VISIBLE_STRING255_DC d;

private:
	/**
	 * Textual description of the data using unicode characters
	 */
	UNICODE_STRING255_DC dU;

};
#endif // !defined(EA_4A27DFE3_7CAA_401a_97AB_BCA717C69897__INCLUDED_)
