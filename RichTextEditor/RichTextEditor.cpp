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
    int functionNum = 1;
    Core RTE;
    FontUILib font;
    FontColorUILib fontColor;
    FontSizeUILib fontSize;
    ReadAppLib read;
    SaveAppLib save;
    WriteAppLib write;

    while (true) {
        cout << "----Function List----" << endl;
        cout << "Core getContent(): 1" << endl;
        cout << "Font getFont(): 2" << endl;
        cout << "Font Color getFontColor(): 3" << endl;
        cout << "Font Size getFontSize(): 4" << endl;
        cout << "Read readContent(): 5" << endl;
        cout << "Write writeContent(): 6" << endl;
        cout << "Save saveContent(): 7" << endl;
        cout << "Exit program: 0" << endl;
        cout << "Enter function number: ";
        cin >> functionNum;
        cout << endl;

        switch (functionNum) {
            case 1:
                RTE.getContent();
                break;
            case 2:
                font.getFont();
                break;
            case 3:
                fontColor.getFontColor();
                break;
            case 4:
                fontSize.getFontSize();
                break;
            case 5:
                read.readContent();
                break;
            case 6:
                write.writeContent();
                break;
            case 7:
                save.saveContent();
                break;
        }
        cout << endl;

        if (functionNum == 0) {
            break;
        }
    }
}
