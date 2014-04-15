///////////////////////////////////////////////////////////
//  MultiplierKind.h
//  Implementation of the Enumeration MultiplierKind
//  Created on:      15-Apr-2014 2:52:36 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_36D6E673_F87F_4474_8F11_0F8C5E07317F__INCLUDED_)
#define EA_36D6E673_F87F_4474_8F11_0F8C5E07317F__INCLUDED_

/**
 * Not explicitly defined in the standard.
 * part 7-3, tab. A.5 in Annex A
 */
enum MultiplierKind
{
	/**
	 * =10**-24
	 * symbol: y
	 */
	yocto,
	/**
	 * =10**-21
	 * symbol: z
	 */
	zepto,
	/**
	 * =10**-18
	 * symbol: a
	 */
	atto,
	/**
	 * =10**-15
	 * symbol: f
	 */
	femto,
	/**
	 * =10**-12
	 * symbol: p
	 */
	pico,
	/**
	 * =10**-9
	 * symbol: n
	 */
	nano,
	/**
	 * =10**-6
	 * symbol: µ
	 */
	micro,
	/**
	 * =10**-3
	 * symbol: m
	 */
	milli,
	/**
	 * =10**-2
	 * symbol: c
	 */
	centi,
	/**
	 * =10**-1
	 * symbol: d
	 */
	deci,
	/**
	 * =10**0
	 * symbol: -
	 */
	none,
	/**
	 * =10**1
	 * symbol: da
	 */
	deca,
	/**
	 * =10**2
	 * symbol: h
	 */
	hecto,
	/**
	 * =10**3
	 * symbol: k
	 */
	kilo,
	/**
	 * =10**6
	 * symbol: M
	 */
	mega,
	/**
	 * =10**9
	 * symbol: G
	 */
	giga,
	/**
	 * =10**12
	 * symbol: T
	 */
	tera,
	/**
	 * =10**15
	 * symbol: P
	 */
	petra,
	/**
	 * =10**18
	 * symbol: E
	 */
	exa,
	/**
	 * =10**21
	 * symbol: Z
	 */
	zetta,
	/**
	 * =10**24
	 * symbol: Y
	 */
	yotta
};

#endif // !defined(EA_36D6E673_F87F_4474_8F11_0F8C5E07317F__INCLUDED_)
