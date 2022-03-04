// Core.cpp : Defines the exported functions for the DLL.

#include "framework.h"
#include "Core.h"
#include "../Localization/Localization.cpp"
#include <iostream>
using namespace std;

// This is the constructor of a class that has been exported.
Core::Core() {
    return;
}

string Core::getContent() {
    Localization localize;
    cout << translate("Returning content") << endl;
    return content;
}
