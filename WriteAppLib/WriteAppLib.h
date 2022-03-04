#ifdef WRITEAPPLIB_EXPORTS
#define WRITEAPPLIB_API __declspec(dllexport)
#else
#define WRITEAPPLIB_API __declspec(dllimport)
#endif

// This class is exported from the dll
class WRITEAPPLIB_API WriteAppLib {
public:
	void writeContent();
	WriteAppLib(void);
};

extern WRITEAPPLIB_API int nWriteAppLib;
