/*************************************************************
 * File              : constants.hpp
 * Author            : Pierre Cariou <pierrecariou@outlook.fr>
 * Date              : 18.08.2022
 * Last Modified Date: 18.08.2022
 * Last Modified By  : Pierre Cariou <pierrecariou@outlook.fr>
 *************************************************************/

#ifndef CONSTANTS_H
# define CONSTANTS_H

namespace constants 
{
	// Camera + Lens distortion
	constexpr double k1 { -1.2093325853347778 };
	constexpr double k2 { -1.041786551475525 };
	constexpr double k3 { 64.01393127441406 };
	constexpr double k4 { -0.5568028688430786 };
	constexpr double k5 { -3.6638600826263428 };
	constexpr double k6 { 78.03067016601562 };
	constexpr double p1 { -0.004819112829864025 };
	constexpr double p2 { -0.0027203019708395004 };

	// Intrinsic parameters	
	constexpr double cx { 1280 };
	constexpr double cy { 960 };
	constexpr double fx { 3751.937744140625 };
	constexpr double fy { 3821.9775390625 };
}

#endif
