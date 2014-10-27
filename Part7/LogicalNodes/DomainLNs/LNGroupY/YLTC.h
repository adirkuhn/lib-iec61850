///////////////////////////////////////////////////////////
//  YLTC.h
//  Implementation of the Class YLTC
//  Created on:      15-Apr-2014 2:52:53 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_DE439099_62A3_485a_9013_84703C6BC678__INCLUDED_)
#define EA_DE439099_62A3_485a_9013_84703C6BC678__INCLUDED_

#include "INS.h"
#include "MV.h"
#include "ISC.h"
#include "BSC.h"
#include "SPS.h"
#include "GroupY.h"

/**
 * <font color="#141414">(no documentation)</font>
 * <font color="#141414">
 * </font><font color="#141414">7-4, sec. 5.14.2</font>
 */
class YLTC : public GroupY
{

public:
	YLTC();
	virtual ~YLTC();
	/**
	 * 'YLTC.OpCnt.stVal' is the count of operations of the load tap changer. It is
	 * not resetable from remote, but may be reset from local.
	 */
	INS OpCnt;
	/**
	 * 'YLTC.Torq.mag.f' is drive torque.
	 */
	MV Torq;
	/**
	 * 'YLTC.MotDrvA.mag.f' is drive current of the tap changer motor.
	 */
	MV MotDrvA;
	/**
	 * 'YLTC.TapPos.ctlVal' initiates the change of the tap position to the desired
	 * position (contained in ctlVal); the resulting tap position is ''YLTC.TapPos.
	 * valWithTrans.posVal'.
	 */
	ISC TapPos;
	/**
	 * 'YLTC.TapChg.ctlVal' initiates the desired change (contained in ctlVal) in the
	 * tap position (raise or lower a single tap); the resulting tap position is
	 * ''YLTC.TapChg.valWithTrans.posVal'.
	 */
	BSC TapChg;
	/**
	 * If 'YLTC.EndPosR.stVal=TRUE', the load tap changer has reached the maximum
	 * raise position.
	 */
	SPS EndPosR;
	/**
	 * If 'YLTC.EndPosL.stVal=TRUE', the load tap changer has reached the maximum
	 * lower position.
	 */
	SPS EndPosL;
	/**
	 * If 'YLTC.OilFil.stVal=TRUE', oil filtration is operational (running).
	 */
	SPS OilFil;

    SPS LTCCycAlm;
    //incluido pela equipe de desenvolvimento SINUV, atributo para definir um ciclo incompleto de mudança de tap, sem a mudança do comutador
};
#endif // !defined(EA_DE439099_62A3_485a_9013_84703C6BC678__INCLUDED_)
