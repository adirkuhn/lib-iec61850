///////////////////////////////////////////////////////////
//  MHAN.h
//  Implementation of the Class MHAN
//  Created on:      15-Apr-2014 2:52:34 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_BBD322FA_6E1E_46a4_AFA7_8C7950E2F61A__INCLUDED_)
#define EA_BBD322FA_6E1E_46a4_AFA7_8C7950E2F61A__INCLUDED_

#include "INS_HealthState.h"
#include "DPL.h"
#include "MV.h"
#include "HMV.h"
#include "ASG.h"
#include "ING.h"
#include "GroupM.h"

/**
 * ###TODO: attribute comments###
 * 
 * Used for calculation of harmonics or interharmonics in a single-phase system, i.
 * e. a single line with no phase relations. Instances either for harmonics
 * (including subharmonics and multiples) or interharmonics are possible depending
 * on the value of the basic settings, i.e.
 * 
 * - Frequency f ("Hz")
 * 
 * - Evaluation window Dt ("EvTmms")
 * 
 * The frequency may be either given or calculated with means like a phase-locked
 * loop (only possible for a dominant frequency like the basic power frequency).
 * The settings for Harmonics and Interharmonics instances see MHAI.
 * 
 * part 7-4, sec. 5.10.4
 */
class MHAN : public GroupM
{

public:
	MHAN();
	virtual ~MHAN();
	/**
	 * External equipment health (external sensor)
	 */
	INS_HealthState EEHealth;
	/**
	 * External equipment name plate
	 */
	DPL EEName;
	/**
	 * Basic frequency
	 */
	MV Hz;
	/**
	 * Sequence of Harmonics or Interharmonics for current
	 */
	HMV HaAmp;
	/**
	 * Sequence of Harmonics or Interharmonics for voltages
	 */
	HMV HaVol;
	/**
	 * Sequence of Harmonics or Interharmonics for active power
	 */
	HMV HaWatt;
	/**
	 * Sequence of Harmonics or Interharmonics for reactive power
	 */
	HMV HaVolAmpr;
	/**
	 * Sequence of Harmonics or Interharmonics for apparent power
	 */
	HMV HaVolAmp;
	/**
	 * Current RMS Harmonic or Interharmonic (un-normalized Thd)
	 */
	MV HaRmsAmp;
	/**
	 * Voltage RMS Harmonic or Interharmonic (un-normalized Thd)
	 */
	MV HaRmsVol;
	/**
	 * Total Harmonic or Interharmonic active power (no fundamental) unsigned sum
	 */
	MV HaTuWatt;
	/**
	 * Total Harmonic or Interharmonic active power (no fundamental) signed sum
	 */
	MV HaTsWatt;
	/**
	 * Current Time product
	 */
	MV HaAmpTm;
	/**
	 * K factor
	 */
	MV HaKFact;
	/**
	 * Transformer derating factor
	 */
	MV HaTdFact;
	/**
	 * Current Total Harmonic or Interharmonic Distortion (different methods)
	 */
	MV ThdAmp;
	/**
	 * Current Total Harmonic or Interharmonic Distortion (different methods - odd
	 * components)
	 */
	MV ThdOddAmp;
	/**
	 * Current Total Harmonic or Interharmonic Distortion (different methods - even
	 * components)
	 */
	MV ThdEvnAmp;
	/**
	 * Current Total Demand Distortion per IEEE 519
	 */
	MV TddAmp;
	/**
	 * Current Total Demand Distortion per IEEE 519 (odd components)
	 */
	MV TddOddAmp;
	/**
	 * Current Total Demand Distortion per IEEE 519 (even components)
	 */
	MV TddEvnAmp;
	/**
	 * Voltage Total Harmonic or Interharmonic Distortion (different methods)
	 */
	MV ThdVol;
	/**
	 * Voltage Total Harmonic or Interharmonic Distortion (different methods - odd
	 * components)
	 */
	MV ThdOddVol;
	/**
	 * Voltage Total Harmonic or Interharmonic Distortion (different methods - even
	 * components)
	 */
	MV ThdEvnVol;
	/**
	 * Current crest factors (peak waveform value/sqrt(2)/fundamental)
	 */
	MV HaCfAmp;
	/**
	 * Voltage crest factors (peak waveform value/sqrt(2)/fundamental)
	 */
	MV HaCfVol;
	/**
	 * Voltage Telephone Influence Factor
	 */
	MV HaTiFact;
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
	 * ThdV alarm Setting - value entered in %
	 */
	ASG ThdVVal;
	/**
	 * ThdA alarm time delay in ms
	 */
	ING ThdATmms;
	/**
	 * ThdV alarm time delay in ms
	 */
	ING ThdVTmms;
	/**
	 * Normalising demand current used in IEEE 519 TDD calculation
	 */
	ASG NomA;

};
#endif // !defined(EA_BBD322FA_6E1E_46a4_AFA7_8C7950E2F61A__INCLUDED_)
