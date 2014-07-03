///////////////////////////////////////////////////////////
//  ServiceFcKind.h
//  Implementation of the Enumeration ServiceFcKind
//  Created on:      15-Apr-2014 2:52:46 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_159F6456_FDD2_42ea_9504_97752727CF10__INCLUDED_)
#define EA_159F6456_FDD2_42ea_9504_97752727CF10__INCLUDED_

/**
 * part 7-2, sec. 5
 * Definitions of various control blocks in IEC 61850-7-2 assign a functional
 * constraint to the most of their attributes, as well. In this API, except for SP
 * and XX (see their documentation for details), these (service) functional
 * constraints are used in CBReference and LOGReference methods, only, while they
 * need to be parsed when receiving references from the underlying communication
 * protocol.
 * <b>Modelling note</b>: We do not include GS for GSSE (since this is legacy and
 * we don't model it here).
 */
enum ServiceFcKind
{
	/**
	 * Set-point
	 * <b>Modelling note</b>: This is the only functional constraint used for both
	 * DataAttribute (within FcKind) and services (within ServiceFcKind). In the
	 * context of services, it identifies an SGCB.
	 * <b>Implementation note</b>: This one must be handled when interacting with MMS
	 * for SGCB (hard-coded) to distinguish it from the one used for DataAttributes.
	 * Since the name of the SGCB is "SGCB", and its fc=SP, and there will be one (or
	 * no) instance of SGCB within the LN, the following MMS reference should
	 * designate where the SGCB and its attributes start: "myLD/LLN0$SP$SGCB". 
	 */
    SP2
};
#endif // !defined(EA_159F6456_FDD2_42ea_9504_97752727CF10__INCLUDED_)
