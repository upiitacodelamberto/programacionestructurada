#ifndef _DLL_H_
#define _DLL_H_
#include "usodarchivos_mylittletexteditor_MyTextEditor.h" 
#if BUILDING_DLL
#define DLLIMPORT __declspec(dllexport)
#else
#define DLLIMPORT __declspec(dllimport)
#endif

//DLLIMPORT void HelloWorld();

#endif
