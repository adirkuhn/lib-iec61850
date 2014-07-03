///////////////////////////////////////////////////////////
//  XCBR.h
//  Implementation of the Class XCBR
//  Created on:      15-Apr-2014 2:52:53 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_CB155D9B_C65B_4426_AA84_7CB3173B978D__INCLUDED_)
#define EA_CB155D9B_C65B_4426_AA84_7CB3173B978D__INCLUDED_

#include "BCR.h"
#include "INS_BreakerOperatingCapability.h"
#include "INS_SwitchingCapability.h"
#include "GroupX.h"

/**
 * Circuit breaker is a switch with short circuit breaking capability. Additional
 * LNs e.g. SIMS, etc. may be required to complete the logical modelling for the
 * breaker being represented. The closing and opening commands shall be subscribed
 * from CSWI or CPOW if applicable. If no services with real-time capability
 * available between CSWI or CPOW and XCBR, the opening and closing commands are
 * performed with a GSEMessage (see IEC 61850-7-2).
 * For modelling per phase one instance per phase shall be created.
 * In case of no process bus as very common today, the LNs of bay level and
 * process level appear together in one single physical device. The XCBR
 * represents now the I/O card functionality and the CSWI the control processor
 * functionality.
 * part 7-4, sec. 5.12.1
 */
class XCBR : public GroupX
{

public:
	XCBR();
	virtual ~XCBR();
	/**
	 * 'XCBR.SumSwARs.actVal' is the sum or integration of all switched currents since
	 * the last reset of the counter ('GroupX.OpCnt.stVal'), e.g. after maintenance of
	 * the contacts, the nozzle and other aging parts. It is resettable.
	 */
	BCR SumSwARs;
	/**
	 * 'XCBR.CBOpCap.stVal' is the operating capability of the circuit breaker, which
	 * reflects the switching energy as well as additional blocking due to some local
	 * problems: 'XCBR.CBOpCap.stVal' = XCBR.MaxOpCap.stVal'+1
	 */
	INS_BreakerOperatingCapability CBOpCap;
	/**
	 * 'XCBR.POWCap.stVal' is the point-on-wave switching capability of the circuit
	 * breaker.
	 */
	INS_SwitchingCapability POWCap;
	/**
	 * 'XCBR.MaxOpCap.stVal' is the operating capability of the circuit breaker when
	 * fully charged
	 */
	INS_BreakerOperatingCapability MaxOpCap;

};
#endif // !defined(EA_CB155D9B_C65B_4426_AA84_7CB3173B978D__INCLUDED_)
