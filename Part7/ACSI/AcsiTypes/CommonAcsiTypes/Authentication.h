///////////////////////////////////////////////////////////
//  Authentication.h
//  Implementation of the Class Authentication
//  Created on:      15-Apr-2014 2:52:05 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_A46B886D_B7C3_4a3a_976A_B2DE4422C40E__INCLUDED_)
#define EA_A46B886D_B7C3_4a3a_976A_B2DE4422C40E__INCLUDED_

#include "P_VISIBLE_STRING32.h"
#include "AccessView.h"
#include "MCAA.h"

/**
 * Not explicitly specified in the standard. Shall represent the information
 * required to grant permission to access instances of a specific access view to a
 * client (in case of MCAA) or server (in case of TPAA).
 * <b>Quesiton 1</b>: Is it correct to suppose that the Authentication (i.e., the
 * client that is being authenticated) has more than one AccessViews?
 * <b>Question 2</b>: Authentication.password should be encrypted?
 */
class Authentication
{

public:
	Authentication();
	virtual ~Authentication();
	MCAA *m_MCAA;

	P_VISIBLE_STRING32 getPassword();
	P_VISIBLE_STRING32 getUserID();
	AccessView getViews();

};
#endif // !defined(EA_A46B886D_B7C3_4a3a_976A_B2DE4422C40E__INCLUDED_)
