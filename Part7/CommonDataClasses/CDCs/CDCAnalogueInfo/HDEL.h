///////////////////////////////////////////////////////////
//  HDEL.h
//  Implementation of the Class HDEL
//  Created on:      15-Apr-2014 2:52:21 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_C17FBCB7_D203_4dda_B101_2FDF63B3EA8B__INCLUDED_)
#define EA_C17FBCB7_D203_4dda_B101_2FDF63B3EA8B__INCLUDED_

#include "Quality_MX_qchg.h"
#include "TimeStamp_MX.h"
#include "VectorArray_MX_dchg_dupd.h"
#include "INT16U_CF.h"
#include "Unit_CF.h"
#include "AngleReference_CF.h"
#include "INT32U_CF.h"
#include "FLOAT32_CF.h"
#include "MagReference_CF.h"
#include "PrimitiveMeasurandInfo.h"

/**
 * <font color="#141414">Collection of harmonic and interharmonic content of
 * simultaneous phase-to-phase measurements (or evaluations) in a 3-phase system.
 * NOTE: Can also be applied to calculated values.</font>
 * <font color="#141414">
 * </font><font color="#141414">7-3, tab. 29</font>
 */
class HDEL : public PrimitiveMeasurandInfo
{

public:
	HDEL();
	virtual ~HDEL();
	/**
	 * Quality of the data values: 'phsABHar[]', 'phsBCHar[]', 'phsCAHar[]'.
	 */
	Quality_MX_qchg q;
	/**
	 * Timestamp of the last change in one of the attributes representing the data
	 * values ('phsABHar[]', 'phsBCHar[]', 'phsCAHar[]') or the data quality ('q'), i.
	 * e., those which have 'dchg' or 'qchg'.
	 */
	TimeStamp_MX t;
	/**
	 * This array shall contain the harmonic and subharmonics, or interharmonic values
	 * related to phase A to phase B. For further details see HMV.har.
	 */
	VectorArray_MX_dchg_dupd phsABHar;
	/**
	 * This array shall contain the harmonic and subharmonics, or interharmonic values
	 * related to phase B to phase C. For further details see HMV.har.
	 */
	VectorArray_MX_dchg_dupd phsBCHar;
	/**
	 * This array shall contain the harmonic and subharmonics, or interharmonic values
	 * related to phase C to phase A. For further details see HMV.har.
	 */
	VectorArray_MX_dchg_dupd phsCAHar;
	/**
	 * Number of harmonic and subharmonics, or interharmonic values that are to be
	 * returned as the values ('phsABHar[]', 'phsBCHar[]', 'phsCAHar[]'). Array index
	 * 0 of the 3 arrays shall refer to the dc component, therefore 'numHar'>0. The
	 * maximum value for 'numHar' can be calculated as: 1 + 0.5 * 'smpRate' *
	 * 'frequency' * 'evalTm' * 2^('numCyc'-1)].
	 */
	INT16U_CF numHar;
	/**
	 * Number of cycles of power frequency, which are used for harmonic, subharmonic
	 * and interharmonic calculation: 'numCyc' greater than 0
	 */
	INT16U_CF numCyc;
	/**
	 * Time window applied to interharmonic calculations, in ms.
	 */
	INT16U_CF evalTm;
	/**
	 * Units of the data values: 'phsABHar[i].mag', 'phsBCHar[i].mag', 'phsCAHar[i].
	 * mag'
	 */
	Unit_CF units;
	/**
	 * Angle reference. Indicates the quantity that is used as reference for the phase
	 * angles: 'phsABHar[i].ang', 'phsBCHar[i].ang', 'phsCAHar[i].ang'. For the
	 * indicated quantity, the fundamental frequency (index = 1) is used as reference
	 * by convention
	 */
	AngleReference_CF angRef;
	/**
	 * Determines the highest possible harmonic or interharmonic detectable, according
	 * to the sampling theorem; the minimum value is 'smpRate'=2 * 'frequency'.
	 * 'smpRate' shall represent the number of samples per nominal period. In the case
	 * of a d.c. system, 'smpRate' shall represent the number of samples per s.
	 */
	INT32U_CF smpRate;
	/**
	 * Nominal frequency of the power system or some other fundamental frequency in Hz.
	 */
	FLOAT32_CF frequency;
	/**
	 * Reference type (i.e., ratio of harmonic to fundamental, to RMS or to absolute),
	 * of the values in 'phsABHar[i].mag', 'phsBCHar[i].mag', 'phsCAHar[i].mag'
	 */
	MagReference_CF hvRef;
	/**
	 * Number of cycles of power frequency, which are used for the calculation of rms
	 * values.
	 */
	INT16U_CF rmsCyc;

};
#endif // !defined(EA_C17FBCB7_D203_4dda_B101_2FDF63B3EA8B__INCLUDED_)
