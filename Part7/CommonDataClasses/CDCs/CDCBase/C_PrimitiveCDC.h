///////////////////////////////////////////////////////////
//  C_PrimitiveCDC.h
//  Implementation of the Class C_PrimitiveCDC
//  Created on:      15-Apr-2014 2:52:08 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_84B07046_0DFF_4dd9_B2AC_D3FB3214ABDB__INCLUDED_)
#define EA_84B07046_0DFF_4dd9_B2AC_D3FB3214ABDB__INCLUDED_

#include "VISIBLE_STRING255_EX.h"
#include "PrimitiveCDC.h"

/**
 * Abstract supertype for all primitive CDCs. It factors the common attributes.
 */
class C_PrimitiveCDC : public PrimitiveCDC
{

public:
	C_PrimitiveCDC();
	virtual ~C_PrimitiveCDC();
	/**
	 * The common data class name space (AnyLN.AnyData.cdcNs). Shall be included if
	 * the definition of at least one attribute of the CDC (e.g., XCBR.Pos.stVal)
	 * deviates from the definition in the specification in which the CDC is defined.
	 * Modelling note: "Name space"-related attributes have nothing to do with XML or
	 * C# or Java namespaces. See diagram CDCs/NamespaceConcept.
	 */
	VISIBLE_STRING255_EX cdcNs;
	/**
	 * Name of the CDC. Used together with 'cdcNs'.
	 */
	VISIBLE_STRING255_EX cdcName;
	/**
	 * The data name space (AnyLN.AnyData.dataNs). Shall be included if the name space
	 * of the named instance of CDC (e.g., Pos) deviates from the definition in the
	 * specification in which the owning LN is defined (XCBR).
	 * Modelling note: "Name space"-related attributes have nothing to do with XML or
	 * C# or Java namespaces. See diagram CDCs::NamespaceConcept.
	 */
	VISIBLE_STRING255_EX dataNs;

};
#endif // !defined(EA_84B07046_0DFF_4dd9_B2AC_D3FB3214ABDB__INCLUDED_)
