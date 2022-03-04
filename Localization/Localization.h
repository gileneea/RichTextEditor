#ifdef LOCALIZATION_EXPORTS
#define LOCALIZATION_API __declspec(dllexport)
#else
#define LOCALIZATION_API __declspec(dllimport)
#endif

// This class is exported from the dll
class LOCALIZATION_API Localization {
public:
	Localization(void);
};

extern LOCALIZATION_API int nLocalization;
