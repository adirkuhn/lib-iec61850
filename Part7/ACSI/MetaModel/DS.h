///////////////////////////////////////////////////////////
//  DS.h
//  Implementation of the Class DS
//  Created on:      15-Apr-2014 2:52:14 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_0492068E_A7ED_4087_B429_4BE406BB4151__INCLUDED_)
#define EA_0492068E_A7ED_4087_B429_4BE406BB4151__INCLUDED_

#include "FCD.h"
#include "PrimitiveDA.h"
#include "NamedIEC61850Object.h"

/**
 * part 7-2, sec. 11
 * <b>Original doc:</b>
 * A DATA_SET (DS) is an ordered group of FCObjectReference-s (i.e.,
 * ObjectReference-s of PrimitiveCDCs and/or PrimitiveDAs accompanied with FC),
 * called the data set members, organised as a single collection for the
 * convenience of the client. The membership and order of the FCObjectReference-s
 * in a DS shall be known to both the client and the server, so that only the name
 * of the DS and the current values of the referenced Attributes (including those
 * within referenced Data) need to be transmitted. This capability thus permits
 * more efficient use of the communications bandwidth.
 * NOTE: The membership and order of the Data or Attribute in a DS can be
 * retrieved with the GetDataSetDirectory service. The persistent existence of
 * Data and Attribute is expected as long as they are referenced as members of a
 * DS. A system has to take special measures to ensure their persistent existence.
 * 
 * DSs are important for control models, since the values referred to by DSs
 * members are monitored for change by, e.g., reporting, logging, GOOSE control
 * blocks. The DSs provide access to those values, which are to be transmitted in
 * case of a value change.
 * Any Data or Attribute in a SERVER may be referenced by one or more DSs.
 * NOTE: Local reconfiguration of members of a DS may cause critical misoperations.
 * To prevent unintended changes in the DS configuration, the system must take
 * special measures (they are outside of the scope of this part of IEC 61850).
 * DSs may be pre-defined (configured), or created through the CreateDataSet
 * service. When dynamically created with the CreateDataSet service, the client
 * specifies whether it should be a persistent or a non-persistent DS instance.
 * <b>Modelling note 1</b>: Services are defined in AcsiDS interface.
 * <b>Modelling note 2</b>: We model the attribute called DSMemberRef with two
 * associations: one with FCD and one with FCDA.
 * <b>Modelling note 3</b>: According to the above spec, there are three possible
 * types of DS instances: configured (or pre-defined), persistent and non-
 * persistent. The first two are owned by LNs, and the last one is owned by the
 * TPAA over which it has been created. Therefore, we define the abstract DS,
 * which is generic for all the three subtypes, and an abstract LNOwnedDS subtype,
 * which excludes non-persistent DSs.
 */
class DS : public NamedIEC61850Object
{

public:
	DS();
	virtual ~DS();

    //FCD getFcds();
    //FCD getFcdas();
	PrimitiveDA getPrimitiveDas();

};
#endif // !defined(EA_0492068E_A7ED_4087_B429_4BE406BB4151__INCLUDED_)
