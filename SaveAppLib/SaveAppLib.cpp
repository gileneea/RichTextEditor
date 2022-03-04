// Save App Lib.cpp : Defines the exported functions for the DLL.

#include "framework.h"
#include "SaveAppLib.h"
#include "../Core/Core.h"
#include "../Localization/Localization.cpp"
#include <boost/locale.hpp>
#include <iostream>
using namespace std;

// This is the constructor of a class that has been exported.
SaveAppLib::SaveAppLib()
{
    return;
}

void SaveAppLib::saveContent() {
    Localization localize;
    cout << translate("Saving file contents") << endl;
    return;
}
