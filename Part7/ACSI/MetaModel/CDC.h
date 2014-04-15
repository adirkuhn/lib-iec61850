///////////////////////////////////////////////////////////
//  CDC.h
//  Implementation of the Class CDC
//  Created on:      15-Apr-2014 2:52:08 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_2BB3666E_84D5_47fc_A9C8_6EA3D8FD0DD4__INCLUDED_)
#define EA_2BB3666E_84D5_47fc_A9C8_6EA3D8FD0DD4__INCLUDED_

//#include "LN.h"
#include "CDCReference.h"
//#include "FCD.h"
#include "P_BOOLEAN.h"
#include "NamedIEC61850Object.h"
#include "FCDA.h"

/**
 * part 7-2, tab. 16 (DATA class), tab. 20 (COMMON-DATA class)
 * <b>Original doc:</b>
 * Represent meaningful information of applications located in an automation
 * device. The values of DATA instances can, e.g., be written (SetDataValues) and
 * read (GetDataValues). Part IEC 61850-7-4 specifies a list of common and
 * substation-domain-specific - simple and complex - DATA, e.g., Pos for position,
 * OilFil for oil filtration. The composition of DATA in part IEC 61850-7-4 is
 * based on common templates (the common DATA classes, CDC) specified in part IEC
 * 61850-7-3. The concept of DATA classes is introduced in this clause. Any set of
 * DATA (or parts of DATA) instances may be grouped to build DATA_SET instances
 * applying the CreateDataSet service. DATA_SET instances can, e.g., be written
 * (SetDataSetValues) or read (GetDataSetValues).
 * NOTE 1: The consequences of setting values to instances of DATA are outside
 * this part of the standard. Parts IEC 61850-7-3 and IEC 61850-7-4 specify many
 * substation-domain-specific DATA classes. These definitions provide information
 * what actions are to be taken by the receiving application, e.g., changing the
 * DATA Mode from ON to TEST changes the state of the respective instance to test
 * mode behaviour as defined in part IEC 61850-7-4.
 * NOTE 2: To get values of DATA compares to a polling approach. Services for
 * unsolicited/spontaneous transmission of values of DATA from a server to clients
 * (sometimes known as information report, traps, or spontaneous transmission)
 * require a careful design. Uncontrolled spontaneous transmission may congest the
 * network. Services for a controlled reporting are specified in 14.
 * NOTE 3: DATA or part of a DATA may be referenced in a DATA_SET. The persistent
 * existence of DATA is expected as long as they are referenced as members of a
 * DATA_SET. A system has to take special measures to ensure their existence.
 * <b>Modelling note 1</b>: Services are defined in AcsiCDC interface.
 * <b>Modelling note 2</b>: This class is abstract, as one should be using at
 * least meta-model subclasses (and further, concrete common data classes from
 * part 7-3).
 * <b>Modelling note 3</b>: In the context of this MetaModel, LNs hold instances
 * of CDCs, with standardised names (e.g., Pos, OilFil).
 */
class CDC : public NamedIEC61850Object
{

public:
	CDC();
	virtual ~CDC();
	FCDA *m_FCDA;
    //FCD *m_FCD;

    //LN getLn();
	CDCReference getCdcRef();
    //FCD getFcds();
    //FCD getFcdas();
	virtual P_BOOLEAN isPrimitive();

};
#endif // !defined(EA_2BB3666E_84D5_47fc_A9C8_6EA3D8FD0DD4__INCLUDED_)
