///////////////////////////////////////////////////////////
//  TrgOpKind.h
//  Implementation of the Enumeration TrgOpKind
//  Created on:      15-Apr-2014 2:52:49 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_C37001A4_3F9C_495a_B9E9_A577CE68B819__INCLUDED_)
#define EA_C37001A4_3F9C_495a_B9E9_A577CE68B819__INCLUDED_

/**
 * Not explicitly specified in the standard.
 * Reporting and logging control classes, for instance, rely on TriggerConditions
 * that will trigger generation of report or log entries, as described in clause
 * 14. To specify which data items may be monitored for change, DataAttributes of
 * CommonDataClasses (from IEC 61850-7-3) may be "tagged" with one or more trigger
 * options (TrgOp).
 */
enum TrgOpKind
{
	/**
	 * Notes:   No trigger option applies (used in IEC 61850-7-3).
	 */
    none2,
	/**
	 * Notes:   The reason for report or log entry generation is the change of the
	 * value of a process-related DataAttribute tagged with dchg (used in IEC 61850-7-
	 * 3 and in IEC 61850-7-2).
	 */
	dchg,
	/**
	 * Notes:   The reason for report or log entry generation is the change of the
	 * value of a quality-related DataAttribute tagged with qchg (used in IEC 61850-7-
	 * 3 and in IEC 61850-7-2).
	 */
	qchg,
	/**
	 * Notes:   The reason for report or log entry generation is the freeze of the
	 * value of a freezable DataAttribute (e.g., frozen counters), or an update of the
	 * value of any other DataAttribute tagged with dupd (used in IEC 61850-7-3 and in
	 * IEC 61850-7-2). Update means that a value has changed, or that a value has been
	 * "overwritten" with the same value as before (i.e., has not changed). This is
	 * useful for dealing with statistics values, which may be calculated and updated
	 * periodically.
	 */
	dupd,
	/**
	 * Notes:   Both dchg and dupd (used in IEC 61850-7-3).
	 */
	dchgDupd
};
#endif // !defined(EA_C37001A4_3F9C_495a_B9E9_A577CE68B819__INCLUDED_)
