#ifndef AIMG_PLATFORM_API

#ifdef _MSC_VER
#ifdef AIMG_EXPORTS
#define AIMG_API __declspec(dllexport)
#else
#define AIMG_API __declspec(dllimport)
#endif
#else
#define AIMG_API
#endif

#endif