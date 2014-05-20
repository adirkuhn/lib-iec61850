///////////////////////////////////////////////////////////
//  P_VISIBLE_STRING32.h
//  Implementation of the Class P_VISIBLE_STRING32
//  Created on:      15-Apr-2014 2:52:41 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_364DF3CD_91C7_4ad1_8A44_6CD67531402C__INCLUDED_)
#define EA_364DF3CD_91C7_4ad1_8A44_6CD67531402C__INCLUDED_

#include <QString>

class P_VISIBLE_STRING32
{

public:
    QString value;

    P_VISIBLE_STRING32();
    void setValue(QString);
    QString getValue();
	virtual ~P_VISIBLE_STRING32();

};
#endif // !defined(EA_364DF3CD_91C7_4ad1_8A44_6CD67531402C__INCLUDED_)
