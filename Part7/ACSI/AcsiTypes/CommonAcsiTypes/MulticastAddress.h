///////////////////////////////////////////////////////////
//  MulticastAddress.h
//  Implementation of the Class MulticastAddress
//  Created on:      15-Apr-2014 2:52:36 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_0CA9D9D9_AE66_4a4a_AA6E_035768A3B78B__INCLUDED_)
#define EA_0CA9D9D9_AE66_4a4a_AA6E_035768A3B78B__INCLUDED_

#include "P_VISIBLE_STRING32.h"
#include "P_INT8U.h"
#include "P_INT16U.h"

/**
 * Not explicitly specified in the standard part 7-2 (but rather in part 8-1), but
 * is required for sending GOOSE messages and sampled values.
 */
class MulticastAddress
{

public:
	MulticastAddress();
	virtual ~MulticastAddress();
	/**
	 * Destination MAC (Media Access Control) address to which a multicast sessage is
	 * to be sent. The address shall be an Ethernet address that has the multicast bit
	 * set true. 
	 */
	P_VISIBLE_STRING32 address;
	/**
	 * Virtual LAN user priority. Shall be a single character from the range [0-7]. 
	 */
	P_INT8U priority;
	/**
	 * Virtual LAN ID. Shall be 3 characters from the range [0-9] and [A-F]. 
	 */
	P_INT16U vid;
	/**
	 * Application identifier. Shall be 4 characters from the range [0-9] and [A-F]. 
	 */
	P_INT16U appid;

};
#endif // !defined(EA_0CA9D9D9_AE66_4a4a_AA6E_035768A3B78B__INCLUDED_)
