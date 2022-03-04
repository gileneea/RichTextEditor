#include <string>
using namespace std;

#ifdef FONTSIZEUILIB_EXPORTS
#define FONTSIZEUILIB_API __declspec(dllexport)
#else
#define FONTSIZEUILIB_API __declspec(dllimport)
#endif

// This class is exported from the dll
class FONTSIZEUILIB_API FontSizeUILib {
public:
	string fontSize;
	string getFontSize();
	FontSizeUILib(void);
};

extern FONTSIZEUILIB_API int nFontSizeUILib;
