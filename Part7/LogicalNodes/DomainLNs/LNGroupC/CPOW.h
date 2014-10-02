///////////////////////////////////////////////////////////
//  CPOW.h
//  Implementation of the Class CPOW
//  Created on:      01-Oct-2014 2:52:20 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////
#ifndef CPOW_H
#define CPOW_H

#include "GroupC.h"
#include "SPS.h"
#include "ACT_transient.h"
#include "ING.h"

/**
 * Used if the circuit breaker is able to perform point-on-wave switching. CPOW first receives the start signal from CSWI
 * (CSWI.OpOpn or CSWI.OpCls), then performs its entire dedicated algorithm using data from the allocated TCTR or local and
 * remote TVTR (local issue), and finally releases a 'TimeActivatedOperate()' command to XCBR, with CPOW.StrPOW. If no real-time
 * service 'TimeActivatedOperate()' is available between CPOW and XCBR, CPOW.OpOpn and CPOW.OpCls shall be used instead of
 * CPOW.StrPOW.
 *
 * part 7-4, sec. 5.6.5
 */
class CPOW: public GroupC
{
public:
    CPOW();
    virtual ~CPOW();

    /**
     * If 'CPOW.TmExc.stVal=TRUE', the maximum allowed time has been exceeded.
     */
    SPS TmExc;
    /**
     * If 'CPOW.StrPOW.stVal=TRUE, the operation of point-on-wave switching has been started
     * (e.g., by a 'Select()' operation, requested from CSWI or RREC).
     */
    SPS StrPOW;
    /**
     * If 'CPOW.OpOpn.general=TRUE', the circuit breaker (XCBR) should open. This attribute is used only
     * if no real-time 'Control' services are available between CPOW and XCBR. Note that the state must last long
     * enough that the client (XCBR) can detect it.
     */
    ACT_transient OpOpn;
    /**
     * If 'CPOW.OpCls.general=TRUE', the circuit breaker (XCBR) should close. This attribute is used only if no real-time 'Control'
     * services are available between CPOW and XCBR. Note that the state must last long enough that the client (XCBR) can detect it.
     */
    ACT_transient OpCls;
    /**
     * 'CPOW.MaxDlTmms.setVal' is the preset time difference between the intended and the performed operation.
     */
    ING MaxDlTmms;
};

#endif // CPOW_H
