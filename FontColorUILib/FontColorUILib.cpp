// FontColor UI Lib.cpp : Defines the exported functions for the DLL.

#include "framework.h"
#include "FontColorUILib.h"
#include "../ReadAppLib/ReadAppLib.h"
#include "../Localization/Localization.cpp"
#include <boost/locale.hpp>
#include <iostream>
using namespace std;

// This is the constructor of a class that has been exported.
FontColorUILib::FontColorUILib()
{
    return;
}

string FontColorUILib::getFontColor() {
    Localization localize;
    cout << translate("Returning contents font color") << endl;
    return fontColor;
}