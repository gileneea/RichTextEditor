// Read App Lib.cpp : Defines the exported functions for the DLL.

#include "framework.h"
#include "ReadAppLib.h"
#include "../Core/Core.h"
#include "../Localization/Localization.cpp"
#include <boost/locale.hpp>
#include <iostream>
using namespace std;

// This is the constructor of a class that has been exported.
ReadAppLib::ReadAppLib()
{
    return;
}

void ReadAppLib::readContent() {
    Localization localize;
    cout << translate("Reading file contents") << endl;
    return;
}