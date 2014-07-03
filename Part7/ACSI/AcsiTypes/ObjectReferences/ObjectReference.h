///////////////////////////////////////////////////////////
//  ObjectReference.h
//  Implementation of the Class ObjectReference
//  Created on:      15-Apr-2014 2:52:37 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_1DEC57A3_D612_40d5_BDD0_9AF25CC2BE92__INCLUDED_)
#define EA_1DEC57A3_D612_40d5_BDD0_9AF25CC2BE92__INCLUDED_

#include "P_VISIBLE_STRING255.h"

/**
 * part 7-2, sec. 5
 * Instances of classes in the hierarchical information model (ACSI class
 * hierarchy of logical device, logical node, data, data attributes) shall be
 * constructed by the concatenation of all instance names comprising the whole
 * path-name of an instance of a class that identifies the instance uniquely. The
 * ObjectReference syntax shall be: LDName/LNName[.Name[. ...]].
 * The "/" shall separate the instance name of a logical device (LDName) from the
 * name of an instance of a logical node (LNName). The "." shall separate the
 * further names in the hierarchy. The "[ ]" shall indicate an option. The inner
 * square bracket "[. ...]" shall indicate further names of nested definitions.
 * NOTE: Section 19 specifies constraints on the use of the type ObjectReference.
 * <b>Modelling notes</b>:
 * <ul>
 * 	<li>We define this type as abstract class and extend it with the subtypes
 * which carry semantics of the above naming scheme.</li>
 * 	<li>Subtypes of ObjectReference provide methods that return separately all the
 * elements that make the reference (e.g., FC, LDName, LNName), which have been
 * parsed from the reference string.</li>
 * </ul>
 */
class ObjectReference
{

public:
	ObjectReference();
	virtual ~ObjectReference();

	virtual P_VISIBLE_STRING255 getRef();

};
#endif // !defined(EA_1DEC57A3_D612_40d5_BDD0_9AF25CC2BE92__INCLUDED_)
