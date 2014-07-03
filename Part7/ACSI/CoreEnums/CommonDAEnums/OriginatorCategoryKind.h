///////////////////////////////////////////////////////////
//  OriginatorCategoryKind.h
//  Implementation of the Enumeration OriginatorCategoryKind
//  Created on:      15-Apr-2014 2:52:38 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_958612DE_CB2F_4a81_9F78_B6C969D6598C__INCLUDED_)
#define EA_958612DE_CB2F_4a81_9F78_B6C969D6598C__INCLUDED_

/**
 * <font color="#141414">Not explicitly defined in the standard.7-3, tab. 9</font>
 */
enum OriginatorCategoryKind
{
	/**
	 * Originator category not supported.
	 */
	notSupported,
	/**
	 * Control operation issued from an operator using a client located at bay level
	 */
	bayControl,
	/**
	 * Control operation issued from an operator using a client located at station
	 * level
	 */
	stationControl,
	/**
	 * Control operation from a remote operator outside the substation (for example
	 * network control center)
	 */
	remoteControl,
	/**
	 * Control operation issued from an automatic function at bay level
	 */
	automaticBay,
	/**
	 * Control operation issued from an automatic function at station level
	 */
	automaticStation,
	/**
	 * Control operation issued from a automatic function outside of the substation
	 */
	automaticRemote,
	/**
	 * Control operation issued from a maintenance/service tool
	 */
	maintenance,
	/**
	 * Status change occurred without control action (for example external trip of a
	 * circuit breaker or failure inside the breaker)
	 */
	process
};
#endif // !defined(EA_958612DE_CB2F_4a81_9F78_B6C969D6598C__INCLUDED_)
