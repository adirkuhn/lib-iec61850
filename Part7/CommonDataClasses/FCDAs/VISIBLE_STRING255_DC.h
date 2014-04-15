///////////////////////////////////////////////////////////
//  VISIBLE_STRING255_DC.h
//  Implementation of the Class VISIBLE_STRING255_DC
//  Created on:      15-Apr-2014 2:52:52 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_23FBBCED_6E33_461c_BA11_69E803297D6A__INCLUDED_)
#define EA_23FBBCED_6E33_461c_BA11_69E803297D6A__INCLUDED_

#include "VISIBLE_STRING255.h"
#include "FCDA_DC.h"

class VISIBLE_STRING255_DC : public FCDA_DC
{

public:
	VISIBLE_STRING255_DC();
	virtual ~VISIBLE_STRING255_DC();

private:
	VISIBLE_STRING255 attr;

};
#endif // !defined(EA_23FBBCED_6E33_461c_BA11_69E803297D6A__INCLUDED_)
