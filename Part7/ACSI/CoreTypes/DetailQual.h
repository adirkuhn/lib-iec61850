///////////////////////////////////////////////////////////
//  DetailQual.h
//  Implementation of the Class DetailQual
//  Created on:      15-Apr-2014 2:52:12 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_25020DA5_5176_445d_AF55_F2517D9830C4__INCLUDED_)
#define EA_25020DA5_5176_445d_AF55_F2517D9830C4__INCLUDED_

#include "P_BOOLEAN.h"

/**
 * part 7-3, tab. 2
 * Packed list of boolean attributes that make 'Quality.detailQual' attribute.
 * For details, see sections 6.2.7 and 6.2.8.
 * See also statechart diagram in P_Quality ("validityStateMachine").
 */
class DetailQual
{

public:
	DetailQual();
	virtual ~DetailQual();
	/**
	 * Notes:   If set to TRUE, the value of the attribute to which the quality has
	 * been associated is beyond the capability of being represented properly (used
	 * for measurand information only).
	 * EXAMPLE A measured value may exceed the range that may be represented by the
	 * selected data type, for example the data type is a 16-bit unsigned integer and
	 * the value exceeds 65535.
	 */
	P_BOOLEAN overflow;
	/**
	 * Notes:   Set to TRUE if the attribute to which the quality has been associated
	 * is beyond a predefined range of values. The server shall decide if validity
	 * shall be set to invalid or questionable (used for measurand information only).
	 * EXAMPLE A measured value may exceed a predefined range, however the selected
	 * data type can still represent the value, for example the data type is a 16-bit
	 * unsigned integer, the predefined range is 0 to 40 000, if the value is between
	 * 40001 and 65535 it is considered to be out of range.
	 */
	P_BOOLEAN outOfRange;
	/**
	 * Notes:   Set to TRUE if the value may not be a correct value due to a reference
	 * being out of calibration. The server shall decide if validity shall be set to
	 * invalid or questionable (used for measurand information and binary counter
	 * information only).
	 */
	P_BOOLEAN badReference;
	/**
	 * Notes:   To prevent overloading of event driven communication channels, it is
	 * desirable to detect and suppress oscillating (fast changing) binary inputs. If
	 * a signal changes in a defined time (t_osc) twice in the same direction (from 0
	 * to 1 or from 1 to 0), the server shall define this as an oscillation and shall
	 * set Quality.detailQual.oscillatory=TRUE.
	 * If the configured number of transient changes is zero (telling that all
	 * transient changes should be suppressed), the server shall set Quality.
	 * validity=invalid and keep it so as long as the signal is oscillating.
	 * If the configured numbers of transient changes is greater than zero, the server
	 * shall suppress changes and shall set Quality.validity=questionable. If the
	 * signal is still in the oscillating state after the configured number of changes,
	 * the value shall be left in the state it was in when the oscillatory flag was
	 * set. In this case, the server shall set Quality.validity=invalid and keep it so
	 * as long as the signal is oscillating (used for status information only).
	 */
	P_BOOLEAN oscillatory;
	/**
	 * Notes:   Set to TRUE if a supervision function has detected an internal or
	 * external failure.
	 */
	P_BOOLEAN failure;
	/**
	 * Notes:   Set to TRUE if an update is not made during a specific time interval.
	 * The value may be an old value that may have changed in the meantime. This
	 * specific time interval may be defined by an allowed-age attribute.
	 * NOTE "Fail silent" errors, where the equipment stops sending data will cause an
	 * oldData condition, in which case, the last received information was correct.
	 * Also, both an operator and an automatic function may block communication
	 * updating and input updating, which will result in oldData condition. If the
	 * blocking is done by an operator, then Quality.operatorBlocked is additionally
	 * set, in which case an operator activity is required to clear the condition.
	 */
	P_BOOLEAN oldData;
	/**
	 * Notes:   Set to TRUE if an evaluation function has detected an inconsistency.
	 */
	P_BOOLEAN inconsistent;
	/**
	 * Notes:   Set to TRUE if the value does not meet the stated accuracy of the
	 * source.
	 * EXAMPLE The measured value of power factor may be noisy (inaccurate) when the
	 * current is very small.
	 */
	P_BOOLEAN inaccurate;

};
#endif // !defined(EA_25020DA5_5176_445d_AF55_F2517D9830C4__INCLUDED_)
