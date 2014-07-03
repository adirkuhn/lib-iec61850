///////////////////////////////////////////////////////////
//  LOG.h
//  Implementation of the Class LOG
//  Created on:      15-Apr-2014 2:52:32 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_B235796F_5276_44a9_8207_B8CC26CC574F__INCLUDED_)
#define EA_B235796F_5276_44a9_8207_B8CC26CC574F__INCLUDED_

#include "LN0.h"
#include "LOGReference.h"
#include "NamedIEC61850Object.h"

/**
 * part 7-2, sec. 14
 * <b>Original doc:</b>
 * One LOG may be controlled by multiple LCBs. From an implementation view, the
 * LOG may be considered as a circular buffer that overwrites the oldest values in
 * the LOG, but this is hidden to the client. The client view of the LOG is a
 * linear buffer with LOG entries. Each entry has a unique identifier (EntryID)
 * and the timestamp (TimeOfEntry) of its addition to the LOG. The client
 * interacts with the LOG through its services GetLogStatusValues(),
 * QueryLogByTime() and QueryLogAfter(). The first service is to obtain the
 * current range of entries in the LOG (oldest and newest entries id and
 * timestamp). The other two services are used to retreive the list of entries
 * according to the specified id or timestamp range.
 * Server fills the LOG on a first-in first-out basis. When the size of the stored
 * log entries reaches the maximal size of the LOG, the oldest LOG.Entry shall be
 * overwritten. This action shall have no impact to the further incrementing of
 * the Entry[i].EntryID of the added instances of LOG.Entry.
 * <b>Modelling note</b>: Services are defined in AcsiLOG interface.
 */
class LOG : public NamedIEC61850Object
{

public:
	LOG();
	virtual ~LOG();

	LN0 getLn0();
	LOGReference getLogRef();

};
#endif // !defined(EA_B235796F_5276_44a9_8207_B8CC26CC574F__INCLUDED_)
