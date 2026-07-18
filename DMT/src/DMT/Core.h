#pragma once

#ifdef DMT_PLATFORM_WINDOWS
	#ifdef DMT_BUILD_DLL
		#define DMT_API __declspec(dllexport)
	#else
		#define DMT_API __declspec(dllimport)
	#endif
#else
	#error DMT SOLO SOPORTA WINDOWS
#endif