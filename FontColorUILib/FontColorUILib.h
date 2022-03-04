#include <string>
using namespace std;

#ifdef FONTCOLORUILIB_EXPORTS
#define FONTCOLORUILIB_API __declspec(dllexport)
#else
#define FONTCOLORUILIB_API __declspec(dllimport)
#endif

// This class is exported from the dll
class FONTCOLORUILIB_API FontColorUILib {
public:
	string fontColor;
	string getFontColor();
	FontColorUILib(void);
};

extern FONTCOLORUILIB_API int nFontColorUILib;
