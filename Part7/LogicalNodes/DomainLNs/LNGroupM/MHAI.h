///////////////////////////////////////////////////////////
//  MHAI.h
//  Implementation of the Class MHAI
//  Created on:      15-Apr-2014 2:52:34 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_9630ABEE_D3FC_4d51_8123_673AC01CE533__INCLUDED_)
#define EA_9630ABEE_D3FC_4d51_8123_673AC01CE533__INCLUDED_

#include "INS_HealthState.h"
#include "DPL.h"
#include "MV.h"
#include "HWYE.h"
#include "HDEL.h"
#include "WYE.h"
#include "DEL.h"
#include "ASG.h"
#include "ING.h"
#include "GroupM.h"

/**
 * ###TODO: attribute comments###
 * 
 * Used for calculation of harmonics or interharmonics in a three-phase system.
 * Instances either for harmonics (including subharmonics and multiples) or
 * interharmonics are possible depending on the value of the basic settings, i.e.:
 * 
 * 
 * - Frequency f ("Hz")
 * 
 * - Evaluation window Dt ("EvTmms")
 * 
 * The frequency may be either given or calculated with means like a phase-locked
 * loop (only possible for a dominant frequency like the basic power frequency).
 * 
 * a) Settings for Harmonics, Subharmonics and multiples
 * 
 * EvTmms = 1/Hz (16 ms for 60 Hz, 20 ms for 50 Hz)
 * 
 * NumCyc = 1 results in Harmonics only, i.e in multiples of Hz in a)
 * 
 * NumCyc > 1 results in addition in Subharmonics and multiples
 * 
 * Lowest frequency = 1/EvTmms
 * 
 * Highest frequency = (SmpRte)/2 (see TVTR, TCTR and IEC61850-7-3)
 * 
 * b) Settings for Interharmonics
 * 
 * - EvTmms = 1/Hz (adopted to the lowest interharmonics frequency expected)
 * 
 * - NumCyc = 1 results in Interharmonics, i.e. in multiples of Hz in b)
 * 
 * - NumCyc > 1 normally not used since the lowest frequency is freely adjusted by
 * choice of Hz
 * 
 * - Lowest frequency = 1/EvTmms
 * 
 * - Highest frequency = (SmpRte)/2 (see TVTR, TCTR and IEC61850-7-3)
 * 
 * Both harmonics and interharmonics carry power and produce distortions. There
 * may be different methods to calculate disturbances. For more information and
 * definitions see IEC 61000-4-7 (1991), IEEE Std 519-1992, and IEEE Std 1459-2000.
 * 
 * 
 * part 7-4, sec. 5.10.3
 */
