///////////////////////////////////////////////////////////
//  FCDA.h
//  Implementation of the Class FCDA
//  Created on:      15-Apr-2014 2:52:15 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_1E51285B_836F_4a21_A6EA_2A96018298BB__INCLUDED_)
#define EA_1E51285B_836F_4a21_A6EA_2A96018298BB__INCLUDED_

#include "P_BOOLEAN.h"
//#include "CDC.h"
#include "FCDAReference.h"
#include "DA.h"
#include "PrimitiveDA.h"
//#include "DS.h"
#include "NamedIEC61850Object.h"
#include "TrgOpKind.h"
#include "FcKind.h"

/**
 * Functionally constrained data attribute is used to define attributes of CDCs
 * (common data classes).
 * Functional constraints, defined at the level of FCDA, give constraints with
 * respect to what kind of services should be applicable to data attributes of
 * CDCs, and which should not be allowed.
 * The <i>meta-model FCDA</i> has association to exactly one meta-model DA
 * (returned by getDa()), while the <i>concrete subtypes of FCDA</i> (package
 * FCDAs of part 7-3) will have a single attribute of some concrete subtype of DA.
 * FCDA serves to "extend" a single instance of DA with the info on FcKind and
 * TrgOpKind, thus making it explicit for easy definition of CDC attributes. In
 * the context of naming, FCDA "wraps" an instance of DA and its name is the name
 * of the contained DA.
 * PrimitiveDA members of an FCDA are those that in the end hold value that can be
 * read, written and monitored for change.
 * <b>Modelling note</b>: FCDA has not been explicitly defined in IEC 61850-7-2.
 * However, there is its implicit definition in tables 17 (DATA class) and 20
 * (COMMON-DATA class), under "DataAttribute" part of DATA/COMMON-DATA class
 * definitions.
 */
class FCDA : public NamedIEC61850Object
{

public:
	FCDA();
	virtual ~FCDA();
	DA *m_DA;

	FcKind getFc();
	TrgOpKind getTrgOp();
	virtual P_BOOLEAN isWritable();
	virtual P_BOOLEAN isReadable();
    //CDC getCdc();
	FCDAReference getFcdaRef();
	DA getDa();
	PrimitiveDA getPrimitiveDas();
    //DS getDss();

};
#endif // !defined(EA_1E51285B_836F_4a21_A6EA_2A96018298BB__INCLUDED_)
