#pragma once

// ExampleDll.h
#ifdef DLL1_EXPORTS
	#define DLL1_EXPORTS_API __declspec(dllexport)
#else
	#define DLL1_EXPORTS_API __declspec(dllimport)
#endif

extern "C" DLL1_EXPORTS_API void fnDll1();