///////////////////////////////////////////////////////////
//  DPS.h
//  Implementation of the Class DPS
//  Created on:      15-Apr-2014 2:52:13 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_FF3DBC7A_475B_4a72_987D_4A6B1B159F4A__INCLUDED_)
#define EA_FF3DBC7A_475B_4a72_987D_4A6B1B159F4A__INCLUDED_

#include "BOOLEAN_ST_dchg.h"
#include "Quality_ST_qchg.h"
#include "BOOLEAN_SV.h"
#include "Quality_SV.h"
#include "VISIBLE_STRING64_SV.h"
#include "StatusInfo.h"

/**
 * (no documentation)
 * part 7-3, tab. 14
 */
class DPS : public StatusInfo
{

public:
	DPS();
	virtual ~DPS();
	/**
	 * Status value.
	 */
	BOOLEAN_ST_dchg stVal;
	/**
	 * Quality of the data value: 'stVal'
	 */
	Quality_ST_qchg q;
	/**
	 * Used to enable substitution. If 'subEna=TRUE', the data values ('stVal', 'q')
	 * shall always be set to the same value as the attributes used to store the
	 * substitution data values ('subVal', 'subQ'); otherwise, the data values shall
	 * be based on the process values. It is the responsibility of the client
	 * application, in particular in the case of multiple attributes to be substituted,
	 * to set all relevant substitution values before enabling substitution.
	 */
	BOOLEAN_SV subEna;
	/**
	 * Value used to substitute 'stVal'
	 */
	BOOLEAN_SV subVal;
	/**
	 * Value used to substitute 'q'
	 */
	Quality_SV subQ;
	/**
	 * Address of the device that made the substitution. The value of null shall be
	 * used if 'subEna=FALSE' or if the device is not known.
	 */
	VISIBLE_STRING64_SV subID;

};
#endif // !defined(EA_FF3DBC7A_475B_4a72_987D_4A6B1B159F4A__INCLUDED_)
