///////////////////////////////////////////////////////////
//  CURVE.h
//  Implementation of the Class CURVE
//  Created on:      15-Apr-2014 2:52:11 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_02761276_BB4B_4f7a_9C25_50E56CE18DA0__INCLUDED_)
#define EA_02761276_BB4B_4f7a_9C25_50E56CE18DA0__INCLUDED_

#include "CurveChar_SP.h"
#include "FLOAT32_SP.h"
#include "CurveChar_SE.h"
#include "FLOAT32_SE.h"
#include "CurveChar_SG.h"
#include "FLOAT32_SG.h"
#include "AnalogueSettings.h"

/**
 * <font color="#141414">Used to describe setting curves used in protection
 * equipment (the resulting curve may be read from the device using a dedicated
 * data of CSD common data class).</font>
 * <font color="#141414">
 * </font><font color="#141414">
 * </font><font color="#141414">7-3, tab. 43</font>
 */
class CURVE : public AnalogueSettings
{

public:
	CURVE();
	virtual ~CURVE();
	/**
	 * Characteristic of the curve x=f(y).
	 */
	CurveChar_SP setCharact;
	/**
	 * Used to set the parameter A for 'setCharact'.
	 */
	FLOAT32_SP setParA;
	/**
	 * Used to set the parameter B for 'setCharact'.
	 */
	FLOAT32_SP setParB;
	/**
	 * Used to set the parameter C for 'setCharact'.
	 */
	FLOAT32_SP setParC;
	/**
	 * Used to set the parameter D for 'setCharact'.
	 */
	FLOAT32_SP setParD;
	/**
	 * Used to set the parameter E for 'setCharact'.
	 */
	FLOAT32_SP setParE;
	/**
	 * Used to set the parameter F for 'setCharact'.
	 */
	FLOAT32_SP setParF;
	/**
	 * Characteristic of the curve x=f(y)
	 */
	CurveChar_SE _setCharact;
	/**
	 * Used to set the parameter A for 'setCharact'
	 */
	FLOAT32_SE _setParA;
	/**
	 * Used to set the parameter B for 'setCharact'
	 */
	FLOAT32_SE _setParB;
	/**
	 * Used to set the parameter C for 'setCharact'
	 */
	FLOAT32_SE _setParC;
	/**
	 * Used to set the parameter D for 'setCharact'
	 */
	FLOAT32_SE _setParD;
	/**
	 * Used to set the parameter E for 'setCharact'
	 */
	FLOAT32_SE _setParE;
	/**
	 * Used to set the parameter F for 'setCharact'
	 */
	FLOAT32_SE _setParF;
	/**
	 * Characteristic of the curve x=f(y)
	 */
	CurveChar_SG __setCharact;
	/**
	 * Used to set the parameter A for 'setCharact'
	 */
	FLOAT32_SG __setParA;
	/**
	 * Used to set the parameter B for 'setCharact'
	 */
	FLOAT32_SG __setParB;
	/**
	 * Used to set the parameter C for 'setCharact'
	 */
	FLOAT32_SG __setParC;
	/**
	 * Used to set the parameter D for 'setCharact'
	 */
	FLOAT32_SG __setParD;
	/**
	 * Used to set the parameter E for 'setCharact'
	 */
	FLOAT32_SG __setParE;
	/**
	 * Used to set the parameter F for 'setCharact'
	 */
	FLOAT32_SG __setParF;

};
#endif // !defined(EA_02761276_BB4B_4f7a_9C25_50E56CE18DA0__INCLUDED_)
