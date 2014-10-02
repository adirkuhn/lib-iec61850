///////////////////////////////////////////////////////////
//  CCGR.h
//  Implementation of the Class CCGR
//  Created on:      01-Oct-2014 2:52:20 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////
#ifndef CCGR_H
#define CCGR_H

#include "GroupC.h"
#include "INS_HealthState.h"
#include "DPL.h"
#include "INS.h"
#include "MV.h"
#include "SPC.h"
#include "INC_PumpControl.h"
#include "INC_FanControl.h"
#include "SPS.h"
#include "ASG.h"

/**
 * Used to control the cooling equipment. One instance per cooling group shall be used.
 *
 * part 7-4, sec. 5.6.3
 */
class CCGR : public GroupC
{
public:
    CCGR();
    virtual ~CCGR();

    /**
     * 'CCGR.EEHealth.stVal' reflects the state of the cooling group.
     */
    INS_HealthState EEHealth;
    /**
     * Name plate of the cooling group.
     */
    DPL EEName;
    /**
     * Operation time.
     */
    INS OpTmh;
    /**
     * 'CCGR.EnvTmp.mag.f' is the temperature of the environment.
     */
    MV EnvTmp;
    /**
     * 'CCGR.OilTmpIn.mag.f' is the temperature of oil flowing into the cooling system.
     */
    MV OilTmpIn;
    /**
     * 'CCGR.OilTmpOut.mag.f' is the temperature of oil coming from the cooling system.
     */
    MV OilTmpOut;
    /**
     * 'CCGR.OilMotA.mag.f' is the oil circulation motor drive current.
     */
    MV OilMotA;
    /**
     * 'CCGR.FanFlw.mag.f' is the air flow in a fan.
     */
    MV FanFlw;
    /**
     * 'CCGR.FanA.mag.f' is the motor drive current of a fan, in A.
     */
    MV FanA;
    /**
     * Control of complete cooling group (pumps and fans).
     */
    SPC CECtl;
    /**
     * 'CCGR.PmpCtlGen.ctlVal' initiates setting the operating status of all the pumps within the
     * cooling group to the desired value (given by 'ctlVal'). The resulting status is 'CCGR.PmpCtlGen.stVal'.
     */
    INC_PumpControl PmpCtlGen;
    /**
     * 'CCGR.PmpCtl.ctlVal' initiates setting the operating status of a single pump to the desired value
     * (given by 'ctlVal'). The resulting status is 'CCGR.PmpCtl.stVal'.
     */
    INC_PumpControl PmpCtl;
    /**
     * 'CCGR.FanCtlGen.ctlVal' initiates setting the operating status of all the fans within the cooling group
     * to the desired value (given by 'ctlVal'). The resulting status is 'CCGR.FanCtlGen.stVal'.
     */
    INC_FanControl FanCtlGen;
    /**
     * 'CCGR.FanCtl.ctlVal' initiates setting the operating status of a single fan to the desired value
     * (given by 'ctlVal'). The resulting status is 'CCGR.FanCtl.stVal'.
     */
    INC_FanControl FanCtl;
    /**
     * If 'CCGR.Auto.stVal=TRUE', the output circuit of the automatic controller is enabled (control is automatic);
     * otherwise, it is disabled (control is manual).
     */
    SPS Auto;
    /**
     * If 'CCGR.FanOvCur.stVal=TRUE', a fan overcurrent trip should be issued.
     */
    SPS FanOvCur;
    /**
     * If 'CCGR.PmpOvCur.stVal=TRUE', a pump overcurrent trip should be issued.
     */
    SPS PmpOvCur;
    /**
     * If 'CCGR.PmpAlm.stVal=TRUE', a pump has been lost.
     */
    SPS PmpAlm;
    /**
     * 'CCGR.OilTmpSet.mag.f' is the set-point for oil temperature.
     */
    ASG OilTmpSet;
};

#endif // CCGR_H
