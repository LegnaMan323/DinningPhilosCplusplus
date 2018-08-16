#include "Philosofus.h"

CPhilosofus::CPhilosofus(int P_ID)
{
	
};

DWORD WINAPI CPhilosofus::classThread(PVOID param)
{
	CPhilosofus* CPhilosofusptr = (CPhilosofus*)param;
	CPhilosofusptr->DoWork();

	return 0;
}

void CPhilosofus::DoWork()
{
	for (int j = 0; j != 1000; j++)
	{
		cout << "classThread: " << j << endl;
		Sleep(1000);
	}
}


void CPhilosofus::run()
{
	DWORD dwPhilos;
	HANDLE h2 = CreateThread(nullptr, 0, classThread, (PVOID)this, 0, &dwPhilos);
}