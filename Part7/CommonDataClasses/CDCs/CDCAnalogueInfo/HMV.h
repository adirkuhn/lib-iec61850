///////////////////////////////////////////////////////////
//  HMV.h
//  Implementation of the Class HMV
//  Created on:      15-Apr-2014 2:52:21 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_F2CCD501_30A8_445b_B8E0_13A6B0453E5B__INCLUDED_)
#define EA_F2CCD501_30A8_445b_B8E0_13A6B0453E5B__INCLUDED_

#include "Quality_MX_qchg.h"
#include "TimeStamp_MX.h"
#include "VectorArray_MX_dchg_dupd.h"
#include "INT16U_CF.h"
#include "Unit_CF.h"
#include "INT32_CF.h"
#include "FLOAT32_CF.h"
#include "MagReference_CF.h"
#include "PrimitiveMeasurandInfo.h"

/**
 * Collection of harmonic and interharmonic content of non-phase related
 * measurements. NOTE 1: Harmonics for a single circuit have (optional) phase
 * angles, but need no reference for the angle ('angRef'), since by convention the
 * reference is always the fundamental frequency (index 1). NOTE 2: Can also be
 * applied to calculated values.
 * 
 * part 7-3, tab. 27
 */
class HMV : public PrimitiveMeasurandInfo
{

public:
	HMV();
	virtual ~HMV();
	/**
	 * Quality of the data values 'har[]'
	 */
	Quality_MX_qchg q;
	/**
	 * Timestamp of the last change in one of the attributes representing the data
	 * values ('har[]') or the data quality ('q'), i.e., those which have 'dchg' or
	 * 'qchg'
	 */
	TimeStamp_MX t;
	/**
	 * This array shall contain the harmonic and subharmonic, or the interharmonic
	 * values. In any case, the first array element ('har[0]') shall contain the dc
	 * component, the further array elements ('har[1]'...'har['numHar']') shall
	 * contain the values for the harmonics [1..'numHar'].
	 * (1) Case of harmonic and subharmonic values ('evalTm' equal to the period of
	 * the power frequency) - If 'numCycl'>1, 'har[]' shall contain both harmonics and
	 * subharmonics and their multiples: sequence entries with the number
	 * (n*2^('numCyc'-1))  are harmonics; all the others are subharmonics or multiple
	 * of subharmonics.
	 * (2) Case of interharmonic values ('evalTm' not equal to the period of the power
	 * frequency) - No special considerations.
	 */
	VectorArray_MX_dchg_dupd har;
	/**
	 * Number of harmonic and subharmonics, or interharmonic values that are to be
	 * returned as the value ('har[]'). Array index 0 of 'har[]' shall refer to the dc
	 * component, therefore 'numHar'>0. The maximum value for 'numHar' can be
	 * calculated as: [1 + 0.5 * 'smpRate' * 'frequency' * 'evalTm' * 2^('numCyc'-1)]
	 */
	INT16U_CF numHar;
	/**
	 * Number of cycles of power frequency, which are used for harmonic, subharmonic
	 * and interharmonic calculation: 'numCyc' greater than 0
	 */
	INT16U_CF numCyc;
	/**
	 * Time window applied to interharmonic calculations, in ms
	 */
	INT16U_CF evalTm;
	/**
	 * Units of the data values: 'har[i].mag'.
	 */
	Unit_CF units;
	/**
	 * Determines the highest possible harmonic or interharmonic detectable, according
	 * to the sampling theorem; the minimum value is 'smpRate'=2 * 'frequency'.
	 * 'smpRate' shall represent the number of samples per nominal period. In the case
	 * of a d.c. system, 'smpRate' shall represent the number of samples per s
	 */
	INT32_CF smpRate;
	/**
	 * Nominal frequency of the power system or some other fundamental frequency in Hz
	 */
	FLOAT32_CF frequency;
	/**
	 * Reference type (i.e., ratio of harmonic to fundamental, to RMS or to absolute),
	 * of the value in 'har[i].mag'
	 */
	MagReference_CF hvRef;
	/**
	 * Number of cycles of power frequency, which are used for the calculation of rms
	 * values
	 */
	INT16U_CF rmsCyc;

};
#endif // !defined(EA_F2CCD501_30A8_445b_B8E0_13A6B0453E5B__INCLUDED_)
