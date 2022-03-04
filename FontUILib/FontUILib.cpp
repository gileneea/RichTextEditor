// Font UI Lib.cpp : Defines the exported functions for the DLL.

#include "framework.h"
#include "FontUILib.h"
#include "../ReadAppLib/ReadAppLib.h"
#include "../Localization/Localization.cpp"
#include <boost/locale.hpp>
#include <iostream>
using namespace std;

// This is the constructor of a class that has been exported.
FontUILib::FontUILib()
{
    return;
}

string FontUILib::getFont() {
    Localization localize;
    cout << translate("Returning contents font") << endl;
    return font;
}
