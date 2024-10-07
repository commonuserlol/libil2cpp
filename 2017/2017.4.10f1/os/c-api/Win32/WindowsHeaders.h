#pragma once

#ifndef NOMINMAX
#define NOMINMAX
#endif
#define WIN32_LEAN_AND_MEAN 1
#define INC_OLE2 1
#include <Windows.h>
#include <Objidl.h>

#if IL2CPP_TARGET_WINDOWS_DESKTOP || IL2CPP_TARGET_WINRT
#include <Iphlpapi.h>
#endif

#if !IL2CPP_TARGET_WINDOWS_DESKTOP
#include <bcrypt.h>
#include <roapi.h>
#include <robuffer.h>
#include <winstring.h>
#endif

#define LINK_TO_WINDOWSRUNTIME_LIBS (!IL2CPP_TARGET_WINDOWS_DESKTOP)
