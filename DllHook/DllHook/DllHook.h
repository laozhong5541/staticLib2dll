#pragma once

// ExampleDll.h
#ifdef DLLHOOK_EXPORTS
#define DLLHOOK_EXPORTS_API __declspec(dllexport)
#else
#define DLLHOOK_EXPORTS_API __declspec(dllimport)
#endif

extern "C" DLLHOOK_EXPORTS_API void fnStaticLib1();
