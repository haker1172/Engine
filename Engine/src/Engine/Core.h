#pragma once

#ifdef ENGN_PLATFORM_WINDOWS
	#ifdef ENGN_BUID_DLL
		#define ENGINE_API __declspec(dllexport)
	#else
		#define ENGINE_API __declspec(dllimport)
	#endif
#else
	#error Engine only supports windows!
#endif

