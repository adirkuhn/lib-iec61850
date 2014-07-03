///////////////////////////////////////////////////////////
//  CurveCharKind.h
//  Implementation of the Enumeration CurveCharKind
//  Created on:      15-Apr-2014 2:52:12 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_398B9FFC_4948_47e9_A7FD_28CD4591E5AE__INCLUDED_)
#define EA_398B9FFC_4948_47e9_A7FD_28CD4591E5AE__INCLUDED_

/**
 * Not explicitly defined in the standard.
 * part 7-3, tab. 48
 * Here are defined 3x16 curves x=f(y). There are 3 options to describe f(y):
 * 1) 'CURVE.setCharact' = 1...16: As a formula based on up to 6 parameters: A, B,
 * C, D, E and F. The formula is standardised by ANSI or IEC, who also specify the
 * values for A, B, C, D, E and F. The corresponding attributes 'CDC.[setParA | ...
 * | setParF' are read-only.
 * 2) 'CURVE.setCharact' = 17...32: As a definable formula based on up to 6
 * parameters A, B, C, D, E and F. The corresponding attributes 'CDC.[setParA | ...
 * | setParF' may be modifyable. The specification of the formula is a local issue.
 * The actual shape of the curve may be read out using a dedicated data of the CDC
 * CSD.
 * 3) 'CURVE.setCharact' = 33...48: As a definable curve specified as an array of
 * n (x,y) pairs. The specification of the array is a local issue. The actual
 * shape of the curve may be read out using a dedicated data of the CDC CSD.
 */
enum CurveCharKind
{
	/**
	 * Notes:      value:1
	 */
	ansiExtremelyInverse,
	/**
	 * Notes:    value: 2
	 */
	ansiVeryInverse,
	/**
	 * Notes:     value: 3
	 */
	ansiNormalInverse,
	/**
	 * Notes:    value: 4
	 */
	ansiModeratelyInverse,
	/**
	 * Notes:    value: 5
	 */
	ansiDefiniteTime,
	/**
	 * Notes:    value: 6
	 */
	longTimeExtremelyInverse,
	/**
	 * Notes:    value: 7
	 */
	longTimeVeryInverse,
	/**
	 * Notes:    value: 8
	 */
	longTimeInverse,
	/**
	 * Notes:    value: 9
	 */
	iecNormalInverse,
	/**
	 * Notes:    value: 10
	 */
	iecVeryInverse,
	/**
	 * Notes:    value: 11
	 */
	iecInverse,
	/**
	 * Notes:    value: 12
	 */
	iecExtremelyInverse,
	/**
	 * Notes:    values: 13
	 */
	iecShortTimeInverse,
	/**
	 * Notes:    value: 14
	 */
	iecLongTimeInverse,
	/**
	 * Notes:    value: 15
	 */
	iecDefiniteTime,
	/**
	 * Notes:    value: 16
	 */
	reserved,
	/**
	 * Notes:   Definable curve 1 based on formula x=f(y,A,B,C,D,E,F).
	 * value: 17
	 */
	formula1,
	/**
	 * Definable curve 2 based on formula x=f(y,A,B,C,D,E,F).
	 * value: 18
	 */
	formula2,
	/**
	 * Definable curve 3 based on formula x=f(y,A,B,C,D,E,F).
	 * value: 19
	 */
	formula3,
	/**
	 * Definable curve 4 based on formula x=f(y,A,B,C,D,E,F).
	 * value: 20
	 */
	formula4,
	/**
	 * Definable curve 5 based on formula x=f(y,A,B,C,D,E,F).
	 * value: 21
	 */
	formula5,
	/**
	 * Definable curve 6 based on formula x=f(y,A,B,C,D,E,F).
	 * value: 22
	 */
	formula6,
	/**
	 * Definable curve 7 based on formula x=f(y,A,B,C,D,E,F).
	 * value: 23
	 */
	formula7,
	/**
	 * Definable curve 8 based on formula x=f(y,A,B,C,D,E,F).
	 * value: 24
	 */
	formula8,
	/**
	 * Definable curve 9 based on formula x=f(y,A,B,C,D,E,F).
	 * value: 25
	 */
	formula9,
	/**
	 * Definable curve 10 based on formula x=f(y,A,B,C,D,E,F).
	 * value: 26
	 */
	formula10,
	/**
	 * Definable curve 11 based on formula x=f(y,A,B,C,D,E,F).
	 * value: 27
	 */
	formula11,
	/**
	 * Definable curve 12 based on formula x=f(y,A,B,C,D,E,F).
	 * value: 28
	 */
	formula12,
	/**
	 * Definable curve 13 based on formula x=f(y,A,B,C,D,E,F).
	 * value: 29
	 */
	formula13,
	/**
	 * Definable curve 14 based on formula x=f(y,A,B,C,D,E,F).
	 * value: 30
	 */
	formula14,
	/**
	 * Definable curve 15 based on formula x=f(y,A,B,C,D,E,F).
	 * value: 31
	 */
	formula15,
	/**
	 * Definable curve 16 based on formula x=f(y,A,B,C,D,E,F).
	 * value: 32
	 */
	formula16,
	/**
	 * Vendor-specific curve 1 defined by n points (pairs of (x,y)).
	 * value: 33
	 */
	vendorPoints1,
	/**
	 * Vendor-specific curve 2 defined by n points (pairs of (x,y)).
	 * value: 34
	 */
	vendorPoints2,
	/**
	 * Vendor-specific curve 3 defined by n points (pairs of (x,y)).
	 * value: 35
	 */
	vendorPoints3,
	/**
	 * Vendor-specific curve 4 defined by n points (pairs of (x,y)).
	 * value: 36
	 */
	vendorPoints4,
	/**
	 * Vendor-specific curve 5 defined by n points (pairs of (x,y)).
	 * value: 37
	 */
	vendorPoints5,
	/**
	 * Vendor-specific curve 6 defined by n points (pairs of (x,y)).
	 * value: 38
	 */
	vendorPoints6,
	/**
	 * Vendor-specific curve 7 defined by n points (pairs of (x,y)).
	 * value: 39
	 */
	vendorPoints7,
	/**
	 * Vendor-specific curve 8 defined by n points (pairs of (x,y)).
	 * value: 40
	 */
	vendorPoints8,
	/**
	 * Vendor-specific curve 9 defined by n points (pairs of (x,y)).
	 * value: 41
	 */
	vendorPoints9,
	/**
	 * Vendor-specific curve 10 defined by n points (pairs of (x,y)).
	 * value: 42
	 */
	vendorPoints10,
	/**
	 * Vendor-specific curve 11 defined by n points (pairs of (x,y)).
	 * value: 43
	 */
	vendorPoints11,
	/**
	 * Vendor-specific curve 12 defined by n points (pairs of (x,y)).
	 * value: 44
	 */
	vendorPoints12,
	/**
	 * Vendor-specific curve 13 defined by n points (pairs of (x,y)).
	 * value: 45
	 */
	vendorPoints13,
	/**
	 * Vendor-specific curve 14 defined by n points (pairs of (x,y)).
	 * value: 46
	 */
	vendorPoints14,
	/**
	 * Vendor-specific curve 15 defined by n points (pairs of (x,y)).
	 * value: 47
	 */
	vendorPoints15,
	/**
	 * Vendor-specific curve 16 defined by n points (pairs of (x,y)).
	 * value: 48
	 */
	vendorPoints16
};
#endif // !defined(EA_398B9FFC_4948_47e9_A7FD_28CD4591E5AE__INCLUDED_)
