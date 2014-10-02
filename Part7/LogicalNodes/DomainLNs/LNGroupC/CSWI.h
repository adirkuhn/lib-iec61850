///////////////////////////////////////////////////////////
//  CSWI.h
//  Implementation of the Class CSWI
//  Created on:      01-Oct-2014 2:52:20 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////
#ifndef CSWI_H
#define CSWI_H

#include "GroupC.h"
#include "SPS.h"
#include "INC.h"
#include "DPC.h"
#include "ACT_transient.h"

/**
 * Used to control all switching conditions above process level. If applicable, CSWI shall subscribe to XCBR.POWCap
 * ("point-on-wave switching capability"). If a switching command (for example 'Select()') arrives and point-on-wave
 * switching capability is supported by the breaker, CSWI passes the command to CPOW.
 *
 * part 7-4, sec. 5.6.6
 */
class CSWI : public GroupC
{
public:
    CSWI();
    virtual ~CSWI();

    /**
     * 'CSWI.Loc.stVal=TRUE' stands for local (operation from the bay unit), while ''CSWI.Loc.stVal=FALSE' stands for remote
     * (from a station unit) operation of the switching controller. The changeover is always done locally, with a physical key
     * or toggle switch, which may have a set of contacts from which the position can be read.
     */
    SPS Loc;
    /**
     * 'CSWI.OpCntRs.stVal' is the count of operations. It can be reset from remote, with the desired new counter value
     * 'CSWI.OpCntRs.ctlVal', which may be other than 0.
     */
    INC OpCntRs;
    /**
     * 'CSWI.Pos.ctlVal' is used to initiate the change in the circuit breaker/switch position.
     * The resulting position is 'CSWI.Pos.stVal'. For a hand-operated circuit breaker/switch, the (optional) 'ctlVal'
     * does not exist - only the status 'stVal' can be read.
     */
    DPC Pos;
    /**
     * Similar to 'CSWI.Pos', but used for switching where single phase A may be operated separately.
     */
    DPC PosA;
    /**
     * Similar to 'CSWI.Pos', but used for switching where single phase B may be operated separately.
     */
    DPC PosB;
    /**
     * Similar to 'CSWI.Pos', but used for switching where single phase C may be operated separately.
     */
    DPC PosC;
    /**
     * If 'CSWI.OpOpn.general=TRUE', the circuit breaker (XCBR) should open. This attribute is used only
     * if no real-time 'Control' services are available between CSWI and XCBR. Note that the state must last
     * long enough that the client (XCBR) can detect it.
     */
    ACT_transient OpOpn;
    /**
     * If 'CSWI.OpCls.general=TRUE', the circuit breaker (XCBR) should close. This attribute is used only
     * if no real-time 'Control' services are available between CSWI and XCBR. Note that the state must last long
     * enough that the client (XCBR) can detect it.
     */
    ACT_transient OpCls;
};

#endif // CSWI_H
