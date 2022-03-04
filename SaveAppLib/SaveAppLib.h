#ifdef SAVEAPPLIB_EXPORTS
#define SAVEAPPLIB_API __declspec(dllexport)
#else
#define SAVEAPPLIB_API __declspec(dllimport)
#endif

// This class is exported from the dll
class SAVEAPPLIB_API SaveAppLib {
public:
	void saveContent();
	SaveAppLib(void);
};

extern SAVEAPPLIB_API int nSaveAppLib;
