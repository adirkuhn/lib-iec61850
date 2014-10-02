///////////////////////////////////////////////////////////
//  CALH.h
//  Implementation of the Class CALH
//  Created on:      01-Oct-2014 2:52:20 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////
#ifndef CALH_H
#define CALH_H

#include "GroupC.h"
#include "SPS.h"

/**
 * Individual alarms are generated in the corresponding logical nodes (for example, metering alarms are found in MMXU or MMTR, etc.).
 * CALH allows the creation of group warnings and alarms. The individual alarms, used to calculate the group alarms/warnings,
 * are subscribed from elsewhere. The calculation is a local issue.
 *
 * part 7-4, sec. 5.6.2
 */
class CALH: public GroupC
{
public:
    CALH();
    virtual ~CALH();

    /**
     * If 'CALH.GrAlm.stVal=TRUE', a new group alarm has been created. Group alarm summarises different alarms,
     * as assigned via configuration.
     */
    SPS GrAlm;
    /**
     * If 'CALH.GrWrn.stVal=TRUE', a new group warning has been created. Group warning summarises different warnings,
     * as assigned via configuration.
     */
    SPS GrWrn;
    /**
     * If 'CALH.AlmLstOv.stVal=TRUE', the alarm list has overflowed.
     */
    SPS AlmLstOv;
};

#endif // CALH_H
