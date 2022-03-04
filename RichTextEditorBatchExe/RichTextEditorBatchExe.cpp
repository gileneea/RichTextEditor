// RichTextEditorExe.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "../Core/Core.h"
#include "../FontUILib/FontUILib.h"
#include "../FontColorUILib/FontColorUILib.h"
#include "../FontSizeUILib/FontSizeUILib.h"
#include "../ReadAppLib/ReadAppLib.h"
#include "../SaveAppLib/SaveAppLib.h"
#include "../WriteAppLib/WriteAppLib.h"
#include <iostream>
using namespace std;

int main()
{
    Core RTE;
    FontUILib font;
    FontColorUILib fontColor;
    FontSizeUILib fontSize;
    ReadAppLib read;
    SaveAppLib save;
    WriteAppLib write;
    RTE.getContent();
    font.getFont();
    fontColor.getFontColor();
    fontSize.getFontSize();
    read.readContent();
    write.writeContent();
    save.saveContent();

    int wait;
    cin >> wait;

    return 0;
}
