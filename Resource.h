#pragma once
#define IDS_APP_TITLE			103

#define IDR_MAINFRAME			128
#define IDD_SVGDEMO_DIALOG	102
#define IDD_ABOUTBOX			103
#define IDM_ABOUT				104
#define IDM_EXIT				105
#define IDI_SVGDEMO			107
#define IDI_SMALL				108
#define IDC_SVGDEMO			109
#define IDC_MYICON				2
#ifndef IDC_STATIC
#define IDC_STATIC				-1
#endif
// Next default values for new objects
//
#ifdef APSTUDIO_INVOKED
#ifndef APSTUDIO_READONLY_SYMBOLS

#define _APS_NO_MFC					130
#define _APS_NEXT_RESOURCE_VALUE	129
#define _APS_NEXT_COMMAND_VALUE		32771
#define _APS_NEXT_CONTROL_VALUE		1000
#define _APS_NEXT_SYMED_VALUE		110
#endif
#endif

#include <iostream>
#include "rapidxml.hpp"
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
#include <windows.h>
#include <gdiplus.h>
#include <objidl.h>
#include <gdipluscolor.h>
#include <sstream>
#include <fstream>
#pragma comment(lib, "Gdiplus.lib")

using namespace rapidxml;
using namespace std;
using namespace Gdiplus;
