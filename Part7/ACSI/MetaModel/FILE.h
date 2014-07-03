///////////////////////////////////////////////////////////
//  FILE.h
//  Implementation of the Class FILE
//  Created on:      15-Apr-2014 2:52:18 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_96054AD8_0749_4005_BAFB_AD8C0FA8569C__INCLUDED_)
#define EA_96054AD8_0749_4005_BAFB_AD8C0FA8569C__INCLUDED_

//#include "SERVER.h"
#include "FILEReference.h"
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
class IECFILE : public HierarchyIEC61850Object
{

public:
    IECFILE();
    virtual ~IECFILE();

    //SERVER getServer();
	FILEReference getFileRef();

};
#endif // !defined(EA_96054AD8_0749_4005_BAFB_AD8C0FA8569C__INCLUDED_)
