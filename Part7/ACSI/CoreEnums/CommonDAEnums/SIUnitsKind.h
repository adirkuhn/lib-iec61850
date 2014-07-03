///////////////////////////////////////////////////////////
//  SIUnitsKind.h
//  Implementation of the Enumeration SIUnitsKind
//  Created on:      15-Apr-2014 2:52:46 PM
//  Original author: adirkuhn
///////////////////////////////////////////////////////////

#if !defined(EA_F6D76D19_8D25_46ae_82D9_62AD4FC9F044__INCLUDED_)
#define EA_F6D76D19_8D25_46ae_82D9_62AD4FC9F044__INCLUDED_

/**
 * Not explicitly defined in the standard.
 * part 7-3, tabs A.1-A.4 in Annex A
 */
enum SIUnitsKind
{
	/**
	 * value: 1
	 */
	dimensionless,
	/**
	 * length [m]
	 * value: 2
	 */
	meter,
	/**
	 * mass [kg]
	 * value: 3
	 */
	kilogram,
	/**
	 * time [s]
	 * value: 4
	 */
	second,
	/**
	 * current [A]
	 * value: 5
	 */
	ampere,
	/**
	 * temperature [K]
	 * value: 6
	 */
	Kelvin,
	/**
	 * amount of substance [mol]
	 * value: 7
	 */
	mole,
	/**
	 * luminous intensity [cd]
	 * value: 8
	 */
	candela,
	/**
	 * plane angle [deg]
	 * value: 9
	 */
	degree,
	/**
	 * plane angle [rad]
	 * value: 10
	 */
	radian,
	/**
	 * solid angle [sr]
	 * value: 11
	 */
	steradian,
	/**
	 * absorbed dose (J/Kg) [Gy]
	 * value: 21
	 */
	Gray,
	/**
	 * activity (l/s) [Bq]
	 * value: 22
	 */
	becquerel,
	/**
	 * relative temperature [°C]
	 * value: 23
	 */
	degreeCelsius,
	/**
	 * dose equivalent (J/kg) [Sv]
	 * value: 24
	 */
	sievert,
	/**
	 * electric capacitance (C/V) [F]
	 * value: 25
	 */
	farad,
	/**
	 * electric charge (AS) [C]
	 * value: 26
	 */
	coulomb,
	/**
	 * electric conductance (A/V) [S]
	 * value: 27
	 */
	siemens,
	/**
	 * electric inductance (Wb/A) [H]
	 * value: 28
	 */
	henry,
	/**
	 * electric potential (W/A) [V]
	 * value: 29
	 */
	volt,
	/**
	 * electric resistance (VA) [omega]
	 * value: 30
	 */
	ohm,
	/**
	 * energy (N m) [J]
	 * value: 31
	 */
	joule,
	/**
	 * force (kg m / s2) [N]
	 * value: 32
	 */
	newton,
	/**
	 * frequency (1/s) [Hz]
	 * value: 33
	 */
	hertz,
	/**
	 * illuminance (lm / m2) [lx]
	 * value: 34
	 */
	lux,
	/**
	 * luminous flux (cd sr) [Lm]
	 * value: 35
	 */
	lumen,
	/**
	 * magnetic flux (V s) [Wb]
	 * value: 36
	 */
	weber,
	/**
	 * magnetic flux density (Wb / m2) [T]
	 * value: 37
	 */
	tesla,
	/**
	 * power (J /s) [W]
	 * value: 38
	 */
	wattGeneral,
	/**
	 * pressure (N / m2) [Pa]
	 * value: 39
	 */
	pascal,
	/**
	 * area [m2]
	 * value: 41
	 */
	squareMeter,
	/**
	 * volume [m3]
	 * value: 42
	 */
	cubicMeter,
	/**
	 * velocity [m/s]
	 * value: 43
	 */
	meterPerSecond,
	/**
	 * Acceleration [m/s2]
	 * value: 44
	 */
	meterPerSquareSecond,
	/**
	 * volumetric flow rate [m3/s]
	 * value: 45
	 */
	cubicMeterPerSecond,
	/**
	 * fuel efficiency [m/m3]
	 * value: 46
	 */
	meterPerCubicMeter,
	/**
	 * moment of mass (kg m) [M]
	 * value: 47
	 */
	kilogramMeter,
	/**
	 * density [kg/m3]
	 * value: 48
	 */
	kilogramPerCubicMeter,
	/**
	 * viscosity [m2/s]
	 * value: 49
	 */
	squareMeterPerSecond,
	/**
	 * thermal conductivity [W/mK]
	 * value: 50
	 */
	wattPerMeterKelvin,
	/**
	 * heat capacity [J/K]
	 * value: 51
	 */
	joulePerKelvin,
	/**
	 * concentration [ppm]
	 * value: 52
	 */
	partPerMillion,
	/**
	 * rotational speed [1/s]
	 * value: 53
	 */
	rotationPerSecond,
	/**
	 * angular velocity [rad/s]
	 * value: 54
	 */
	radianPerSecond,
	/**
	 * apparent power [VA]
	 * value: 61
	 */
	voltAmpere,
	/**
	 * real power (I2R) [W]
	 * value: 62
	 */
	watt,
	/**
	 * reactive power (VISinTheta) [VAr]
	 * value: 63
	 */
	voltAmpereReactive,
	/**
	 * phase angle [theta]
	 * value: 64
	 */
	phaseAngleDegree,
	/**
	 * power factor [CosTheta]
	 * value: 65
	 */
	cosTheta,
	/**
	 * volt seconds (Ws / A) [Vs]
	 * value: 66
	 */
	voltSecond,
	/**
	 * volts squared (W2 / A2) [V2]
	 * value: 67
	 */
	voltSquare,
	/**
	 * amp seconds (As) [As]
	 * value: 68
	 */
	ampSecond,
	/**
	 * amps squared (A2) [A2]
	 * value: 69
	 */
	ampSquare,
	/**
	 * amps squared time (A2s) [A2t]
	 * value: 70
	 */
	ampSquareSecond,
	/**
	 * apparent energy [VAh]
	 * value: 71
	 */
	voltAmpereHour,
	/**
	 * real energy [Wh]
	 * value: 72
	 */
	watHour,
	/**
	 * reactive energy [VArh]
	 * value: 73
	 */
	voltAmpereReactiveHour,
	/**
	 * magnetic flux [V/Hz]
	 * value: 74
	 */
	voltPerHertz
};

#endif // !defined(EA_F6D76D19_8D25_46ae_82D9_62AD4FC9F044__INCLUDED_)
