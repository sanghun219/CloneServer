#pragma once
#include "pch.h"

#pragma comment(lib,"ws2_32.lib")
#pragma comment(lib,"mswsock.lib")

// ���� ���̺귯�����ε�
#pragma comment(lib, "Winmm.lib")

#include <WS2tcpip.h>
#include <WinSock2.h>
// �񵿱� ���� ���ž��(AcceptEx ��..)
#include <MSWSock.h>
// ���� ���̺귯�� ���
#include <mmsystem.h>
// ����2�� ����Ǵ� �͵�
#include <WS2spi.h>
// ����2�� ����Ǵ� �͵�
#include <mstcpip.h>

#include <Windows.h>
#include <iostream>
// c��� ����� ���� ���
#include <io.h>
#include <cstdlib>
#include <stdio.h>
#include <cstdint>
#include <assert.h>
// ���� ����
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
// Ŭ���� Ÿ�� �ĺ��� ���
#include <typeinfo>

// Sleep(1)�� ��ü �����带 ������� ���ؽ�Ʈ ����Ī,
// SwitchToThread �Լ��� OS�� ȣ��� �����带 ������ ������ ������� ���� ���ؽ�Ʈ ����Ī
#if _DEBUG
#define CONTEXT_SWITCH Sleep(1)
#else
#define CONTEXT_SWITCH ::SwitchToThread()
#endif
