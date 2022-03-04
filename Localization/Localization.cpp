// Localization.cpp : Defines the exported functions for the DLL.

#include "framework.h"
#include "Localization.h"
#include <boost/locale.hpp>
#include <iostream>
using namespace std;
using namespace boost::locale;

// This is the constructor of a class that has been exported.
Localization::Localization()
{
    generator gen;

    // CHANGE PATH TO LOCAL PATH
    gen.add_messages_path("../Localization");
    gen.add_messages_domain("localize");

    // LOCALIZATION SWITCH 
    locale::global(gen(""));              // ENGLISH
    //locale::global(gen("de_DE.UTF - 8"));   // GERMAN

    cout.imbue(locale());
    return;
}
