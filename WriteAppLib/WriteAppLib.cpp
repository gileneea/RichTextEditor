// Write App Lib.cpp : Defines the exported functions for the DLL.

#include "framework.h"
#include "WriteAppLib.h"
#include "../Core/Core.h"
#include "../Localization/Localization.cpp"
#include <boost/locale.hpp>
#include <iostream>
using namespace std;

// This is the constructor of a class that has been exported.
WriteAppLib::WriteAppLib()
{
    return;
}

void WriteAppLib::writeContent() {
    Localization localize;
    cout << translate("Writing file contents") << endl;
    return;
}
