///////////////////////////////////////////////////////////
//  SERVER.h
//  Implementation of the Class SERVER
//  Created on:      15-Apr-2014 2:52:45 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_440A34C7_223F_4b73_8245_8C3096686F3D__INCLUDED_)
#define EA_440A34C7_223F_4b73_8245_8C3096686F3D__INCLUDED_

#include "P_VISIBLE_STRING32.h"
#include "LD.h"
#include "FILE.h"
#include "IPAddress.h"
#include "TPAA.h"
#include "MCAA.h"
#include "HierarchyIEC61850Object.h"

/**
 * part 7-2, sec. 20
 * <b>Original doc</b>:
 * The ACSI file transfer services shall provide the functionality for
 * transferring files from and to file stores and for managing file stores.
 * NOTE: The ACSI file services and the structure of the ACSI file store are
 * intentionally limited in scope to simplify implementation in functionally
 * restricted devices. The ACSI file store addresses a single file format -
 * sequential unstructured binary - which may contain programs, data, or both. Any
 * interpretation of the contents is by mutual agreement of the systems involved.
 * <b>Modelling note</b>: Services are defined in AcsiFILE interface.
 */
class SERVER : public HierarchyIEC61850Object
{

public:
	SERVER();
	virtual ~SERVER();
	MCAA *m_MCAA;
	LD *m_LD;
	IPAddress *m_IPAddress;

	P_VISIBLE_STRING32 getName();
	LD getLds();
	FILE getFiles();
	IPAddress getSaps();
	TPAA getTpaaClients();
	MCAA getMcaaClients();

};
#endif // !defined(EA_440A34C7_223F_4b73_8245_8C3096686F3D__INCLUDED_)
