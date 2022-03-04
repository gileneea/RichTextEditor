#include <string>
using namespace std;

#ifdef FONTUILIB_EXPORTS
#define FONTUILIB_API __declspec(dllexport)
#else
#define FONTUILIB_API __declspec(dllimport)
#endif

// This class is exported from the dll
class FONTUILIB_API FontUILib {
public:
	string font;
	string getFont();
	FontUILib(void);
};

extern FONTUILIB_API int nFontUILib;
