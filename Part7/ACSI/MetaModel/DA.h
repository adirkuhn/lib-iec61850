///////////////////////////////////////////////////////////
//  DA.h
//  Implementation of the Class DA
//  Created on:      15-Apr-2014 2:52:12 PM
//  Original author: roger
///////////////////////////////////////////////////////////

#if !defined(EA_A5E129C0_D7D3_4a78_845C_D93583F82CE9__INCLUDED_)
#define EA_A5E129C0_D7D3_4a78_845C_D93583F82CE9__INCLUDED_

//#include "FCDA.h"
//#include "FCDAReference.h"
#include "P_BOOLEAN.h"
#include "NamedIEC61850Object.h"

/**
 * part 7-2, sec. 5.5.1 and tab. 17
 * Data attribute is an abstraction for a primitive type (e.g., INT32), an
 * enumeration type (e.g., Validity), and in general, for any combination of them
 * (e.g., Vector). A data attribute may belong to either FCDA or to another data
 * attribute, but not both.
 * <b>Example</b>: Taking "myLD/MMXU1.PhV.phsA.cVal.mag.f" as example (most
 * complicated) reference:
 * - name would contain "cVal" for Vector (ComposedDA), "mag" for AnalogueValue
 * (ComposedDA) and "f" for FLOAT32 (PrimitiveDA), and
 * - reference would contain "myLD/MMXU1.PhV.phsA.cVal" for Vector, "myLD/MMXU1.
 * PhV.phsA.cVal.mag" for AnalogueValue and "myLD/MMXU1.PhV.phsA.cVal.mag.f" for
 * FLOAT32.
 * - parent of "cVal" (Vector) is an FCDA within "phsA" (CDC), parent of "mag"
 * (AnalogValue) is "cVal" (Vector:ComposedDA), and parent of "f" (FLOAT32:
 * PrimitiveDA) is "mag" (AnalogValue:ComposedDA).
 * <b>Modelling note</b>: This class is abstract, as one should be using at least
 * meta-model subclasses (and further, concrete data attributes from part 7-3).
 */
class DA : public NamedIEC61850Object
{

public:
	DA();
	virtual ~DA();

    //FCDA getFcda();
    //FCDAReference getFcdaRef();
	virtual P_BOOLEAN isPrimitive();

};
#endif // !defined(EA_A5E129C0_D7D3_4a78_845C_D93583F82CE9__INCLUDED_)
