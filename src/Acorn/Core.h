#pragma once

#pragma once

#ifdef AC_PLATFORM_WINDOWS
	#ifdef AC_BUILD_DLL
		#define ACORN_API __declspec(dllexport)
	#else
		#define ACORN_API __declspec(dllimport)
	#endif // AC_BUILD_DLL
#else
	#error Acorn only supports Windows!
#endif