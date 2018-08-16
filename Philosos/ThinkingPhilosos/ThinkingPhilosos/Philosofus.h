#pragma once

#include "stdafx.h"
#include <Windows.h>
#include <iostream>
#include "Philosofus.h"
using namespace std;


class CPhilosofus
{
private:
	int m_ID;




public:

	CPhilosofus(int P_ID);
	~CPhilosofus();

	void run();
	void DoWork();
	static DWORD WINAPI classThread(PVOID param);

};