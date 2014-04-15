///////////////////////////////////////////////////////////
//  TimeAccuracyKind.h
//  Implementation of the Class TimeAccuracyKind
//  Created on:      15-Apr-2014 2:52:48 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_94753B43_6BAC_49ac_98AF_367AD3132624__INCLUDED_)
#define EA_94753B43_6BAC_49ac_98AF_367AD3132624__INCLUDED_

/**
 * part 7-2, sec. 5
 * Time performance class defined in IEC 61850-5.
 */
enum TimeAccuracyKind
{
	/**
	 * Notes:   7 significant bits => 2^-7 = ~ 7.8 ms, corresponding to performance
	 * class 10 ms
	 */
	T0,
	/**
	 * Notes:   10 significant bits => 2^-10 = ~ 0.9 ms, corresponding to performance
	 * class 1 ms
	 */
	T1,
	/**
	 * Notes:   14 significant bits => 2^-14 = ~ 61 microseconds, corresponding to
	 * performance class 100 microseconds
	 */
	T2,
	/**
	 * Notes:   16 significant bits => 2^-16 = ~ 15 microseconds, corresponding to
	 * performance class 25 microseconds
	 */
	T3,
	/**
	 * Notes:   18 significant bits => 2^-18 = ~ 3.8 microseconds, corresponding to
	 * performance class 4 microseconds
	 */
	T4,
	/**
	 * Notes:   20 significant bits => 2^-20 = ~ 0.9 microseconds, corresponding to
	 * performance class 1 microseconds
	 */
	T5,
	/**
	 * Notes:   31 significant bits
	 */
	unspecified
};
#endif // !defined(EA_94753B43_6BAC_49ac_98AF_367AD3132624__INCLUDED_)
