#include <string>
using namespace std;

#ifdef CORE_EXPORTS
#define CORE_API __declspec(dllexport)
#else
#define CORE_API __declspec(dllimport)
#endif

// This class is exported from the dll
class CORE_API Core {
public:
	string content;
	string getContent();
	Core(void);
};

extern CORE_API int nCore;
