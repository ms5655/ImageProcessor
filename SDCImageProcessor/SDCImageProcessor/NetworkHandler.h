//#pragma once
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#pragma comment(lib,"ws2_32.lib")

#include <WinSock2.h>
#include <iostream>
 class NetworkHandler
{
public:
	NetworkHandler();
	~NetworkHandler();

	 int Init();


};

