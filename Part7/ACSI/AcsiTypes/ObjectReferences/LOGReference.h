///////////////////////////////////////////////////////////
//  LOGReference.h
//  Implementation of the Class LOGReference
//  Created on:      15-Apr-2014 2:52:33 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_1144F8F1_CBA0_49bd_A8C5_81E3492D499F__INCLUDED_)
#define EA_1144F8F1_CBA0_49bd_A8C5_81E3492D499F__INCLUDED_

#include "ObjectName.h"
#include "P_VISIBLE_STRING255.h"

/**
 * Type not explicitly specified in the standard. Naming for LOG.
 * <b>Modelling note</b>: If LOG moves from LN to LD, change the inheritance of
 * this type from LNReference to LDReference.
 * <b>Question</b>: In IEC 61850-7-2, it is specified within the definition of LN,
 * that the LN0 has [0..1] LOGs (i.e., LOG is attached to the LN0), so we modelled
 * it that way. The service AcsiLN.getLogicalNodeDirectoryLOG() is supposed to
 * return the reference of the LOG for the case of LN0. However, IEC 61850-7-2
 * says that the object reference of LOG does not include "LLN0" (i.e., it is not
 * "LDName/LNName/LDName"), but is defined as "LDName/LDName", which implicitly
 * means that the LOG does not belong to LN0, but to the LD! (note that IEC 61850-
 * 8-1 treats LogRef in a similar way, i.e., they say that LogRef = /GeneralLog).
 * It is clear to us that the authors here meant that LN0 is semantically
 * equivalent to LD (since only one LN0 is associated with an LD). However, LD
 * contains LNs, and LN0 contains LOG, so we have a problem of one "level" skipped.
 * The question is where LOG belongs to: to LN0 or to the LD? If LOG really
 * belongs to LD, then there should be not only AcsiLD.getLogicalDeviceDirectory()
 * (which returns LNRefs), but also one more service that returns LOGReference -
 * this latter could be just the current AcsiLN.getLogicalNodeDirectoryLOG() moved
 * to AcsiLD and renamed. Please, suggest on how to proceed: (a) to keep LOG under
 * LN0 (as it is now), or (b) to move the LOG from LN0 up to LD, and then move the
 * service that can return LOGReference from LN to LD?
 */
class LOGReference
{

public:
	LOGReference();
	virtual ~LOGReference();

	ObjectName getLogName();
	P_VISIBLE_STRING255 getRef();
	void getFc();

};
#endif // !defined(EA_1144F8F1_CBA0_49bd_A8C5_81E3492D499F__INCLUDED_)
