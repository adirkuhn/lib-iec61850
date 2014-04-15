///////////////////////////////////////////////////////////
//  SboClassesKind.h
//  Implementation of the Enumeration SboClassesKind
//  Created on:      15-Apr-2014 2:52:44 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_8E8EB29B_F0E9_4d00_9CE4_8BD188A565D8__INCLUDED_)
#define EA_8E8EB29B_F0E9_4d00_9CE4_8BD188A565D8__INCLUDED_

enum SboClassesKind
{
	/**
	 * Following an 'Operate()' service request, the control object shall return in
	 * the unselected state.
	 */
	operateOnce,
	/**
	 * Following an 'Operate()' service request, the control object shall remain in
	 * the ready state, as long as '.sboTimeout' did not expire
	 */
	operateMany
};
#endif // !defined(EA_8E8EB29B_F0E9_4d00_9CE4_8BD188A565D8__INCLUDED_)
