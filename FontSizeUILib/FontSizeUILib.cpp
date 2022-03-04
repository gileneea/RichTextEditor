// FontSize UI Lib.cpp : Defines the exported functions for the DLL.

#include "framework.h"
#include "FontSizeUILib.h"
#include "../ReadAppLib/ReadAppLib.h"
#include "../Localization/Localization.cpp"
#include <boost/locale.hpp>
#include <iostream>
using namespace std;

// This is the constructor of a class that has been exported.
FontSizeUILib::FontSizeUILib()
{
    return;
}

string FontSizeUILib::getFontSize() {
    Localization localize;
    cout << translate("Returning contents font size") << endl;
    return fontSize;
}
