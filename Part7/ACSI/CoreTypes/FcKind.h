///////////////////////////////////////////////////////////
//  FcKind.h
//  Implementation of the Enumeration FcKind
//  Created on:      15-Apr-2014 2:52:18 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_79DC91FE_E8E0_421e_80CE_9B91798DBAD2__INCLUDED_)
#define EA_79DC91FE_E8E0_421e_80CE_9B91798DBAD2__INCLUDED_

/**
 * part 7-2, sec. 5, and part 7-3 for applicable ACSI services
 * From an application point of view, the DataAttributes are classified according
 * to their specific use. Some attributes are used for controlling, other for
 * reporting and logging, or measurements or setting groups, or the description of
 * a specific DataAttribute.
 * The functional constraint (FC) serves as a data filter in the sense of defining
 * the services applicable to specific DataAttributes of CommonDataClasses
 * (defined in part IEC 61850-7-3).
 * NOTE: The possibility to write an Attribute or a DataAttribute may be further
 * constrained by a view or an implementation, as discussed in clause 7.
 * EXAMPLE: The CommonDataClass single point status (SPS) according to IEC 61850-7-
 * 3 has the following DataAttributes: stVal (status value), q (quality), and t
 * (time stamp) with the functional constraint ST (status information).
 */
enum FcKind
{
	/**
	 * Notes:   Status information - DataAttribute shall represent status information
	 * whose value may be read, substituted, reported, and logged but shall not be
	 * written.
	 * Initial value shall be taken from the process.
	 * Modelling note: Applicable ACSI services (as defined in IEC 61850-7-3):
	 * - AcsiCDC.getDataValues(),
	 * - AcsiDS.getDataSetValues().
	 */
	ST,
	/**
	 * Notes:   Measurands (analogue values) - DataAttribute shall represent measurand
	 * information whose value may be read, substituted, reported, and logged but
	 * shall not be written.
	 * Initial value shall be taken from the process.
	 * Modelling note: Applicable ACSI services (as defined in IEC 61850-7-3):
	 * - AcsiCDC.getDataValues(),
	 * - AcsiDS.getDataSetValues().
	 */
	MX,
	/**
	 * Notes:   Status control - DataAttribute shall represent status control whose
	 * value may be operated (CONTROL model) and read.
	 * Modelling note: Applicable ACSI services (as defined in IEC 61850-7-3):
	 * - AcsiCONTROL.operate(),
	 * - AcsiCONTROL.timedOperate(),
	 * - AcsiCONTROL.select(),
	 * - AcsiCONTROL.selectWithValue(),
	 * - AcsiCONTROL.cancel().
	 */
	CO,
	/**
	 * Notes:   Measurand control - DataAttribute shall represent measurand (analogue)
	 * control whose value may be operated (CONTROL model) and read. Values controlled
	 * shall become effective immediately.
	 * Modelling note 1: This is the "control" part of SP functional constraint. It is
	 * currently not defined in either IEC 61850-7-2 or IEC 61850-7-3. However, it is
	 * necessary to distinguish the measurement info (read-only) from measurement
	 * control (write-only) (the editor of IEC 61850-7-3 has informally approved this
	 * in 2003).
	 * Modelling note 2: Applicable ACSI services (as defined in IEC 61850-7-3):
	 * - AcsiCONTROL.operate(),
	 * - AcsiCONTROL.timedOperate().
	 * Implementation note: This one will never appear from MMS, but it has to be set
	 * from an SP leaf ttribute. See SP and also diagram "ImplementationNote-FC_SP".
	 */
	MC,
	/**
	 * Notes:   Set-point - DataAttribute shall represent setpoint information whose
	 * value may be written and read.
	 * Initial value shall be as configured; value shall be persistent.
	 * Modelling note: Applicable ACSI services (as defined in IEC 61850-7-3):
	 * - AcsiCDC.getDataValues(),
	 * - AcsiDS.getDataSetValues(),
	 * - AcsiCDC.setDataValues().
	 * Implementation note: This one must be handled when interacting with MMS for
	 * particular CDCs (hard-coded) to distinguish when it represents an MC
	 * (controllable measurement). See MC and diagram "ImplementationNote-FC_SP". See
	 * also ServiceFcKind.SP.
	 */
	SP,
	/**
	 * Notes:   Substitution - DataAttribute shall represent substitution information
	 * whose value may be written (to substitute the value attribute) and read.
	 * If the value is non-persistent, initial value shall be false, else it should be
	 * as set or configured.
	 * Modelling note: Applicable ACSI services (as defined in IEC 61850-7-3):
	 * - AcsiCDC.getDataValues(),
	 * - AcsiDS.getDataSetValues(),
	 * - AcsiCDC.setDataValues(),
	 * - AcsiDS.setDataSetValues().
	 */
	SV,
	/**
	 * Notes:   Configuration - DataAttribute shall represent configuration
	 * information whose value may be written and read. Values written may become
	 * effective immediately or deferred by reasons outside the scope of this standard.
	 * 
	 * Initial value shall be as configured; value shall be persistent.
	 * Modelling note: Applicable ACSI services (as defined in IEC 61850-7-3):
	 * - AcsiCDC.getDataValues(),
	 * - AcsiDS.getDataSetValues(),
	 * - AcsiCDC.setDataValues(),
	 * - AcsiDS.setDataSetValues().
	 */
	CF,
	/**
	 * Notes:   Description - DataAttribute shall represent description information
	 * whose value may be written and read.
	 * Initial value shall be as configured; value shall be persistent.
	 * Modelling note: Applicable ACSI services (as defined in IEC 61850-7-3):
	 * - AcsiCDC.getDataValues(),
	 * - AcsiDS.getDataSetValues(),
	 * - AcsiCDC.setDataValues(),
	 * - AcsiDS.setDataSetValues().
	 */
	DC,
	/**
	 * Notes:   Setting group - Logical devices that implement the SGCB class maintain
	 * multiple grouped values of all instances of DataAttributes with functional
	 * constraint SG. Each group contains one value for each DataAttribute with
	 * functional constraint SG, which shall be the current active value (for details
	 * see clause 13). Values shall not be writeable.
	 * Initial value shall be as configured; value shall be persistent.
	 * Modelling note: Applicable ACSI services (as defined in IEC 61850-7-3):
	 * - AcsiCDC.getDataValues(),
	 * - AcsiDS.getDataSetValues(),
	 * - AcsiSGCB.getSGValues().
	 */
	SG,
	/**
	 * Notes:   Setting group editable - DataAttribute that serves as an editing
	 * buffer for SGCB services.
	 * Value shall be as resulting from the chain of SGCB services: selectEditSG() ->
	 * setSGValues() -> confirmEditSGValues().
	 * Modelling note: Applicable ACSI services (as defined in IEC 61850-7-3):
	 * - AcsiCDC.getDataValues(),
	 * - AcsiDS.getDataSetValues(),
	 * - AcsiSGCB.getSGValues(),
	 * - AcsiSGCB.setSGValues().
	 */
	SE,
	/**
	 * Notes:   Extended definition - DataAttribute shall represent extension
	 * information providing a reference to a name space. Extensions are used in
	 * conjunction with extended definitions of LN's Data and CDC's DataAttributes in
	 * IEC 61850-7-4 and IEC 61850-7-3, respectively. Values shall not be writeable.
	 * Initial value shall be as configured; value shall be persistent.
	 * Modelling note: Applicable ACSI services (as defined in IEC 61850-7-3):
	 * - AcsiCDC.getDataValues(),
	 * - AcsiDS.getDataSetValues().
	 */
	EX,
	/**
	 * Notes:   Used as a wildcard in services only, with the semantics: representing
	 * DataAttributes of any functional constraint.
	 */
	XX
};
#endif // !defined(EA_79DC91FE_E8E0_421e_80CE_9B91798DBAD2__INCLUDED_)
