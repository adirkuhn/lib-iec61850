///////////////////////////////////////////////////////////
//  PulseConfig.h
//  Implementation of the Class PulseConfig
//  Created on:      15-Apr-2014 2:52:42 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_C8AABF1F_D747_47ac_8009_62FF8E172F2A__INCLUDED_)
#define EA_C8AABF1F_D747_47ac_8009_62FF8E172F2A__INCLUDED_

#include "ControlOutput.h"
#include "INT32U.h"
#include "ComposedDA.h"

/**
 * part 7-3, tab. 7
 * Pulse configuration type is used to configure the output pulse generated with a
 * command. As the result of receiving an 'operate()' service request, a pulsed
 * output may be generated to the 'on' or 'off' input of a switching device. The
 * shape of this output is defined by 'PulseConfig.[onDur,offDur,numPls]'
 * attributes, according to Figure 4.
 * See 'ControlOutput'.
 */
class PulseConfig : public ComposedDA
{

public:
	PulseConfig();
	virtual ~PulseConfig();
	/**
	 * Shall define if the control output is a pulse output or a persistent output. If
	 * 'PulseConfig.cmdQual=pulse', the duration of the pulse shall be defined with
	 * 'PulseConfig.[onDur,offDur,numPls]. If 'PulseConfig.cmdQual=persistent', the
	 * deactivation of the output pulse is a local issue determined in the server; as
	 * an example, when a switch controlled by this control output has reached the end
	 * position, the local control logic in the device implementing the server will
	 * deactivate the output.
	 */
	ControlOutput cmdQual;
	/**
	 * Duration of the pulse in ms. If set to 0, it means that the duration is locally
	 * defined
	 */
	INT32U onDur;
	/**
	 * Duration between two pulses in ms. If set to 0, it means that the duration is
	 * locally defined
	 */
	INT32U offDur;
	/**
	 * Number of pulses that are generated.
	 */
	INT32U numPls;

};
#endif // !defined(EA_C8AABF1F_D747_47ac_8009_62FF8E172F2A__INCLUDED_)
