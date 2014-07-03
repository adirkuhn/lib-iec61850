///////////////////////////////////////////////////////////
//  TPAA.h
//  Implementation of the Class TPAA
//  Created on:      15-Apr-2014 2:52:49 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_8DE829BC_C4A8_45e9_B81A_3DB34B0DC834__INCLUDED_)
#define EA_8DE829BC_C4A8_45e9_B81A_3DB34B0DC834__INCLUDED_

//#include "NonPersistentDS.h"
#include "IEC61850Object.h"

/**
 * part 7-2, sec. 7
 * <b>Original doc</b>:
 * Provides the services for managing associations between client and server. It
 * shall convey service requests and responses, thus transferring unconfirmed and
 * confirmed services.
 * A TPAA shall provide a bi-directional connection-oriented information exchange.
 * The application associations shall be reliable and the information flow shall
 * be controlled end-to-end. Reliable means that the connection, on which the TPAA
 * relies, provides measures to notify reasons for non-deliverance of information
 * in due time. End-to-end flow control means that sources of information do not
 * send more information than the destination can buffer. All ACSI services except
 * for SendGOOSEMessage(), SendGSSEMessage() and SendMSVMessage make use of the
 * TPAA (see A.2 in column Asso. marked as "TP").
 * <b>Modelling note 1</b>: Services are defined in AcsiTPAA interface.
 * <b>Modelling note 2</b>: In a TCP/IP based application, TPAA would correspond
 * to a client session. Present in the MetaModel for documentation purposes and
 * because it owns non-persistent data sets.
 */
class TPAA : public IEC61850Object
{

public:
	TPAA();
	virtual ~TPAA();

    //NonPersistentDS getDss();

};
#endif // !defined(EA_8DE829BC_C4A8_45e9_B81A_3DB34B0DC834__INCLUDED_)
