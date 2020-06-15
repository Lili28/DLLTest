// pch.cpp: source file corresponding to the pre-compiled header

//#include "pch.h"
//
//// When you are using pre-compiled headers, this source file is necessary for compilation to succe
//
//int Sum()
//{
//	int counter = 0;
//	for (size_t i = 0; i < 10; i++)
//	{
//		counter += i;
//	}
//
//	return counter;
//}
//
//extern "C" __declspec(dllexport) int Test()
//{
//	return Sum();
//}

#ifdef ONEDLL_EXPORTS
#define ONEDLL_API __declspec(dllexport)
#else
#define ONEDLL_API __declspec(dllimport)
#endif

// ???? OneDll.dll ???
#ifdef __cplusplus
extern "C"
{
#endif
    class ONEDLL_API COneDll {
    public:
        COneDll(void);
        ~COneDll(void);

        // TODO: ?????????
        int m_a;
        int m_b;
        int* m_p;
        int m_n;

        int AddValue();

    };

    extern ONEDLL_API int nOneDll;

    ONEDLL_API int fnOneDll(void);

#ifdef __cplusplus
}
#endif


COneDll::COneDll(void)
{
}

COneDll::~COneDll(void)
{
}

int Sum()
{
	int counter = 0;
	for (size_t i = 0; i < 10; i++)
	{
		counter += i;
	}

	return counter;
}

int COneDll::AddValue()
{
    return Sum();
}