class MHAI : public GroupM
{

public:
	MHAI();
	virtual ~MHAI();
	/**
	 * External equipment health (external sensor)
	 */
	INS_HealthState EEHealth;
	/**
	 * External equipment name plate.
	 */
	DPL EEName;
	/**
	 * Basic frequency
	 */
	MV Hz;
	/**
	 * Sequence of Harmonics or Interharmonics current
	 */
	HWYE HA;
	/**
	 * Sequence of Harmonics or Interharominics phase to ground voltages
	 */
	HWYE HPhV;
	/**
	 * Sequence of Harmonics or Interharmonics phase to phase voltages
	 */
	HDEL HPPV;
	/**
	 * Sequence of Harmonics or Interharmonics active power
	 */
	HWYE HW;
	/**
	 * Sequence of Harmonics or Interharmonics reactive power
	 */
	HWYE HVAr;
	/**
	 * Sequence of Harmonics or Interharmonics apparent power
	 */
	HWYE HVA;
	/**
	 * Current RMS Harmonic or Interharmonics (un-normalized Total harmonic disortion,
	 * Thd)
	 */
	WYE HRmsA;
	/**
	 * Voltage RMS Harmonic or Interharmonics (un-normalized Thd) for phase to ground
	 */
	WYE HRmsPhV;
	/**
	 * Voltage RMS Harmonic or Interharmonics (un-normalized Thd) for phase to phase
	 */
	DEL HRmsPPV;
	/**
	 * Total phase Harmonic or Interharmonics active power (no fundamental) unsigned
	 * sum
	 */
	WYE HTuW;
	/**
	 * Total phase Harmonic or Interharmonic active power (no fundamental) signed sum
	 */
	WYE HTsW;
	/**
	 * Current Time  product
	 */
	WYE HATm;
	/**
	 * K factor
	 */
	WYE HKf;
	/**
	 * Transformer derating factor
	 */
	WYE HTdf;
	/**
	 * Current Total Harmonic or Interharmonic Distortion (different methods)
	 */
	WYE ThdA;
	/**
	 * Current Total Harmonic or Interharmonic Distortion (different methods - odd
	 * components)
	 */
	WYE ThdOddA;
	/**
	 * Current Total Harmonic or Interharmonic Distortion (different methods - even
	 * components)
	 */
	WYE ThdEvnA;
	/**
	 * Current Total Demand Distortion per IEEE 519
	 */
	WYE TddA;
	/**
	 * Current Total Demand Distortion per IEEE 519 (odd components)
	 */
	WYE TddOddA;
	/**
	 * Current Total Demand Distortion per IEEE 519 (even components)
	 */
	WYE TddEvnA;
	/**
	 * Voltage Total Harmonic or Interharmonic Distortion (different methods) for
	 * phase to ground
	 */
	WYE ThdPhV;
	/**
	 * Voltage Total Harmonic or Interharmonic Distortion (different methods) for
	 * phase to ground (odd components)
	 */
	WYE ThdOddPhV;
	/**
	 * Voltage Total Harmonic or Interharmonic Distortion (different methods) for
	 * phase to ground (even components)
	 */
	WYE ThdEvnPhV;
	/**
	 * Voltage Total Harmonic or Interharmonic Distortion (different methods) for
	 * phase to phase
	 */
	DEL ThdPPV;
	/**
	 * Voltage Total Harmonic or Interharmonic Distortion (different methods) for
	 * phase to phase (odd components)
	 */
	DEL ThdOddPPV;
	/**
	 * Voltage Total Harmonic or Interharmonic Distortion (different methods) for
	 * phase to phase (even components)
	 */
	DEL ThdEvnPPV;
	/**
	 * Voltage crest factors (peak waveform value/sqrt(2)/fundamental) for phase to
	 * ground
	 */
	WYE HCfPhV;
	/**
	 * Voltage crest factors (peak waveform value/sqrt(2)/fundamental) for phase to
	 * phase
	 */
	DEL HCfPPV;
	/**
	 * Current crest factors (peak waveform value/sqrt(2)/fundamental)
	 */
	WYE HCfA;
	/**
	 * Voltage Telephone Influence Factor
	 */
	WYE HTif;
	/**
	 * Basic frequency
	 */
	ASG HzSet;
	/**
	 * Evaluation time (time window) determines the lowest frequency
	 */
	ASG EvTmms;
	/**
	 * Number of cycles of the basic frequency
	 */
	ING NumCyc;
	/**
	 * ThdA alarm Setting - value entered in %
	 */
	ASG ThdAVal;
	/**
	 * ThdPhV / ThdPPV alarm Setting - value entered in %
	 */
	ASG ThdVVal;
	/**
	 * ThdA alarm time delay in ms
	 */
	ING ThdATmms;
	/**
	 * ThdPhV / ThdPPV alarm time delay in ms
	 */
	ING ThdVTmms;
	/**
	 * Normalising demand current used in IEEE 519 TDD calculation
	 */
	ASG NomA;

};
#endif // !defined(EA_9630ABEE_D3FC_4d51_8123_673AC01CE533__INCLUDED_)
