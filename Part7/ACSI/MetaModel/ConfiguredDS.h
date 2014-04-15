///////////////////////////////////////////////////////////
//  ConfiguredDS.h
//  Implementation of the Class ConfiguredDS
//  Created on:      15-Apr-2014 2:52:10 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_7BF05522_3D18_44ad_A8FE_E5FB64AB234A__INCLUDED_)
#define EA_7BF05522_3D18_44ad_A8FE_E5FB64AB234A__INCLUDED_

#include "LNOwnedDS.h"

/**
 * Not explicitly defined in the standard. A pre-defined (configured) DS instance
 * shall be visible to clients of any TPPA. It shall be non-deletable.
 */
class ConfiguredDS : public LNOwnedDS
{

public:
	ConfiguredDS();
	virtual ~ConfiguredDS();

};
#endif // !defined(EA_7BF05522_3D18_44ad_A8FE_E5FB64AB234A__INCLUDED_)
