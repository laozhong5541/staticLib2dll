
#include "pch.h"
#include <iostream>
#include "Dll1\dll1.h"
#include "DllHook.h"

void fnStaticLib1()
{
	std::cout << "[DllHook.dll] Hello DllHook!" << std::endl;
	fnDll1();
}