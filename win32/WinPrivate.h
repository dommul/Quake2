//#define WINVER 0x0500				// to allow some additional stuff in windows headers (current: will display "beta headers" msg)
#define WIN32_LEAN_AND_MEAN			// exclude rarely-used services from windown headers
#include <windows.h>

// stuff from Win98+ and Win2k+
#define SPI_GETMOUSESPEED		0x0070
#define SPI_SETMOUSESPEED		0x0071
#ifndef WM_MOUSEWHEEL
#define WM_MOUSEWHEEL			0x020A
#endif

// X mouse button (Win2k+)
#define WM_XBUTTONDOWN			0x020B
#define WM_XBUTTONUP			0x020C
#define MK_XBUTTON1				0x0020
#define MK_XBUTTON2				0x0040

// Remove some MS defines from <windows.h>

#undef SHIFT_PRESSED
#undef MOD_ALT

#include "qcommon.h"

extern HWND cl_hwnd;
extern bool	ActiveApp, MinimizedApp, FullscreenApp;

// in_win.cpp
extern bool in_needRestart;		//?? used from vid_dll.c::Vid_NewVindow()

// message hooks
typedef bool (*MSGHOOK_FUNC) (UINT uMsg, WPARAM wParam, LPARAM lParam);

void AddMsgHook(MSGHOOK_FUNC func);
void RemoveMsgHook(MSGHOOK_FUNC func);


#if 0
#	define MSGLOG(x)	DebugPrintf x
#else
#	define MSGLOG(x)
#endif
