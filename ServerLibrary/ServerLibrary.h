#pragma once
#include "pch.h"

#pragma comment(lib,"ws2_32.lib")
#pragma comment(lib,"mswsock.lib")

// 음악 라이브러리용인듯
#pragma comment(lib, "Winmm.lib")

#include <WS2tcpip.h>
#include <WinSock2.h>
// 비동기 소켓 기능탑재(AcceptEx 등..)
#include <MSWSock.h>
// 음악 라이브러리 헤더
#include <mmsystem.h>
// 윈속2에 적용되는 것들
#include <WS2spi.h>
// 윈속2에 적용되는 것들
#include <mstcpip.h>

#include <Windows.h>
#include <iostream>
// c언어 입출력 파일 헤더
#include <io.h>
#include <cstdlib>
#include <stdio.h>
#include <cstdint>
#include <assert.h>
// 파일 제어
#include <fcntl.h>
#include <algorithm>
#include <functional>

#include <thread>
#include <mutex>
#include <memory>

#include <string>
#include <tchar.h>

#include <ctime>
#include <random>
// 클래스 타입 식별용 헤더
#include <typeinfo>

// Sleep(1)은 전체 쓰레드를 대상으로 컨텍스트 스위칭,
// SwitchToThread 함수는 OS에 호출된 쓰레드를 제외한 나머지 쓰레드와 직접 컨텍스트 스위칭
#if _DEBUG
#define CONTEXT_SWITCH Sleep(1)
#else
#define CONTEXT_SWITCH ::SwitchToThread()
#endif
