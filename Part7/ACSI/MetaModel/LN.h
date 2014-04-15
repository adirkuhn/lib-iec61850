///////////////////////////////////////////////////////////
//  LN.h
//  Implementation of the Class LN
//  Created on:      15-Apr-2014 2:52:31 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_B28C47EF_B017_42f2_A9B9_3A64003B3DB8__INCLUDED_)
#define EA_B28C47EF_B017_42f2_A9B9_3A64003B3DB8__INCLUDED_

//#include "LD.h"
//#include "LNReference.h"
//#include "CDC.h"
//#include "LNOwnedDS.h"
#include "NamedIEC61850Object.h"

/**
 * part 7-2, sec. 9
 * <b>Original doc:</b>
 * Contains the information produced and consumed by a domain-specific application
 * function, for example, overvoltage protection or circuit breaker. The
 * definition of LNs for the substation-application domain is refined by the
 * definition of Common Data Classes (in IEC 61850-7-3) and specific named
 * instances of CDCs (in IEC 61850-7-4) contained in LNs.
 * NOTE: IEC 61850-7-4 defines further attributes for the substation-specific LNs,
 * e.g., the mode (behaviour: ON, BLOCKED, TEST, etc.). The state model of an LN
 * is modelled as a specific instance of a CDC, named Mod.
 * <b>Modelling note 1</b>: Services are defined in AcsiLN interface.
 * <b>Modelling note 2</b>: This class is abstract, as one should be using at
 * least meta-model subclasses (and further, concrete logical nodes from part 7-4).
 */
class LN : public NamedIEC61850Object
{

public:
	LN();
	virtual ~LN();
    //CDC *m_CDC;

    //LD getLd();
    //LNReference getLnRef();
    //CDC getCdcs();
    //LNOwnedDS getDss();
	void getBrcbs();
	void getUrcbs();
	void getLcbs();

};
#endif // !defined(EA_B28C47EF_B017_42f2_A9B9_3A64003B3DB8__INCLUDED_)
