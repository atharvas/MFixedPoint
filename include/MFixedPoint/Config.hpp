//!
//! @file 				Config.hpp
//! @author 			Geoffrey Hunter <gbmhunter@gmail.com> (www.mbedded.ninja)
//! @edited				n/a
//! @created			2013-06-16
//! @last-modified		2014-09-15
//! @brief 				Port specific functions.
//! @details
//! 	See README.rst in root dir for more info.

//===============================================================================================//
//====================================== HEADER GUARD ===========================================//
//===============================================================================================//

#ifndef __cplusplus
	#error Please build with C++ compiler
#endif

#ifndef MN_MFIXEDPOINT_CONFIG_H
#define MN_MFIXEDPOINT_CONFIG_H
	
//===============================================================================================//
//========================================= NAMESPACE ===========================================//
//===============================================================================================//
	
namespace mn {
namespace MFixedPoint {
	//! @brief		(bool) If set to 1, general debug information will be printed to the
	//!				port-specific output.
	#define fpConfig_PRINT_DEBUG_GENERAL		1
	
} // namespace MFixedPoint
} // namespace mn

#endif // #ifndef MN_MFIXEDPOINT_CONFIG_H

// EOF
