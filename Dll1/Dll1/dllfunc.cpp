
#include "pch.h"
#include <iostream>
#include "dll1.h"
#include "staticlib\StaticLib1.h"

void fnDll1()
{
	std::cout << "[Dll1.dll] Hello Dll1!" << std::endl;
	fnStaticLib1();
}