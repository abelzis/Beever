#pragma once

#ifdef BV_PLATFORM_WINDOWS
	#ifdef BEEVER_BUILD_DLL
		#define BEEVER_API __declspec(dllexport)
	#else
		#define BEEVER_API __declspec(dllimport)
	#endif
#else
	#error Beever only supports Windows!
#endif