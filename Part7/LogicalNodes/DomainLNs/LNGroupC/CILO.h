///////////////////////////////////////////////////////////
//  CILO.h
//  Implementation of the Class CILO
//  Created on:      01-Oct-2014 2:52:20 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////
#ifndef CILO_H
#define CILO_H

#include "GroupC.h"
#include "SPS.h"

/**
 * Used to enable a switching operation if the interlocking conditions are fulfilled.
 * One instance per switching device is needed. At least all related switchgear positions have to be subscribed.
 * The interlocking algorithm is a local issue.
 *
 * part 7-4, sec. 5.6.3
 */
class CILO : public GroupC
{
public:
    CILO();
    virtual ~CILO();
    /**
     * The interlocking algorithm itself sets 'CILO.EnaOpn.stVal=TRUE' if it determines that the switching equipment
     * is allowed to be open, and 'CILO.EnaOpn.stVal=FALSE' if the opening is forbidden. The client must check the
     * value in 'CILO.EnaOpn.stVal' before performing 'Operate()' open action on the switching equipment.
     */
    SPS EnaOpn;
    /**
     * The interlocking algorithm itself sets 'CILO.EnaCls.stVal=TRUE' if it determines that the switching equipment
     * is allowed to be closed, and 'CILO.EnaCls.stVal=FALSE' if the closing is forbidden. The client must check the value
     * in 'CILO.EnaCls.stVal' before performing 'Operate()' close action on the switching equipment.
     */
    SPS EnaCls;
};

#endif // CILO_H
