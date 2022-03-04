#ifdef READAPPLIB_EXPORTS
#define READAPPLIB_API __declspec(dllexport)
#else
#define READAPPLIB_API __declspec(dllimport)
#endif

// This class is exported from the dll
class READAPPLIB_API ReadAppLib {
public:
	void readContent();
	ReadAppLib(void);
};

extern READAPPLIB_API int nReadAppLib;
