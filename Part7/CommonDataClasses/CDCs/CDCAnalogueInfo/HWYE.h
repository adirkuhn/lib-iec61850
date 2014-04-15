///////////////////////////////////////////////////////////
//  HWYE.h
//  Implementation of the Class HWYE
//  Created on:      15-Apr-2014 2:52:21 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_7855D78A_3FAC_4c27_8364_94D525691143__INCLUDED_)
#define EA_7855D78A_3FAC_4c27_8364_94D525691143__INCLUDED_

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
 * Collection of harmonic and interharmonic content of simultaneous phase-to-
 * ground measurements (or evaluations) in a 3-phase system. NOTE: Can also be
 * applied to calculated values.
 * 
 * part 7-3, tab. 28
 */
class HWYE : public PrimitiveMeasurandInfo
{

public:
	HWYE();
	virtual ~HWYE();
	/**
	 * Quality of the data values: 'phsAHar[]', 'phsBHar[]', 'phsCHar[]', 'neutHar[]',
	 * 'netHar[]', 'resHar[]'.
	 */
	Quality_MX_qchg q;
	/**
	 * Timestamp of the last change in one of the attributes representing the data
	 * values ('phsAHar[]', 'phsBHar[]', 'phsCHar[]', 'neutHar[]', 'netHar[]',
	 * 'resHar[]') or the data quality ('q'), i.e., those which have 'dchg' or 'qchg'
	 */
	TimeStamp_MX t;
	/**
	 * This array shall contain the harmonic and subharmonics, or interharmonic values
	 * related to phase A. For further details see HMV.har.
	 */
	VectorArray_MX_dchg_dupd phsAHar;
	/**
	 * This array shall contain the harmonic and subharmonics, or interharmonic values
	 * related to phase B. For further details see HMV.har.
	 */
	VectorArray_MX_dchg_dupd phsBHar;
	/**
	 * This array shall contain the harmonic and subharmonics, or interharmonic values
	 * related to phase C. For further details see HMV.har.
	 */
	VectorArray_MX_dchg_dupd phsCHar;
	/**
	 * This array shall contain the harmonic and subharmonics, or interharmonic values
	 * related to neutral. For further details see HMV.har
	 */
	VectorArray_MX_dchg_dupd neutHar;
	/**
	 * This array shall contain the harmonic and subharmonics, or interharmonic values
	 * related to net current. For further details see HMV.har
	 */
	VectorArray_MX_dchg_dupd netHar;
	/**
	 * This array shall contain the harmonic and subharmonics, or interharmonic values
	 * related to residual current. For further details see HMV.har
	 */
	VectorArray_MX_dchg_dupd resHar;
	/**
	 * Number of harmonic and subharmonics, or interharmonic values that are to be
	 * returned as the values ('phsAHar[]', 'phsBHar[]', 'phsCHar[]', 'neutHar[]',
	 * 'netHar[]', 'resHar[]'). Array index 0 of the 6 arrays shall refer to the dc
	 * component, therefore 'numHar'>0. The maximum value for 'numHar' can be
	 * calculated as: [1 + 0.5 * 'smpRate' * 'frequency' * 'evalTm' * 2^('numCyc'-1)].
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
	 * Units of the data values: 'phsAHar[i].mag', 'phsBHar[i].mag', 'phsCHar[i].mag',
	 * 'neutHar[i].mag', 'netHar[i].mag', 'resHar[i].mag'
	 */
	Unit_CF units;
	/**
	 * Angle reference. Indicates the quantity that is used as reference for the phase
	 * angles: 'phsAHar[i].ang', 'phsBHar[i].ang', 'phsCHar[i].ang', 'neutHar[i].ang',
	 * 'netHar[i].ang', 'resHar[i].ang'. For the indicated quantity, the fundamental
	 * frequency (index = 1) is used as reference by convention
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
	 * Nominal frequency of the power system or some other fundamental frequency in Hz
	 */
	FLOAT32_CF frequency;
	/**
	 * Reference type (i.e., ratio of harmonic to fundamental, to RMS or to absolute),
	 * of the values in 'phsAHar[i].mag', 'phsBHar[i].mag', 'phsCHar[i].mag',
	 * 'neutHar[i].mag', 'netHar[i].mag', 'resHar[i].mag'.
	 */
	MagReference_CF hvRef;
	/**
	 * Number of cycles of power frequency, which are used for the calculation of rms
	 * values
	 */
	INT16U_CF rmsCyc;

};
#endif // !defined(EA_7855D78A_3FAC_4c27_8364_94D525691143__INCLUDED_)
