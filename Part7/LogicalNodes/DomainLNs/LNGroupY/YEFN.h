///////////////////////////////////////////////////////////
//  YEFN.h
//  Implementation of the Class YEFN
//  Created on:      15-Apr-2014 2:52:53 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_A455BD44_AE71_4ce2_ABEA_C37E99F75467__INCLUDED_)
#define EA_A455BD44_AE71_4ce2_ABEA_C37E99F75467__INCLUDED_

#include "SPS.h"
#include "INS.h"
#include "MV.h"
#include "ISC.h"
#include "APC.h"
#include "GroupY.h"

/**
 * <font color="#141414">(no documentation)</font>
 * <font color="#141414">
 * </font><font color="#141414">7-4, sec. 5.14.1</font>
 */
class YEFN : public GroupY
{

public:
	YEFN();
	virtual ~YEFN();
	/**
	 * 'YEFN.Loc.stVal=TRUE' stands for local (direct operation on the Petersen coil),
	 * while ''YEFN.Loc.stVal=FALSE' stands for remote operation (from a bay unit).
	 * The changeover is always done locally, with a physical key or toggle switch,
	 * which may have a set of contacts from which the position can be read.
	 */
	SPS Loc;
	/**
	 * Operation time.
	 */
	INS OpTmh;
	/**
	 * 'YEFN.ECA.mag.f' is the measured (earth) current through the Petersen coil in
	 * neutral compensated networks.
	 */
	MV ECA;
	/**
	 * 'YEFN.ColTapPos.ctlVal' initiates the discrete change of the coil tap position
	 * to the desired value (given with ctlVal). The resulting tap position is 'YEFN.
	 * ColTapPos.valWTr.posVal'.
	 */
	ISC ColTapPos;
	/**
	 * 'YEFN.ColPos.setMag.f' initiates the continuous adjustment (set-point) of the
	 * Petersen coil (plunge core position)
	 */
	APC ColPos;

};
#endif // !defined(EA_A455BD44_AE71_4ce2_ABEA_C37E99F75467__INCLUDED_)
